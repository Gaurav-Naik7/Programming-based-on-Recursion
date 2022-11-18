// Recursive program to accept number from user and return smallest digit

#include<stdio.h>

int Min(int iNo)
{
	static int iMin=9;
	int iDigit=0;
	
	if(iNo!=0)
	{
		iDigit=iNo%10;
		if(iDigit<iMin)
		{
			iMin=iDigit;
		}
		iNo=iNo/10;
		Min(iNo);
	}
	return iMin;
}

int main()
{
	int iRet=0;
	int iValue=0;
	
	printf("Enter a number \n");
	scanf("%d",&iValue);
	
	iRet=Min(iValue);
	printf("Smallest digit is : %d",iRet);
	
	return 0;
}