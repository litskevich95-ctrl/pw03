#include <stdio.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "");

    char c_str[] = "Сбой матрицы";
    wchar_t w_str[] = L"Сбой матрицы";

    printf("char -> sizeof: %zu bytes, strlen: %zu chars\n", sizeof(c_str), strlen(c_str));
    printf("wchar -> sizeof: %zu bytes, wcslen: %zu chars\n", sizeof(w_str), wcslen(w_str));

    return 0;
}
