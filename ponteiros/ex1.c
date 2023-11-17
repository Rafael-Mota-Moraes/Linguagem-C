#include <stdio.h>

int main()
{
    int i;
    float f;
    char c;

    int *pi = &i;
    float *pf = &f;
    char *pc = &c;

    *pi = 10;
    *pf = 1.5;
    *pc = 'a';

    printf("%c %f %d", c, f, i);

    return 0;
}
