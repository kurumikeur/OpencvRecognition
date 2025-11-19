#include "pch.h"
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
        cascade.detectMultiScale(frame, Rects);
        for (Rect r : Rects) {
            rectangle(frame, r, faceColor, 2);
            subframe = grayFrame(r);
            nestedCascade.detectMultiScale(subframe, nestedRects, 1.1, 2, 0, Size(30, 30), Size(40, 40));
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
            return;
        }
    }
}

int RecognitionCV::StartFaceDetection(string cascadeFilePath, string nestedCascadeFilePath)
{
    int vCaptureMode = 0;

    while(1) {
        cout << "Enter webcam mode: ";
        cin >> vCaptureMode;
        vCapture.open(vCaptureMode);
        if(!vCapture.isOpened())
            cout << "\n[!] Couldn't open webcam.\n" << endl;
        else 
            break;
    }

    cascade.load(cascadeFilePath);
    nestedCascade.load(nestedCascadeFilePath);
    if (cascade.empty() || nestedCascade.empty()) {
        cout << "Wrong path to cascades provided. \nCascade: " << !cascade.empty() << "\nNestedCascade: " << !nestedCascade.empty();
        return 0;
    }

    DetectAndDraw();
    return 1;
}
