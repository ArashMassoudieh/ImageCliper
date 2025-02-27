#ifndef IMAGEPROCESSOR_H
#define IMAGEPROCESSOR_H

#include <vector>
#include <string>
#include <opencv2/opencv.hpp>

using namespace  std;



class ImageProcessor
{
public:
    ImageProcessor();
    vector<cv::Rect> rectangles;
    cv::Mat image;
    vector<cv::Mat> clips;
    bool PopulateClips();
    bool LoadImage(const string &filename);
    bool WriteClipes();


};

bool isValidRect(const cv::Mat& image, const cv::Rect& rect);
#endif // IMAGEPROCESSOR_H
