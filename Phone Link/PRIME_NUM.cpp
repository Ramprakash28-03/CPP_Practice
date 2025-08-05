#include<stdio.h>
int main()
{
	int num,i,check=0;
	printf("Give the number :");
	scanf("%d",&num);
	for(i=2;i<num;i++){
		if(num%i == 0)
		{
		check=0;
		break;}
		else 
		check=1;
	}
	if(check == 1)
	printf("this is prime number.");
	else
	printf("This is not prime number.");
	return 0; 
}
