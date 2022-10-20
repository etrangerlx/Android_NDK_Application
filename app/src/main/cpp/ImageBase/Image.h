//
// Created by rainbow on 22-10-20.
//

#ifndef MY_APPLICATION_IMAGE_H
#define MY_APPLICATION_IMAGE_H
#include <stdint.h>
enum ImageType{
    IMAGE_FORMAT_NV12= 0,
    IMAGE_FORMAT_NV21,
    IMAGE_FORMAT_I420

};
struct NativeImage{
    ImageType format = ImageType::IMAGE_FORMAT_I420;
    int width;
    int height;
    uint8_t *ppPlane[4];
    int reserved[64];
};
#endif //MY_APPLICATION_IMAGE_H
