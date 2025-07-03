#include<stdio.h>
int main()
{
int a,b,c,d,stmt_1,stmt_2;
printf("the value of a:");
scanf("%d",&a);
printf("\nthe value of b:");
scanf("%d",&b);
printf("\nthe value of c:");
scanf("%d",&c);
printf("\nthe value of d:");
scanf("%d",&d);
stmt_1=c>d;
printf("output of stmt_1:%d\n",stmt_1);
stmt_2=a>b;
printf("output of stmt_2:%d\n",stmt_2);
printf("stmt_1 && stmt_2 :%d",stmt_1 && stmt_2);
return 0;
}

