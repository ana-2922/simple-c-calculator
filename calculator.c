#include <stdio.h>


int add(int a, int b){
	return a + b;
}

int sub(int a, int b){
	return a - b;
}


int main(){
	int addition;
	int substraction;
	addition = add(1, 2);
	subtraction = sub(3, 4);
	printf(" 1+2= %d\n", addition);
	printf(" 3-4= %d\n", subtraction);
	return 0;

}