//
// Created by rainbow on 22-10-19.
//

#ifndef MY_APPLICATION_MYGLRENDERCONTEXT_H
#define MY_APPLICATION_MYGLRENDERCONTEXT_H
#include <EGL/egl.h>
#include <GLES2/gl2.h>
#include <GLES2/gl2ext.h>
#include "../LogUtils/LogUtil.h"
#include "../glCompute/GLUtils.h"
#include "../Triangle/TriangleSample.h"
class MyGLRenderContext {
public:
    MyGLRenderContext();
    ~MyGLRenderContext();
    void OnSurfaceCreated();
    void SetImageData(int format, int width, int height, uint8_t *pData);
    void OnSurfaceChanged(int width, int height);
    void OnDrawFrame();
    static MyGLRenderContext * GetInstance();
    static void DestroyInstance();
    static MyGLRenderContext* m_pContext;
    TriangleSample m_Sample;

};


#endif //MY_APPLICATION_MYGLRENDERCONTEXT_H
