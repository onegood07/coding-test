#include <stdio.h>

int main() {
    int N, count = 0;

    scanf("%d", &N);

    while (N >= 0) {
        if (N % 5 == 0) {
            count += (N/5);
            printf("%d", count);
            return 0;
        } else {
            N = N - 3;
            count++;
        }
    }
    
    printf("-1");
    return 0;
}