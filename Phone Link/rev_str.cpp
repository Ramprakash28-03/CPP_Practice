//#include<stdio.h>
//int main()
//{
//	int num,i;
//	char ch[50],chh;
//	printf("Give the length of string :");
//	scanf("%d",&num);
//	printf("Give the string :");
//	scanf("%s",&ch);
//	for(i=0;i<num;i++)
//	{
//		chh=ch[num-i];
//		ch[i]=chh;
//		
//	}
//	printf("The reverse of string is :");
//	for(i=0;i<=num;i++) {
//	
//	printf("%c",ch[i]);}
//	return 0;
//}
#include<stdio.h>
#include<string.h>
int main()
{
  char	ch[50],sh[50];
	printf("Give the first and second string :");
	scanf("%c",&ch);
	printf("The length of string : %d", strlen(ch) );
	return 0;
	
}
