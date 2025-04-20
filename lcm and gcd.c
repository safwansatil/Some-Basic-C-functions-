#include <stdio.h>
int gcd(int a, int b){
    if(b==0){
        return a;
    }
    return gcd(b, a%b);
}
int lcm(int a, int b){
    return (a*b)/gcd(a, b);
}
int main(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("GCD of %d and %d is %d\n", a, b, gcd(a, b));
    printf("LCM of %d and %d is %d\n", a, b, lcm(a, b));
    return 0;
}