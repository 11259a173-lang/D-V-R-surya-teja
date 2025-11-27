#include <stdio.h>
// Function for Call by Value
void swap_by_value(int a, int b) {
int temp = a;
a = b;
b = temp;
// The changes to a and b are local to this function
printf("Inside swap_by_value:\n");
printf(" After swap: a = %d, b = %d\n", a, b);
}
// Function for Call by Reference
void swap_by_reference(int *a, int *b) {
int temp = *a;
*a = *b;
*b = temp;
// The changes to *a and *b affect the original variables
printf("Inside swap_by_reference:\n");
printf(" After swap: *a = %d, *b = %d\n", *a, *b);
}
int main() {
int x = 10, y = 20;
printf("--- Swapping using Call by Value ---\n");
printf("Before swap: x = %d, y = %d\n", x, y);
swap_by_value(x, y);
printf("After swap (in main): x = %d, y = %d (No change)\n", x, y);W
printf("\n--- Swapping using Call by Reference ---\n");
int p = 30, q = 40;
printf("Before swap: p = %d, q = %d\n", p, q);
swap_by_reference(&p, &q);
printf("After swap (in main): p = %d, q = %d (Swapped)\n", p, q);
return 0; 
}
