#include <time.h>

int time_unit_options(char *c,int x, int flag)
{
    int unit_selected=x; 
        printf("Select %s:\n",c);
        printf("1 - Second\n");
        printf("2 - Millisecond\n");
        printf("3 - Microsecond\n");
        printf("4 - Minute\n");
        printf("5 - Hour\n");
        printf("6 - Day\n");
        printf("7 - Week\n");
        printf("8 - Month\n");
        printf("9 - Year\n");
        if(flag)
        scanf("%d",&unit_selected);
        if((unit_selected<1||unit_selected>9)&&flag){
            printf("Wrong option entered, try again!\n");
            while(fgetc(stdin) != '\n');
            unit_selected = time_unit_options(c,0,1);
        }
        return unit_selected;
}

double convert_time(double op, int from, int to)
{
    double fac_to = standard_time_unit(to);
    double fac_from = standard_time_unit(from);
    return op*fac_from/fac_to;
}

double standard_time_unit(int x)
{
    switch(x)
    {
        case 1:
            return 0.0166666667;
        case 2:
            return 0.0000166667;
        case 3:
            return 0.0000000166667;
        case 4:
            return 1;
        case 5:
            return 60;
        case 6:
            return 1440;
        case 7:
            return 10080;
        case 8:
            return 43830;
        case 9:
            return 525960;
        default:
            return 0;
    }
}