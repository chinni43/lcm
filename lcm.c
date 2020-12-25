#include<stdio.h>
int lcm(int a,int b);
int main()
{
int n1,n2,l;
printf("input first number :");
scanf("%d",&n1);
printf("input second number :");
scanf("%d",&n2);
if(n1>n2)
l=lcm(n2,n1);
else
l=lcm(n1,n2);
printf("lcm of %d and %d =%d,n1,m2,l);
}
int lcm(int a,int b);
{
static int multiple=0;
multiple +=b;
if((multiple%a==0)&&(multiple%b==0))
{
return multiple;
}
else
{
return lcm(a,b);
}
