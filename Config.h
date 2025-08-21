#pragma once

#define WIN32 
#define PC_SIMULATION 
#define TRACE_TO_CONSOLE 
//#define TRACE_TO_FILE 
#define PROFILING 
#define SHOW_INSTRUCTIONS

// Total ns32k memory size to emulate
// This represents the entire address space of the NS3200 
#define SYSTEM_SIZE  MEG16

#define LOAD_BASE    0xF00000


#define RAM_SIZE     MEG16
#define IO_BASE         0xFFFFF0
#define IO_SIZE         0x10