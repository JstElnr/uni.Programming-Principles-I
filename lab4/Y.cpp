#include <stdio.h>
int main(void) {
    int n;
    scanf("%i", &n);
    int arr[n][n] = {0};
    int c = 1, i = 0, j = -1;
    while(c <= n*n) {
        while(j < n - 1 && !arr[i][j+1])
            arr[i][++j] = c++;
        while(i < n - 1 && !arr[i+1][j])
            arr[++i][j] = c++;
        while(j > 0 && !arr[i][j - 1])
            arr[i][--j] = c++;
        
        while(i > 0 && !arr[i - 1][j])
            arr[--i][j] = c++;
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++)
            printf("%i ", arr[i][j]);
        printf("\n");
    }
    return 0;
}