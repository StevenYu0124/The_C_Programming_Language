#include <stdio.h>

#define INPUT_FILE "shortInput" 

int main(){
    int c;
	FILE *input;
    
    input = fopen(INPUT_FILE, "r");
    if (input == 0){
        printf("error opening the file: %s\n", INPUT_FILE);
        return -1;
    }

    while ((c = fgetc(input)) != EOF){
        switch (c){
			case '\b':
				printf("\\b");
				break;
			case '\t':
				printf("\\t");
				break;
			case '\\':
				printf("\\\\");
				break;
			default:
				putchar(c);
				break;
		}
    }
}
