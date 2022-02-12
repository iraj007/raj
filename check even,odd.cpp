#include<stdio.h>
int main()
{
	int a;
	printf("Enter a number");
	scanf("%d",&a);
switch (a%2)
{ 
case 0:
printf("The entered number %d is an Even number",a);
break;
case 1:
printf("The entered number %d is an Odd number",a);
break;
}
}