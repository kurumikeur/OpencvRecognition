#include "pch.h"
#include "RecognitionCV.h"

using namespace System;

int main()
{
    RecognitionCV rCv;
    rCv.StartFaceDetection( 
        R"(C:\lib\opencv\build\etc\haarcascades\haarcascade_frontalface_default.xml)",
        R"(C:\lib\opencv\build\etc\haarcascades\haarcascade_eye.xml)"
    );

    return 0;
}
