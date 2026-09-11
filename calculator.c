#include <stdio.h>


int add(int a, int b){
	return a + b;
}

int sub(int a, int b){
	return a - b;
}

int mult(int a, int b){
	return a * b;
}


int main(){
	int addition;
	int substraction;
	int multiplication;
	addition = add(1, 2);
	subtraction = sub(3, 4);
	multiplication = mult(5,6);
	printf(" 1+2= %d\n", addition);
	printf(" 3-4= %d\n", subtraction);
	printf(" 5*6= %d\n", multiplication);
	return 0;

}