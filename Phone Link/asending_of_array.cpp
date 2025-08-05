#include<stdio.h>
int main()
{
	int num_size,i,j,k;
	printf("Give the number size of array :");
	scanf("%d",&num_size);
	int arr_input[num_size];
	printf("Give the input in array :");
	for(i=1;i<=num_size;i++)
	{
		scanf("%d",&arr_input[i]);
	}
	for(i=1;i<=num_size;i++){
		for(j=num_size;j>i;j--)
		{
			if(arr_input[i]>arr_input[j])
			{  k=arr_input[i];
				arr_input[i]=arr_input[j];
				arr_input[j]=k;
			}
		}
	}
	printf("The asending order of the elements of array is :");
	for(i=1;i<=num_size;i++){
	
	printf(" %d ",arr_input[i]);
} 
return 0;

}
