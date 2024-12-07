#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std;


int main()
{
	VideoCapture cap(0);

	if (!cap.open(0)) return -1;


	while (1)
	{
		Mat frame;
		cap >> frame;
		
		if (waitKey(30) >= 0 || frame.empty()) break;

		imshow("Webcam", frame);
	}
	return 0;
}