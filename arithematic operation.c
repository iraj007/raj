#include<stdio.h>
int main()
{ 
float a,b, sum, diff, multi,div, rem;
printf("Enter two numbers ");
scanf("%f %f", &a ,&b);
sum=a+b;
printf("THE sum of two numbers %f %f is %f \n",a,b,sum);
diff=a-b;
printf("THe difference of the two numbers is %f \n", diff);
multi=a*b;
printf("THE multiplication of the two numbers is %f \n", multi);
div=a/b;
printf("THE  division of the two numbers is %f \n",div);
rem=a%b;
printf("THE remainder of the two numbers is %f \n",rem);
	return 0;
}
	