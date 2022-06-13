#include <stdio.h>

void main() {
    printf("Type counter: \n");
    scanf("%d", &c);
    
    for (int i = c; i > 0; --i)
    {
        for (int j = 0; j < i; ++j)
        {
            printf("#");
        }
        printf("\n");
    }
}