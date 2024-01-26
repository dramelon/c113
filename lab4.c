///////////////////////
/* Dramelon > lab4.c */
//28dec2023 21:11//////

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void decimalToBinary(int num) {
    long long int bin = 0;
    int bipower = 0;
    
    while (num > 0) {
        int a = num % 2;
        long long int temp = pow(10, bipower);
        bin += a * temp;
        bipower++;
        num /= 2;
    }
    
    printf("%lld", bin);
}

//02 ฟังก์ชัน is_prime()
int is_prime(int i) {
    int v = 2;
    while (v<i){
        if (i%v==0){return 0;}
        v++;
    }
    if (i==0 || i==1){return 0;}
    
    return 1;
}

//03 จำนวนตัวเลข
int count_target(int n, int target) {
    int x = 0;
    while (n>=1) {
        if (target==n%10){
            x+=1;
        }
        n/=10;
    }
    return x;
}

//08 แปลงเลขฐาน (recursion)
void base2recursion(int x) {
    x>1?base2recursion(x/2):0;
    printf("%d",x%2);
}


int main() {
    //01 แปลงเลขฐาน 4 bit
    //ให้นิสิตเขียนโปรแกรมโดยใช้ bitwise operator และไม่ใช้ if statement
    // char str[8];
    // fgets(str, 8, stdin);
    // int a=atoi(str);
    //
    // printf("Binary number of %d is ",a);
    //
    // a*=2;int b;
    // b=a; int a1 = (b>>=4)%2;
    // b=a; int a2 = (b>>=3)%2;
    // b=a; int a3 = (b>>=2)%2;
    // b=a; int a4 = (b>>=1)%2;
    // printf("%d%d%d%d", a1, a2, a3, a4);
    // printf(".");

    //02 ฟังก์ชัน is_prime()
    // char input[5];
    // fgets(input, 5, stdin);
    //
    // int i, n;
    //
    // n = atoi(input);
    //
    // for (i=0;i<=n;i++) {
    //     if (is_prime(i)) {
    //         printf("%d is a prime number.\n", i);
    //     }
    // }

    //03 จำนวนตัวเลข
    // char input_n[12], input_x[2];
    // fgets(input_n, 12, stdin);
    // fgets(input_x, 2, stdin);
    //
    // int n;
    // int x, count;
    //
    // n = atoi(input_n);
    // x = atoi(input_x);
    //
    // count = count_target(n, x);
    //
    // if (count <= 0) {
    //     printf("There is no \"%d\" in %d.\n", x, n);
    // } else if (count == 1) {
    //     printf("There is only 1 \"%d\" in %d.\n", x, n);
    // } else {
    //     printf("There are %d \"%d\"(s) in %d.\n", count, x, n);
    // }

    //04 พิมพ์สี่เหลี่ยมขนมเปียกปูน
    // char str[8];
    // fgets(str, 8, stdin);int x=atoi(str);
    // fgets(str, 8, stdin);int y=atoi(str);
    //
    // for (int i=0;i<x;i++) {printf("*");}
    // printf("\n");
    // for (int i=0;i<y-2;i++) {
    //     for (int j=0;j<=i;j++) {printf(" ");}
    //     printf("*");
    //     for (int j=0;j<x-2;j++) {printf(" ");}
    //     printf("*\n");
    // }
    // for (int i=0;i<y-1;i++) {printf(" ");}
    // for (int i=0;i<x;i++) {printf("*");}

    //05 Alphabet Rangoli
    char str[64];
    printf("");fgets(str, 64, stdin);int x=atoi(str);
    if (x<=0 || x>26){printf("-");return 0;}
    else if (x==1){printf("a");return 0;}

    for (int i=x;i>0;i--){
        for (int j=1;j<(i*2-1);j++){
            printf("-");
        }
        for (int j=0;j<=x-i;j++){
            printf("%c", 96+x-j);
            j>=0?printf("-"):1;
        }
        for (int j=i;j<x;j++){
            printf("%c", 97+j);
            if (i==1 && j==x-1){;} // because line {n} end with "-"
            else {printf("-");}
        }
        for (int j=1;j<(i*2-2);j++){
            printf("-");
        }
        printf("\n");
    }
    for (int i=2;i<=x;i++){
        for (int j=1;j<(i*2-1);j++){
            printf("-");
        }
        for (int j=0;j<=x-i;j++){
            printf("%c", 96+x-j);
            j>=0?printf("-"):1;
        }
        for (int j=i;j<x;j++){
            printf("%c", 97+j);
            j>=0?printf("-"):1;
        }
        for (int j=1;j<(i*2-2);j++){
            printf("-");
        }
        printf("\n");
    }

    //06 Collection Bank
    // char str[1024];
    // printf("Enter your goal amount: ");fgets(str, 16, stdin);float target=atof(str);
    //
    // unsigned int day=1;
    // float total=0;
    //
    // while (total<target) {
    //     printf("Enter money collected today: ");fgets(str, 16, stdin);float current=atof(str);
    //     total+=current;
    //
    //     if (total>=target) {break;}
    //     printf("Total money collected up to day %d is %.2f. You need %.2f more.\n", day, total, target-total);
    //     day++;
    // }
    // day==1?printf("Congratulations! You take %d day to reach your goal.", day):
    // printf("Congratulations! You take %d days to reach your goal.", day);

    //07 Nested For loop (draw triangle 4)
    // char str[8];
    // fgets(str, 8, stdin);
    // int a=atoi(str);
    // int b,c;
    //
    // for (b=0;b<a;b++){
    //     c=0;
    //     for (c=0;c<=b;c++){printf("*");}
    //     printf("\n");
    // }
    // for (b=a-1;b>0;b--){
    //     c=0;
    //     for (c=0;c<b;c++){printf("*");}
    //     printf("\n");
    // }

    //08 แปลงเลขฐาน (recursion)
    // char str[8];
    // fgets(str, 8, stdin);int x=atoi(str);
    //
    // base2recursion(x);

    return 0;
}