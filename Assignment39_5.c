// Recursive program to accept number from user and return reverse number 

#include<stdio.h>

int Reverse(int iNo)
{
	int iDigit=0;
	static int iRev=0;
	
	if(iNo!=0)
	{
		iDigit=iNo%10;
		iRev=iRev*10+iDigit;
		iNo=iNo/10;
		Reverse(iNo);
	}
	return iRev;
}

int main()
{
	int iRet=0;
	int iValue=0;
	
	printf("Enter a number \n");
	scanf("%d",&iValue);
	
	iRet=Reverse(iValue);
	printf("Reverse is : %d",iRet);
	
	return 0;
}