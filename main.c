# include <stdio.h>

float summ(float a, float b){
        printf("Сумма чисел %g и %g равна %g\n", a, b, a + b);
        return a + b;
}

float multipl(float a, float b){
        printf("Произведение чисел %g и %g равно %g\n", a, b, a * b);
        return a * b;
}

float subtract(float a, float b){
        printf("Результат вычитания числа %g из %g равен %g\n", b, a, a - b);
        return a - b;
}

float division(float a, float b){
        printf("Частное чисел %g и %g равно %g\n", a, b, a / b);
        return a / b;
}



int main(void){
	printf("\nhello world\n\n");
	summ(3, multipl(3, -2));
	subtract(4, division(3, -2));
	return 0;
}
