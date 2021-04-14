#include <stdio.h>
#include <length.h>
#include<temperature.h>

enum type{length=1,temperature,volume,area,weight,time};

int unit_type_display();
double operand();

int main()
{
    int unit_type = unit_type_display();
    int unit_from,unit_to;
    double op,ans;
    switch(unit_type)
    {
        case length: 
            unit_from = length_unit("from");        
            unit_to = length_unit("to"); 
            op = operand();
            ans = convert_length(op,unit_from,unit_to);
            printf("%-0.15lf",ans);
            break;
        case temperature:
            unit_from = temperature_unit("from");        
            unit_to = temperature_unit("to"); 
            op = operand();
            ans = convert_temperature(op,unit_from,unit_to);
            printf("%-0.5lf",ans);
            break;
            /*
        case volume:
            unit_from = length_unit();        
            unit_to = length_unit(); 
            op = operand();
            ans = convert_volume(op,unit_from,unit_to);
            printf("%-0.5lf",ans);
            break;
        case area:
            unit_from = length_unit();        
            unit_to = length_unit(); 
            op = operand();
            ans = convert_area(op,unit_from,unit_to);
            printf("%-0.5lf",ans);
            break;
        case weight:
            unit_from = length_unit();        
            unit_to = length_unit(); 
            op = operand();
            ans = convert_weight(op,unit_from,unit_to);
            printf("%-0.5lf",ans);
            break;
        case time:
            unit_from = length_unit();        
            unit_to = length_unit(); 
            op = operand();
            ans = convert_time(op,unit_from,unit_to);
            printf("%-0.5lf",ans);
            break;
            */
    }
    return 0;
}
int unit_type_display()
{
    int unit_type;
    printf("Select type of unit:\n");

    printf("1 - Length\n");
    printf("2 - Temperature\n");
    printf("3 - Volume\n");
    printf("4 - Area\n");
    printf("5 - Weight\n");
    printf("6 - Time\n");
    scanf("%d",&unit_type);
    if(unit_type<1||unit_type>6)
    {
        printf("Wrong option entered, try again!\n");
        unit_type=unit_type_display();
    }
    return unit_type;
}
double operand()
{
    double op;
    printf("Enter the operand:\n");
    scanf("%lf",&op);
    //printf("%lf",op);
    return op;
}