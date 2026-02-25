#include <stdio.h>
#include <raylib.h>

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
    const int screenWidth = 350;
    const int screenHeight = 500;
    char sinalizador;
    int valor1, valor2;
    double valorD1, valorD2;

    InitWindow(screenWidth, screenHeight, "Calculadora");
    SetTargetFPS(60);

    Rectangle display = {10, 10, 330, 120};
    Rectangle btnPos = {100, 100, 200, 50};
    Color btnColor = GRAY;

    if(CheckCollisionPointRec(GetMousePosition(), btnPos)){
        btnColor = LIGHTGRAY;
        if(IsMouseButtonPressed(MOUSE_LEFT_BUTTON)){
            //Ação do botao aqui
        }
    }else{
            btnColor = GRAY;
        }

    while(!WindowShouldClose()){
        BeginDrawing();
            ClearBackground(LIGHTGRAY);
            DrawRectangleRounded(display, 0.1f, 15, GRAY);
            DrawText("0", 310, 100, 30, WHITE);
            //DrawText(TextFormat("resultado"), 310, 100, 30, BLACK);
            DrawRectangleRec(btnPos, btnColor);
            DrawText("Calcular", btnPos.x + 50, btnPos.y + 15, 20, BLACK);
        EndDrawing();
    }
    
   /* printf("-----Calculadora C-----");
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
    }*/

    CloseWindow();
    return 0;
}