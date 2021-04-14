/**
 * @file temperature.h
 * @author Kumar Shivanshu
 * @brief temperature conversion function
 * @version 0.1
 * @date 2021-04-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __TEMPERATURE_H__
#define __TEMPERATURE_H__

#include<stdio.h>
#include<stdlib.h>

/**
 * @brief convert the operand to required result
 * 
 * @param op - operand
 * @param from 
 * @param to 
 * @return double 
 */
double convert_temperature(double op, int from, int to);

/**
 * @brief temperature unit from and to options
 * 
 * @param c - string 
 * @return int 
 */
int temperature_unit(char *c);

#endif


