#include <stdio.h>
 
double factorial(double k);
double P(double n, double k);
double C(double n, double k);
 
int main() {
    double n, k;
    double result;
 
    printf("n의 값: ");
    scanf("%lf", &n);
    printf("k의 값: ");
    scanf("%lf", &k);
    
    if(k == 0 || k == n)
        result = 1;
    else if(k > 0 && k < n)
        result = C(n-1, k-1) + C(n-1, k);
 
    printf("결과값: %f \n", result);
 
    return 0;
}
 
double factorial(double k) {
    if(k == 1)    return 1;
    else        return (k * factorial(k-1));
}
double P(double n, double k) {
    double i;
    double p = 1;
 
    if(n == 1)
        return 1;
    else {
        for(i=n; i>=n-k+1; i--)
            p *= i;
        return p;
    }
}
double C(double n, double k) {
    double c;
    c = P(n, k) / factorial(k);
    return c;    
}
