#include<stdio.h>
int main()
{
int a,s,d,f,stmt_1,stmt_2;
printf("the value of a:");
scanf("%d",&a);
printf("\nthe value of s:");
scanf("%d",&s);
printf("\nthe value of d:");
scanf("%d",&d);
printf("\nthe value of f:");
scanf("%d",&f);
stmt_1=a>f;
printf("output of stmt_1:%d\n",stmt_1);
stmt_2=s<d;
printf("output of stmt_2:%d\n",stmt_2);
printf("stmt_1 && stmt_2 :%d",stmt_1 && stmt_2);
return 0;
}

