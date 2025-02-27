#include <opencv2/opencv.hpp>
#include <iostream>
#include <QDebug>
#include "imageprocessor.h"


int main() {

    ImageProcessor imageprocessor_optimal_Top;
    imageprocessor_optimal_Top.LoadImage("/home/hoomanmoradpour/Dropbox/Sludge/Optimum condition/D4FB4564-2FA0-4E1C-8C0D-07375F5FDE90_Top_Optimum_condition.png");

    cv::imshow("Original Image Optimal Top: ", imageprocessor_optimal_Top.image);
    cv::Rect rect1(423, 430, 462, 160);
    cv::Rect rect2(468, 731, 446, 170);
    cv::Rect rect3(684, 106, 127, 195);

    imageprocessor_optimal_Top.rectangles.push_back(rect1);
    imageprocessor_optimal_Top.rectangles.push_back(rect2);
    imageprocessor_optimal_Top.rectangles.push_back(rect3);

    imageprocessor_optimal_Top.PopulateClips();

    for (size_t i=0; i < imageprocessor_optimal_Top.clips.size(); i++)
        cv::imshow("Clip Optimal Top "+QString::number(i).toStdString() , imageprocessor_optimal_Top.clips[i]);

    imageprocessor_optimal_Top.WriteClipes();




    /*ImageProcessor imageprocessor_optimal_Side;
    imageprocessor_optimal_Side.LoadImage("/home/hoomanmoradpour/Dropbox/Sludge/Optimum condition/84D2BBA8-55AA-4385-BC07-5726E2D9DA74_Side_Optimum_condition.png");

    cv::imshow("Original Image Optimal side: ", imageprocessor_optimal_Side.image);
    rect1 = cv::Rect(955, 398, 92, 62);
    rect2 = cv::Rect(1042, 498, 71, 231);
    rect3 = cv::Rect(736, 336, 75, 237); // <-This is out of bound

    imageprocessor_optimal_Side.rectangles.push_back(rect1);
    imageprocessor_optimal_Side.rectangles.push_back(rect2);
    imageprocessor_optimal_Side.rectangles.push_back(rect3);

    imageprocessor_optimal_Side.PopulateClips();

    for (size_t i=0;i<imageprocessor_optimal_Side.clips.size(); i++)
        cv::imshow("Clip Optimal side "+QString::number(i).toStdString() , imageprocessor_optimal_Side.clips[i]);

    imageprocessor_optimal_Side.WriteClipes();*/



    ImageProcessor imageprocessor_overdose_Top;
    imageprocessor_overdose_Top.LoadImage("/home/hoomanmoradpour/Dropbox/Sludge/Overdose/F0C9EDDF-0257-4342-9BBD-4275A10FE771_Top_Overdose.png");

    cv::imshow("Original Image Overdose Top: ", imageprocessor_overdose_Top.image);
    rect1 = cv::Rect(492, 288, 462, 160);
    rect2 = cv::Rect(494, 596, 446, 170);
    rect3 = cv::Rect(850, 154, 127, 195);

    imageprocessor_overdose_Top.rectangles.push_back(rect1);
    imageprocessor_overdose_Top.rectangles.push_back(rect2);
    imageprocessor_overdose_Top.rectangles.push_back(rect3);

    imageprocessor_overdose_Top.PopulateClips();

    for (size_t i=0;i<imageprocessor_overdose_Top.clips.size(); i++)
        cv::imshow("Clip Overdose Top "+QString::number(i).toStdString() , imageprocessor_overdose_Top.clips[i]);

    imageprocessor_overdose_Top.WriteClipes();





    /*ImageProcessor imageprocessor_overdose_Side;
    imageprocessor_overdose_Side.LoadImage("/home/hoomanmoradpour/Dropbox/Sludge/Overdose/7BC57F28-5F86-4661-B6C5-5B6D6181B034_Side_Overdose.png");

    cv::imshow("Original Image Overdose Side: ", imageprocessor_overdose_Side.image);
    rect1 = cv::Rect(955, 398, 92, 62);
    rect2 = cv::Rect(1042, 498, 71, 231);
    rect3 = cv::Rect(736, 336, 75, 237);

    imageprocessor_overdose_Side.rectangles.push_back(rect1);
    imageprocessor_overdose_Side.rectangles.push_back(rect2);
    imageprocessor_overdose_Side.rectangles.push_back(rect3);

    imageprocessor_overdose_Side.PopulateClips();

    for (size_t i=0;i<imageprocessor_overdose_Side.clips.size(); i++)
        cv::imshow("Clip Overdose Top "+QString::number(i).toStdString() , imageprocessor_overdose_Side.clips[i]);

    imageprocessor_overdose_Side.WriteClipes();*/



    ImageProcessor imageprocessor_Underdose_Top;
    imageprocessor_Underdose_Top.LoadImage("/home/hoomanmoradpour/Dropbox/Sludge/Underdose/F9822AD0-86B4-42D8-8F8F-3928E771189D_Top_Underdose.png");

    cv::imshow("Original Image Underdose Top: ", imageprocessor_Underdose_Top.image);
    rect1 = cv::Rect(423, 430, 462, 160);
    rect2 = cv::Rect(468, 731, 446, 170);
    rect3 = cv::Rect(684, 106, 127, 195);

    imageprocessor_Underdose_Top.rectangles.push_back(rect1);
    imageprocessor_Underdose_Top.rectangles.push_back(rect2);
    imageprocessor_Underdose_Top.rectangles.push_back(rect3);

   imageprocessor_Underdose_Top.PopulateClips();

    for (size_t i=0;i<imageprocessor_Underdose_Top.clips.size(); i++)
        cv::imshow("Clip Overdose Top "+QString::number(i).toStdString() , imageprocessor_Underdose_Top.clips[i]);

    imageprocessor_Underdose_Top.WriteClipes();





  /*ImageProcessor imageprocessor_Underdose_Side;
    imageprocessor_Underdose_Side.LoadImage("/home/hoomanmoradpour/Dropbox/Sludge/Underdose/DEBA2BAF-CDEB-463E-8120-71E5A3BD5A1D_Side_Underdose.png");

    cv::imshow("Original Image Underdose Side: ", imageprocessor_Underdose_Side.image);
    rect1 = cv::Rect(955, 398, 92, 62);
    rect2 = cv::Rect(1042, 498, 71, 231);
    rect3 = cv::Rect(736, 336, 75, 237);

   imageprocessor_Underdose_Side.rectangles.push_back(rect1);
   imageprocessor_Underdose_Side.rectangles.push_back(rect2);
   imageprocessor_Underdose_Side.rectangles.push_back(rect3);

    imageprocessor_Underdose_Side.PopulateClips();

    for (size_t i=0;i<imageprocessor_Underdose_Side.clips.size(); i++)
        cv::imshow("Clip Overdose Top "+QString::number(i).toStdString() , imageprocessor_Underdose_Side.clips[i]);

    imageprocessor_Underdose_Side.WriteClipes();*/

    cv::waitKey(0);

    /*
    // Load the image from file
    cv::Mat image_Top_Optimum_condition = cv::imread( "/home/hoomanmoradpour/Dropbox/Sludge/Optimum condition/D4FB4564-2FA0-4E1C-8C0D-07375F5FDE90_Top_Optimum_condition.png");
    cv::Mat image_side_Optimum_condition = cv::imread("/home/hoomanmoradpour/Dropbox/Sludge/Optimum condition/84D2BBA8-55AA-4385-BC07-5726E2D9DA74_Side_Optimum_condition.png");
    cv::Mat image_Top_Overdose = cv::imread("/home/hoomanmoradpour/Dropbox/Sludge/Overdose/F0C9EDDF-0257-4342-9BBD-4275A10FE771_Top_Overdose.png");
    cv::Mat image_side_Overdose = cv::imread("/home/hoomanmoradpour/Dropbox/Sludge/Overdose/7BC57F28-5F86-4661-B6C5-5B6D6181B034_Side_Overdose.png");
    cv::Mat image_Top_Underdose = cv::imread("/home/hoomanmoradpour/Dropbox/Sludge/Underdose/F9822AD0-86B4-42D8-8F8F-3928E771189D_Top_Underdose.png");
    cv::Mat image_side_Underdose = cv::imread("/home/hoomanmoradpour/Dropbox/Sludge/Underdose/DEBA2BAF-CDEB-463E-8120-71E5A3BD5A1D_Side_Underdose.png");

    if (image_Top_Optimum_condition.empty() || image_side_Optimum_condition.empty()) {
        std::cout << "Could not open or find the image!" << std::endl;
        return -1;
    }

    qDebug()<<image_Top_Optimum_condition.size().width << "," <<image_Top_Optimum_condition.size().height;
    qDebug()<<image_side_Optimum_condition.size().width << "," <<image_side_Optimum_condition.size().height;
    // Define the first rectangle (x, y, width, height)
    cv::Rect rect1_Top_Optimum_condition(423, 430, 462, 160); // Example: (X = 50, Y = 50, width = 200, height = 150)
    cv::Rect rect1_side_Optimum_condition(955, 398, 92, 62);
    cv::Rect rect1_Top_Overdose(423, 430, 462, 160); // Example: (X = 50, Y = 50, width = 200, height = 150)
    cv::Rect rect1_side_Overdose(955, 398, 92, 62);
    cv::Rect rect1_Top_Underdose(423, 430, 462, 160); // Example: (X = 50, Y = 50, width = 200, height = 150)
    cv::Rect rect1_side_Underdose(955, 398, 92, 62);
    // Define the second rectangle (x, y, width, height)
    cv::Rect rect2_Top_Optimum_condition(468, 731, 446, 170); // Example: (X = 300, Y = 100, width = 250, height = 200)
    cv::Rect rect2_side_Optimum_condition(738, 347, 78, 171);
    cv::Rect rect2_Top_Overdose(468, 731, 446, 170); // Example: (X = 300, Y = 100, width = 250, height = 200)
    cv::Rect rect2_side_Overdose(738, 347, 78, 171);
    cv::Rect rect2_Top_Underdose(468, 731, 446, 170); // Example: (X = 300, Y = 100, width = 250, height = 200)
    cv::Rect rect2_side_Underdose(738, 347, 78, 171);


    cv::Rect rect3_Top_Optimum_condition(684, 106, 127, 195);
    cv::Rect rect3_side_Optimum_condition(1049, 539, 101, 180);
    cv::Rect rect3_Top_Overdose(684, 106, 127, 195);
    cv::Rect rect3_side_Overdose(1049, 539, 101, 180);
    cv::Rect rect3_Top_Underdose(684, 106, 127, 195);
    cv::Rect rect3_side_Underdose(1049, 539, 101, 180);


    // Draw the rectangles on the image (with color and thickness)
    cv::rectangle(image_Top_Optimum_condition, rect1_Top_Optimum_condition, cv::Scalar(0, 255, 0), 2);  // Green color for first rectangle
    cv::rectangle(image_Top_Optimum_condition, rect2_Top_Optimum_condition, cv::Scalar(0, 0, 255), 2);
    cv::rectangle(image_Top_Optimum_condition, rect3_Top_Optimum_condition, cv::Scalar(255, 0, 0), 2);


    cv::rectangle(image_Top_Overdose, rect1_Top_Overdose, cv::Scalar(0, 255, 0), 2);  // Green color for first rectangle
    cv::rectangle(image_Top_Overdose, rect2_Top_Overdose, cv::Scalar(0, 0, 255), 2);
    cv::rectangle(image_Top_Overdose, rect3_Top_Overdose, cv::Scalar(255, 0, 0), 2);


    cv::rectangle(image_Top_Underdose, rect1_Top_Underdose, cv::Scalar(0, 255, 0), 2);  // Green color for first rectangle
    cv::rectangle(image_Top_Underdose, rect2_Top_Underdose, cv::Scalar(0, 0, 255), 2);
    cv::rectangle(image_Top_Underdose, rect3_Top_Underdose, cv::Scalar(255, 0, 0), 2);





    cv::rectangle(image_side_Optimum_condition, rect1_side_Optimum_condition, cv::Scalar(0, 255, 0), 2);  // Green color for first rectangle
    cv::rectangle(image_side_Optimum_condition, rect2_side_Optimum_condition, cv::Scalar(0, 0, 255), 2);
    cv::rectangle(image_side_Optimum_condition, rect3_side_Optimum_condition, cv::Scalar(255, 0, 0), 2);


    cv::rectangle(image_side_Overdose, rect1_side_Overdose, cv::Scalar(0, 255, 0), 2);  // Green color for first rectangle
    cv::rectangle(image_side_Overdose, rect2_side_Overdose, cv::Scalar(0, 0, 255), 2);
    cv::rectangle(image_side_Overdose, rect3_side_Overdose, cv::Scalar(255, 0, 0), 2);

    cv::rectangle(image_side_Underdose, rect1_side_Underdose, cv::Scalar(0, 255, 0), 2);  // Green color for first rectangle
    cv::rectangle(image_side_Underdose, rect2_side_Underdose, cv::Scalar(0, 0, 255), 2);
    cv::rectangle(image_side_Underdose, rect3_side_Underdose, cv::Scalar(255, 0, 0), 2);







    cv::putText(image_Top_Optimum_condition, "Clip 1 Top", cv::Point(rect1_Top_Optimum_condition.x + 10, rect1_Top_Optimum_condition.y + 30), cv::FONT_HERSHEY_SIMPLEX, 0.5, cv::Scalar(0, 255, 0), 2);
    cv::putText(image_Top_Optimum_condition, "Clip 2 Top", cv::Point(rect2_Top_Optimum_condition.x + 10, rect2_Top_Optimum_condition.y + 30), cv::FONT_HERSHEY_SIMPLEX, 0.5, cv::Scalar(0, 0, 255), 2);
    cv::putText(image_Top_Optimum_condition, "Clip 3 Top", cv::Point(rect3_Top_Optimum_condition.x + 10, rect3_Top_Optimum_condition.y + 30), cv::FONT_HERSHEY_SIMPLEX, 0.5, cv::Scalar(255, 0, 0), 2);



    cv::putText(image_Top_Overdose, "Clip 1 Top", cv::Point(rect1_Top_Overdose.x + 10, rect1_Top_Overdose.y + 30), cv::FONT_HERSHEY_SIMPLEX, 0.5, cv::Scalar(0, 255, 0), 2);
    cv::putText(image_Top_Overdose, "Clip 2 Top", cv::Point(rect2_Top_Overdose.x + 10, rect2_Top_Overdose.y + 30), cv::FONT_HERSHEY_SIMPLEX, 0.5, cv::Scalar(0, 0, 255), 2);
    cv::putText(image_Top_Overdose, "Clip 3 Top", cv::Point(rect3_Top_Overdose.x + 10, rect3_Top_Overdose.y + 30), cv::FONT_HERSHEY_SIMPLEX, 0.5, cv::Scalar(255, 0, 0), 2);



    cv::putText(image_Top_Underdose, "Clip 1 Top", cv::Point(rect1_Top_Underdose.x + 10, rect1_Top_Underdose.y + 30), cv::FONT_HERSHEY_SIMPLEX, 0.5, cv::Scalar(0, 255, 0), 2);
    cv::putText(image_Top_Underdose, "Clip 2 Top", cv::Point(rect2_Top_Underdose.x + 10, rect2_Top_Underdose.y + 30), cv::FONT_HERSHEY_SIMPLEX, 0.5, cv::Scalar(0, 0, 255), 2);
    cv::putText(image_Top_Underdose, "Clip 3 Top", cv::Point(rect3_Top_Underdose.x + 10, rect3_Top_Underdose.y + 30), cv::FONT_HERSHEY_SIMPLEX, 0.5, cv::Scalar(255, 0, 0), 2);





    cv::putText(image_side_Optimum_condition, "Clip 1 Side", cv::Point(rect1_side_Optimum_condition.x + 10, rect1_side_Optimum_condition.y + 30), cv::FONT_HERSHEY_SIMPLEX, 0.5, cv::Scalar(255, 0, 150), 2);
    cv::putText(image_side_Optimum_condition, "Clip 2 Side", cv::Point(rect2_side_Optimum_condition.x + 10, rect2_side_Optimum_condition.y + 30), cv::FONT_HERSHEY_SIMPLEX, 0.5, cv::Scalar(25, 0, 255), 2);
    cv::putText(image_side_Optimum_condition, "Clip 3 Side", cv::Point(rect3_side_Optimum_condition.x + 10, rect3_side_Optimum_condition.y + 30), cv::FONT_HERSHEY_SIMPLEX, 0.5, cv::Scalar(255, 0, 46), 2);



    cv::putText(image_side_Overdose, "Clip 1 Side", cv::Point(rect1_side_Overdose.x + 10, rect1_side_Overdose.y + 30), cv::FONT_HERSHEY_SIMPLEX, 0.5, cv::Scalar(255, 0, 150), 2);
    cv::putText(image_side_Overdose, "Clip 2 Side", cv::Point(rect2_side_Overdose.x + 10, rect2_side_Overdose.y + 30), cv::FONT_HERSHEY_SIMPLEX, 0.5, cv::Scalar(25, 0, 255), 2);
    cv::putText(image_side_Overdose, "Clip 3 Side", cv::Point(rect3_side_Overdose.x + 10, rect3_side_Overdose.y + 30), cv::FONT_HERSHEY_SIMPLEX, 0.5, cv::Scalar(255, 0, 46), 2);



    cv::putText(image_side_Underdose, "Clip 1 Side", cv::Point(rect1_side_Underdose.x + 10, rect1_side_Underdose.y + 30), cv::FONT_HERSHEY_SIMPLEX, 0.5, cv::Scalar(255, 0, 150), 2);
    cv::putText(image_side_Underdose, "Clip 2 Side", cv::Point(rect2_side_Underdose.x + 10, rect2_side_Underdose.y + 30), cv::FONT_HERSHEY_SIMPLEX, 0.5, cv::Scalar(25, 0, 255), 2);
    cv::putText(image_side_Underdose, "Clip 3 Side", cv::Point(rect3_side_Underdose.x + 10, rect3_side_Underdose.y + 30), cv::FONT_HERSHEY_SIMPLEX, 0.5, cv::Scalar(255, 0, 46), 2);




    // Safely clip regions only if the rectangle is valid
    cv::Mat clip1_Top_Optimum_condition, clip2_Top_Optimum_condition, clip3_Top_Optimum_condition;
    cv::Mat clip1_Top_Overdose, clip2_Top_Overdose, clip3_Top_Overdose;
    cv::Mat clip1_Top_Underdose, clip2_Top_Underdose, clip3_Top_Underdose;

    cv::Mat clip1_side_Optimum_condition, clip2_side_Optimum_condition, clip3_side_Optimum_condition;
    cv::Mat clip1_side_Overdose, clip2_side_Overdose, clip3_side_Overdose;
    cv::Mat clip1_side_Underdose, clip2_side_Underdose, clip3_side_Underdose;

    // Create clips of the rectangles from the image

    //cv::Mat clip1_Top = image_Top(rect1_Top);
    //cv::Mat clip2_Top = image_Top(rect2_Top);
    //cv::Mat clip3_Top = image_Top(rect3_Top);

   // cv::Mat clip1_side = image_side(rect1_side);
    //cv::Mat clip2_side = image_side(rect2_side);
    //cv::Mat clip3_side = image_side(rect3_side);

    if (isValidRect(image_Top_Optimum_condition, rect1_Top_Optimum_condition)) clip1_Top_Optimum_condition = image_Top_Optimum_condition(rect1_Top_Optimum_condition);
    if (isValidRect(image_Top_Optimum_condition, rect2_Top_Optimum_condition)) clip2_Top_Optimum_condition = image_Top_Optimum_condition(rect2_Top_Optimum_condition);
    if (isValidRect(image_Top_Optimum_condition, rect3_Top_Optimum_condition)) clip3_Top_Optimum_condition = image_Top_Optimum_condition(rect3_Top_Optimum_condition);

    if (isValidRect(image_Top_Overdose, rect1_Top_Overdose)) clip1_Top_Overdose = image_Top_Overdose(rect1_Top_Overdose);
    if (isValidRect(image_Top_Overdose, rect2_Top_Overdose)) clip2_Top_Overdose = image_Top_Overdose(rect2_Top_Overdose);
    if (isValidRect(image_Top_Overdose, rect3_Top_Overdose)) clip3_Top_Overdose = image_Top_Overdose(rect3_Top_Overdose);

    if (isValidRect(image_Top_Underdose, rect1_Top_Underdose)) clip1_Top_Underdose = image_Top_Optimum_condition(rect1_Top_Optimum_condition);
    if (isValidRect(image_Top_Underdose, rect2_Top_Underdose)) clip2_Top_Underdose = image_Top_Optimum_condition(rect2_Top_Optimum_condition);
    if (isValidRect(image_Top_Underdose, rect3_Top_Underdose)) clip3_Top_Underdose = image_Top_Optimum_condition(rect3_Top_Optimum_condition);




    if (isValidRect(image_side_Optimum_condition, rect1_side_Optimum_condition)) clip1_side_Optimum_condition = image_side_Optimum_condition(rect1_side_Optimum_condition);
    if (isValidRect(image_side_Optimum_condition, rect2_side_Optimum_condition)) clip2_side_Optimum_condition = image_side_Optimum_condition(rect2_side_Optimum_condition);
    if (isValidRect(image_side_Optimum_condition, rect3_side_Optimum_condition)) clip3_side_Optimum_condition = image_side_Optimum_condition(rect3_side_Optimum_condition);

    if (isValidRect(image_side_Optimum_condition, rect1_side_Optimum_condition)) clip1_side_Optimum_condition = image_side_Optimum_condition(rect1_side_Optimum_condition);
    if (isValidRect(image_side_Optimum_condition, rect2_side_Optimum_condition)) clip2_side_Optimum_condition = image_side_Optimum_condition(rect2_side_Optimum_condition);
    if (isValidRect(image_side_Optimum_condition, rect3_side_Optimum_condition)) clip3_side_Optimum_condition = image_side_Optimum_condition(rect3_side_Optimum_condition);

    if (isValidRect(image_side_Optimum_condition, rect1_side_Optimum_condition)) clip1_side_Optimum_condition = image_side_Optimum_condition(rect1_side_Optimum_condition);
    if (isValidRect(image_side_Optimum_condition, rect2_side_Optimum_condition)) clip2_side_Optimum_condition = image_side_Optimum_condition(rect2_side_Optimum_condition);
    if (isValidRect(image_side_Optimum_condition, rect3_side_Optimum_condition)) clip3_side_Optimum_condition = image_side_Optimum_condition(rect3_side_Optimum_condition);

    // Display the original image and the clipped areas
    cv::imshow("Original Top Image with Rectangles", image_Top_Optimum_condition);
    cv::imshow("Original Side Image with Rectangles", image_side_Optimum_condition);

    //cv::imshow("Clip 1 Top", clip1_Top);
    //cv::imshow("Clip 2 Top", clip2_Top);
    //cv::imshow("Clip 3 Top", clip3_Top);

   // cv::imshow("Clip 1 Side", clip1_side);
   // cv::imshow("Clip 2 Side", clip2_side);
    //cv::imshow("Clip 3 Side", clip3_side);
    if (!clip1_Top_Optimum_condition.empty()) cv::imshow("Clip 1 Top", clip1_Top_Optimum_condition);
    if (!clip2_Top_Optimum_condition.empty()) cv::imshow("Clip 2 Top", clip2_Top_Optimum_condition);
    if (!clip3_Top_Optimum_condition.empty()) cv::imshow("Clip 3 Top", clip3_Top_Optimum_condition);
    if (!clip1_side_Optimum_condition.empty()) cv::imshow("Clip 1 Side", clip1_side_Optimum_condition);
    if (!clip2_side_Optimum_condition.empty()) cv::imshow("Clip 2 Side", clip2_side_Optimum_condition);
    if (!clip3_side_Optimum_condition.empty()) cv::imshow("Clip 3 Side", clip3_side_Optimum_condition);


    cv::imshow("Clip 1 Top", clip1_Top_Optimum_condition);
    cv::imshow("Clip 2 Top", clip2_Top_Optimum_condition);
    cv::imshow("Clip 3 Top", clip3_Top_Optimum_condition);
    cv::imshow("Clip 1 Side", clip1_side_Optimum_condition);
    cv::imshow("Clip 2 Side", clip2_side_Optimum_condition);
    cv::imshow("Clip 3 Side", clip3_side_Optimum_condition);
    cv::imwrite("/home/hoomanmoradpour/Dropbox/Sludge/Optimum condition/Clip_1_Top.jpg", clip1_Top_Optimum_condition);
    cv::imwrite("/home/hoomanmoradpour/Dropbox/Sludge/Optimum condition/Clip_1_Top.jpg", clip1_Top_Optimum_condition);
    cv::imwrite("/home/hoomanmoradpour/Dropbox/Sludge/Optimum condition/Clip_1_Top.jpg", clip1_Top_Optimum_condition);
    cv::imwrite("/home/hoomanmoradpour/Dropbox/Sludge/Optimum condition/Clip_1_Side.jpg", clip1_side_Optimum_condition);
    cv::imwrite("/home/hoomanmoradpour/Dropbox/Sludge/Optimum condition/Clip_2_Side.jpg", clip2_side_Optimum_condition);
    cv::imwrite("/home/hoomanmoradpour/Dropbox/Sludge/Optimum condition/Clip_3_Side.jpg", clip3_side_Optimum_condition);

    // Wait for a key press to close the windows
    cv::waitKey(0);
    */
    return 0;
}

