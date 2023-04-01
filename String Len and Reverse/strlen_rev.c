#include<stdio.h>
#include<string.h>

int slen(char* a)
{
	int i = 0;
	while(*a != '\0'){
		a++;
		i++;
	}
	return(i);
}

char* srev(char* b)
{
	char temp;
	char* p;
	int i,l;
	l = slen(b);
	for(i=0;i<l/2;i++){
		temp = b[i];
		b[i] = b[l-i-1];
		b[l-i-1] = temp;		
	}		
	
}

void main()
{
	char str[50];
	printf("\nEnter your String: ");
	scanf("%s",str);
	printf("%s\n",str);
	printf("%d\n",slen(str));
	srev(str);
	printf("%s\n",str);
}
