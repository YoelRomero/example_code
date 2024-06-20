// This programm generate the half-pyramid from the symbols.
// $ 
// $ $ 
// $ $ $ 
// $ $ $ $ 
// $ $ $ $ $ 
// $ $ $ $ $ $ 

#include <stdio.h>
int main(void) {
    int rows;
    char symbol;

    printf("Enter the number of rows and symbol: ");
    scanf("%d %c", &rows, &symbol);

    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= i; j++)
            printf("%c ", symbol);
        printf("\n");
    }
    return 0;
}