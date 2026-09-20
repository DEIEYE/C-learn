#include <stdio.h>

int main() {
    double num_1,num_2,result;
    char op;
    result = 0;
    scanf("%lf %c %lf",&num_1,&op,&num_2);
    switch (op) {
        case '+':
            result = num_1 + num_2;
            break;
        case '-':
            result = num_1 - num_2;
            break;
        case '*':
            result = num_1 * num_2;
            break;
        case '/':
            if (num_2 != 0) {
                result = num_1 / num_2;
            } else {
                printf("Division by zero error");
                return 1;
            }
            break;
        default:
            printf("Invalid operator");
            return 1;
    }
    printf("Result: %lf", result);
    return 0;
}