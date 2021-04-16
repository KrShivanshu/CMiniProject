#include <area.h>

int area_unit_options(char *c,int x, int flag)
{
    int unit_selected=x; 
        printf("Select %s:\n",c);
        printf("1 - Square Meter\n");
        printf("2 - Square Kilometer\n");
        printf("3 - Square Centimeter\n");
        printf("4 - Hectare\n");
        printf("5 - Square Mile\n");
        printf("6 - Square Yard\n");
        printf("7 - Square Foot\n");
        printf("8 - Square Inch\n");
        printf("9 - Acre\n");
        if(flag)
        scanf("%d",&unit_selected);
        if((unit_selected<1||unit_selected>9)&&flag==1){
            printf("Wrong option entered, try again!\n");
            unit_selected = area_unit_options(c,1,1);
        }
        return unit_selected;
}

double convert_area(double op, int from, int to)
{
    double fac_to = standard_area_unit(to);
    double fac_from = standard_area_unit(from);
    return op*fac_from/fac_to;
}

double standard_area_unit(int x)
{
    switch(x)
    {
        case 1:
            return 1;
        case 2:
            return 1000000;
        case 3:
            return 0.0001;
        case 4:
            return 10000;
        case 5:
            return 2589990;
        case 6:
            return 0.83612736;
        case 7:
            return 0.09290304;
        case 8:
            return 0.00064516;
        case 9:
            return 4046.8564224;
        default:
            return 0;
    }
}