#include<stdio.h>

int mysize(const char *s) {
	
	const char *p = s;
	
	while(*p !='\0' )
	++p;

	return (p - s) ;

	}

char *mystrcpy(char *p,char *s) {

	char *t = p;

	while(*p++ = *s++);

	return t;
}

int main() {

	char *str[] = {"git repository",
			"git hub"};
	int i;
	char st[30];

	for(i = 0; i < 2; i++) 
	printf("length of string is %s = %d\n",str[i],mysize(str[i]));

	printf("string copied %s\n",mystrcpy(st,"hello world !!!"));
	
	printf("this is hyderabad\n");	
	return 0;
}
