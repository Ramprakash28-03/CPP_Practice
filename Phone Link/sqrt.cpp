#include<stdio.h>
int main()
{
	int num,half_of_num,i;
	printf("Give the number :");
	scanf("%d",&num);
	half_of_num = num/2;
	for(i=1;i<=half_of_num;i++)
	{
			if(i*i == num){
			printf(" sqrt of the number is : %d", i);
			break;
		}

		}
			if(i*i != num)
			printf("This is not perfect square number");
	
		
		return 0;
}
