#include"all.h"

//动态地址计算
void colorReduceAt(Mat& inputImage, Mat& outputImage, int div) {

	//参数准备
	outputImage = inputImage.clone();//复制实参到临时变量
	int rowNumber = outputImage.rows;//行数
	int colNumber = outputImage.cols;//列数

	//存取彩色图像的像素
	for (int i = 0; i < rowNumber; i++) {
		for (int j = 0; j < colNumber; j++) {
			outputImage.at<Vec3b>(i, j)[0] = outputImage.at<Vec3b>(i, j)[0] / div*div + div / 2;//蓝色通道
			outputImage.at<Vec3b>(i, j)[1] = outputImage.at<Vec3b>(i, j)[1] / div*div + div / 2;//绿色通道
			outputImage.at<Vec3b>(i, j)[2] = outputImage.at<Vec3b>(i, j)[2] / div*div + div / 2;//红色通道
		}
	}
}