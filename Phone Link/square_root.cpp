#include<stdio.h>
int main()
{
	float i,num;
	printf("Give the number to find the square root of number : ");
	scanf("%f",&num);
	for(i=.001;i*i<num;i=i+.001);
	printf("\n the square root of number is : %f ",i);
	return 0;
	
	
}
