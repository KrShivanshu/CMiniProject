#include <toString.h>

char * lengthTypeFromIntToString(int a)
{
    switch (a)
    {
    case 1: 
        return "Meter(s)";
    case 2:
        return "Kilometer(s)";
    case 3:
        return "Centimeter(s)";
    case 4:
        return "Millimeter(s)";
    case 5:
        return "Nanometer(s)";
    case 6:
        return "Micrometer(s)";
    case 7:
        return "Mile(s)";
    case 8:
        return "Foot(Feet)";
    case 9:
        return "Inch(es)";
    default:
        return "Wrong Unit";
    }
}

char * temperatureTypeFromIntToString(int a)
{
    switch (a)
    {
    case 1: 
        return "Celcius";
    case 2:
        return "Kelvin(s)";
    case 3:
        return "Fahrenheit";
    default:
        return "Wrong Unit";
    }
}

char * volumeTypeFromIntToString(int a)
{
    switch (a)
    {
    case 1: 
        return "Cubic Meter(s)";
    case 2:
        return "Cubic Kilomter(s)";
    case 3:
        return "Cubic Centimeter(s)";
    case 4:
        return "Liter(s)";
    case 5:
        return "Gallon(s)";
    case 6:
        return "Quart(s)";
    case 7:
        return "Pint(s)";
    case 8:
        return "Fluid Ounce(s)";
    default:
        return "Wrong Unit";
    }
}

char * areaTypeFromIntToString(int a)
{
    switch (a)
    {
    case 1: 
        return "Square Meter(s)";
    case 2:
        return "Square Kilomter(s)";
    case 3:
        return "Square Centimeter(s)";
    case 4:
        return "Hectare(s)";
    case 5:
        return "Square Mile(s)";
    case 6:
        return "Square Yard(s)";
    case 7:
        return "Square Foot(Feet)";
    case 8:
        return "Square Inch(es)";
    case 9:
        return "Acre(s)";
    default:
        return "Wrong Unit";
    }
}

char * weightTypeFromIntToString(int a)
{
    switch (a)
    {
    case 1: 
        return "Gram(s)";
    case 2:
        return "Kilogram(s)";
    case 3:
        return "Milligram(s)";
    case 4:
        return "Metric Ton(s)";
    case 5:
        return "Pound(s)";
    case 6:
        return "Ounce(s)";
    case 7:
        return "Carrat(s)";
    default:
        return "Wrong Unit";
    }
}

char * timeTypeFromIntToString(int a)
{
    switch (a)
    {
    case 1: 
        return "Second(s)";
    case 2:
        return "Millisecond(s)";
    case 3:
        return "Micrsecond(s)";
    case 4:
        return "Minute(s)";
    case 5:
        return "Hour(s)";
    case 6:
        return "Day(s)";
    case 7:
        return "Week(s)";
    case 8:
        return "Month(s)";
    case 9:
        return "Year(s)";
    default:
        return "Wrong Unit";
    }
}