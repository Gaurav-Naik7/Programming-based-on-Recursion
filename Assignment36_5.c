// Recursive program to display below pattern
// a b c d e f

#include<stdio.h>

void Display()
{
	static char cValue='a';
	
	if(cValue<='f')
	{
		printf("%c\t",cValue);
		cValue++;
		Display();
	}
}

int main()
{
	Display();
	return 0;
}