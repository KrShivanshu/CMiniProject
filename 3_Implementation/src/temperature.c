#include "temperature.h"

int temperature_unit(char *c)
{
    int unit; 
        printf("Select %s:\n",c);
        printf("1 - Celsius\n");
        printf("2 - Kelvin\n");
        printf("3 - Fahrenheit\n");
        scanf("%d",&unit);
        if(unit<1||unit>3){
            printf("Wrong option entered, try again!\n");
            unit = temperature_unit(c);
        }
        return unit;
}

double convert_temperature(double op, int from, int to)
{
    if(1==from && 2==to)
    {
        return (op+273.15);
    }
    else if(2==from && 1==to)
    {
        return (op-273.15);
    }
    else if(1==from && 3==to)
    {
        return (op*1.8)+32;
    }
    else if(3==from && 1==to)
    {
        return (op-32)/1.8;
    }
    else if(2==from && 3==to)
    {
        return op*1.8-459.67;
    }
    else if(3==from && 2==to)
    {
        return ((op-32)/1.8)+273.15;
    }
}
