#include<stdio.h>

int main()
{
	int n,i,j,flag=0,count=0;
	printf("give the n number : ");
	scanf("%i",&n);
	for(i=2;count <n;i++)
	{
		flag=0;
		for(j=2;j<i;j++)
	{ if(i%j == 0){
	flag=1;
	break;}
	}
	if(flag == 0)
{    count = count + 1;

	}
}

{ printf("nth prime number is : ");
printf("%i",i-1);
	}	return 0;
}
