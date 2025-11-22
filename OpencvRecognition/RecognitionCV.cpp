#include "pch.h"
#include "Windows.h"
#include "RecognitionCV.h"

void RecognitionCV::DetectAndDraw()
{
    Mat frame, subframe, grayFrame;
    vector<Rect> Rects, nestedRects;
    Scalar faceColor(0, 255, 0), eyeColor(0, 0, 255);
    vCapture >> frame;

    while (!frame.empty()) {
        vCapture >> frame;
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
        imshow("Face recognition", frame);
        char c = waitKey(10);
        switch (c) {
        case('q'):
            cout << "[Inf] Exited from face and eyes detection." << endl;
            destroyAllWindows();
            return;
        }
    }
}
void RecognitionCV::Init(int cameraMode, string cascadeFilePath, string nestedCascadeFilePath)
{
    vCapture.open(cameraMode);
    if (!vCapture.isOpened()) {
        cout << "\n[!] Couldn't open webcam.\n" << endl;
        return;
    }
    cascade.load(cascadeFilePath);
    nestedCascade.load(nestedCascadeFilePath);
    if (cascade.empty() || nestedCascade.empty()) {
        cout << "[!]Wrong path to cascades provided. \nCascade: " << !cascade.empty() << "\nNestedCascade: " << !nestedCascade.empty();
        return;
    }
}
void RecognitionCV::StartFaceDetection()
{
    ::ShowWindow(::GetConsoleWindow(), SW_HIDE);
    DetectAndDraw();
    ::ShowWindow(::GetConsoleWindow(), SW_NORMAL);
}
