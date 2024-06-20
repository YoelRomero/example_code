// This programm reverses the string.
// Hello -> olleH
#include <stdio.h>
#include <string.h>
int main(void) {
    char symbol_mass[100];
    
    printf("Enter the symbols: ");
    scanf("%s", &symbol_mass);
    printf("%s\n", symbol_mass);
    
    int i = strlen(symbol_mass); // length of the string (last index)
    for(; i >= 0; i--)
        printf("%c", symbol_mass[i]);
        printf("\n");
    return 0;
}

