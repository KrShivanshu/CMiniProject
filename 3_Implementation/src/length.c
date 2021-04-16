#include <length.h>

int length_unit_options(char *c,int x, int flag)
{
    int unit_selected=x; 
        printf("Select %s:\n",c);
        printf("1 - Meter\n");
        printf("2 - Kilometer\n");
        printf("3 - Centimeter\n");
        printf("4 - Millimeter\n");
        printf("5 - Nanometer\n");
        printf("6 - Micrometer\n");
        printf("7 - Mile\n");
        printf("8 - Foot\n");
        printf("9 - Inch\n");
        if(flag)
        scanf("%d",&unit_selected);
        if((unit_selected<1||unit_selected>9)&&flag==1){
            printf("Wrong option entered, try again!\n");
        while(fgetc(stdin) != '\n');
            unit_selected = length_unit_options(c,1,1);
        }
        return unit_selected;
}

double convert_length(double op, int from, int to)
{
    double fac_to = standard_length_unit(to);
    double fac_from = standard_length_unit(from);
    return op*fac_from/fac_to;
}

double standard_length_unit(int x)
{
    switch(x)
    {
        case 1:
            return 1;
        case 2:
            return 1000;
        case 3:
            return 0.01;
        case 4:
            return 0.001;
        case 5:
            return 0.000000001;
        case 6:
            return 0.000001;
        case 7:
            return 1609.344;
        case 8:
            return 0.3048;
        case 9:
            return 0.0254;
        default:
            return 0;
    }
}