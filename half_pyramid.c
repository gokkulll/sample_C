#include<stdio.h>
#include<stdlib.h>
int main()
{
	int rows,i,j;
	//int columns, spaces;
	printf("Enter the number of rows:");
	scanf("%d", &rows);
	for(i=0;i<=rows;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
