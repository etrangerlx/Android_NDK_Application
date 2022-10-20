package com.rainbow.myapplication;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    // Used to load the 'native-lib' library on application startup.
//    static {
//        System.loadLibrary("native-lib");
//    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        //创建一个GLSurfaceView
        MyGLSurfaceView glSurfaceView = new MyGLSurfaceView(this);

        setContentView(glSurfaceView);
    }
}