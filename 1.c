//Accept 10 elements in an array  and display them 9th element to 0th element .
 
#include<stdio.h>
int main()
{
	int arr[10];
	for(int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}	
	
	for(int i=9;i>0;i--)
	{
		printf("%d",arr[i]);
	}	
	//printf("%d",arr[i]);
	return 0;
}