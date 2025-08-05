#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i,j,length1,length2,found=0,not_found;
	char first_word[50],second_word[50];
	cout<<"Give the first word of string ";
	gets(first_word);
	cout<<"Give second word of string : ";
	gets(second_word);
	length1=strlen(first_word);
	length2=strlen(second_word);
	if(length1==length2)
	{
		for(i=0;i<length1;i++)
		{
			found=0;
			for(j=0;j<length1;j++)
			{	found=0;
				if(first_word[i]==second_word[j])
				{
					found=1;
					break;
				}
			}
			if(found==0)
			{
				not_found=1;
			}
		}
	}
	if(not_found==1)
	cout<<"This not anagram";
	else
	cout<<"This is anagram";
	return 0;
	
	
}
