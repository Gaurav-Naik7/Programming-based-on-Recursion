// Recursive program to accept string from user and return product of digits

#include<stdio.h>

int Mult(int iNo)
{
	static int iMult=1;
	int iDigit=0;
	
	if(iNo!=0)
	{
		iDigit=iNo%10;
		iMult=iMult*iDigit;
		iNo=iNo/10;
		Mult(iNo);
	}
	return iMult;
	
}

int main()
{
	int iRet=0;
	int iValue=0;
	
	printf("Enter a number \n");
	scanf("%d",&iValue);
	
	iRet=Mult(iValue);
	printf("Product of digits is is : %d",iRet);
	return 0;
}