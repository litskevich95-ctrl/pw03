#include <stdio.h>

int main(void) {
    char ch;
    if (scanf(" %c", &ch) == 1) {
        printf("CODE DEC: %d\n", ch);
        printf("CODE HEX: %x\n", ch);
        printf("CODE OCT: %o\n", ch);
        printf("UPPER: %c\n", (char)(ch - ('a' - 'A')));
        printf("NEXT: %c\n", (char)(ch + 1));
        printf("PREV: %c\n", (char)(ch - 1));
    }
    return 0;
}
