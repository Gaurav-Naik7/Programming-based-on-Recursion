// Recursive program to display below pattern
// 5 * 4 * 3 * 2 * 1 *

#include<stdio.h>

void Display(int iNo)
{
	if(iNo>=1)
	{
		printf("%d\t*\t",iNo);
		iNo--;
		Display(iNo);
	}
}

int main()
{
	int iValue=0;
	
	printf("Enter a number \n");
	scanf("%d",&iValue);
	
	Display(iValue);
	return 0;
}