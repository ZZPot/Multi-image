#pragma once
#include <opencv2/core.hpp>


struct small_image
{
	cv::Mat dom_colors;
	std::string path_to_file;
	cv::Mat img;
};