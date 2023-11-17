#include <stdio.h>

int main()
{
    int valores[5] = {1, 2, 3, 4, 5};

    printf("%d ", *valores * 2);
    printf("%d ", *(valores + 1) * 2);
    printf("%d ", *(valores + 2) * 2);
    printf("%d ", *(valores + 3) * 2);
    printf("%d ", *(valores + 4) * 2);

    return 0;
}
