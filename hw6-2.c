#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += i * i;
    }

    printf("The sum of square from 1 to %d is %d\n", n, sum);

    return 0;
}
