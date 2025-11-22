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
	void Init(int cameraMode, 
		string cascadeFilePath = R"(C:\lib\opencv\build\etc\haarcascades\haarcascade_frontalface_default.xml)",	
		string nestedCascadeFilePath = R"(C:\lib\opencv\build\etc\haarcascades\haarcascade_eye.xml)");
	void StartFaceDetection();
};

