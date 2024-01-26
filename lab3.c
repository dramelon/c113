#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#include <unistd.h>

int main() {
    // int i  = 0;
    // while (i < 5) {
    //     printf("%d\n",i);
    //     i++;
    // }

    //01 Counting
    // char str[8];
    // printf("");fgets(str, 8, stdin);int a=atoi(str);
    //
    // while (a >= 0) {printf("%d\n",a);a--;}

    //02 GCD and LCM
    // char str[64];
    // fgets(str, 64, stdin);long long a=atoll(str);
    // fgets(str, 64, stdin);long long b=atoll(str);
    //
    // long long gcd = 1;
    // long long x = a*b;
    // unsigned int loop = 2;
    // while (loop <= a){
    //     if ((a%loop==0) && (b%loop==0)){
    //         gcd*=loop;a=a/loop;b=b/loop;loop=1;}
    //         //printf("GCD: %u\nLCM: %lld", loop, x/loop); return 0;}
    //     loop++;
    // }
    // printf("GCD: %lld\nLCM: %lld", gcd, x/gcd);

    //03 Simplest-Form Fractions
    // char str[64];
    // fgets(str, 64, stdin);long long a=atoll(str);
    // fgets(str, 64, stdin);long long b=atoll(str);
    //
    // long long gcd = 1;
    // unsigned int loop = 2;
    // while (loop <= a){
    //     if ((a%loop==0) && (b%loop==0)){
    //         gcd*=loop;a=a/loop;b=b/loop;loop=1;}
    //     loop++;
    // }
    // (b==1)?printf("= %lld",a):printf("= %lld/%lld",a,b);

    //04 Fibonacci (Easy)
    // int fibo(int n){
    //     double upf = pow(1+sqrt(5), n);
    //     double upb = pow(1-sqrt(5), n);
    //     double low = pow(2, n) * sqrt(5);
    //     return (upf - upb)/low;
    // }
    //
    // char input_n[5];
    // fgets(input_n, 5, stdin);
    // int n, i;
    // n = atoi(input_n);
    // for (i = 0; i <= n; i++) {  
    //     printf("F(%d) = %d\n",i,fibo(i));
    // }

    //05 Alphabet Reflection
    // char input_n[5];
    // fgets(input_n, 5, stdin);
    //
    // int a = atoi(input_n);
    // int b = a;
    // char x = 96;
    //
    // if ((a<=0) || (a>26)) {printf("-");}
    // else if (a==1) {printf("a");}
    // else {
    //     while (b>0) {
    //         printf("%c-", x+b);
    //         b--;
    //     }
    //     b=2;
    //     while (b<a) {
    //         printf("%c-", x+b);
    //         b++;
    //     }
    //     printf("%c", x+b);
    // }

    //06 Switch / Case Basic
    char input_x[10], input_y[10];

    printf("Input x: ");
    gets(input_x);
    printf("Input y: ");
    gets(input_y);

    double x, y;
    char input_command;

    x = atof(input_x);
    y = atof(input_y);

    printf("x = %5.4f, y = %5.4f\n", x, y);
    printf("[a]:Add [s]:Subtract [m]:Multiply [d]:Divide [M]:modulo [^]: x^y\n");
    printf("Command? ");
    input_command = getchar();
    switch (input_command) {
    case 'a':
        printf("x + y = %5.4lf\n", x+y);
        break;
    case 's':
        printf("x - y = %5.4lf\n", x-y);
        break;
    case 'm':
        printf("x * y = %5.4f\n", x*y);
        break;
    case 'd':
        printf("x / y = %5.4f\n", x/y);
        break;
    case 'M':
        printf("x mod y = %5.4f\n", fmod(x,y));
        break;
    case '^':
        printf("x ^ y = %5.4f\n", pow(x,y));
        break;
    default:
        printf("Unknown Command.\n");
        break;
    }

    return 0;
}