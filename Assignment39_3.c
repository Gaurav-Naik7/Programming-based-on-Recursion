// Recursive program to accept string from user and count small characters

#include<stdio.h>

int WhiteSpace(char *str)
{
	static int iCnt=0;
	
	if(*str!='\0')
	{
		if((*str>='a')&&(*str<='z'))
		{
			iCnt++;
		}
		str++;
		WhiteSpace(str);
	}
	return iCnt;
}

int main()
{
	int iRet=0;
	char arr[20];
	
	printf("Enter a string \n");
	scanf("%[^'\n']s",arr);
	
	iRet=WhiteSpace(arr);
	printf("Number of small characters is : %d",iRet);
	return 0;
}