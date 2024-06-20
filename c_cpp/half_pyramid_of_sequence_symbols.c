// The program generate a half-pyramid of sequence symbols.
// A 
// B C 
// D E F 
// G H I J 
// K L M N O 
// P Q R S T U 

#include <stdio.h>
int main(void) {
    int rows;
    char symbol;

    printf("Enter the number of rows and symbol: ");
    scanf("%d %c", &rows, &symbol);

    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%c ", symbol);
            symbol++;
        }
        printf("\n");
    }
    return 0;
}




