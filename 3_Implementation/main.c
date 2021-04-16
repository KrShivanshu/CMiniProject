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

/**
 * @brief unit type enumaration starting from 1
 * 
 */
enum type{length=1,temperature,volume,area,weight,time};

/**
 * @brief displays unit types options
 * 
 * @param x - default value for initializing the unit_type variable
 * @param flag - flag to check if to accept input or not
 * @return int - unit type
 */
int unit_type_display(int x,int flag);

/**
 * @brief accepts input for operand
 * 
 * @return double - returns operand
 */
double operand();

/**
 * @brief first function to run by default
 * 
 * @return int 
 */
int main()
{
    int unit_type = unit_type_display(0,1);
    int unit_from,unit_to;
    char *unit_from_string,*unit_to_string;
    double op,ans;
    switch(unit_type)
    {
        /**
         * @brief length conversion based on input received and display the result
         * 
         */
        case length: 
            unit_from = length_unit_options("from",0,1); 
            unit_to = length_unit_options("to",0,1);
            unit_from_string = lengthTypeFromIntToString(unit_from);       
            unit_to_string = lengthTypeFromIntToString(unit_to);
            op = operand();
            ans = convert_length(op,unit_from,unit_to);
            printf("%lf %s is equal to %-0.15lf %s",op,unit_from_string,ans,unit_to_string);
            break;

        /**
         * @brief temperature conversion based on input received and display the result
         * 
         */
        case temperature:
            unit_from = temperature_unit_options("from",0,1);        
            unit_to = temperature_unit_options("to",0,1); 
            unit_from_string = temperatureTypeFromIntToString(unit_from);       
            unit_to_string = temperatureTypeFromIntToString(unit_to);
            op = operand();
            ans = convert_temperature(op,unit_from,unit_to);
            printf("%lf %s is equal to %-0.15lf %s",op,unit_from_string,ans,unit_to_string);;
            break;

        /**
         * @brief volume conversion based on input received and display the result
         * 
         */
        case volume:
            unit_from = volume_unit_options("from",0,1);        
            unit_to = volume_unit_options("to",0,1); 
            unit_from_string = volumeTypeFromIntToString(unit_from);       
            unit_to_string = volumeTypeFromIntToString(unit_to);
            op = operand();
            ans = convert_volume(op,unit_from,unit_to);
            printf("%lf %s is equal to %-0.15lf %s",op,unit_from_string,ans,unit_to_string);
            break;

        /**
         * @brief area conversion based on input received and display the result
         * 
         */
        case area:
            unit_from = area_unit_options("from",0,1);        
            unit_to = area_unit_options("to",0,1); 
            unit_from_string = areaTypeFromIntToString(unit_from);       
            unit_to_string = areaTypeFromIntToString(unit_to);
            op = operand();
            ans = convert_area(op,unit_from,unit_to);
            printf("%lf %s is equal to %-0.15lf %s",op,unit_from_string,ans,unit_to_string);
            break;

        /**
         * @brief weight conversion based on input received and display the result
         * 
         */
        case weight:
            unit_from = weight_unit_options("from",0,1);        
            unit_to = weight_unit_options("to",0,1);
            unit_from_string = weightTypeFromIntToString(unit_from);       
            unit_to_string = weightTypeFromIntToString(unit_to);
            op = operand();
            ans = convert_weight(op,unit_from,unit_to);
            printf("%lf %s is equal to %-0.15lf %s",op,unit_from_string,ans,unit_to_string);
            break;

        /**
         * @brief time conversion based on input received and display the result
         * 
         */
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
    char cont;
    printf("\nDo you want to continue(y/n):\n");
    while(fgetc(stdin) != '\n');
    scanf("%c",&cont);
    if(cont=='y'||cont=='Y')
    main();
    else
    return 0;
}

//displays unit types available options and receive input for it
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
        while(fgetc(stdin) != '\n');
        unit_type=unit_type_display(0,1);
    }
    return unit_type;
}

//recieves input for operand to converted
double operand()
{
    double op=0;
    printf("Enter the operand:\n");
    scanf("%lf",&op);
    return op;
}
