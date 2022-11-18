// Recursive program to accept number from user and return largest digit

#include<stdio.h>

int Max(int iNo)
{
	static int iMax=0;
	int iDigit=0;
	
	if(iNo!=0)
	{
		iDigit=iNo%10;
		if(iDigit>iMax)
		{
			iMax=iDigit;
		}
		iNo=iNo/10;
		Max(iNo);
	}
	return iMax;
}

int main()
{
	int iRet=0;
	int iValue=0;
	
	printf("Enter a number \n");
	scanf("%d",&iValue);
	
	iRet=Max(iValue);
	printf("Largest digit is : %d",iRet);
	
	return 0;
}