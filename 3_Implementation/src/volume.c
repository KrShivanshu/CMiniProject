#include <volume.h>

int volume_unit_options(char *c,int x, int flag)
{
    int unit_selected=x; 
        printf("Select %s:\n",c);
        printf("1 - Cubic Meter\n");
        printf("2 - Cubic Kilometer\n");
        printf("3 - Cubic Centimeter\n");
        printf("4 - Liter\n");
        printf("5 - Gallon\n");
        printf("6 - Quart\n");
        printf("7 - Pint\n");
        printf("8 - Fluid Ounce\n");
        if(flag)
        scanf("%d",&unit_selected);
        if((unit_selected<1||unit_selected>8)&&flag==1){
            printf("Wrong option entered, try again!\n");
            unit_selected = volume_unit_options(c,1,1);
        }
        return unit_selected;
}

double convert_volume(double op, int from, int to)
{
    double fac_to = standard_volume_unit(to);
    double fac_from = standard_volume_unit(from);
    return op*fac_from/fac_to;
}

double standard_volume_unit(int x)
{
    switch(x)
    {
        case 1:
            return 1;
        case 2:
            return 1000000000;
        case 3:
            return 0.000001;
        case 4:
            return 0.001;
        case 5:
            return 0.00378541;
        case 6:
            return 0.0009463525;
        case 7:
            return 0.0004731763;
        case 8:
            return 0.0000295735;
        default:
            return 0;
    }
}