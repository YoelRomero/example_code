// This program counts the number of symbols, words and strings in the file
#include <stdio.h>
#include <ctype.h>       // for isspace()
#include <stdbool.h>     // for bool, true, false

int main(void) {
    int c;             // current symbol
    char prev;          // previous symbol
    long n_chars = 0L;  // number of symbols
    int n_lines = 0;    // number of strings
    int n_words = 0;    // number of words
    int p_lines = 0;    // number of not fully filled strings
    bool inword = false; // true if c in a word
    printf("Enter the text for analyze (| to exit):\n");
    prev = '\n';        // for identification full string
    while((c = getchar()) != EOF) {
        n_chars++;
        if(c == '\n')
            n_lines++;
        if(!isspace(c) && !inword) {
            inword = true;
            n_words++;
        }
        if(isspace(c) && inword)
            inword = false;
        prev = c;
    }
    if(prev != '\n')
        p_lines = 1;
    printf("symbols = %ld, words = %d, strings = %d, ", n_chars, n_words, n_lines);
    printf("not fully filled strings = %d\n", p_lines);
    return 0;
}
