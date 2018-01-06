#include<stdio.h>

int mystrlen(char *s) {
	
	char *p = s;
	
	while(*p !='\0' )
	++p;

	return (p - s) ;

	}

int main() {

	char *str[] = {"git repository",
			"git hub"};
	int i;

	for(i = 0; i < 2; i++) 
	printf("length of string is %s = %d\n",str[i],mystrlen(str[i]));

	return 0;
}
