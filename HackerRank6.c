#include <stdio.h>

int main() 
{
    int lowerlimit;
    int upperlimit;
    int i = 1;
    
    
    scanf("%d", &lowerlimit);
    
    scanf("%d", &upperlimit);
    
    for(i = lowerlimit; i<= upperlimit ;i++){
        if(i == 1){
            printf("one\n");
        }else if(i == 2){
            printf("two\n");
        }else if(i == 3){
            printf("three\n");
        }else if(i == 4){
            printf("four\n");
        }else if(i == 5){
            printf("five\n");
        }else if(i == 6){
            printf("six\n");
        }else if(i == 7){
            printf("seven\n");
        }else if(i == 8){
            printf("eight\n");
        }else if(i == 9){
            printf("nine\n");
        }else if(i > 9 && i % 2 == 0){
            printf("even\n");
        }else if(i > 9 && i % 2 != 0){
            printf("odd\n");
        }
    }
}
