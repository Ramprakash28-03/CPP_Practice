#include<stdio.h>
int main()
{
	int i,j,k,num,ascii;
	char ch='A';
	printf("Give the number of levels of pyramid :");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		for(j=i;j<=num;j++){
			printf(" ");
			
		}
		for(k=num-i;k<num;k++)
		{
			printf("%c",ch);
			printf(" ");
			ch++;
			
		}
		printf("\n");
	}
	return 0;
}
