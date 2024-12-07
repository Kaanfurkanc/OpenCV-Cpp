#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std;

Mat img;

int main()
{

	img = imread("team.jpg");
	namedWindow("Image", WINDOW_AUTOSIZE);

	if (img.empty())
	{
		cout << "Image cannot be loaded..!!" << endl;
		return -1;
	}

	else {
		cout << "Image loaded successfully..!!" << endl;
		imshow("Image", img);
		waitKey(0);
		destroyWindow("Image");
	}
	return 0;
}