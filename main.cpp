#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    // Load the image from file
    cv::Mat image = cv::imread("/home/arash/Imagecleaner/D4FB4564-2FA0-4E1C-8C0D-07375F5FDE90.png");

    if (image.empty()) {
        std::cout << "Could not open or find the image!" << std::endl;
        return -1;
    }

    // Define the first rectangle (x, y, width, height)
    cv::Rect rect1(423, 430, 462, 160); // Example: (X = 50, Y = 50, width = 200, height = 150)

    // Define the second rectangle (x, y, width, height)
    cv::Rect rect2(468, 731, 446, 170); // Example: (X = 300, Y = 100, width = 250, height = 200)

    cv::Rect rect3(684, 106, 127, 195);
    // Draw the rectangles on the image (with color and thickness)
    cv::rectangle(image, rect1, cv::Scalar(0, 255, 0), 2);  // Green color for first rectangle
    cv::rectangle(image, rect2, cv::Scalar(0, 0, 255), 2);
    cv::rectangle(image, rect3, cv::Scalar(255, 0, 0), 2);

    cv::putText(image, "Clip 1", cv::Point(rect1.x + 10, rect1.y + 30), cv::FONT_HERSHEY_SIMPLEX, 1, cv::Scalar(0, 255, 0), 2);
    cv::putText(image, "Clip 2", cv::Point(rect2.x + 10, rect2.y + 30), cv::FONT_HERSHEY_SIMPLEX, 1, cv::Scalar(0, 0, 255), 2);
    cv::putText(image, "Clip 3", cv::Point(rect3.x + 10, rect3.y + 30), cv::FONT_HERSHEY_SIMPLEX, 1, cv::Scalar(255, 0, 0), 2);
    // Create clips of the rectangles from the image
    cv::Mat clip1 = image(rect1);
    cv::Mat clip2 = image(rect2);
    cv::Mat clip3 = image(rect3);
    // Display the original image and the clipped areas
    cv::imshow("Original Image with Rectangles", image);
    cv::imshow("Clip 1", clip1);
    cv::imshow("Clip 2", clip2);
    cv::imshow("Clip 3", clip3);
    // Wait for a key press to close the windows
    cv::waitKey(0);

    return 0;
}
