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

//直接的值（0,1，100等）字面常量。  ***常量（1）
//num等为变量

//#include <stdio.h>
//int main()
//{
//	const int num = 4;//const→常属性，给变量设置一个固定的值。   ***常量（2）
//
//	printf("%d\n", num);
//
////	num = 8;
////                               （无const可运行）    
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
//	const int n = 10;     //n是变量但是有常属性，称为常变量
//                                  //有瑕疵
//	int arr[10] = { 0 };
//
//	return 0;
//}

//#include<stdio.h>
//#define MAX 10    //#define定义的标识符 常量.   ***常量（3）
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//
//}

////枚举常量   ***常量（4）
////枚举关键→enum
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
//#include <string.h>//  →strlen→string length 计算字符串长度
//
//int main()
//{
//	char arr1[] = "abc";//双引号字符串
//
//	//"abc" → ‘a’‘b’‘c’‘\0’→‘\0’字符串结束标志
//
//	char zifu[] = { 'a','b','c',0};//单引号单个字符  ,0为结束标志 无0则一直向下(随机数)，直到0.
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
//	printf("%d\n", strlen("c:\test\32\test.c"));//这里\32为字符 \ddd，ddd表示1-3个八进制数字
//	//故不能出现8，9    #不知道为什么有8也能运行，可能8不计入\ddd内#
//	//\xdd→两个十六进制数字.
//	return 0;
//}



//#define _CRT_SECURE_NO_WARINGS 1
//#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//	printf("想买gsx么？(0/1):");
//	scanf_s("%d", &a);
//	if (a == 0)
//		printf("滚去学习\n");
//	if (a == 1)
//		printf("那人车两失\n");
//	return 0;
//
//}


//         # 循环语句 #
//#include<stdio.h>
//
//int main()
//{
//	int line = 0;
//	printf("开始学习\n");
//
//	
//	while (line < 21600)
//	{	printf("日复一日的学习：%d\n", line);
//	line++;
//	}
//	if (line>= 21600)
//		printf("人没了\n");
//	return 0;
//}
 

 //    #函数#              【函数复杂时更适用】
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


////      # 数组 #
//#include<stdio.h>
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//int arr[10]定义一个存放十个整数数字的数组,后面为存放内
////数组下标默认从0始 0 1 2 3 4 5 6 7 8 9
////	printf("%d\n", arr[4]);//下标方式访问元素→arr[下标]
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	return 0;
//}

// 运算符
// + - * / %（取余数）
//     << → 左移(二进制，相当于乘以2)     >> → 右移（二进制，左移反）
// （二进制）位操作
//  & 按位与     | 按位或    ^ 按位异或(6上符号)
// 
// （0为假，1为真）&相当于且，0+1为0，1+1为1（二进制）
// 例：int a = 3;二进制011
//     int b = 5;二进制101
//     int c =a&b  → 011 
//                    101 
//         c =        001（二进制）=1（十进制）     
// | 相当于或，0+0=0;1+0=1;1+1=1;(二进制)
// ^ 异或，不同为真，0+1=1，0+0=0;1+1=0;
// 
//赋值操作符
// = → a=10  ；   += → a=a+10等于a+=10 （另有 -= *= /= &= ^= |= >>= <<= 用法相同）；

//单目操作符
// ！逻辑反操作（以0为假，非0为真，a任意非零，则a=a， ！a=0， ！0=1（默认）
//- 负值    + 正值    & 取地址   sizeof 操作数的类型长度（计算变量或类型所占大小，以字节为单位）
//sizeof: printf("%d\n",sizeof(a)) / printf("%d\n",sizeof(int))
//计算变量大小括号可省略，计算类型不可省略括号   printf("%d\n",sizeof a)
//printf("%d\n",sizeof(arr));
// 计算数组总大小，int arr[10]={0};总大小40（10个元素，每个4）
//计算数组的元素个数，个数=总大小/单个大小
//n=sizeof（arr）/ sizeof（arr[0]）;











