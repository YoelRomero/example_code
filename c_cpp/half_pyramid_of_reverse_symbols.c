// This program generate a half-pyramid of reversed symbols.
// F 
// F E 
// F E D 
// F E D C 
// F E D C B 
// F E D C B A 

#include <stdio.h>

int main(void) {
    int rows;
    char symbol;

    printf("Enter the number of rows and symbol: ");
    scanf("%d %c", &rows, &symbol);

    for(int i = 1; i <= rows; i++) {
        for(char ch = symbol; ch >= symbol - (i - 1); ch--)
            printf("%c ", ch);
        printf("\n");
    }

    return 0;
}