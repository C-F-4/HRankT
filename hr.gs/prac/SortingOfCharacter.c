/*
Sort the characters of string alphabetically based on ascii value. String can contain upper case and lower case letter also.
Sample input:
CHiTkara
Sample output:
CHTaaikr
*/

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void sort(char* p)
{
    int size = strlen(p);
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (*(p + j) > *(p + j + 1)) {
                char tmp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = tmp;
            }
        }
    }
    return;
}

int main()
{
    char* str = malloc(256);
    scanf("%s", str);
    sort(str);
    printf("%s", str);
    return 0;
}
