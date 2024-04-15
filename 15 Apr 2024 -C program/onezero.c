#include<stdio.h>
int main()
{
	int i,j,row,col,k=1;
	printf("ENter the row::");
	scanf("%d",&row);
	printf("Enter the col::");
	scanf("%d",&col);
	
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=col;j++)
		{
			if(k==1)
			printf("1");
			else
			printf("0");
			
			k*=-1;
		}
	
	if(col%2==0)
	{
		k*=-1;
	}
	printf("\n");
}
}
