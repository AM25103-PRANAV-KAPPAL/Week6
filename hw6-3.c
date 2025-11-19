#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    double sign = 1.0; 

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        sum += sign * (1.0 / (2 * i + 1));
        sign = -sign;  
    }

    double pi = 4.0 * sum;

    printf("The approximation up to %dth term is %.15f\n", n, pi);

    return 0;
}
