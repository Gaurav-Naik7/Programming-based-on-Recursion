// Recursive program to accept number from user and return summation of its digits 


#include<stdio.h>

int Sum(int iNo)
{
	static int iSum=0;
	int iDigit=0;
	
	if(iNo!=0)
	{
		iDigit=iNo%10;
		iSum=iSum+iDigit;
		iNo=iNo/10;
		Sum(iNo);
	}
	return iSum;
}

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter a number \n");
	scanf("%d",&iValue);
	
	iRet=Sum(iValue);
	printf("Sum of digits is : %d",iRet);
	return 0;
}