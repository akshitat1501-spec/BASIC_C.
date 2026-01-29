#include <stdio.h>
int main() {
	int a = 10, b = 5;
	// arithmetic operators
	printf("a + b = %d\n",a + b);
	printf("a - b = %d\n", a - b);
	printf("a * b = %d\n",a * b);
	printf("a / b = %d\n",a / b);
	// Relational Operators
    printf("Relational Operators:\n");
    printf("a > b = %d\n", a > b);
    printf("a < b = %d\n", a < b);
    printf("a == b = %d\n", a == b);
    printf("a != b = %d\n\n", a != b);

    // Logical Operators
    printf("Logical Operators:\n");
    printf("(a > b && a != 0) = %d\n", (a > b && a != 0));
    printf("(a < b || b != 0) = %d\n", (a < b || b != 0));
    printf("!(a == b) = %d\n\n", !(a == b));

    // Assignment Operators
    printf("Assignment Operators:\n");
    a += b;
    printf("a += b -> %d\n", a);
    a -= b;
    printf("a -= b -> %d\n", a);
    a *= b;
    printf("a *= b -> %d\n", a);
    a /= b;
    printf("a /= b -> %d\n\n", a);

    // Increment and Decrement Operators
    printf("Increment & Decrement Operators:\n");
    printf("a++ = %d\n", a++);
    printf("++a = %d\n", ++a);
    printf("b-- = %d\n", b--);
    printf("--b = %d\n", --b);

    return 0;
}















