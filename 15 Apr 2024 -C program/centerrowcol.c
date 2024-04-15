#include<stdio.h>
int main()
{
	int i,j,row,col,centerrow,centercol;
	printf("Enter the row::");
	scanf("%d",&row);
	printf("Enter the col::");
	scanf("%d",&col);
	
	centerrow=(row+1)/2;
	centercol=(col+1)/2;
	
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=col;j++)
		{
			if(centerrow==i || centercol==j)
			{
				printf("0");
			}
			else if((col%2==0 && centercol+1==j) || (row%2==0 && centerrow+1==i))
			{
				printf("0");
			}
			else
			printf("1");
		}
		printf("\n");
	}
}
