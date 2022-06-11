// A,c,E,g,I, ... n
// 65   
#include<stdio.h>
int main()
{
	int ch,i;
	for(i=0;i<20;i++)
	{
		if(i%4==0)
			printf("%c",i+65);
		else
			printf("%c",i+32+65);
		i++;
	}
	printf("\nHello");
	
}