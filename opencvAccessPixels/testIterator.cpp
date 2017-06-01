#include"all.h"

//用迭代器访问操作元素
void colorReduceIterator(Mat& inputImage, Mat& outputImage, int div) {

	//参数准备
	outputImage = inputImage.clone();//复制实参到临时变量
	//获取迭代器
	Mat_<Vec3b>::iterator it = outputImage.begin<Vec3b>();//初始化位置的迭代器
	Mat_<Vec3b>::iterator itend = outputImage.end<Vec3b>();//获取终止位置的迭代器

	//存取彩色图像像素
	for (; it != itend; ++it) {
		//一次处理三个彩色通道
		(*it)[0] = (*it)[0] / div*div + div / 2;
		(*it)[1] = (*it)[1] / div*div + div / 2;
		(*it)[2] = (*it)[2] / div*div + div / 2;
	}
}