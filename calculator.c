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
	if(scanf("%d", &a) ! = 1){
		printf("error, enter a number!");
		return 1;
	}
	printf("pick your second number: ");
	if(scanf("%d", &b) ! = 1){
		printf("error, enter a number!");
		return 1;
	}

	
	if(operation < 1 || operation > 4){
		printf("Invalid input!");
		return 1;
	}

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