#include<iostream>
using namespace std;
int main()
{
	int arr[] = { 20,10,49,44};
	int *ptr=arr;
	for (int i=0; i<4;i++)
	{
//	cout<<*ptr<<endl;
//	ptr++;
	cout<<*arr+i;
	
	}
	cout<<*arr;
	return 0;
	
}
