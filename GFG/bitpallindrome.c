#include<stdio.h>
void main()
{
	printf("Pleasee enter a number");
	int a;
	scanf("%d",&a);
	int arr[16];
	for(int k=15;k>=0;k--)
	{
		arr[k]=a%2;
		
		if(!(a>0))
		{
			arr[k]=2;
		}
		a=a/2;
	}
			int b=0;
	for(k=15;k>=0;k--)
	{
		if(arr[k]!=2)
			b++;
			else break;
	}
	for(k=0;k<b;k++)
	printf("%d",arr[16-b+k]);
	printf("\n");
	int flag=1;
	for(int i=0;i<b/2;i++)
		{if(arr[15-i]!=arr[16-b+i])
			flag=0;
		}
		if (flag==1)
		printf("1");
		else 
		printf("0");
}	
	