#include <stdio.h>               
#include <string.h>
char* f1(char *t, char *s, char *a, char *b) 
{
	while (*s) {
		char *p = s;
		char *q = a;
		while (*p && *q && *p == *q) {
			p++, q++;
		}
		if (!*q) { 
			strcpy(t, b);
			&s = &p;
			t += strlen(b);
		} else {
			*t++ = *s++;
		}
	}
	*t = 0;
}
int main() 
{
	char t[100];
	char s[ ] = "abcdefgabcdeabde";
	char a[ ] = "abc";
	char b[ ] = "1234";	
	f1(t, s, a, b);
	printf("%s\n%s", t,s);	
	return 0;
}

