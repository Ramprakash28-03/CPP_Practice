#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i, j, max=0,count,length;
	char word[50],repeat_character;
	cout<<"Give the stirng : ";
	gets(word);
	length=strlen(word);
	for(i=0;i<length;i++)
	{	count=0;
		for(j=0;j<length;j++)
		{	
			if(word[i]==word[j])
			{	
				count++;
			}
		}
		if(max<count)
		{
				max=count;
			repeat_character=word[i];	
		}
	
	}
	cout<<"The max number of character in given string is : "<<repeat_character<<" and repeatance of this character is : "<<max;
	return 0;
}
