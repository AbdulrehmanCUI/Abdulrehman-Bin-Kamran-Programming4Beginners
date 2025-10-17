#include <stdio.h>

int max_of_four(int a, int b, int c, int d){
	if(a > b && a > c && a > d){
		printf("%d",a);
		return a;
	}else if(b > a && b > c && b > d){
		printf("%d", b);
		return b;
	}else if(c > a && c > b && c > d){
		printf("%d", c);
		return c;
	}else{
		printf("%d",d);
		return d;
	}
}

int main(){
	int x;
	int y;
	int z;
	int g;
	
	scanf("%d",&x);
	scanf("%d",&y);
	scanf("%d",&z);
	scanf("%d",&g);
	int greatest = max_of_four(x, y, z, g);
	
	return 0;
}
