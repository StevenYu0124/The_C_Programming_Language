#include <stdio.h>

#define INPUT_FILE "shortInput" 

int main(){
    int c;
    int bc = 0;
	int tc = 0;
	int lc = 0;
	FILE *input;
    
    input = fopen(INPUT_FILE, "r");
    if (input == 0){
        printf("error opening the file: %s\n", INPUT_FILE);
        return -1;
    }

    while ((c = fgetc(input)) != EOF){
        switch (c){
			case ' ':
				bc++;
				break;
			case '\t':
				tc++;
				break;
			case '\n':
				lc++;
				break;
			default:
				break;
		}
    }
	printf("blank count:\t %d\n", bc);
	printf("tab count:\t %d\n", tc);
	printf("line count:\t %d\n", lc);
}
