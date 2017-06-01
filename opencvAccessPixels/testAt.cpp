#include"all.h"

//��̬��ַ����
void colorReduceAt(Mat& inputImage, Mat& outputImage, int div) {

	//����׼��
	outputImage = inputImage.clone();//����ʵ�ε���ʱ����
	int rowNumber = outputImage.rows;//����
	int colNumber = outputImage.cols;//����

	//��ȡ��ɫͼ�������
	for (int i = 0; i < rowNumber; i++) {
		for (int j = 0; j < colNumber; j++) {
			outputImage.at<Vec3b>(i, j)[0] = outputImage.at<Vec3b>(i, j)[0] / div*div + div / 2;//��ɫͨ��
			outputImage.at<Vec3b>(i, j)[1] = outputImage.at<Vec3b>(i, j)[1] / div*div + div / 2;//��ɫͨ��
			outputImage.at<Vec3b>(i, j)[2] = outputImage.at<Vec3b>(i, j)[2] / div*div + div / 2;//��ɫͨ��
		}
	}
}