/*
 * Camera.hpp
 *
 *  Created on: Apr 12, 2016
 *      Author: Anno
 */
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include "AutonUtil.hpp"
#ifndef CAMERA_HPP_
#define CAMERA_HPP_

namespace Auton {
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
