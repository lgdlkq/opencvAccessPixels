#include"all.h"

//��ָ���������
void colorReduceIp(Mat& inputImage, Mat& outputImage, int div) {

	//����׼��
	outputImage = inputImage.clone();//����ʵ�ε���ʱ����
	int rowNumber = outputImage.rows;//����
	int colNumber = outputImage.cols * outputImage.channels();//����xͨ����=ÿһ��Ԫ�صĸ���

	//˫��ѭ�����������е�����ֵ
	for (int i = 0; i < rowNumber; i++) {//��ѭ��
		uchar* data = outputImage.ptr<uchar>(i);//��ȡ��i�е��׵�ַ��ptr���ڵõ�ͼ����׵�ַ����һ��ģ�庯��
		for (int j = 0; j < colNumber; j++) {//��ѭ��
			data[j] = data[j] / div*div + div / 2;//����ÿ�����أ��ɸ�д��*data++=*data/div*div+div/2
		}
	}
}