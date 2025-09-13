#include <stdio.h>
int main(int argc, const char * argv[]) {
    int y;
    printf("enter year = ");
    scanf("%d",&y);
    if ((y%4==0 && y%100 !=0) || y%400==0){
        printf("year is a leap year");
    }
    else
        printf("year is not a leap year");
    return 0;
}
