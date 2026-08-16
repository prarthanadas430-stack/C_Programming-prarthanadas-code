#include<stdio.h>

void checkTemperature(float temp);
int main(){
    float temperature;
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &temperature);
    checkTemperature(temperature);
    return 0;
}
void checkTemperature(float temp){
    if(temp<=25){
        printf("The temperature is cold.\n");
    }
    else{
        printf("The temperature is hot.\n");
    }
}