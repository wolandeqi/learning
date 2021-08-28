//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
////std→standard 标准      io→input&output
//
//int main()/*main——主函数，程序入口，有且仅有一个
//            int——整型，main前int表示main函数调用之后返回一个整型值*/
//{
//	printf("hh\n");//printf→print function    （印刷功能）打印函数
//
//	//库函数--c语言本身提供的函数
//
//	return 0;//返回0
//}

//#include <stdio.h>

//int main()
//{
//	char ch = 'A';
//	printf("%c", ch);//%c—打印字符格式的数据
//	return 0;
//}
//
/*  char  字符类型  单引号→字符  双引号→字符串 short→短整型  long→长整型 float→单精度浮点数
* double→双精度浮点数
*输出字符→%c    字符串→%s  整型→%d  打印浮点型(小数)→%f  以地址形式打印→%p
* 打印十六进制数字→%x
*/

//int main()
//{
//	int age = 20;
//
//	printf("%d", age);//%d—打印整型十进制数据
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
//	short age = 20;//向内存申请申请两个字节（16bit位），用来存放20
//
//	float weight = 63.2f;//向内存申请4个字节，存放小数.
//
//	printf("%d\n", age);
//	printf("%f", weight);
//
//	return 0;
//}

//           《 加法 》

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int num1 = 0;//全局变量→定义在{}之外的变量

int main()
{
	int num2 = 0;//局部变量→定义在{}内
		//局部变量和全局变量可以相同，相同时，局部变量优先,但局部变量只能在所在{}中使用。
	//全局变量作用于整个工程
	//局部变量与全局变量不建议相同，容易误会产生bug.

	int sum = 0; //  √  正确位置
    //变量（sum）应在等式前 
	
	scanf("%d%d",&num1,&num2);//&→取地址符
    
	sum = num1 + num2;
	//int sum = 0;  X   错误位置

	printf("sum=%d\n", sum);

	return 0;
} 
 
      //extern  声明外部变量.