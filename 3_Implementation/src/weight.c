#include <weight.h>

int weight_unit_options(char *c,int x, int flag)
{
    int unit_selected=x; 
        printf("Select %s:\n",c);
        printf("1 - Gram\n");
        printf("2 - Kilogram\n");
        printf("3 - Milligram\n");
        printf("4 - Metric Ton\n");
        printf("5 - Pound\n");
        printf("6 - Ounce\n");
        printf("7 - Carrat\n");
       // printf("8 - Atomic Mass\n");
        if(flag)
        scanf("%d",&unit_selected);
        if((unit_selected<1||unit_selected>7)&&flag==1){
            printf("Wrong option entered, try again!\n");
            unit_selected = weight_unit_options(c,1,1);
        }
        return unit_selected;
}

double convert_weight(double op, int from, int to)
{
    double fac_to = standard_weight_unit(to);
    double fac_from = standard_weight_unit(from);
    return op*fac_from/fac_to;
}

double standard_weight_unit(int x)
{
    switch(x)
    {
        case 1:
            return 0.0010;
        case 2:
            return 1;
        case 3:
            return 0.000001;
        case 4:
            return 1000;
        case 5:
            return 0.453592;
        case 6:
            return 0.0283495;
        case 7:
            return 0.0002;
        case 8:
            return 0.000000000000000000000000001660539;
        default:
            return 0;
    }
}