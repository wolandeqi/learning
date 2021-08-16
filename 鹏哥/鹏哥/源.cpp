//#define _crt_secure_no_warnings 1
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
#include <stdio.h>
 
int main()
{
	short age = 20;

	printf("%d", age);
	return 0;
}
