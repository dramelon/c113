#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// #include <string.h>


//03 Sieve of Erasthanos
#define ARRAY_SIZE 98

//04 Chess Board
#define BOARD_SIZE    8

//05 Bishop's Way (function)
void bishopMoves(int y, int x) {
    printf("  0 1 2 3 4 5 6 7");
    printf("\n------------------\n");
    for (int i=0; i<8; i++){
        printf("%d|", i);
        for (int j=0; j<8; j++){
            (x==i&&y==j)?printf("B|"):
            x+y==i+j?printf("X|"):
            x-y==i-j?printf("X|"):
            printf(" |");
        }
        printf("\n------------------\n");
    }
}

//07 หมวกคัดสรร
void removeTarget(int *array, int size, int target);

//08 นักโทษแห่งอัซคาบัน
void removeKilled(int *array, int size, int killedPrisoner);


int main() {
    //01 แปลงรูปแบบ 12-hour เป็น 24-hour
    // int h, m;
    // char ampm;
    // printf("Enter a 12-hour time [eg. 12:34 am]: ");
    // scanf(" %d:%d %c", &h, &m, &ampm);
    // ((ampm=='p'||ampm=='P')&&!(h==12))?h+=12:0;
    // ((ampm=='a'||ampm=='A')&&(h==12))?h-=12:0;
    // printf("Equivalent 24-hour time: %02d:%02d", h, m);

    //02 Semester GPA (Full program)
    // int t;
    // printf("Enter number of subject(s): "); scanf("%d",&t);
    //
    // float tc, tg;
    // float c; char sg;
    // for (int i=0; i<t; i++){
    //     printf("Enter credit,grade for subject #%d: ", i+1);
    //     scanf("%f,%c", &c, &sg);
    //     tc+=c;
    //     (sg=='a' || sg=='A')?tg+=4*c:
    //     (sg=='b' || sg=='B')?tg+=3*c:
    //     (sg=='c' || sg=='C')?tg+=2*c:
    //     (sg=='d' || sg=='D')?tg+=1*c:0;
    // }
    // tc==0?printf("GPA = 0.00"):printf("GPA = %.2f", tg/tc);

    //03 Sieve of Erasthanos
    // int i, j;
    // int A[ARRAY_SIZE] = {0};
    // for (i = 2; i < ARRAY_SIZE; i++)
    //     A[i] = 1;
    // for (i=2; i<ARRAY_SIZE; i++) {
    //     for (j=i+1; j<=ARRAY_SIZE; j++){
    //         if (j%i==0){
    //             A[j]=0;
    //         }
    //     }
    // }
    //
    // for (i = 2; i < ARRAY_SIZE; i++)
    //     if (A[i])
    //         printf("%d ", i);
    //
    // printf("\n");

    //04 Chess Board
    // int t; scanf("%d",&t);
    //
    // char table[BOARD_SIZE][BOARD_SIZE];
    // for (int i=0; i<BOARD_SIZE; i++){
    //     for (int j=0; j<BOARD_SIZE; j++){
    //         table[i][j] = ' ';
    //     }
    // }
    //
    // char c;
    // int x, y;
    // for (int i=0; i<t; i++){
    //     scanf(" %c(%d, %d)", &c, &x, &y);
    //     table[y][x] = c;
    // }
    //
    // printf("------------------\n");
    // printf("  0 1 2 3 4 5 6 7\n");
    // for (int i=0; i<BOARD_SIZE; i++){
    //     printf("%d|", i);
    //     for (int j=0; j<BOARD_SIZE; j++){
    //         printf("%c|", table[i][j]);
    //     }
    //     puts("");
    // }

    //05 Bishop's Way (function)
    // int x, y;
    // printf("Enter Bishop's X Y position: ");
    // scanf("%d %d", &x, &y);
    //
    // bishopMoves(x, y);

    //06 Pointer & String
    // char item[25] ="Computer Programming";
    // char *a1=item, *a2;
    // printf("%s\n",a1);
    // a2 = a1+5;
    // printf("%s\n",a2);
    // a2 = a1+8;
    // printf("%s\n",a2);

    //07 หมวกคัดสรร
    // int num, count, target, i;
    //
	// scanf("%d", &num);
	// scanf("%d", &count);
    //
	// int numbers[num];
	// int *numbersPtr = &numbers[0];
    //
	// // initialize array numbers from 1 to num by numbersPtr
	// for (; numbersPtr<&numbers[num]; numbersPtr++) {
    //     *numbersPtr = numbersPtr-&numbers[0]+1;
    // }
    //
    // // loop through count
    // for (i=0; i<count; i++) {
    //     scanf("%d", &target);
    //     removeTarget(&numbers[0], num, target);
    // }
    //
    // numbersPtr = &numbers[0];
    //
    // // print elements in numbers using numberPtr
    // for (; numbersPtr<&numbers[num]; numbersPtr++) {
    //     printf("%d ", *numbersPtr);
    // }
    // puts("");
    
    //08 นักโทษแห่งอัซคาบัน
    int numPrisoners, m, i;

	scanf("%d", &numPrisoners);
	scanf("%d", &m);

	int prisoners[numPrisoners];
	int killed[numPrisoners];

	// generate array 1 to numPrisoners
	for (i = 0; i < numPrisoners; i++) {
		prisoners[i] = i + 1;
	}

	int *killerPtr = &prisoners[0];

	// printf("@@ &prisoners[0] %d\n", (int) &prisoners[0]);
	// printf("@@ &prisoners[%d] %d\n", numPrisoners - 1, (int) &prisoners[numPrisoners - 1]);

	// Select prisoner to be killed
    //4 8 2 7 3 10 9 1 6 5
	for (i = 0; i < numPrisoners; i++) {
        for (int j=1; j<m; j++){
            if (*killerPtr==0){killerPtr=&prisoners[0];}
            killerPtr++;
            if (killerPtr>=&prisoners[numPrisoners] || *killerPtr==0){
                killerPtr=&prisoners[0];
            }
            if (j==m-1){
                //if (*(killerPtr+1)==0){killerPtr=&prisoners[0];};
                break;
            }
        }
        
        
        // append number of prisoner who is killed to array `killed`
		killed[i] = *killerPtr;
		// remove number killed prisoner from array `prisoners`
		removeKilled(&prisoners[0], numPrisoners, *killerPtr);
	}

	for (int i = 0; i < numPrisoners; i++) {
		printf("%d ", killed[i]);
	}

    return 0;
}


//07 หมวกคัดสรร
void removeTarget(int *array, int size, int target)
{
    for (int i=0; i<size; i++){
        if (array[i]==target){
            for (int j=i; j<size; j++){
                if (j==size-1) {array[j] = 0;}
                else {array[j] = array[j+1];}
            }
        }
    }
}

//08 นักโทษแห่งอัซคาบัน
void removeKilled(int *array, int size, int killedPrisoner)
{
    for (int i=0; i<size; i++){
        if (array[i]==killedPrisoner){
            for (int j=i; j<size; j++){
                if (j==size-1) {array[j] = 0;}
                else {array[j] = array[j+1];}
            }
        }
    }
}