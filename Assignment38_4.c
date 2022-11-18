// Recursive program to accept string from user and return its factorial

#include<stdio.h>

int Fact(int iNo)
{
	static int iFact=1;
	
	if(iNo>=1)
	{
		iFact=iFact*iNo;
		iNo--;
		Fact(iNo);
	}
	return iFact;
	
}

int main()
{
	int iRet=0;
	int iValue=0;
	
	printf("Enter a number \n");
	scanf("%d",&iValue);
	
	iRet=Fact(iValue);
	printf("Factorial is : %d",iRet);
	return 0;
}