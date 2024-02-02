
#include<stdio.h>
//函数返回类型最好用 char*  以便使用链式访问
//strcpy函数返回的是目标空间的起始地址
char* my_strcpy(char* a1, const char* a2)//const char* 让a2的内容固定不能改变，防止后面写错
{
	char* ret=a1;
	while (*a1++=*a2++)//在判断过程中进行赋值拷贝，妙极！！！
	{                  //运用了后置++ 先使用后++的特点，当拷贝到 \0 时停止，妙极！！
		;
	}
	return ret;
}
int main() {
	char a1[20] = { "#############" };
	char a2[] = { "hello world" };
	//strcpy在拷贝字符串的时候，会把原字符串的\0也拷贝过去
	
	printf("%s \n", my_strcpy(a1, a2));
	
	return 0;
}
