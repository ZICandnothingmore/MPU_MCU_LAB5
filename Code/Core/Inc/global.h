/*
 * global.h
 *
 *  Created on: 30 thg 11, 2024
 *      Author: ACER
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"

// FOR PARSER FSM


#define INIT	0
#define _		1
#define _R		2
#define _RS		3
#define _RST	4
#define _RST_	5
#define HI		6

#define O			11
#define OK			12

// FOR COMMUNICATION FSM
#define SEND		21
#define WAIT		22

// FOR UART
#define MAX_BUFFER_SIZE 30

extern uint8_t temp;
extern uint8_t buffer[MAX_BUFFER_SIZE];
extern int parser_check_next;
extern int message_UART;
extern uint8_t command_flag;
extern uint8_t command_data[MAX_BUFFER_SIZE];

extern int BEGIN;
extern int END;
extern uint8_t index_buffer;
extern uint8_t buffer_flag;

extern int ADC_value;
extern char str[50];

#endif /* INC_GLOBAL_H_ */
