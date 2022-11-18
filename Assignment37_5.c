// Recursive program to display below pattern
// a b c d e f

#include<stdio.h>

void Display(int iNo)
{
	static char cValue='a';
		
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