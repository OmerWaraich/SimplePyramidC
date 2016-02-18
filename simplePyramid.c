#include <stdio.h>
int main()
{
	int i = 0;
	int space = 0;
	int rows = 0;
	int k = 0;
	printf("Enter the number of rows for pyramid :");
	scanf("%d", &rows);

	for(i = 1; i <= rows; i++)
	{
		for(space = 1; space<=rows-i; ++space)
		{
			printf("  ");
		}	
		while(k != 2 * i -1)
		{
			printf("* ");
			++k;
		}
		k=0;
		printf("\n");
	}
	return 0;
}