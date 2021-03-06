/* Copyright (c) 2014 Ivan Grokhotkov. All rights reserved. 
 * This file is part of the atproto AT protocol library
 *
 * Redistribution and use is permitted according to the conditions of the
 * 3-clause BSD license to be found in the LICENSE file.
 */

#ifndef INTERFACE_COMMANDS_H
#define INTERFACE_COMMANDS_H

#include "dce.h"
#include "uart.h"

void dce_register_interface_commands(dce_t* dce, uart_t* uart);


#endif//INTERFACE_COMMANDS_H
