/**
 * @file time.h
 * @author KUMAR SHIVANSUH (kumarshivanshu13@gmail.com)
 * @brief time TO time CONVERSION 
 * @version 0.1
 * @date 2021-04-12
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __TIME_H__
#define __TIME_H__

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief finds standard_time_unit for from and to unit
 * 
 * @param x
 * @return double 
 */
double standard_time_unit(int x);

/**
 * @brief convert the operand using factor to required result
 * 
 * @param op - operand
 * @param from 
 * @param to 
 * @return double 
 */
double convert_time(double op, int from, int to);

/**
 * @brief time unit "from" and "to" options
 * 
 * @param flag - to decide if to scan input or not
 * @param x - default value for unit_selected var
 * @param c - string will be either "from" or "to"
 * @return int 
 */
int time_unit_options(char *c,int x,int flag);

#endif