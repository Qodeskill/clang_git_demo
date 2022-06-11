#include<stdio.h>
int main()
{
	char str;
	printf("Enter string : ");
	gets(str);

	printf("\n str : %s",str);
	return 0;
}

/*
	array space char 
%s   	T	X   128
%s   	F	X   19

	array space char 
%[^\n] 	T	T   128
%[^\n] 	F	T   19

gets	T	T   128	

	0 1 2 3 4 5 6 7 8 9
	s k i l l q o d e \0
		
*/