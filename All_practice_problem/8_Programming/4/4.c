#include <stdio.h>
double recursive(double n);
int main() {
    double n, result;
    printf("n의 값을 입력하세요: ");
    scanf("%lf", &n);
    result = recursive(n);
    printf("%f", result);
    return 0;
}
double recursive(double n) {
    if(n == 1)
        return 1;
    else
        return ((1/n) + recursive(n-1));
}


