//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
////std��standard ��׼      io��input&output
//
//int main()/*main������������������ڣ����ҽ���һ��
//            int�������ͣ�mainǰint��ʾmain��������֮�󷵻�һ������ֵ*/
//{
//	printf("hh\n");//printf��print function    ��ӡˢ���ܣ���ӡ����
//
//	//�⺯��--c���Ա����ṩ�ĺ���
//
//	return 0;//����0
//}

//#include <stdio.h>

//int main()
//{
//	char ch = 'A';
//	printf("%c", ch);//%c����ӡ�ַ���ʽ������
//	return 0;
//}
//
/*  char  �ַ�����  �����š��ַ�  ˫���š��ַ��� short��������  long�������� float�������ȸ�����
* double��˫���ȸ�����
*����ַ���%c    �ַ�����%s  ���͡�%d  ��ӡ������(С��)��%f  �Ե�ַ��ʽ��ӡ��%p
* ��ӡʮ���������֡�%x
*/

//int main()
//{
//	int age = 20;
//
//	printf("%d", age);//%d����ӡ����ʮ��������
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	float d = 3.3;       //double d = 3.3;
//	printf("%f", d);     //printf("%lf",d);
//	return 0;
//}
//#include <stdio.h>
// 
//int main()
//{
//	short age = 20;//���ڴ��������������ֽڣ�16bitλ�����������20
//
//	float weight = 63.2f;//���ڴ�����4���ֽڣ����С��.
//
//	printf("%d\n", age);
//	printf("%f", weight);
//
//	return 0;
//}

//           �� �ӷ� ��

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int num1 = 0;//ȫ�ֱ�����������{}֮��ı���

int main()
{
	int num2 = 0;//�ֲ�������������{}��
		//�ֲ�������ȫ�ֱ���������ͬ����ͬʱ���ֲ���������,���ֲ�����ֻ��������{}��ʹ�á�
	//ȫ�ֱ�����������������
	//�ֲ�������ȫ�ֱ�����������ͬ������������bug.

	int sum = 0; //  ��  ��ȷλ��
    //������sum��Ӧ�ڵ�ʽǰ 
	
	scanf("%d%d",&num1,&num2);//&��ȡ��ַ��
    
	sum = num1 + num2;
	//int sum = 0;  X   ����λ��

	printf("sum=%d\n", sum);

	return 0;
} 
 
      //extern  �����ⲿ����.