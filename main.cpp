#include <opencv2/opencv.hpp>
#include <iostream>
#include <QDebug>
bool isValidRect(const cv::Mat& image, const cv::Rect& rect) {
    return rect.x >= 0 && rect.y >= 0 &&
           rect.x + rect.width <= image.cols &&
           rect.y + rect.height <= image.rows;
}
int main() {
    // Load the image from file
    cv::Mat image_Top = cv::imread("/home/hoomanmoradpour/Dropbox/Sludge/Optimum condition/D4FB4564-2FA0-4E1C-8C0D-07375F5FDE90_Top_Optimum_condition.png");
    cv::Mat image_side= cv::imread("/home/hoomanmoradpour/Dropbox/Sludge/Optimum condition/84D2BBA8-55AA-4385-BC07-5726E2D9DA74_Side_Optimum_condition.png");
    if (image_Top.empty() || image_side.empty()) {
        std::cout << "Could not open or find the image!" << std::endl;
        return -1;
    }

    qDebug()<<image_Top.size().width << "," <<image_Top.size().height;
    qDebug()<<image_side.size().width << "," <<image_side.size().height;
    // Define the first rectangle (x, y, width, height)
    cv::Rect rect1_Top(423, 430, 462, 160); // Example: (X = 50, Y = 50, width = 200, height = 150)
    cv::Rect rect1_side(323, 430, 462, 160);
    // Define the second rectangle (x, y, width, height)
    cv::Rect rect2_Top(468, 731, 446, 170); // Example: (X = 300, Y = 100, width = 250, height = 200)
    cv::Rect rect2_side(400, 731, 446, 170);

    cv::Rect rect3_Top(684, 106, 127, 195);
    cv::Rect rect3_side(1079, 581, 127, 195);




    // Draw the rectangles on the image (with color and thickness)
    cv::rectangle(image_Top, rect1_Top, cv::Scalar(0, 255, 0), 2);  // Green color for first rectangle
    cv::rectangle(image_Top, rect2_Top, cv::Scalar(0, 0, 255), 2);
    cv::rectangle(image_Top, rect3_Top, cv::Scalar(255, 0, 0), 2);



    cv::rectangle(image_side, rect1_side, cv::Scalar(0, 255, 0), 2);  // Green color for first rectangle
    cv::rectangle(image_side, rect2_side, cv::Scalar(0, 0, 255), 2);
    cv::rectangle(image_side, rect3_side, cv::Scalar(255, 0, 0), 2);





    cv::putText(image_Top, "Clip 1 Top", cv::Point(rect1_Top.x + 10, rect1_Top.y + 30), cv::FONT_HERSHEY_SIMPLEX, 0.5, cv::Scalar(0, 255, 0), 2);
    cv::putText(image_Top, "Clip 2 Top", cv::Point(rect2_Top.x + 10, rect2_Top.y + 30), cv::FONT_HERSHEY_SIMPLEX, 0.5, cv::Scalar(0, 0, 255), 2);
    cv::putText(image_Top, "Clip 3 Top", cv::Point(rect3_Top.x + 10, rect3_Top.y + 30), cv::FONT_HERSHEY_SIMPLEX, 0.5, cv::Scalar(255, 0, 0), 2);

    cv::putText(image_side, "Clip 1 Side", cv::Point(rect1_side.x + 10, rect1_side.y + 30), cv::FONT_HERSHEY_SIMPLEX, 0.5, cv::Scalar(255, 0, 150), 2);
    cv::putText(image_side, "Clip 2 Side", cv::Point(rect2_side.x + 10, rect2_side.y + 30), cv::FONT_HERSHEY_SIMPLEX, 0.5, cv::Scalar(25, 0, 255), 2);
    cv::putText(image_side, "Clip 3 Side", cv::Point(rect3_side.x + 10, rect3_side.y + 30), cv::FONT_HERSHEY_SIMPLEX, 0.5, cv::Scalar(255, 0, 46), 2);

    // Safely clip regions only if the rectangle is valid
    cv::Mat clip1_Top, clip2_Top, clip3_Top;

    cv::Mat clip1_side, clip2_side, clip3_side;

    // Create clips of the rectangles from the image

    //cv::Mat clip1_Top = image_Top(rect1_Top);
    //cv::Mat clip2_Top = image_Top(rect2_Top);
    //cv::Mat clip3_Top = image_Top(rect3_Top);

   // cv::Mat clip1_side = image_side(rect1_side);
    //cv::Mat clip2_side = image_side(rect2_side);
    //cv::Mat clip3_side = image_side(rect3_side);

    if (isValidRect(image_Top, rect1_Top)) clip1_Top = image_Top(rect1_Top);
    if (isValidRect(image_Top, rect2_Top)) clip2_Top = image_Top(rect2_Top);
    if (isValidRect(image_Top, rect3_Top)) clip3_Top = image_Top(rect3_Top);

    if (isValidRect(image_side, rect1_side))
        clip1_side = image_side(rect1_side);
    if (isValidRect(image_side, rect2_side))
        clip2_side = image_side(rect2_side);
    if (isValidRect(image_side, rect3_side))
        clip3_side = image_side(rect3_side);

    // Display the original image and the clipped areas
    cv::imshow("Original Top Image with Rectangles", image_Top);
    cv::imshow("Original Side Image with Rectangles", image_side);

    //cv::imshow("Clip 1 Top", clip1_Top);
    //cv::imshow("Clip 2 Top", clip2_Top);
    //cv::imshow("Clip 3 Top", clip3_Top);

   // cv::imshow("Clip 1 Side", clip1_side);
   // cv::imshow("Clip 2 Side", clip2_side);
    //cv::imshow("Clip 3 Side", clip3_side);
    if (!clip1_Top.empty()) cv::imshow("Clip 1 Top", clip1_Top);
    if (!clip2_Top.empty()) cv::imshow("Clip 2 Top", clip2_Top);
    if (!clip3_Top.empty()) cv::imshow("Clip 3 Top", clip3_Top);
    if (!clip1_side.empty()) cv::imshow("Clip 1 Side", clip1_side);
    if (!clip2_side.empty()) cv::imshow("Clip 2 Side", clip2_side);
    if (!clip3_side.empty()) cv::imshow("Clip 3 Side", clip3_side);
    // Wait for a key press to close the windows
    cv::waitKey(0);

    return 0;
}

