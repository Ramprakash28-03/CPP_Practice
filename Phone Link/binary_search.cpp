#include<stdio.h>


int	binary_search(int arr[5], int high=4, int low=0,int x=40)
	{
		while(low<=high)
		{ 
		int mid =(low + high)/2;
		if(arr[mid]==x)
		return mid;
		if(arr[mid]>x)
		high=mid;
		else
		low=mid+1;
		return -1;
		
		}
	}
int main()
{
	int arr[5]={10,20,30,40,50};
	int x=40;
	int result;
	result= binary_search(arr,0,4,x);
	printf("the result is :%d" ,result);
	return 0;
}
