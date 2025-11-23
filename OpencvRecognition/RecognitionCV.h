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
	int DetectionMode;
private:
	void StartFaceDetection(System::Windows::Forms::PictureBox^ picture);
	Mat DetectAndDraw(Mat frame);
public:
	enum Modes{FACE_MODE = 0};
	bool Init(int cameraMode, 
		string cascadeFilePath = R"(C:\lib\opencv\build\etc\haarcascades\haarcascade_frontalface_default.xml)",	
		string nestedCascadeFilePath = R"(C:\lib\opencv\build\etc\haarcascades\haarcascade_eye.xml)");
	void StartDetection(System::Windows::Forms::PictureBox^ picture);
	void SetDetectionMode(int mode);
};

