#include<stdio.h>
int main()
{
	int num_size,i,min,max,j,k;
	printf("Give the size of array elements :");
	scanf("%d", &num_size);
	int nums[num_size];
	printf("The elements in array : ");
	for(i=1;i<=num_size;i++)
	{
		scanf("%d", &nums[i]);
	}
	min=nums[1];
	for(j=1;j<=num_size;j++)
	{
		if(min>nums[j])
		min=nums[j];
		
	}
	max=nums[1];
		for(k=1;k<=num_size;k++)
	{
		if(max<nums[k])
		max=nums[k];
		
	}
	printf("The minimum number in the array is : %d\n",min);
	printf("The maximum number in the array is : %d ",max);
	return 0;
}
