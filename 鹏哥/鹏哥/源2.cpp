//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//int main()
//
//{
//	int num1 = 0;
//
//	int num2 = 0;
//
//	int sum = 0;
//
//	scanf("%d%d",&num1, &num2);
//
//	sum = num1 + num2;
//
//	printf("sum=%d", sum);
//
//	return 0;
//}

//ֱ�ӵ�ֵ��0,1��100�ȣ����泣����  ***������1��
//num��Ϊ����

//#include <stdio.h>
//int main()
//{
//	const int num = 4;//const�������ԣ�����������һ���̶���ֵ��   ***������2��
//
//	printf("%d\n", num);
//
////	num = 8;
////                               ����const�����У�    
////	printf("%d", num);
//
//	return 0;
//}
//
//#include<stdio.h>
//
//int main()
//
//{
//	const int n = 10;     //n�Ǳ��������г����ԣ���Ϊ������
//                                  //��覴�
//	int arr[10] = { 0 };
//
//	return 0;
//}

//#include<stdio.h>
//#define MAX 10    //#define����ı�ʶ�� ����.   ***������3��
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//
//}

////ö�ٳ���   ***������4��
////ö�ٹؼ���enum
//enum color
//{
//	red,
//	blue,
//	green 
//};
//
//int main()
//{
//	enum color color = red;
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>//  ��strlen��string length �����ַ�������
//
//int main()
//{
//	char arr1[] = "abc";//˫�����ַ���
//
//	//"abc" �� ��a����b����c����\0������\0���ַ���������־
//
//	char zifu[] = { 'a','b','c',0};//�����ŵ����ַ�  ,0Ϊ������־ ��0��һֱ����(�����)��ֱ��0.
//
////	printf("%s\n", arr1);
////	printf("%s\n", zifu);
//
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(zifu));
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));//����\32Ϊ�ַ� \ddd��ddd��ʾ1-3���˽�������
//	//�ʲ��ܳ���8��9    #��֪��Ϊʲô��8Ҳ�����У�����8������\ddd��#
//	//\xdd������ʮ����������.
//	return 0;
//}



//#define _CRT_SECURE_NO_WARINGS 1
//#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//	printf("����gsxô��(0/1):");
//	scanf_s("%d", &a);
//	if (a == 0)
//		printf("��ȥѧϰ\n");
//	if (a == 1)
//		printf("���˳���ʧ\n");
//	return 0;
//
//}


//         # ѭ����� #
//#include<stdio.h>
//
//int main()
//{
//	int line = 0;
//	printf("��ʼѧϰ\n");
//
//	
//	while (line < 21600)
//	{	printf("�ո�һ�յ�ѧϰ��%d\n", line);
//	line++;
//	}
//	if (line>= 21600)
//		printf("��û��\n");
//	return 0;
//}
 

 //    #����#              ����������ʱ�����á�
//#include<stdio.h>
//
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 200;
//	int b = 30;
//	int sum = 0;
//
//	sum = Add(a, b);
//	printf("sum:%d\n", sum);
//
//	return 0;
//
//}


////      # ���� #
//#include<stdio.h>
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//int arr[10]����һ�����ʮ���������ֵ�����,����Ϊ�����
////�����±�Ĭ�ϴ�0ʼ 0 1 2 3 4 5 6 7 8 9
////	printf("%d\n", arr[4]);//�±귽ʽ����Ԫ�ء�arr[�±�]
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	return 0;
//}

// �����
// + - * / %��ȡ������
//     << �� ����(�����ƣ��൱�ڳ���2)     >> �� ���ƣ������ƣ����Ʒ���
// �������ƣ�λ����
//  & ��λ��     | ��λ��    ^ ��λ���(6�Ϸ���)
// 
// ��0Ϊ�٣�1Ϊ�棩&�൱���ң�0+1Ϊ0��1+1Ϊ1�������ƣ�
// ����int a = 3;������011
//     int b = 5;������101
//     int c =a&b  �� 011 
//                    101 
//         c =        001�������ƣ�=1��ʮ���ƣ�     
// | �൱�ڻ�0+0=0;1+0=1;1+1=1;(������)
// ^ ��򣬲�ͬΪ�棬0+1=1��0+0=0;1+1=0;
// 
//��ֵ������
// = �� a=10  ��   += �� a=a+10����a+=10 ������ -= *= /= &= ^= |= >>= <<= �÷���ͬ����

//��Ŀ������
// ���߼�����������0Ϊ�٣���0Ϊ�棬a������㣬��a=a�� ��a=0�� ��0=1��Ĭ�ϣ�
//- ��ֵ    + ��ֵ    & ȡ��ַ   sizeof �����������ͳ��ȣ����������������ռ��С�����ֽ�Ϊ��λ��
//sizeof: printf("%d\n",sizeof(a)) / printf("%d\n",sizeof(int))
//���������С���ſ�ʡ�ԣ��������Ͳ���ʡ������   printf("%d\n",sizeof a)
//printf("%d\n",sizeof(arr));
// ���������ܴ�С��int arr[10]={0};�ܴ�С40��10��Ԫ�أ�ÿ��4��
//���������Ԫ�ظ���������=�ܴ�С/������С
//n=sizeof��arr��/ sizeof��arr[0]��;











