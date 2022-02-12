 #include<math.h>
 #include<stdio.h>
 int main()
 {
 	float r,d,c,ar;
 	printf("Enter the radius");
 	scanf("%f",&r);
 	d=2*r;
 	printf("The diameter of the circle is %f \n",d);
 	c=2*3.14*r;
 	printf("The circumference of the circle is %f \n",c);
 	ar=3.14*pow(r,2);
 	printf("The area of teh circle is %f \n ", ar);
 	 
 	 return 0;
}