#include <stdio.h>
#include <string.h>

int main(void) {
    char str[20] = "SibSUTIS";
    size_t sz = sizeof(str);
    size_t len = strlen(str);
    size_t free_bytes = sz - (len + 1);

    printf("SIZEOF: %zu\n", sz);
    printf("STRLEN: %zu\n", len);
    printf("FREE BYTES: %zu\n", free_bytes);

    return 0;
}
