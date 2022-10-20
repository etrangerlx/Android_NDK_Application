//
// Created by rainbow on 22-10-19.
//

#include "MyGLRenderContext.h"
#include "../ImageBase/Image.h"
MyGLRenderContext* MyGLRenderContext::m_pContext = nullptr;

MyGLRenderContext::MyGLRenderContext() {

}

MyGLRenderContext::~MyGLRenderContext()
{

}

void MyGLRenderContext::SetImageData(int format, int width, int height, uint8_t *pData)
{
    LOGI("MyGLRenderContext::SetImageData format=%d, width=%d, height=%d, pData=%p", format, width, height, pData);
    NativeImage nativeImage;
    nativeImage.format = ImageType(format);
    nativeImage.width = width;
    nativeImage.height = height;
    nativeImage.ppPlane[0] = pData;

    switch (format)
    {
        case IMAGE_FORMAT_NV12:
        case IMAGE_FORMAT_NV21:
            nativeImage.ppPlane[1] = nativeImage.ppPlane[0] + width * height;
            break;
        case IMAGE_FORMAT_I420:
            nativeImage.ppPlane[1] = nativeImage.ppPlane[0] + width * height;
            nativeImage.ppPlane[2] = nativeImage.ppPlane[1] + width * height / 4;
            break;
        default:
            break;
    }

    //m_TextureMapSample->LoadImage(&nativeImage);

}

void MyGLRenderContext::OnSurfaceCreated()
{
    LOGI("MyGLRenderContext::OnSurfaceCreated");
    glClearColor(1.0f,1.0f,0.5f, 1.0f);
    m_Sample.Init();
}

void MyGLRenderContext::OnSurfaceChanged(int width, int height)
{
    LOGI("MyGLRenderContext::OnSurfaceChanged [w, h] = [%d, %d]", width, height);
    glViewport(0, 0, width, height);
}

void MyGLRenderContext::OnDrawFrame()
{
    LOGI("MyGLRenderContext::OnDrawFrame");
    glClear(GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT);

    m_Sample.Draw();


}

MyGLRenderContext *MyGLRenderContext::GetInstance()
{
    LOGI("MyGLRenderContext::GetInstance");
    if (m_pContext == nullptr)
    {
        m_pContext = new MyGLRenderContext();
    }
    return m_pContext;
}

void MyGLRenderContext::DestroyInstance()
{
    LOGI("MyGLRenderContext::DestroyInstance");
    if (m_pContext)
    {
        delete m_pContext;
        m_pContext = nullptr;
    }

}
