#include<stdio.h>

int main()
{
	int n,i,j,flag=0;
	printf("give the starting number : ");
	scanf("%d",&i);
	printf("give the n number : ");
	scanf("%i",&n);
	for(i;i<=n;i++)
	{
		flag=0;
		for(j=2;j<i;j++)
	{ if(i%j == 0){
	flag=1;
	break;}
	}
	if(flag == 0)
{
		printf("%i ",i);}
}
	return 0;
}
