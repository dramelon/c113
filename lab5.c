#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    // int x = 200;
    // int *p;
    // p = &x;
    // printf("%d, %p\n",x ,&x);

    // char str[32];
    // //scanf("%d %s", &x, str);
    // printf("%d, %p\n", x, &x);*p+=10;
    // printf("%d, %p\n", *p, &x);p++;
    // printf("%d, %p\n", *p, &x);p++;
    // int data[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    // printf("%p, %p\n", data, &data[0]);
    // printf("%d, %d\n", *data, data[0]);

    // printf("%d\n", *(data));


    // for (; str != "\0";str++);



    //char table = ""
    // int x[4];
    // int y[4];
    // int i;

    // for (i=0; (s[i]=getchar()) != '\n'; i++);
    // s[i] = 0;
    // printf("[%s]\n", s);

    // char str[64];
    // printf("Enter Bishop's X Y Position: ");
    // for (i=0; (y[i]=getchar()) != '\n'; i++);
    // // fgets(str, 64, stdin);int x=atoi(str);
    // printf("%d%d", y, x);

    // char a[64] = {};
    // char x[64] = {};
    // char y[64] = {};

    // int grr = 0;
    // char str;

    // fgets(str, 8, stdin);int grr=atoi(str);
    // for (int rawr=0; grr; rawr++; grr--)

    // for (i=0; (x[i]=getchar()) != ' '; i++);

    // "i dunno";

    //01 Automorphic Number
    // char str[32];
    // printf("Input n = ");fgets(str, 32, stdin);long long x=atoll(str);
    // printf("n^2 = %lld\n", x*x);
    //
    // long long i=1;
    // for (; i<=x; i*=10){}
    //
    // (x*x%i==x || x*x==x)?printf("Yes. %lld is automorphic number.", x):printf("No. %lld is automorphic number.", x);

    //02 Pythagorean Triple
    // char str[16];
    // printf("Input n = ");fgets(str, 16, stdin);int x=atoi(str);
    // for (int i=3; i<=x/3; i++){
    //     for (int j=i+1; j<=x; j++){
    //         if (i*i + j*j == (x-i-j)*(x-i-j)){
    //             printf("(%d, %d, %d)", i, j, x-i-j);
    //             return 0;return 0;return 0;return 0;
    //             break;break;break;break;break;break;//stop my home work now!!! so lazy GRRR..
    //         }
    //     }
    // }
    // printf("%-1s", "No triple found.");

    //03 Calculator
    // char str[64];
    // float x, xv;
    // printf("Initial Value: ");scanf(" %f", &x);//fgets(str, 32, stdin);float x=atof(str);
    // puts("");
    //
    // while (1){
    //     char str2[64];
    //     printf("Operator: "); char op; scanf(" %s", &op);
    //
    //     if (op==0x2b){printf("Input Value: "); scanf(" %f", &xv); x+=xv; printf("Present Value is %.4f\n", x);}
    //     else if (op==0x2d){printf("Input Value: "); scanf(" %f", &xv); x-=xv; printf("Present Value is %.4f\n", x);}
    //     else if (op==0x2a){printf("Input Value: "); scanf(" %f", &xv); x*=xv; printf("Present Value is %.4f\n", x);}
    //     else if (op==0x2f){printf("Input Value: "); scanf(" %f", &xv); x/=xv; printf("Present Value is %.4f\n", x);}
    //     else {printf("\nFinish Calculation. Final Value is %.4f", x);return 0;}
    //     puts("\n");
    // }


    //04 The Value of PI
    // char str[16];
    // printf("Enter n: ");fgets(str, 16, stdin);int x=atoi(str);
    //
    // double t = 0.000000;
    //
    // for (int i=1; i<x*2; i+=2){
    //     (i-1)/2%2?(t-=4.0/i):(t+=4.0/i);
    // }
    // printf("%.10f", t);


    
    
    //05 -x-x-x-x-x-x-x-
    // char str[16];
    // printf("Enter n: ");fgets(str, 16, stdin);int x=atoi(str);
    //
    // for (short i=1; i<=x; i++){
    //     for (short v=1; v<=i; v++){
    //         v%2?printf("-"):printf("x");
    //     }
    //     printf("\n");
    // }
    // for (short i=x-1; i>=1; i--){
    //     for (short v=1; v<=i; v++){
    //         v%2?printf("-"):printf("x");
    //     }
    //     printf("\n");
    // }
    
    
    //06 Combine 2 Arrays
//     int i, a[5],b[5],c[10] ;
//   printf("Enter array a:\n");
//   for (int i=0; i<5; i++){
//     printf("Please enter an integer: ");

//     scanf ("%d",&a[i]);
//   }

//   printf("Enter array b:");
//   for (int i=0; i<5; i++){
//     printf("Please enter an integer: ");

//     scanf ("%d",&b[i]);
//   }
//   for (int i=0; i<10; i++){
//     if (i < 5){
//       c[i] = a[i];
//     }else if (i >= 5){
//       c[i] = b[i-5];
//     }
//   }

//   printf ("Array c: ");
//   for (i=0;i<10;i++)
//     printf ("%d ",c[i]);

//   printf ("\n");
//   return 0;


    //07 Fill-in the 2D array
    // char str[16];
    // printf("Enter the number of rows or columns: ");fgets(str, 16, stdin);int x=atoi(str);
    //
    // for (short i=1; i<=x; i++){
    //     for (short v=i; v<x+i; v++){
    //         printf("%2d ", v);
    //     }
    //     printf("\n");
    // }

    //08 Climbing Ladder Simulator
    int gX = 0; // ladder amt
    int gC = 0; // current level
    int gR = 0; // round
    int gI = 0; // input

    printf("Input number of stairs: "); scanf("%d", &gX);
    while (1){
        gR++; printf("---- round %d ----\n", gR);
        for (int i=0; i<gX-gC-2; i++){printf("|---|\n");}
        printf("|-O-|\n");
        printf("|-^-|\n");
        for (int i=gC; i>0; i--){printf("|---|\n");}

        printf("Input step command: "); scanf(" %d", &gI);
        if (gI==0){break;}
        else{gC+=gI; gC<0?gC=0:gC>gX-2?gC=gX-2:1;}
    }
    

    return 0;
}