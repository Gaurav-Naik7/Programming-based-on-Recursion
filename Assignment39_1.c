// Recursive program to accept string from user and count white spaces

#include<stdio.h>

int WhiteSpace(char *str)
{
	static int iCnt=0;
	
	if(*str!='\0')
	{
		if(*str==' ')
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
	printf("Number of characters is : %d",iRet);
	return 0;
}