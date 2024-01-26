#include <stdio.h>
#include <stdlib.h>
//#include <unistd.h>

#define PI 22.0/7

int main() {
  //01
  // int computer_time = 785;  // ในโปรแกรมตรวจอาจเปลี่ยนค่าของตัวแปรนี้ แต่นิสิตไม่ต้องเปลี่ยนค่าของตัวแปรนี้
  // printf("It is %d days %d hours and %d minutes.", computer_time/1440, computer_time/60%24, computer_time%60);


  //02
  float radius = 3.5;
  float n4d3 = 4.000000/3;
  printf("The volume of this sphere is %.2f", n4d3*PI*radius*radius*radius);
  //printf("The volume of this sphere is %.2f", 2*PI*radius*radius);


  //03
  // float preGrade = 1.75;
  // int preCredit = 21;
  // int credit = 18;
  // float requiredGrade = 2.00;
  // printf("The GPA this semester should be %.2f", ((preCredit+credit)*requiredGrade-(preCredit*preGrade))/credit );


  //04
  // printf("x\nxx\nxxx\n xx\n  x");
  // printf("printf(\"Hello, world\\n\");");


  //05
  //int amount = 93;
  //printf("1: %d\n5: %d\n20: %d\n50: %d", amount%5, amount%50%20/5, amount%50/20, amount/50);
  
  
  return 0;
}