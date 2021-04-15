/**
 * @file weight.h
 * @author KUMAR SHIVANSUH (kumarshivanshu13@gmail.com)
 * @brief Weight TO Weight CONVERSION 
 * @version 0.1
 * @date 2021-04-12
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __WEIGHT_H__
#define __WEIGHT_H__

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief finds standard_weight_unit for from and to unit
 * 
 * @param x
 * @return double 
 */
double standard_weight_unit(int x);

/**
 * @brief convert the operand using factor to required result
 * 
 * @param op - operand
 * @param from 
 * @param to 
 * @return double 
 */
double convert_weight(double op, int from, int to);

/**
 * @brief weight unit "from" and "to" options
 * 
 * @param flag - to decide if to scan input or not
 * @param x - default value for unit_selected var
 * @param c - string will be either "from" or "to"
 * @return int 
 */
int weight_unit_options(char *c,int x,int flag);

#endif