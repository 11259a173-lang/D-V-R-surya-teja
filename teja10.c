#include <stdio.h>
#include <string.h>
// Function to reverse a string
void string_reverse(char *str) {
int n = strlen(str);
     for (int i = 0; i < n / 2; i++) {
char temp = str[i];
str[i] = str[n - i - 1];
str[n - i - 1] = temp;
}
}
int main() {
// 1. String Copy
char source[] = "Hello World";
char destination[20];
strcpy(destination, source);
printf("--- String Copy ---\n");
printf("Source: %s\n", source);
printf("Destination (Copy): %s\n", destination);
// 2. String Reverse
char rev_str[] = "Programming";
printf("\n--- String Reverse ---\n");
printf("Original: %s\n", rev_str);
string_reverse(rev_str);
printf("Reversed: %s\n", rev_str);
// 3. String Concatenate
char str1[50] = "C Language";
char str2[] = " is fun";
strcat(str1, str2);
printf("\n--- String Concatenate ---\n");
printf("String 1: C Language\n");
printf("String 2: is fun\n");
printf("Concatenated: %s\n", str1);
return 0;
}
