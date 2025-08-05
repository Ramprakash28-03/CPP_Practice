//#include<stdio.h>
//int main()
//{
//	int len_of_arr,arr[len_of_arr],i,j,k;
//	printf("Give the length of array : ");
//	scanf("%d",&len_of_arr);
//	for(i=1;i<=len_of_arr;i++)
//		{
//			printf("Give the %d input of array: ",i);
//			scanf("%d",&arr[i]);
//		}
// 
//	for(i=1;i<=len_of_arr;i++)
//	{
//		for(j=i+1;j<=len_of_arr;j++)
//		{
//			if(arr[i]==arr[j])
//			{
//				for(k=i;k<=len_of_arr;k++)
//				{
//					arr[k]=arr[k+1];
//					
//				}len_of_arr--;
//			}
//		}	
//	
//	}
//	for(i=1;i<=len_of_arr;i++)
//	{
//	printf("%d ",arr[i]);
//	}
//	return 0;
//}
#include <stdio.h>

int main()
{
    int len_of_arr, i, j, k;
    printf("Give the length of array: ");
    scanf("%d", &len_of_arr);
    int arr[len_of_arr];
    
    for(i = 0; i < len_of_arr; i++)
    {
        printf("Give the %d input of array: ", i + 1);
        scanf("%d", &arr[i]);
    }
 
    for(i = 0; i < len_of_arr; i++)
    {
        for(j = i + 1; j < len_of_arr; j++)
        {
            if(arr[i] == arr[j])
            {
                for(k = j; k < len_of_arr - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }
                len_of_arr--;
                j--; // Stay at the same index to check the new element
            }
        }    
    }

    printf("Array after removing duplicates: ");
    for(i = 0; i < len_of_arr; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}

