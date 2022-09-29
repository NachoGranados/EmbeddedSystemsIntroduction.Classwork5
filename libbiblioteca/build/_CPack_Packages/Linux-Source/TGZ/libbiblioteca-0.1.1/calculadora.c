#include <stdio.h>
#include <biblioteca.h>

int main(void) {

    int num1 = 81;
    int num2 = 9;

    printf("%d + %d = %d\n", num1, num2, suma(num1, num2));
    printf("%d + %d = %d\n", num1, num2, resta(num1, num2));
    printf("%d + %d = %d\n", num1, num2, multiplicacion(num1, num2));    
    printf("%d + %d = %d\n", num1, num2, division(num1, num2));
    printf("√(%d) = %f\n", num1, raiz(num1));
    printf("cos(%d) = %f\n", num1, coseno(num1));

    return 0;

}
