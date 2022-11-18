// Recursive program to accept string from user and count number of characters 

#include<stdio.h>

int Strlen(char *str)
{
	int iCnt=0;
	while(*str!='\0')
	{
		iCnt++;
		str++;
	}
	return iCnt;
}

int main()
{
	int iRet=0;
	char arr[20];
	
	printf("Enter a string \n");
	scanf("%s",arr);
	
	iRet=Strlen(arr);
	printf("Number of characters is : %d",iRet);
	return 0;
}