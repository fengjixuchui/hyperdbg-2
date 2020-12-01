/**
 * @file ScriptEngine.h
 * @author M.H. Gholamrezei (gholamrezaei.mh@gmail.com)
 * @brief Script engine parser and codegen
 * @details
 * @version 0.1
 * @date 2020-10-22
 *
 * @copyright This project is released under the GNU Public License v3.
 *
 */

#pragma once



#include <stdio.h>
#include "ScriptEngineCommon.h"
#include "scanner.h"
#include "common.h"

PSYMBOL NewSymbol(void);

void RemoveSymbol(PSYMBOL Symbol);

__declspec(dllexport) void PrintSymbol(PSYMBOL Symbol);

PSYMBOL_BUFFER NewSymbolBuffer(void);

__declspec(dllexport) void RemoveSymbolBuffer(PSYMBOL_BUFFER SymbolBuffer);

PSYMBOL_BUFFER PushSymbol(PSYMBOL_BUFFER SymbolBuffer, const PSYMBOL Symbol);

PSYMBOL PopSymbol(PSYMBOL_BUFFER SymbolBuffer);

__declspec(dllexport) void PrintSymbolBuffer(const PSYMBOL_BUFFER SymbolBuffer);

PSYMBOL ToSymbol(TOKEN Token);

__declspec(dllexport) PSYMBOL_BUFFER ScriptEngineParse(char* str);

void CodeGen(TOKEN_LIST MatchedStack, PSYMBOL_BUFFER CodeBuffer, TOKEN Operator);

char HasTwoOperand(TOKEN Operator);

unsigned long long int RegisterToInt(char* str);

unsigned long long int PseudoRegToInt(char* str);

unsigned long long int SemanticRuleToInt(char* str);

