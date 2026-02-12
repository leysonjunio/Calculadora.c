#include <stdio.h>

int somar(int a, int b){
    int resultado = a + b;
    printf("%d\n", resultado);
    return resultado;
}
int subtrair (int a, int b){
    int resultado = a - b;
    printf("%d\n", resultado);
    return resultado;
}
long mutiplicar(int a, int b){
    int resultado = a * b;
    printf("%d\n", resultado);
    return resultado;
}
double dividir(double a, double b){
    double resultado = a / b;
    printf("%2.f\n", resultado);
    return resultado;
}

int main(){
    char sinalizador;
    int valor1, valor2;
    double valorD1, valorD2;

    printf("-----Calculadora C-----");
    printf("\n Digiter o valor junto da expressão\n");
    scanf("%d %c %d", &valor1, &sinalizador, &valor2);
    switch (sinalizador) {
        case '+':
            somar(valor1, valor2);
            break;
        case '-':
            subtrair(valor1, valor2);
            break;
        case '*':
            mutiplicar(valor1, valor2);
            break;
        case '/':
            dividir((double)valor1, (double)valor2);
            break;
        default:
            printf("Algo deu errado");
    }

    return 0;
}