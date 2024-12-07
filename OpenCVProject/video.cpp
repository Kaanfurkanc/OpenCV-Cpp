#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std;


int main()
{
	VideoCapture vid("sample.mp4");
	namedWindow("Video", WINDOW_AUTOSIZE);

	float fps = vid.get(CAP_PROP_FPS);
	printf("Frames per second: %f\n", fps);

	if (vid.isOpened() == false)
	{
		cout << "Error: Video file not found" << endl;
		return -1;
	}

	while (true)
	{
		Mat frame;
		bool bSuccess = vid.read(frame);

		if (bSuccess == false || waitKey(30) == 27)
		{
			cout << "End of video" << endl;
			break;
		}

		imshow("Video", frame);
	}

	return 0;
}