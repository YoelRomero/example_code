// The programm generate the pyramid of symbols.
//      A
//     ABA
//    ABCBA
//   ABCDCBA
//  ABCDEDCBA
#include <stdio.h>
int main(void) {
    int rows, spaces;
    char start_ch, end_ch;
    start_ch = 'A';

    printf("Enter the letter:");
    scanf("%c", &end_ch);

    rows = end_ch - start_ch;

    for(int i = 0; i <= rows; i++) {
        for(int spaces = 0; spaces <= rows - i; spaces++)
            printf(" ");
        for(int rise = start_ch; rise <= start_ch + i; rise++)
            printf("%c", rise);
        for(int fall = start_ch + i - 1; fall >= start_ch; fall--)
            printf("%c", fall);
        printf("\n");
    }
    return 0;
}