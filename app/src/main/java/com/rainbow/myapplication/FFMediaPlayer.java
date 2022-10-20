package com.rainbow.myapplication;

public class FFMediaPlayer {
    static {
        System.loadLibrary("native-ffmpeg");
    }

    public static String GetFFmpegVersion() {
        return native_GetFFmpegVersion();
    }

    private static native String native_GetFFmpegVersion();
}
