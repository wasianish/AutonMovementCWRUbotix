/*
 * Camera.hpp
 *
 *  Created on: Apr 12, 2016
 *      Author: Anno
 */
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#ifndef CAMERA_HPP_
#define CAMERA_HPP_

namespace Auton {
struct ImgData {
	int * xBalls;
	int * yBalls;
	int * rBalls;
	int numBalls;
	int * xRocks;
	int * yRocls;
	int numRocks;
};
class Camera {
private:
	static cv::VideoCapture cap;
public:
	static int initialize();
	static int close();
	static int capture();
	static int process();

	static cv::Mat img;
	static ImgData processed;
};
}



#endif /* CAMERA_HPP_ */
