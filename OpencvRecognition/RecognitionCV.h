#pragma once
#include "opencv2/highgui.hpp"
#include "opencv2/objdetect.hpp"
#include "opencv2/opencv.hpp"
#include "opencv2/imgproc.hpp"
using namespace cv;
using namespace std;

class RecognitionCV
{
	VideoCapture vCapture; 
	Mat frame;
	CascadeClassifier cascade;
	CascadeClassifier nestedCascade;
private:
	void DetectAndDraw();
public:
	int StartFaceDetection(string cascadeFilePath, string nestedCascadeFilePath);
};

