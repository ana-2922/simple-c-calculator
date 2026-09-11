#include <stdio.h>


int add(int a, int b){
	return a + b;
}


int main(){
	int addition;
	addition = add(1, 2);
	printf(" 1+2= %d\n", addition);
	return 0;

}