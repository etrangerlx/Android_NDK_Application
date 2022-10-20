//
// Created by rainbow on 22-10-19.
//

#ifndef MY_APPLICATION_GLUTILS_H
#define MY_APPLICATION_GLUTILS_H
#include <EGL/egl.h>
#include <GLES2/gl2.h>
#include <GLES2/gl2ext.h>
class GLUtils {
public:
    static GLuint  LoadShader(GLenum shaderType, const char *pSource);
    static GLuint CreateProgram(const char *pVertexShaderSource,
            const char *pFragShaderSource,
            GLuint &vertexShaderHandle,
            GLuint &fragShaderHandle);
    static void DeleteProgram(GLuint &program);
    static void CheckGLError(const char *pGLOperation);
};


#endif //MY_APPLICATION_GLUTILS_H
