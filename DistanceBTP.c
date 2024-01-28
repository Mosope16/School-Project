#include <stdio.h>
#include <math.h>

int main(){
    float x1, x2, y1, y2, S;

    printf("Enter the value of the first coordinates (x1, y1):\n");
    scanf("%f %f", &x1, &y1);

    printf("Enter the value of the second coordinates (x2, y2):\n");
    scanf("%f %f", &x2, &y2);

     S = sqrt(pow(y2 - y1, 2) + pow(x2 - x1, 2));

    printf("The distance between the two points is: %.2f\n", S);

    return 0;

}
