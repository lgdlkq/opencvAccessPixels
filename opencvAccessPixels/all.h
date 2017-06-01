#include<opencv2\core\core.hpp>
#include<opencv2\highgui\highgui.hpp>
#include<iostream>

using namespace std;
using namespace cv;

void colorReduceIp(Mat& inputImage, Mat& outputImage, int div);//用指针访问像素
void colorReduceIterator(Mat& inputImage, Mat& outputImage, int div);//用迭代器访问操作元素
void colorReduceAt(Mat& inputImage, Mat& outputImage, int div);//动态地址计算
