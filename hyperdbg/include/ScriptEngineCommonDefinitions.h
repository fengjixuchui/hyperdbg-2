#pragma once
#ifndef SCRIPT_ENGINE_COMMON_DEFINITIONS_H
#define SCRIPT_ENGINE_COMMON_DEFINITIONS_H

typedef struct SYMBOL {
	long long unsigned Type;
	long long unsigned Value;
} SYMBOL, * PSYMBOL;

typedef struct SYMBOL_BUFFER {
	PSYMBOL Head;
	unsigned int Pointer;
	unsigned int Size;
	char* Message;
} SYMBOL_BUFFER, * PSYMBOL_BUFFER;

typedef struct SYMBOL_MAP
{
    char* Name;
    long long unsigned Type;
} SYMBOL_MAP, * PSYMBOL_MAP;

#define SYMBOL_ID_TYPE 0
#define SYMBOL_NUM_TYPE 1
#define SYMBOL_REGISTER_TYPE 2
#define SYMBOL_PSEUDO_REG_TYPE 3
#define SYMBOL_SEMANTIC_RULE_TYPE 4
#define SYMBOL_TEMP_TYPE 5

#define INVALID -1



#define FUNC_OR 0
#define FUNC_XOR 1
#define FUNC_AND 2
#define FUNC_ASR 3
#define FUNC_ASL 4
#define FUNC_ADD 5
#define FUNC_SUB 6
#define FUNC_MUL 7
#define FUNC_DIV 8
#define FUNC_MOD 9
#define FUNC_PRINT 10
#define FUNC_JSON 11
#define FUNC_POI 12
#define FUNC_DB 13
#define FUNC_DD 14
#define FUNC_DW 15
#define FUNC_DQ 16
#define FUNC_STR 17
#define FUNC_WSTR 18
#define FUNC_SIZEOF 19
#define FUNC_NEG 20
#define FUNC_HI 21
#define FUNC_LOW 22
#define FUNC_NOT 23
#define FUNC_MOV 24

#define REGISTER_RAX 0
#define REGISTER_RCX 1
#define REGISTER_RDX 2
#define REGISTER_RBX 3
#define REGISTER_RSP 4
#define REGISTER_RBP 5
#define REGISTER_RSI 6
#define REGISTER_RDI 7
#define REGISTER_R8 8
#define REGISTER_R9 9
#define REGISTER_R10 10
#define REGISTER_R11 11
#define REGISTER_R12 12
#define REGISTER_R13 13
#define REGISTER_R14 14
#define REGISTER_R15 15

#define PSEUDO_REGISTER_PID 0
#define PSEUDO_REGISTER_TID 1

#endif