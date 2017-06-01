#include"all.h"

int main() {

	//创建原始图像并显示
	Mat srcImage = imread("1.jpg");
	imshow("原始图像", srcImage);

	//按原始图像参数规格来创建效果图
	Mat desImage;
	desImage.create(srcImage.rows, srcImage.cols, srcImage.type());//效果图大小、类型与原图片相同

	//记录起始时间
	double time0 = static_cast<double>(getTickCount());

	//调用颜色空间缩减函数
	colorReduceIp(srcImage, desImage, 32);//使用【指针访问：C操作符【】】方法版的颜色空间缩减函数
	//colorReduceIterator(srcImage, desImage, 32);//使用【迭代器】方法版的颜色空间缩减函数
	//colorReduceAt(srcImage, desImage, 32);//使用【动态地址运算配合at】方法版的颜色空间缩减函数

	//计算运行时间并输出
	time0 = ((double)getTickCount() - time0) / getTickFrequency();
	cout << "此方法的运行时间为：" << time0 << "秒" << endl;//输出运行时间

	//显示效果图
	imshow("效果图",desImage);
	waitKey(0);
	return 0;
}