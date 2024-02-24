#include <stdio.h>
#include <string.h>

//Define the uppercase_letter Function
void uppercase_letter(char lowercase_letter[]){
    int i = 0;
    while (lowercase_letter[i] != '\0') {
        if (lowercase_letter[i] >= 'a' && lowercase_letter[i] <= 'z'){
            lowercase_letter[i] = lowercase_letter[i] - 32;
        }
        i++;
    }        
}
 //Define the main function
int main(){
    char lowercase_letter[99];

    printf("Enter a lowercase letter: \n");
    fgets(lowercase_letter, sizeof(lowercase_letter), stdin);

    uppercase_letter(lowercase_letter);

    printf("The uppercase is: %s\n", lowercase_letter);

    return 0;
}
