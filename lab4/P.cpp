#include <stdio.h>
int main(void) {
    int n;
    scanf("%i", &n);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i * j == 0)
                printf("%i ", i+j);
            else
                printf("%i ", i*j);
        }
        printf("\n");
    }
     
    return 0;
}