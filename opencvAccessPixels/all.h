#include<opencv2\core\core.hpp>
#include<opencv2\highgui\highgui.hpp>
#include<iostream>

using namespace std;
using namespace cv;

void colorReduceIp(Mat& inputImage, Mat& outputImage, int div);//��ָ���������
void colorReduceIterator(Mat& inputImage, Mat& outputImage, int div);//�õ��������ʲ���Ԫ��
void colorReduceAt(Mat& inputImage, Mat& outputImage, int div);//��̬��ַ����
