#include <stdio.h>
#include <string.h>

int main(void) {
    char name[100];
    if (scanf("%99s", name) == 1) {
        int len = (int)strlen(name);
        printf("\"%s\"\n", name);
        printf("%20s\n", name);
        printf("%-20s\n", name);
        printf("%*s\n", len + 5, name);
    }
    return 0;
}
