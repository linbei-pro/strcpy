
#include<stdio.h>

void my_strcpy(char* a1, const char* a2)//const char* ��a2�����ݹ̶����ܸı䣬��ֹ����д��
{
	while (*a1++=*a2++)//���жϹ����н��и�ֵ�������������
	{                  //�����˺���++ ��ʹ�ú�++���ص㣬�������� \0 ʱֹͣ�������
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