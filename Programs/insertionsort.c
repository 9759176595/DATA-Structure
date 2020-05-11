#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[4]={5,4,6,2};
	int i,key;
	for (int j = 2; j < 4; j++)
	{	
		key=arr[j];
		i=j-1;
		while(i>0&& arr[i]>key)
		{
			arr[i+1]=arr[i];
			i=i-1;
		}
		arr[i+1]=key;
		//printf("the key element is %d\n",arr[i+1] );
	
	}
	for (int i = 0; i < 4; i++)
	{
			printf("%d\n",arr[i] );
	}


	
}
