#include <stdio.h>
#include <stdlib.h>
void toChange(char s[]);
int main(void) 
{
	char str[15];
	
	printf("Please enter a string: ");
	gets(str);
	toChange(str);
	printf ("%s\n",str);
	
	system ("pause");
	return 0;
}

void toChange(char s[])
{
	int i=0;
	while(s[i] != '\0')
	{
		if (s[i]>=65 && s[i]<=90)
			s[i]=s[i]+32;
		else
		if (s[i]>=97 && s[i]<=122)
			s[i]=s[i]-32;
		i++;
	}
}
