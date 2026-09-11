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

int div(int a, int b){
	return a / b;
}

int main(){
	int a,b;
	int operation;
	int answer;
	
	printf("Choose 1,2,3,4 for addition, subtraction, multiplication, division);
	scanf("%d", &operation);
	printf("pick your first number: ");
	scanf("%d", &a);
	printf("pick your second number: ");
	scanf("%d", &a);

	if( operation == 1){
		answer = add(a, b);
		printf("answer: %d\n", answer);
	}
	else if( operation == 2){
		answer = sub(a, b);
		printf("answer: %d\n", answer);
	}
	else if( operation == 3){
		answer = mult(a, b);
		printf("answer: %d\n", answer);
	}
	else if( operation == 4){
		answer = div(a, b);
		printf("answer: %d\n", answer);
	}

	return 0;

}