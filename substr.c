#include<stdio.h>
#include<string.h>
void main()
{
	int i=0,l1,l2,f,j=0;
	char s[20],s1[20];
	printf("Enter the string:");
	gets(s);
	printf("Enter the substring:");
	gets (s1);
	l1=strlen(s);
	l2=strlen(s1);
	while((i<l1)&&(j<l2))
		{	if(s[i]!=s1[j])
				{	f=0;
					i++;
					continue;
				}
			else
				{	f=1;
					j++;
					i++;
				}
		}
	if(f==1)
		printf("Sub string is present\n");
	else
		printf("Sub string is not present\n");
}
