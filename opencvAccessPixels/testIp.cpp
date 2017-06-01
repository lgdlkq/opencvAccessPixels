#include"all.h"

//用指针访问像素
void colorReduceIp(Mat& inputImage, Mat& outputImage, int div) {

	//参数准备
	outputImage = inputImage.clone();//复制实参到临时变量
	int rowNumber = outputImage.rows;//行数
	int colNumber = outputImage.cols * outputImage.channels();//列数x通道数=每一行元素的个数

	//双重循环，遍历所有的像素值
	for (int i = 0; i < rowNumber; i++) {//行循环
		uchar* data = outputImage.ptr<uchar>(i);//获取第i行的首地址，ptr用于得到图像的首地址，是一个模板函数
		for (int j = 0; j < colNumber; j++) {//列循环
			data[j] = data[j] / div*div + div / 2;//处理每个像素，可改写成*data++=*data/div*div+div/2
		}
	}
}