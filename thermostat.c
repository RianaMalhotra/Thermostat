#include <stdio.h>
int main(void){
    double temperature;
    printf("Enter the thermostat temperature: ");
    scanf("%lf",&temperature);
    double celtemp = ((temperature-32)*5)/9;
    double far = temperature - 71.6;
    printf("The tempearture in Celsius is %.1lf\n",celtemp);
    printf("You are %.1lf degrees Fahrenheit away from a nice 22 degrees Celsius.\n", far);
    return 0;
}
