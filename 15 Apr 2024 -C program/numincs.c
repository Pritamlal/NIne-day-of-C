#include<stdio.h>
int main()
{
	int i,j,row,col,num=1;
	printf("Enter the row::");
	scanf("%d",&row);
	printf("Enter the col::");
	scanf("%d",&col);
	for(i=1;i<=row;i++)
	{
		for(j=col;j>col-i;j--)
		{
			printf("%d",j);
		}
		
		for(j=1;j<=col-i;j++)
		{
			printf("%d",(row-i+1));
		}
		printf("\n");
	}
}
