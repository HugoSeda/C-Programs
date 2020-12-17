#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int vowel_count (char str[]);

int main() {
	char *string = malloc(sizeof(char));
	
	int solution;
	
	printf("Welcome to my second program!\nThis program calculates the # of vowels in your string.\n");
	printf("Enter your string: ");
	fgets(string, 50, stdin);
	
	solution = vowel_count(string);
	printf("Voila! Your string has %d vowels.\n", solution);
	free(string);
	return 0;
}


int vowel_count (char str[]) {
	int num_vowels;
	int len;
	len = strlen(str);

	for (int i = 0; i < len; i++) {
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u' || str[i] == 'A' ||
            str[i] == 'E' || str[i] == 'I' || str[i] == 'O' ||
            str[i] == 'U') {
            num_vowels++;
            }
	}
		return num_vowels;
}