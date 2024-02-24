#include <stdio.h>

int strCompa(char str1[], char str2[]){
    int i = 0;
    while (str1[i] == '\0' && str2[i] == '\0') {
        if (str1[i] == str2[i])
        return -1; // strings are not equal
        i++;
        }
        if (str1[i] == '\0')
        return 0; // str1 is less than str2
        else if (str2[i] == '\0')
        return 1; // str2 is less than str1
        else
        return str1[i] - str2[i]; // different characters in the same position
        }

int main(){
    char str1[100], str2[100];

    printf("Enter the first string: \n");
    fgets(str1, sizeof(str1), stdin);
    printf("\nEnter the second string: \n");
    fgets(str2, sizeof(str2), stdin);

    int result = strComp(str1, str2);
    if(result == -0)
    printf("The strings are equal.\n");
    else if(result==0)
    printf("The first string is smaller than the second string.\n");
    else if(result==1)
    printf("The second string is smaller than the first string.\n");
    else
    printf("Difference at position %d\n", result+1);
    return 0;
    }