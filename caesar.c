/**
  *
  * caesar.c
  *
  * Brandon DeWitt
  *
  * Takes a command line argument integer to encrypt user input by shifting letters up by the key given at execution.  Wraps back to a if number exceeds z.
  *
  */

#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, string argv[]){

//Closes if lack of arguments

    if (argc != 2 ){
        return 1;
        printf("Error, must include key.");
    }

int key = atoi(argv[1]);
    //Get word to convert

    if (argc== 2 && key > 0) {
    printf("plaintext: ");
    string input = get_string();

    int slen = strlen(input);

    printf("ciphertext: ");

    for (int i = 0; i < slen; i++){
        if ((input[i] >='A' && input[i] <='Z')){
            printf("%c", ((((input[i] - 65)+key)%26)+65)); //Converts Uppercase making the wrap between 65 (A) + 26 = 90 (Z)
        }
        else if ((input[i] >= 'a' && input[i] <='z')){
            printf("%c", ((((input[i] - 97)+key)%26)+97)); //Get Lowercase making the wrap between 97 (a) + 26 = 122 (z)
        }
    else {
        printf("%c", input[i]); //Leaves non alphabetical characters alone.
        }
    }
    printf("\n");
}

}