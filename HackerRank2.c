#include <stdio.h>

int main() 
{
    char ch;
    char s[40];
    char sen[90];
    scanf("%c", &ch);
    scanf("%s", s);
    scanf(" %[^\n]%*c", sen);
    
    printf("%c\n", ch);
    printf("%s\n",s);
    printf("%s", sen);
   
    return 0;
}
