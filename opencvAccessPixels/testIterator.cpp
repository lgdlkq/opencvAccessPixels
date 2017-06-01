#include"all.h"

//�õ��������ʲ���Ԫ��
void colorReduceIterator(Mat& inputImage, Mat& outputImage, int div) {

	//����׼��
	outputImage = inputImage.clone();//����ʵ�ε���ʱ����
	//��ȡ������
	Mat_<Vec3b>::iterator it = outputImage.begin<Vec3b>();//��ʼ��λ�õĵ�����
	Mat_<Vec3b>::iterator itend = outputImage.end<Vec3b>();//��ȡ��ֹλ�õĵ�����

	//��ȡ��ɫͼ������
	for (; it != itend; ++it) {
		//һ�δ���������ɫͨ��
		(*it)[0] = (*it)[0] / div*div + div / 2;
		(*it)[1] = (*it)[1] / div*div + div / 2;
		(*it)[2] = (*it)[2] / div*div + div / 2;
	}
}