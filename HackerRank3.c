#include <stdio.h>

int main()
{
	int a;
    int b;
    float c;
    float d;
    
    
    scanf("%d", &a);
    scanf("%d", &b);
    int sum = a + b;
    int diff = a - b;
    printf("%d", sum);
    printf(" ");
    printf("%d\n", diff);
    
   
    scanf("%f", &c);
    scanf("%f", &d);
    float add = c + d;
    float minus = c - d;
    printf("%.1f", add);
    printf(" ");
    printf("%.1f", minus);
    return 0;
}
