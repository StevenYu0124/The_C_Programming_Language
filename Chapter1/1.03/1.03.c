#include <stdio.h>

float fahrToCelsius(float fahr);

int main(){
    int celsius, fahr;
    printf("%7s\t%8s\n","fahr","celsius");
    for (int i = 0; i <= 300; i += 20){
        printf("%7d\t%8.2f\n", i, fahrToCelsius(i));
    }
}

float fahrToCelsius(float fahr){
    return (5.0/9.0) * (fahr - 32.0);
}