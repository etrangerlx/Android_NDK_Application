//
// Created by rainbow on 22-10-19.
//

#ifndef MY_APPLICATION_LOGUTIL_H
#define MY_APPLICATION_LOGUTIL_H
#include <android/log.h>
#define LOG_TAG "TRANGLE"
#define LOGI(fmt, args...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, fmt, ##args)
#define LOGD(fmt, args...) __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, fmt, ##args)
#define LOGE(fmt, args...) __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, fmt, ##args)
#endif //MY_APPLICATION_LOGUTIL_H
