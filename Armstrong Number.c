#include <stdio.h>
#include <math.h>

int isArmstrong(int num){
    int number = num, count = 0, add = 0;

    while (num != 0){
        num /= 10;
        count++;
    }

    num = number;

    while (num != 0){
        int digit= num % 10;
        add +=pow(digit, count);
        num /=10;
    }

    return add == number;
}

int main(){
    int start, end;

    printf("eNTER BOTH start and end number: \n");
    scanf("%d %d", &start, &end);

    if(start > end){
        printf("the start is bigger than the end number, so it can't work");
        return 1;
    }
    printf("Your ARmstrong numbers: ");
    int noNum = 0;

    for(int i=start; i<= end; i++){
        if(isArmstrong(i)){
            printf("%d ", i);
            noNum =1;
        }
    }
    if(!noNum){
        printf("None");
    }
    return 0;
}
