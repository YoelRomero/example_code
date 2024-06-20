// This programm calculate the sum of squares of the numbers in the range.
#include <stdio.h>
#include <string.h>

int sumOfSquresInRange(int num1, int num2) {
    int sum = 0;
    for(int i = num1; i <= num2; i++) {
        sum += i * i;
    }
    return sum;
}

int main(void) {
    int num1, num2;
    printf("Введите нижний и верхний пределы: ");
    scanf("%d %d", &num1, &num2);
    while (num1 < num2) {
        int result = sumOfSquresInRange(num1, num2);
        printf("Сумма квадратов чисел от %d до %d равна %d\n", num1*num1, num2*num2, result);
        printf("Введите нижний и верхний пределы: ");
        scanf("%d %d", &num1, &num2);
        printf("Работа завершена.\n");
        }
    
    return 0;
}

