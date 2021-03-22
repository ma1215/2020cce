#include <stdio.h>
int main()
{
	char input[11];
	scanf("%s",&input);
	for(int i=0;i<11;i++)
	{
		if('A'<=input[i]&&input[i]<='Z') printf("%c",input[i]+32);
		else if('a'<=input[i]&&input[i]<='z')printf("%c",input[i]-32);
		else if('0'<=input[i]&&input[i]<='9')printf("%c",input[i]);
		else if(input[i]==NULL)break;
	}
	printf("\n");
}
