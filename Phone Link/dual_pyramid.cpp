#include<stdio.h>
int main()
{
	int i,j,k,ascii,num,l,m;
	printf("Give the levels of pyramid: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		for(j=i;j<=num;j++)
		{
			printf(" ");
			
		}
		for(k=0;k<i;k++)
		{	ascii=65;
			printf("%c",ascii+k);
			printf(" ");
		}
		for(l=0+2*i-1;l<=2*num-1;l++){
			printf(" ");
			
		}
		printf("*");
		if(i!=num){
		
		for(j=2;j<2*i-1;j++){
			printf(" ");
			
		}}
		if(i!=1 && i!=num){
			printf("*");
		}
		if(i==num)
		{
			for(m=1;m<num;m++)
			{	printf(" ");
				printf("*");
			}
		}
		printf("\n");
		
	}
	return 0;
}
