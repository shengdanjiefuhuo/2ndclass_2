#include <iostream>
#include <opencv2/opencv.hpp>
using namespace cv;
int main()
{
	cv::Mat srcMat = imread("C:/Users/hp/Desktop/2.jpg", 0);

	imshow("src", srcMat);
	waitKey(0);
	return 0;
}