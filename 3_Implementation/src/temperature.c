#include "temperature.h"

int temperature_unit_options(char *c,int x,int flag)
{
    int unit_selected=x; 
        printf("Select %s:\n",c);
        printf("1 - Celsius\n");
        printf("2 - Kelvin\n");
        printf("3 - Fahrenheit\n");
        if(flag)
        scanf("%d",&unit_selected);
        if((unit_selected<1||unit_selected>3)&&flag){
            printf("Wrong option entered, try again!\n");
            unit_selected = temperature_unit_options(c,0,1);
        }
        return unit_selected;
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
