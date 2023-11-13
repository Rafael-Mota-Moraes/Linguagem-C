#include <stdio.h>

int main()
{
    int A[10] = {1, 1, -15, 4, 3, -7, 10, 3, 11, 122};

    for (int i = 0; i < 10; i++)
    {
        if (A[i] < 0)
        {
            A[i] = 0;
        }
        printf("%d ", A[i]);
    }

    return 0;
}
