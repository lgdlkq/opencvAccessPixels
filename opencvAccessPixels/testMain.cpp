#include"all.h"

int main() {

	//����ԭʼͼ����ʾ
	Mat srcImage = imread("1.jpg");
	imshow("ԭʼͼ��", srcImage);

	//��ԭʼͼ��������������Ч��ͼ
	Mat desImage;
	desImage.create(srcImage.rows, srcImage.cols, srcImage.type());//Ч��ͼ��С��������ԭͼƬ��ͬ

	//��¼��ʼʱ��
	double time0 = static_cast<double>(getTickCount());

	//������ɫ�ռ���������
	colorReduceIp(srcImage, desImage, 32);//ʹ�á�ָ����ʣ�C���������������������ɫ�ռ���������
	//colorReduceIterator(srcImage, desImage, 32);//ʹ�á������������������ɫ�ռ���������
	//colorReduceAt(srcImage, desImage, 32);//ʹ�á���̬��ַ�������at�����������ɫ�ռ���������

	//��������ʱ�䲢���
	time0 = ((double)getTickCount() - time0) / getTickFrequency();
	cout << "�˷���������ʱ��Ϊ��" << time0 << "��" << endl;//�������ʱ��

	//��ʾЧ��ͼ
	imshow("Ч��ͼ",desImage);
	waitKey(0);
	return 0;
}