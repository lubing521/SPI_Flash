/*
 * util.h
 *
 *  Created on: Nov 14, 2017
 *      Author: Station13
 */
#include "stm32l4xx_hal.h"
#include <stdlib.h>
#include "buffer.h"


#ifndef UTIL_H_
#define UTIL_H_


#define MASK_8BIT 0xFF

void fp_to_uint_array(uint32_t fp, uint8_t* arr, uint* index);
void merge_uint_to_fp(uint8_t* uint_arr, uint32_t* fp_arr,int float_arr_size);
void fill_array_with_triplet(uint8_t* arr, triplet xyz_triplet,uint* index);


#endif /* UTIL_H_ */
