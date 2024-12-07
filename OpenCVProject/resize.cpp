#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

Mat resizedImg;

int main()
{
	Mat img1 = imread("team.jpg");
	Mat img2 = imread("image2.png");

	resize(img2, resizedImg, Size(img1.cols, img1.rows));

	namedWindow("Resized Image", WINDOW_AUTOSIZE);
	namedWindow("Image 1", WINDOW_AUTOSIZE);
	namedWindow("Image 2", WINDOW_AUTOSIZE);

	imshow("Image 1", img1);
	imshow("Image 2", img2);
	imshow("Resized Image", resizedImg);

	waitKey(0);
	return 0;
}