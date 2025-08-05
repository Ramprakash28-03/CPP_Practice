#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i,j,length,flag=0,n;
	char ch[50];
	cout<<"Give the word which you want to check the first occurance of repeated letter : ";
	gets(ch);
	length=strlen(ch);
	for(i=0;i<length;i++)
	{ for(j=i+1;j<length;j++)
		{	if(ch[i]==ch[j])
			{	flag=1;
			//	flag++;
				break;
			}
		
		}
		if(flag==1)
		break;
	}
	cout<<"The first repeated character is : "<<ch[i];
	return 0;
}
