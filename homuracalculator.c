#include <stdio.h>

int main() {
char operator;
double first, second;

while (1) {
printf("\nEnter the operator (+, -, *, /) or x to exit: ");
scanf(" %c", &operator);

if (operator == 'x' || operator == 'X') {
printf("Exiting calculator. Goodbye!\n");
break;
}

printf("Enter two numbers: ");
scanf("%lf %lf", &first, &second);

switch (operator) {
case '+':
printf("%.2lf + %.2lf = %.2lf\n", first, second, first + second);
break;

case '-':
printf("%.2lf - %.2lf = %.2lf\n", first, second, first - second);
break;

case '*':
printf("%.2lf * %.2lf = %.2lf\n", first, second, first * second);
break;

case '/':
if (second != 0.0)
printf("%.2lf / %.2lf = %.2lf\n", first, second, first / second);
else
printf("Error: Division by zero is not allowed.\n");
break;

default:
printf("Invalid operator.\n");
break;
}
}

return 0;
}
