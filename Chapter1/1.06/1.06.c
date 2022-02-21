#include <stdio.h>

#define INPUT_FILE "shortInput" 

int main(){
    int c;
    FILE *input;
    
    input = fopen(INPUT_FILE, "r");
    if (input == 0){
        printf("error opening the file:%s", INPUT_FILE);
        return -1;
    }

    do{
        c = fgetc(input);
        printf("fgetc() != EOF return %d\n",c != EOF);
        putchar(c);
        printf("\n");
    }
    while (c != EOF);
    printf("\n");
}
