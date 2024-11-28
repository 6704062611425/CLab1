#include<stdio.h>
int main () {
	int n1;
	int n2;
	
	printf("Input number 1: ");
	scanf("%d", &n1);
	
	printf("Input number 2: ");
	scanf("%d", &n2);
	if (n1>n2) {
		int total = n1 - n2;
		printf("num1 more than num2 = %d", total);
    }  
	else{
		int total = n2 - n1;
		printf("num2 more than num1 = %d", total);
	}
} 
