/*
 * global.c
 *
 *  Created on: 30 thg 11, 2024
 *      Author: ACER
 */

#include "global.h"

uint8_t temp = 0;
uint8_t buffer[MAX_BUFFER_SIZE];
uint8_t index_buffer = 0;
uint8_t buffer_flag = 0;
int parser_check_next = INIT;
int message_UART = INIT;
uint8_t command_flag = 1;
uint8_t command_data[MAX_BUFFER_SIZE];

int BEGIN = 1;
int END = 0;

int ADC_value = 0;
char str[50];
