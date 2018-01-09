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

char *mystrcat(char *p,char *s) {

	char *t = p;

	while(*t != '\0')
	t ++;

	while((*t  = *s) != '\0') {
	t ++;
	s ++;
	}

	return p;

}
int main() {

	char *str[] = {"git repository",
			"git hub"};
	int i;
	char st[30];

	char arr[30] = "hello" ,arr1[10] = "hai";

	

	for(i = 0; i < 2; i++) 
	printf("length of string is %s = %d\n",str[i],mysize(str[i]));

	printf("string copied %s\n",mystrcpy(st,"hello world !!!"));

	printf("string is copied %s\n",mystrcat(arr,arr1));
	
	printf("this is hyderabad\n");	

	printf("good morning\n");

	printf("good evening\n");

	return 0;
}
