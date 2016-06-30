#include<stdio.h>
#include<conio.h>
void main()
{
int n,a,b=0,c;
clrscr();
printf("Enter the value:");
scanf("%d",&n);
c=n;
while(n)
{
a=n%10;
n=n/10;
b=b*10+a;
}
if(c==b)
{
printf("palindrome");
}
else
printf("Not a palindrome");
getch();
}
