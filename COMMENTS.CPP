#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("enter A value");
scanf("%d",&a);
printf("enter B value");
scanf("%d",&b);
printf("\nA value:%d",a);
printf("\nb value:%d",b);
a=a+b;
b=a-b;
a=a-b;
printf("\n after swaping");
printf("\n A value:%d",a);
printf("\n B value:%d",a);
getch();
}