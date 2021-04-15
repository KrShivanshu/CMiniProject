/**
 * @file volume.h
 * @author KUMAR SHIVANSHU (kumarshivanshu13@gmail.com)
 * @brief Volume to volume conversion
 * @version 0.1
 * @date 2021-04-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __VOLUME_H__
#define __VOLUME_H__

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief finds standard_volume_unit for from and to unit
 * 
 * @param x
 * @return double - return value of x in cubixc meter
 */
double standard_volume_unit(int x);

/**
 * @brief convert the operand using factor to required result
 * 
 * @param op - operand
 * @param from 
 * @param to 
 * @return double 
 */
double convert_volume(double op, int from, int to);

/**
 * @brief displays volume from and to unit options
 * 
 * @param flag - to decide if to scan input or not
 * @param x - default value for unit_selected var
 * @param c - string will be either "from" or "to"
 * @return int 
 */
int volume_unit_options(char *c,int x,int flag);

#endif