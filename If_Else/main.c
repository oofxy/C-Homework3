#include <stdio.h>

int main(void){
    int num1, num2;
    char op;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);

    if(op == '+'){
        printf("%d + %d = %d\n", num1, num2, num1 + num2);
    }else if(op == '-'){
        printf("%d - %d = %d\n", num1, num2, num1 - num2);
    }else if(op == '*'){
        printf("%d * %d = %d\n", num1, num2, num1 * num2);
    }else if(op == '/'){
        printf("%d / %d = %d\n", num1, num2, num1 / num2);
    }else{
        printf("Invalid operator.\n");
    }

    return 0;
}