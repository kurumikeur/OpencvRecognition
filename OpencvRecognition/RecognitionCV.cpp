#include "pch.h"
#include "Windows.h"
#include "RecognitionCV.h"


Mat RecognitionCV::DetectAndDraw(Mat frame)
{
    Mat subframe, grayFrame;
    vector<Rect> Rects, nestedRects;
    Scalar faceColor(0, 255, 0), eyeColor(0, 0, 255);
    cvtColor(frame, grayFrame, COLOR_BGR2GRAY);
    cascade.detectMultiScale(frame, Rects, 1.2, 5);
    for (Rect r : Rects) {
        rectangle(frame, r, faceColor, 2);
        subframe = grayFrame(r);
        nestedCascade.detectMultiScale(subframe, nestedRects, 1.2, 2, 0, Size(30, 30), Size(40, 40));
        for (Rect nr : nestedRects) {
            nr.x += r.x;
            nr.y += r.y;
            rectangle(frame, nr, eyeColor);
        }
    }
    return frame;
}
bool RecognitionCV::Init(int cameraMode, string cascadeFilePath, string nestedCascadeFilePath)
{
    vCapture.open(cameraMode);
    if (!vCapture.isOpened()) {
        cout << "\n[!] Couldn't open webcam.\n" << endl;
        return false;
    }
    cascade.load(cascadeFilePath);
    nestedCascade.load(nestedCascadeFilePath);
    if (cascade.empty() || nestedCascade.empty()) {
        cout << "[!]Wrong path to cascades provided. \nCascade: " << !cascade.empty() << "\nNestedCascade: " << !nestedCascade.empty();
        return false;
    }
    return true;
}
void RecognitionCV::StartDetection(System::Windows::Forms::PictureBox^ picture)
{
    switch (DetectionMode) {
    case(0):
        StartFaceDetection(picture);
        break;
    case(1):
        break;
    }
}
void RecognitionCV::StartFaceDetection(System::Windows::Forms::PictureBox^ picture)
{   
    ::ShowWindow(::GetConsoleWindow(), SW_HIDE);
    Mat frame;
    vCapture >> frame;
    while (!frame.empty()) {
        vCapture >> frame;
        frame = DetectAndDraw(frame);
        imshow("", frame);
        System::Drawing::Graphics^ graphics = picture->CreateGraphics();
        System::IntPtr ptr(frame.ptr());
        System::Drawing::Bitmap^ b = gcnew System::Drawing::Bitmap(frame.cols, frame.rows, frame.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
        System::Drawing::RectangleF rect(0, 0, picture->Width, picture->Height);
        
        graphics->DrawImage(b, rect);
        delete graphics;
        picture->Image = b;

        char c = waitKey(10);
        switch (c) {
        case('q'):
            cout << "[Inf] Exited from face and eyes detection." << endl;
            destroyAllWindows();
            return;
        }  
    }
    ::ShowWindow(::GetConsoleWindow(), SW_NORMAL);
}

void RecognitionCV::SetDetectionMode(int mode)
{
    (mode >= 0 && mode < 4) ? DetectionMode = mode : DetectionMode = 0;
}
