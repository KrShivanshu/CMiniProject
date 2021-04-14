/**
 * @file length.h
 * @author KUMAR SHIVANSUH
 * @brief LENGTH TO LENGTH CONVERSION 
 * @version 0.1
 * @date 2021-04-12
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __LENGTH_H__
#define __LENGTH_H__

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief finds factor for from and to unit
 * 
 * @param x
 * @return double 
 */
double factor(int x);

/**
 * @brief convert the operand using factor to required result
 * 
 * @param op - operand
 * @param from 
 * @param to 
 * @return double 
 */
double convert_length(double op, int from, int to);

/**
 * @brief lenght unit from and to options
 * 
 * @param c - string 
 * @return int 
 */
int length_unit(char *c);

#endif