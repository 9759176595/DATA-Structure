#include<stdio.h>
int main()
{
	int n,temp;
	printf("Enter the no of array elements:\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements:\n");
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&arr[i]);
	}
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < n-1; j++)
		{
			if(arr[j]>arr[j+1])
				{temp=arr[j];
			    arr[j]=arr[j+1];
			    arr[j+1]=temp;
			}
		}
	}
	printf("Sorted elements are:\n");
	for (int i = 0; i < n; i++)
	{
		printf("%d\n",arr[i] );
	}

}