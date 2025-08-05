#include<iostream>
using namespace std;
int main()
{
	int arr[4][4]= {
	{3,2,3,4},
	{4,6,6,6},
	{3,2,3,4},
	{4,6,6,6}
	};
	cout<< "the elements in array is"<<endl;
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		cout<<arr[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}
