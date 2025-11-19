#include "pch.h"
#include "RecognitionCV.h"

void RecognitionCV::DetectAndDraw()
{
    Mat frame;
    vector<Rect> Rects;
    Scalar faceColor(0, 255, 0);
    vCapture >> frame;

    while (!frame.empty()) {
        vCapture >> frame;
        cascade.detectMultiScale(frame, Rects);
        for (Rect r : Rects)
            rectangle(frame, r, faceColor);

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
