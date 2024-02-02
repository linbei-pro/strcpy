
#include<stdio.h>

void my_strcpy(char* a1, const char* a2)//const char* 让a2的内容固定不能改变，防止后面写错
{
	while (*a1++=*a2++)//在判断过程中进行赋值拷贝，妙极！！！
	{                  //运用了后置++ 先使用后++的特点，当拷贝到 \0 时停止，妙极！！
		;
	}
}
int main() {
	char a1[20] = { "#############" };
	char a2[] = { "hello world" };
	my_strcpy(a1, a2);
	printf("%s \n", a1);
	printf("%s ", a2);
	return 0;
}