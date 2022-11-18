// Recursive program to display below pattern
// A B C D E F

#include<stdio.h>

void Display(int iNo)
{
	static char cValue='A';
		
	if(iNo>0)
	{
		printf("%c\t",cValue);
		cValue++;
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