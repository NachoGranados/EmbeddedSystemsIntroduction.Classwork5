#include <math.h>
#include <biblioteca.h>

int suma(int num1, int num2) {
    return num1 + num2;
}

int resta(int num1, int num2) {
    return num1 - num2;
}

int multiplicacion(int num1, int num2) {
    return num1 * num2;
}

int division(int num1, int num2) {
    return num1 / num2;
}

double raiz(int num) {

	int start = 0;
    int end = num;
	int mid;

	double ans;

	while (start <= end) {

		mid = (start + end) / 2;

		if (mid * mid == num) {

			ans = mid;

			break;

		}

		if (mid * mid < num) {
		
			ans = start;
		
			start = mid + 1;

		}

		else {

			end = mid - 1;

		}

	}

	float increment = 0.1;

	for (int i = 0; i < 5; i++) {

		while (ans * ans <= num) {

			ans += increment;

		}
		
		ans = ans - increment;

		increment = increment / 10;

	}

	return ans;
    
}

int potencia(int num1, int num2) {

    int val = 1;
    int i = 0;

    for(i = 0; i < num2; i++) {
    
        val *= num1;
    
    }
    
    return val;

}

double factorial(int num) {

    if (num == 0) {
    
        return 1;
    }
    
    return num * factorial(num - 1);
    
}

double coseno(double num1) {

    double num = (double) num1;

    int n = 0;
    int itr = 100;
    double val = 0;
    
    while(n < itr) {
    
        val += potencia(-1, n) * potencia(num, 2 * n) / factorial(2 * n);        
        n++;
        
    }
    
    return val;
    
}

