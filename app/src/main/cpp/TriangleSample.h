//
// Created by rainbow on 22-10-19.
//

#ifndef MY_APPLICATION_TRIANGLESAMPLE_H
#define MY_APPLICATION_TRIANGLESAMPLE_H
#include <EGL/egl.h>
#include <GLES2/gl2.h>
#include <GLES2/gl2ext.h>
#include "GLUtils.h"
#include "LogUtil.h"

class TriangleSample {
public:
    TriangleSample();
    ~TriangleSample();
    void Init();
    void Draw();

private:
    GLuint m_ProgramObj;
    GLuint m_VertexShader;
    GLuint m_FragmentShader;
};


#endif //MY_APPLICATION_TRIANGLESAMPLE_H
