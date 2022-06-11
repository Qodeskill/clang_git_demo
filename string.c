//           []           
// %s       128           space not allow  
// [^\n]    128           space allow  
//gets      128     X
 //           vrsion 5.0>
//string char array
#include<stdio.h>
int main()
{
    char str;   //128
    printf("Enter string : ");
    scanf("%s",str); //^ caret / cap
    // gets(str);
    printf("\n string : %s",str);
    // puts(str);
}

/*
0   1   2   3   4   5
s   k   i   l   l   '\0'

*/  