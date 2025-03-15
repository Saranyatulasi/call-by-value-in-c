#include<stdio.h>
int main(){
	int a=10,b=20;
	printf("before swap values :%d %d",a,b);
	swap(a,b);
}
swap(a,b){
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("After swap values : %d %d",a,b);
}
