#include "imageprocessor.h"
#include <QString>
#include <QDebug>

ImageProcessor::ImageProcessor() {}


bool ImageProcessor::PopulateClips()
{
    bool outcome = true;
    for (int i=0; i<rectangles.size(); i++)
    {
        cv::Mat clipped_image;
        if (isValidRect(image, rectangles[i]))
        {   clipped_image = image(rectangles[i]);
            clips.push_back(clipped_image);
        }
        else
            outcome = false;
    }
    return outcome;
}

bool ImageProcessor::LoadImage(const string &filename){
    image = cv::imread(filename);
    return true;
}

bool isValidRect(const cv::Mat& image, const cv::Rect& rect) {
    return rect.x >= 0 && rect.y >= 0 &&
           rect.x + rect.width <= image.cols &&
           rect.y + rect.height <= image.rows;
}

bool ImageProcessor::WriteClipes()
{
    for (int i=0; i<rectangles.size(); i++)
    {
        if (!clips[i].empty())
            cv::imwrite("/home/hoomanmoradpour/Dropbox/Sludge/clip_"+QString::number(i).toStdString() + ".jpg", clips[i]);
        else
            qDebug()<<"Image #" + QString::number(i) + " is empty!";
    }
    return true;
}

