#include <stdio.h>

#define INPUT_FILE "shortInput" 

int main(){
    int c;
    int pc = 0;
	FILE *input;
    
    input = fopen(INPUT_FILE, "r");
    if (input == 0){
        printf("error opening the file: %s\n", INPUT_FILE);
        return -1;
    }

    while ((c = fgetc(input)) != EOF){
        if (c == ' ' &&  pc == ' '){
            continue;
        }
        else{
            putchar(c);
            pc = c;
        }
    }
}
