#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#include <unistd.h>

int main() {
    //01
    // char hour_str[4], min_str[4];
    // int hour, min;
    //
    // printf("Enter hour: ");
    // fgets(hour_str, 4, stdin);
    //
    // printf("Enter minute: ");
    // fgets(min_str, 4, stdin);
    //
    // hour = atoi(hour_str);
    // min = atoi(min_str);
    //
    // printf("Time is %02d:%02d", hour, min);


    //02
    // char str[16];
    //
    // fgets(str, 16, stdin);
    // int a=atoi(str);
    //
    // fgets(str, 16, stdin);
    // float b=atof(str);
    // if (a==0) {
    //     printf("You get %d percents discount.\nTotal amount due is %.2f Baht.\nAnd you have %d stickers left.",0,b,0);
    // } else if (a<=3) {
    //     printf("You get %d percents discount.\nTotal amount due is %.2f Baht.\nAnd you have %d stickers left.",a*5+5,b-b*(.05+.05*a),0);
    // } else if (a<=9) {
    //     int c=a/3.00;
    //     printf("You get %d percents discount.\nTotal amount due is %.2f Baht.\nAnd you have %d stickers left.",10+10*c,b-b*(.1+.1*c),a%3);
    // } else {
    //     printf("You get %d percents discount.\nTotal amount due is %.2f Baht.\nAnd you have %d stickers left.",40,b-b*(4e-1),a-9);
    // }


    //03
    // char level_str[4], year_str[4];
    // int level, year;
    //
    // printf("school level of student: ");
    // fgets(level_str, 4, stdin);
    //
    // printf("how many of learning: ");
    // fgets(year_str, 4, stdin);
    //
    // level = atoi(level_str);
    // year = atoi(year_str);
    //
    // if (year>3 || (level>3 && year>0)) {
    //     printf("YES");
    // }
    // else {
    //     printf("NO");
    // }


    //04
    // char str[16];
    //
    // fgets(str, 16, stdin);
    // float a=atof(str);
    //
    // if (a<0) {
    //     printf("Error: Salary must be greater or equal to 0");
    // } else if (a<3e5){
    //     printf("%.2f", a*5/100.00);
    // } else {
    //     printf("%.2f", (a-3e5)*.1+15e3);
    // }

    //05
    // char str[16];
    //
    // printf("Enter length of side A: ");fgets(str, 16, stdin);int a=atoi(str);
    // printf("Enter length of side B: ");fgets(str, 16, stdin);int b=atoi(str);
    // printf("Enter length of side C: ");fgets(str, 16, stdin);int c=atoi(str);
    //
    // if ((a<=0) || (b<=0) || (c<=0) || (a+b<=c) || (a+c<=b) || (b+c<=a)) {printf("Triangle type is invalid.");}
    // else if ((a==b) && (b==c)) {printf("Triangle type is equilateral.");}
    // else if ((a*a+b*b==c*c) || (a*a+c*c==b*b) || (b*b+c*c==a*a)) {printf("Triangle type is scalene.");}
    // else {printf("Triangle type is isosceles.");}

    //06
    // int a;
    // a = getchar();
    //
    // if ((a>=0x30) && (a<=0x39)){printf("Output: digit");}
    // else if ((a>=0x41) && (a<=0x5a)){printf("Output: upper case");}
    // else if ((a>=0x61) && (a<=0x7a)){printf("Output: lower case");}
    // else {printf("Output: others");}

    //07
    // char x_str[5], y_str[5];
    //
    // printf("Enter the x coordinate: ");
    // fgets(x_str, 5, stdin);
    // printf("Enter the y coordinate: ");
    // fgets(y_str, 5, stdin);
    //
    // int x = atoi(x_str);
    // int y = atoi(y_str);
    //
    // if (x==0) {
    //     if (y>0) {printf("North");}
    //     if (y==0) {printf("Center");}
    //     if (y<0) {printf("South");}
    // } else if (x>0) {
    //     if (y>0) {printf("North-east");}
    //     if (y==0) {printf("East");}
    //     if (y<0) {printf("South-east");}
    // } else if (x<0) {
    //     if (y>0) {printf("North-west");}
    //     if (y==0) {printf("West");}
    //     if (y<0) {printf("South-west");}
    // }

    //08
    char str[8];

    printf("Welcome to My Pizza Shop!!\n~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Enter pizza size (1=s, 2=m, or 3=l): ");fgets(str, 8, stdin);int psize=atoi(str);
    printf("Extra pepperoni? (1=yes, 0=no): ");fgets(str, 8, stdin);float pextra=atoi(str)?.5:0;
    printf("Extra cheese? (1=yes, 0=no): ");fgets(str, 8, stdin);atoi(str)?pextra+=.25:0;
    printf("Extra mushroom? (1=yes, 0=no): ");fgets(str, 8, stdin);atoi(str)?pextra+=.3:0;

    psize = (psize==1) ? 10 : (psize==2) ? 16 : 20;
    float parea = (M_PI * psize*psize / 4);
    
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\nYour order costs %.2f baht.\nThank you.", 1.5 * (5 + (2 * parea) + (pextra * parea)));

    return 0;
}