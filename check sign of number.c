#include<stdio.h>
int main()
{
	float a;
	printf("Enter a number ");
	scanf("%f",&a);
	if(a>0)
	{
		printf("The number entered %f is a +ve number",a);
	}
	else 
	{
		if(a<0) {
		
		printf("The number entered %f is a -ve number",a);
	}
	else
{
	printf("The entered number is zero");
}
	}
return 0;	
}