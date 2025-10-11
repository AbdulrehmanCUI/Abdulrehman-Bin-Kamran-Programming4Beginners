#include <stdio.h>
int main(){
    int num;
    
    scanf("%d", &num);
    
    int first = num / 10000;
    
    int second_1 = num / 1000;
    int second = second_1 % 10;
    
    int third_1 = num / 100;
    int third = third_1 % 10;
    
    int fourth_1 = num % 100;
    int fourth = fourth_1 / 10;
    
    int fifth = num % 10;
    
    int sum = first + second + third + fourth + fifth;
    printf("%d", sum);
    return 0; 
}
