#include <stdio.h>

float celsiusToFehr(float celsius);

int main(){
    int celsius, fahr;
    printf("%7s\t%8s\n","celsius","fahr");
    for (int i = 0; i <= 300; i += 20){
        printf("%7d\t%8.2f\n", i, celsiusToFehr(i));
    }
}

float celsiusToFehr(float celsius){
    return celsius * (9.0/5.0) + 32.0;
}