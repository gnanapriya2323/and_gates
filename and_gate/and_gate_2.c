#include<stdio.h>
int main()
{
	int a=56;
	int b=4;
	int c=67;
	int d=46;
	int stmt_1,stmt_2;
	stmt_1=a<b;
	printf("output of stmt_1:%d\n",stmt_1);
	stmt_2=c>d;
	printf("output of stmt_2:%d\n",stmt_2);
	printf("stmt_1 && stmt_2 :%d",stmt_1 && stmt_2);
	return 0;
}

