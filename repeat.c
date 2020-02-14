#include<stdio.h>
#include<string.h>

void main()
{
	int i,j,count;
	char str[50];
	printf("Enter a string: ");
	gets(str);
	for(i=0;i<=strlen(str);)
	{
		count=1;
		for(j=i-1;j>=0;j--)
		{
			if(str[i]==str[j])
				goto cmp;
		}
		for(j=i+1;j<=strlen(str);j++)
		{
			if(str[i]==str[j])
			{
				count++;
			}
		}
		if(count>1)
			printf("\n%c is repeated %d times.",str[i],count);			
		cmp: i++;
	}
}



