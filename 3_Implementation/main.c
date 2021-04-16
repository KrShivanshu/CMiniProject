#include <stdio.h>
#include <string.h>
#include <length.h>
#include <temperature.h>
#include <volume.h>
#include "volume.h"
#include "area.h"
#include "weight.h"
#include "time.h"
#include "toString.h"

enum type{length=1,temperature,volume,area,weight,time};

int unit_type_display(int x,int flag);
double operand();

int main()
{
    int unit_type = unit_type_display(0,1);
    int unit_from,unit_to;
    char *unit_from_string,*unit_to_string;
    double op,ans;
    switch(unit_type)
    {
        case length: 
            unit_from = length_unit_options("from",0,1); 
            unit_to = length_unit_options("to",0,1);
            unit_from_string = lengthTypeFromIntToString(unit_from);       
            unit_to_string = lengthTypeFromIntToString(unit_to);
            op = operand();
            ans = convert_length(op,unit_from,unit_to);
            printf("%lf %s is equal to %-0.15lf %s",op,unit_from_string,ans,unit_to_string);
            break;

        case temperature:
            unit_from = temperature_unit_options("from",0,1);        
            unit_to = temperature_unit_options("to",0,1); 
            unit_from_string = temperatureTypeFromIntToString(unit_from);       
            unit_to_string = temperatureTypeFromIntToString(unit_to);
            op = operand();
            ans = convert_temperature(op,unit_from,unit_to);
            printf("%lf %s is equal to %-0.15lf %s",op,unit_from_string,ans,unit_to_string);;
            break;

        case volume:
            unit_from = volume_unit_options("from",0,1);        
            unit_to = volume_unit_options("to",0,1); 
            unit_from_string = volumeTypeFromIntToString(unit_from);       
            unit_to_string = volumeTypeFromIntToString(unit_to);
            op = operand();
            ans = convert_volume(op,unit_from,unit_to);
            printf("%lf %s is equal to %-0.15lf %s",op,unit_from_string,ans,unit_to_string);
            break;
            
        case area:
            unit_from = area_unit_options("from",0,1);        
            unit_to = area_unit_options("to",0,1); 
            unit_from_string = areaTypeFromIntToString(unit_from);       
            unit_to_string = areaTypeFromIntToString(unit_to);
            op = operand();
            ans = convert_area(op,unit_from,unit_to);
            printf("%lf %s is equal to %-0.15lf %s",op,unit_from_string,ans,unit_to_string);
            break;

        case weight:
            unit_from = weight_unit_options("from",0,1);        
            unit_to = weight_unit_options("to",0,1);
            unit_from_string = weightTypeFromIntToString(unit_from);       
            unit_to_string = weightTypeFromIntToString(unit_to);
            op = operand();
            ans = convert_weight(op,unit_from,unit_to);
            printf("%lf %s is equal to %-0.15lf %s",op,unit_from_string,ans,unit_to_string);
            break;

        case time:
            unit_from = time_unit_options("from",0,1);        
            unit_to = time_unit_options("to",0,1); 
            unit_from_string = timeTypeFromIntToString(unit_from);       
            unit_to_string = timeTypeFromIntToString(unit_to);
            op = operand();
            ans = convert_time(op,unit_from,unit_to);
            printf("%lf %s is equal to %-0.15lf %s",op,unit_from_string,ans,unit_to_string);
            break;
    }
    return 0;
}
int unit_type_display(int x, int flag)
{
    int unit_type;
    printf("Select type of unit:\n");

    printf("1 - Length\n");
    printf("2 - Temperature\n");
    printf("3 - Volume\n");
    printf("4 - Area\n");
    printf("5 - Weight\n");
    printf("6 - Time\n");
    if(flag)
    scanf("%d",&unit_type);
    if((unit_type<1||unit_type>6)&&flag)
    {
        printf("Wrong option entered, try again!\n");
        unit_type=unit_type_display(0,1);
    }
    return unit_type;
}
double operand()
{
    double op;
    printf("Enter the operand:\n");
    scanf("%lf",&op);
    return op;
}
