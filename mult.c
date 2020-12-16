#include <stdio.h>

int mult (int a, int b);

int main() {
	int num1;
	int num2;
	int solution;
	
	printf("Welcome to my first program!\nThis program multiplies two numbers using addition.\n");
	printf("Enter your first number: ");
	scanf("%d", &num1);
	printf("Enter your second number: ");
	scanf("%d", &num2);
	
	solution = mult(num1,num2);
	printf("Voila! The answer is %d\n", solution);
	return 0;
}


int mult (int a, int b) {
	int answer = 0; 
	for (int i = 0; i < b; i++) {
		answer = answer + a;
	}
		return answer;
}