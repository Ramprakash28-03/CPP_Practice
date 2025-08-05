#include<stdio.h>
#include<string.h>
int main ()
{
	int i,j,num;
	char ch[50],sh[50],rh[50];
	printf("Give the length of string:");
	scanf("%d",&num);
	printf("Give 1st the string :");
	scanf("%s",&ch);
	printf("Give the second string : ");
	scanf("%s",&sh);
	for(i=0;i<num;i++)
	{
		for(j=0;j<num;j++){
			if(ch[i]==sh[j])
			{
				rh[i]=ch[i];
				break;
			}
		}
	}
	
	if(strlen(rh) == strlen(ch))
	printf("This is anagram ");
	else 
	printf("This is not anagram ");
	return 0;
}
