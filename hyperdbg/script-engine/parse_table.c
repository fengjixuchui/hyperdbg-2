#include "parse_table.h"
#include "common.h"
#include "ScriptEngineCommonDefinitions.h"
const struct _TOKEN Lhs[RULES_COUNT]= 
{
	{NON_TERMINAL, "S"},
	{NON_TERMINAL, "S'"},
	{NON_TERMINAL, "S'"},
	{NON_TERMINAL, "STATEMENT"},
	{NON_TERMINAL, "STATEMENT"},
	{NON_TERMINAL, "STATEMENT"},
	{NON_TERMINAL, "ASSIGN_STATEMENT"},
	{NON_TERMINAL, "CALL_FUNC_STATEMENT"},
	{NON_TERMINAL, "CALL_FUNC_STATEMENT"},
	{NON_TERMINAL, "CALL_FUNC_STATEMENT"},
	{NON_TERMINAL, "CALL_FUNC_STATEMENT"},
	{NON_TERMINAL, "CALL_FUNC_STATEMENT"},
	{NON_TERMINAL, "CALL_FUNC_STATEMENT"},
	{NON_TERMINAL, "VA"},
	{NON_TERMINAL, "VA"},
	{NON_TERMINAL, "IF_STATEMENT"},
	{NON_TERMINAL, "BOOLEAN_EXPRESSION"},
	{NON_TERMINAL, "EXPRESSION"},
	{NON_TERMINAL, "E0'"},
	{NON_TERMINAL, "E0'"},
	{NON_TERMINAL, "E1"},
	{NON_TERMINAL, "E1'"},
	{NON_TERMINAL, "E1'"},
	{NON_TERMINAL, "E2"},
	{NON_TERMINAL, "E2'"},
	{NON_TERMINAL, "E2'"},
	{NON_TERMINAL, "E3"},
	{NON_TERMINAL, "E3'"},
	{NON_TERMINAL, "E3'"},
	{NON_TERMINAL, "E4"},
	{NON_TERMINAL, "E4'"},
	{NON_TERMINAL, "E4'"},
	{NON_TERMINAL, "E5"},
	{NON_TERMINAL, "E5'"},
	{NON_TERMINAL, "E5'"},
	{NON_TERMINAL, "E6"},
	{NON_TERMINAL, "E6'"},
	{NON_TERMINAL, "E6'"},
	{NON_TERMINAL, "E7"},
	{NON_TERMINAL, "E7'"},
	{NON_TERMINAL, "E7'"},
	{NON_TERMINAL, "E8"},
	{NON_TERMINAL, "E8'"},
	{NON_TERMINAL, "E8'"},
	{NON_TERMINAL, "E9"},
	{NON_TERMINAL, "E9'"},
	{NON_TERMINAL, "E9'"},
	{NON_TERMINAL, "E10"},
	{NON_TERMINAL, "E12"},
	{NON_TERMINAL, "E12"},
	{NON_TERMINAL, "E12"},
	{NON_TERMINAL, "E12"},
	{NON_TERMINAL, "E12"},
	{NON_TERMINAL, "E12"},
	{NON_TERMINAL, "E12"},
	{NON_TERMINAL, "E12"},
	{NON_TERMINAL, "E12"},
	{NON_TERMINAL, "E12"},
	{NON_TERMINAL, "E12"},
	{NON_TERMINAL, "E12"},
	{NON_TERMINAL, "E12"},
	{NON_TERMINAL, "E12"},
	{NON_TERMINAL, "E12"},
	{NON_TERMINAL, "E12"},
	{NON_TERMINAL, "E12"},
	{NON_TERMINAL, "E12"},
	{NON_TERMINAL, "E12"},
	{NON_TERMINAL, "E13"},
	{NON_TERMINAL, "STRING"},
	{NON_TERMINAL, "L_VALUE"},
	{NON_TERMINAL, "L_VALUE"},
	{NON_TERMINAL, "NULL"}
};
const struct _TOKEN Rhs[RULES_COUNT][MAX_RHS_LEN]= 
{
	{{NON_TERMINAL, "STATEMENT"},{NON_TERMINAL, "S'"}},
	{{NON_TERMINAL, "STATEMENT"},{NON_TERMINAL, "S'"}},
	{{EPSILON, "eps"}},
	{{NON_TERMINAL, "IF_STATEMENT"}},
	{{NON_TERMINAL, "ASSIGN_STATEMENT"},{SPECIAL_TOKEN, ";"}},
	{{NON_TERMINAL, "CALL_FUNC_STATEMENT"},{SPECIAL_TOKEN, ";"}},
	{{NON_TERMINAL, "L_VALUE"},{SPECIAL_TOKEN, "="},{NON_TERMINAL, "EXPRESSION"},{SEMANTIC_RULE, "@MOV"},{NON_TERMINAL, "NULL"}},
	{{KEYWORD, "print"},{SPECIAL_TOKEN, "("},{NON_TERMINAL, "EXPRESSION"},{SEMANTIC_RULE, "@PRINT"},{SPECIAL_TOKEN, ")"}},
	{{KEYWORD, "formats"},{SPECIAL_TOKEN, "("},{NON_TERMINAL, "EXPRESSION"},{SEMANTIC_RULE, "@FORMATS"},{SPECIAL_TOKEN, ")"}},
	{{KEYWORD, "disableevent"},{SPECIAL_TOKEN, "("},{NON_TERMINAL, "EXPRESSION"},{SEMANTIC_RULE, "@DISABLEEVENT"},{SPECIAL_TOKEN, ")"}},
	{{KEYWORD, "enableevent"},{SPECIAL_TOKEN, "("},{NON_TERMINAL, "EXPRESSION"},{SEMANTIC_RULE, "@ENABLEEVENT"},{SPECIAL_TOKEN, ")"}},
	{{KEYWORD, "printf"},{SPECIAL_TOKEN, "("},{NON_TERMINAL, "STRING"},{SEMANTIC_RULE, "@VARGSTART"},{NON_TERMINAL, "VA"},{SEMANTIC_RULE, "@PRINTF"},{SPECIAL_TOKEN, ")"}},
	{{KEYWORD, "break"},{SPECIAL_TOKEN, "("},{SEMANTIC_RULE, "@BREAK"},{SPECIAL_TOKEN, ")"}},
	{{SPECIAL_TOKEN, ","},{NON_TERMINAL, "EXPRESSION"},{NON_TERMINAL, "VA"}},
	{{EPSILON, "eps"}},
	{{SEMANTIC_RULE, "@IF_EXPRESSION"},{KEYWORD, "if"},{SPECIAL_TOKEN, "("},{NON_TERMINAL, "BOOLEAN_EXPRESSION"},{SPECIAL_TOKEN, ")"},{SPECIAL_TOKEN, "{"},{NON_TERMINAL, "S"},{SPECIAL_TOKEN, "}"}},
	{{EPSILON, "eps"}},
	{{NON_TERMINAL, "E1"},{NON_TERMINAL, "E0'"}},
	{{SPECIAL_TOKEN, "|"},{NON_TERMINAL, "E1"},{SEMANTIC_RULE, "@OR"},{NON_TERMINAL, "E0'"}},
	{{EPSILON, "eps"}},
	{{NON_TERMINAL, "E2"},{NON_TERMINAL, "E1'"}},
	{{SPECIAL_TOKEN, "^"},{NON_TERMINAL, "E2"},{SEMANTIC_RULE, "@XOR"},{NON_TERMINAL, "E1'"}},
	{{EPSILON, "eps"}},
	{{NON_TERMINAL, "E3"},{NON_TERMINAL, "E2'"}},
	{{SPECIAL_TOKEN, "&"},{NON_TERMINAL, "E3"},{SEMANTIC_RULE, "@AND"},{NON_TERMINAL, "E2'"}},
	{{EPSILON, "eps"}},
	{{NON_TERMINAL, "E4"},{NON_TERMINAL, "E3'"}},
	{{SPECIAL_TOKEN, ">>"},{NON_TERMINAL, "E4"},{SEMANTIC_RULE, "@ASR"},{NON_TERMINAL, "E3'"}},
	{{EPSILON, "eps"}},
	{{NON_TERMINAL, "E5"},{NON_TERMINAL, "E4'"}},
	{{SPECIAL_TOKEN, "<<"},{NON_TERMINAL, "E5"},{SEMANTIC_RULE, "@ASL"},{NON_TERMINAL, "E4'"}},
	{{EPSILON, "eps"}},
	{{NON_TERMINAL, "E6"},{NON_TERMINAL, "E5'"}},
	{{SPECIAL_TOKEN, "+"},{NON_TERMINAL, "E6"},{SEMANTIC_RULE, "@ADD"},{NON_TERMINAL, "E5'"}},
	{{EPSILON, "eps"}},
	{{NON_TERMINAL, "E7"},{NON_TERMINAL, "E6'"}},
	{{SPECIAL_TOKEN, "-"},{NON_TERMINAL, "E7"},{SEMANTIC_RULE, "@SUB"},{NON_TERMINAL, "E6'"}},
	{{EPSILON, "eps"}},
	{{NON_TERMINAL, "E8"},{NON_TERMINAL, "E7'"}},
	{{SPECIAL_TOKEN, "*"},{NON_TERMINAL, "E8"},{SEMANTIC_RULE, "@MUL"},{NON_TERMINAL, "E7'"}},
	{{EPSILON, "eps"}},
	{{NON_TERMINAL, "E9"},{NON_TERMINAL, "E8'"}},
	{{SPECIAL_TOKEN, "/"},{NON_TERMINAL, "E9"},{SEMANTIC_RULE, "@DIV"},{NON_TERMINAL, "E8'"}},
	{{EPSILON, "eps"}},
	{{NON_TERMINAL, "E10"},{NON_TERMINAL, "E9'"}},
	{{SPECIAL_TOKEN, "%"},{NON_TERMINAL, "E10"},{SEMANTIC_RULE, "@MOD"},{NON_TERMINAL, "E9'"}},
	{{EPSILON, "eps"}},
	{{NON_TERMINAL, "E12"}},
	{{KEYWORD, "poi"},{SPECIAL_TOKEN, "("},{NON_TERMINAL, "EXPRESSION"},{SEMANTIC_RULE, "@POI"},{SPECIAL_TOKEN, ")"}},
	{{KEYWORD, "db"},{SPECIAL_TOKEN, "("},{NON_TERMINAL, "EXPRESSION"},{SEMANTIC_RULE, "@DB"},{SPECIAL_TOKEN, ")"}},
	{{KEYWORD, "dd"},{SPECIAL_TOKEN, "("},{NON_TERMINAL, "EXPRESSION"},{SEMANTIC_RULE, "@DD"},{SPECIAL_TOKEN, ")"}},
	{{KEYWORD, "dw"},{SPECIAL_TOKEN, "("},{NON_TERMINAL, "EXPRESSION"},{SEMANTIC_RULE, "@DW"},{SPECIAL_TOKEN, ")"}},
	{{KEYWORD, "dq"},{SPECIAL_TOKEN, "("},{NON_TERMINAL, "EXPRESSION"},{SEMANTIC_RULE, "@DQ"},{SPECIAL_TOKEN, ")"}},
	{{KEYWORD, "neg"},{SPECIAL_TOKEN, "("},{NON_TERMINAL, "EXPRESSION"},{SEMANTIC_RULE, "@NEG"},{SPECIAL_TOKEN, ")"}},
	{{KEYWORD, "hi"},{SPECIAL_TOKEN, "("},{NON_TERMINAL, "EXPRESSION"},{SEMANTIC_RULE, "@HI"},{SPECIAL_TOKEN, ")"}},
	{{KEYWORD, "low"},{SPECIAL_TOKEN, "("},{NON_TERMINAL, "EXPRESSION"},{SEMANTIC_RULE, "@LOW"},{SPECIAL_TOKEN, ")"}},
	{{KEYWORD, "not"},{SPECIAL_TOKEN, "("},{NON_TERMINAL, "EXPRESSION"},{SEMANTIC_RULE, "@NOT"},{SPECIAL_TOKEN, ")"}},
	{{SPECIAL_TOKEN, "("},{NON_TERMINAL, "EXPRESSION"},{SPECIAL_TOKEN, ")"}},
	{{SEMANTIC_RULE, "@PUSH"},{REGISTER, "_register"}},
	{{SEMANTIC_RULE, "@PUSH"},{HEX, "_hex"}},
	{{SEMANTIC_RULE, "@PUSH"},{DECIMAL, "_decimal"}},
	{{SEMANTIC_RULE, "@PUSH"},{OCTAL, "_octal"}},
	{{SEMANTIC_RULE, "@PUSH"},{BINARY, "_binary"}},
	{{SEMANTIC_RULE, "@PUSH"},{PSEUDO_REGISTER, "_pseudo_register"}},
	{{SPECIAL_TOKEN, "-"},{NON_TERMINAL, "E12"},{SEMANTIC_RULE, "@NEG"},{NON_TERMINAL, "E13"}},
	{{SPECIAL_TOKEN, "+"},{NON_TERMINAL, "E12"},{NON_TERMINAL, "E13"}},
	{{KEYWORD, "~"},{NON_TERMINAL, "E12"},{SEMANTIC_RULE, "@NOT"},{NON_TERMINAL, "E13"}},
	{{EPSILON, "eps"}},
	{{SEMANTIC_RULE, "@PUSH"},{STRING, "_string"}},
	{{SEMANTIC_RULE, "@PUSH"},{ID, "_id"}},
	{{SEMANTIC_RULE, "@PUSH"},{REGISTER, "_register"}},
	{{EPSILON, "eps"}}
};
const unsigned int RhsSize[RULES_COUNT]= 
{
2,
2,
1,
1,
2,
2,
5,
5,
5,
5,
5,
7,
4,
3,
1,
8,
1,
2,
4,
1,
2,
4,
1,
2,
4,
1,
2,
4,
1,
2,
4,
1,
2,
4,
1,
2,
4,
1,
2,
4,
1,
2,
4,
1,
2,
4,
1,
1,
5,
5,
5,
5,
5,
5,
5,
5,
5,
3,
2,
2,
2,
2,
2,
2,
4,
3,
4,
1,
2,
2,
2,
1
};
const char* NoneTerminalMap[NONETERMINAL_COUNT]= 
{
"STATEMENT",
"E0'",
"E4'",
"STRING",
"E5",
"CALL_FUNC_STATEMENT",
"S",
"S'",
"E1",
"BOOLEAN_EXPRESSION",
"E7'",
"E2",
"E8'",
"E5'",
"E6",
"E10",
"E7",
"NULL",
"E9'",
"E2'",
"E4",
"E3'",
"L_VALUE",
"IF_STATEMENT",
"EXPRESSION",
"E8",
"E9",
"E12",
"E6'",
"E13",
"VA",
"E3",
"E1'",
"ASSIGN_STATEMENT"
};
const char* TerminalMap[TERMINAL_COUNT]= 
{
"_binary",
"=",
"low",
"_register",
"%",
"(",
"_decimal",
"}",
"db",
"enableevent",
"dq",
"_id",
"break",
"neg",
"-",
"dw",
"_hex",
"_octal",
")",
"if",
"&",
"formats",
",",
">>",
"hi",
"|",
"/",
"^",
"_string",
";",
"disableevent",
"+",
"_pseudo_register",
"<<",
"{",
"dd",
"print",
"not",
"~",
"*",
"$",
"poi",
"printf"
};
const int ParseTable[NONETERMINAL_COUNT][TERMINAL_COUNT]= 
{
	{-99		,-99		,-99		,4		,-99		,-99		,-99		,-99		,-99		,5		,-99		,4		,5		,-99		,-99		,-99		,-99		,-99		,-99		,3		,-99		,5		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,5		,-99		,-99		,-99		,-99		,-99		,5		,-99		,-99		,-99		,-99		,-99		,5	},
	{-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,19		,-99		,-99		,-99		,19		,-99		,-99		,18		,-99		,-99		,-99		,19		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99	},
	{-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,31		,-99		,31		,-99		,31		,31		,-99		,31		,-99		,31		,-99		,31		,-99		,-99		,-99		,30		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99	},
	{-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,68		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99	},
	{32		,-99		,32		,32		,-99		,32		,32		,-99		,32		,-99		,32		,-99		,-99		,32		,32		,32		,32		,32		,-99		,-99		,-99		,-99		,-99		,-99		,32		,-99		,-99		,-99		,-99		,-99		,-99		,32		,32		,-99		,-99		,32		,-99		,32		,32		,-99		,-99		,32		,-99	},
	{-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,10		,-99		,-99		,12		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,8		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,9		,-99		,-99		,-99		,-99		,-99		,7		,-99		,-99		,-99		,-99		,-99		,11	},
	{-99		,-99		,-99		,0		,-99		,-99		,-99		,-99		,-99		,0		,-99		,0		,0		,-99		,-99		,-99		,-99		,-99		,-99		,0		,-99		,0		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,0		,-99		,-99		,-99		,-99		,-99		,0		,-99		,-99		,-99		,-99		,-99		,0	},
	{-99		,-99		,-99		,1		,-99		,-99		,-99		,2		,-99		,1		,-99		,1		,1		,-99		,-99		,-99		,-99		,-99		,-99		,1		,-99		,1		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,1		,-99		,-99		,-99		,-99		,-99		,1		,-99		,-99		,-99		,2		,-99		,1	},
	{20		,-99		,20		,20		,-99		,20		,20		,-99		,20		,-99		,20		,-99		,-99		,20		,20		,20		,20		,20		,-99		,-99		,-99		,-99		,-99		,-99		,20		,-99		,-99		,-99		,-99		,-99		,-99		,20		,20		,-99		,-99		,20		,-99		,20		,20		,-99		,-99		,20		,-99	},
	{-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,16		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99	},
	{-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,40		,-99		,-99		,-99		,40		,-99		,40		,-99		,40		,40		,-99		,40		,-99		,40		,-99		,40		,-99		,40		,-99		,40		,-99		,-99		,-99		,-99		,-99		,39		,-99		,-99		,-99	},
	{23		,-99		,23		,23		,-99		,23		,23		,-99		,23		,-99		,23		,-99		,-99		,23		,23		,23		,23		,23		,-99		,-99		,-99		,-99		,-99		,-99		,23		,-99		,-99		,-99		,-99		,-99		,-99		,23		,23		,-99		,-99		,23		,-99		,23		,23		,-99		,-99		,23		,-99	},
	{-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,43		,-99		,-99		,-99		,43		,-99		,43		,-99		,43		,43		,-99		,43		,42		,43		,-99		,43		,-99		,43		,-99		,43		,-99		,-99		,-99		,-99		,-99		,43		,-99		,-99		,-99	},
	{-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,34		,-99		,34		,-99		,34		,34		,-99		,34		,-99		,34		,-99		,34		,-99		,33		,-99		,34		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99	},
	{35		,-99		,35		,35		,-99		,35		,35		,-99		,35		,-99		,35		,-99		,-99		,35		,35		,35		,35		,35		,-99		,-99		,-99		,-99		,-99		,-99		,35		,-99		,-99		,-99		,-99		,-99		,-99		,35		,35		,-99		,-99		,35		,-99		,35		,35		,-99		,-99		,35		,-99	},
	{47		,-99		,47		,47		,-99		,47		,47		,-99		,47		,-99		,47		,-99		,-99		,47		,47		,47		,47		,47		,-99		,-99		,-99		,-99		,-99		,-99		,47		,-99		,-99		,-99		,-99		,-99		,-99		,47		,47		,-99		,-99		,47		,-99		,47		,47		,-99		,-99		,47		,-99	},
	{38		,-99		,38		,38		,-99		,38		,38		,-99		,38		,-99		,38		,-99		,-99		,38		,38		,38		,38		,38		,-99		,-99		,-99		,-99		,-99		,-99		,38		,-99		,-99		,-99		,-99		,-99		,-99		,38		,38		,-99		,-99		,38		,-99		,38		,38		,-99		,-99		,38		,-99	},
	{-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,71		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99	},
	{-99		,-99		,-99		,-99		,45		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,46		,-99		,-99		,-99		,46		,-99		,46		,-99		,46		,46		,-99		,46		,46		,46		,-99		,46		,-99		,46		,-99		,46		,-99		,-99		,-99		,-99		,-99		,46		,-99		,-99		,-99	},
	{-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,25		,-99		,24		,-99		,25		,-99		,-99		,25		,-99		,25		,-99		,25		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99	},
	{29		,-99		,29		,29		,-99		,29		,29		,-99		,29		,-99		,29		,-99		,-99		,29		,29		,29		,29		,29		,-99		,-99		,-99		,-99		,-99		,-99		,29		,-99		,-99		,-99		,-99		,-99		,-99		,29		,29		,-99		,-99		,29		,-99		,29		,29		,-99		,-99		,29		,-99	},
	{-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,28		,-99		,28		,-99		,28		,27		,-99		,28		,-99		,28		,-99		,28		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99	},
	{-99		,-99		,-99		,70		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,69		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99	},
	{-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,15		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99	},
	{17		,-99		,17		,17		,-99		,17		,17		,-99		,17		,-99		,17		,-99		,-99		,17		,17		,17		,17		,17		,-99		,-99		,-99		,-99		,-99		,-99		,17		,-99		,-99		,-99		,-99		,-99		,-99		,17		,17		,-99		,-99		,17		,-99		,17		,17		,-99		,-99		,17		,-99	},
	{41		,-99		,41		,41		,-99		,41		,41		,-99		,41		,-99		,41		,-99		,-99		,41		,41		,41		,41		,41		,-99		,-99		,-99		,-99		,-99		,-99		,41		,-99		,-99		,-99		,-99		,-99		,-99		,41		,41		,-99		,-99		,41		,-99		,41		,41		,-99		,-99		,41		,-99	},
	{44		,-99		,44		,44		,-99		,44		,44		,-99		,44		,-99		,44		,-99		,-99		,44		,44		,44		,44		,44		,-99		,-99		,-99		,-99		,-99		,-99		,44		,-99		,-99		,-99		,-99		,-99		,-99		,44		,44		,-99		,-99		,44		,-99		,44		,44		,-99		,-99		,44		,-99	},
	{62		,-99		,55		,58		,-99		,57		,60		,-99		,49		,-99		,52		,-99		,-99		,53		,64		,51		,59		,61		,-99		,-99		,-99		,-99		,-99		,-99		,54		,-99		,-99		,-99		,-99		,-99		,-99		,65		,63		,-99		,-99		,50		,-99		,56		,66		,-99		,-99		,48		,-99	},
	{-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,36		,-99		,-99		,-99		,37		,-99		,37		,-99		,37		,37		,-99		,37		,-99		,37		,-99		,37		,-99		,37		,-99		,37		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99	},
	{-99		,-99		,-99		,-99		,67		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,67		,-99		,-99		,-99		,67		,-99		,67		,-99		,67		,67		,-99		,67		,67		,67		,-99		,67		,-99		,67		,-99		,67		,-99		,-99		,-99		,-99		,-99		,67		,-99		,-99		,-99	},
	{-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,14		,-99		,-99		,-99		,13		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99	},
	{26		,-99		,26		,26		,-99		,26		,26		,-99		,26		,-99		,26		,-99		,-99		,26		,26		,26		,26		,26		,-99		,-99		,-99		,-99		,-99		,-99		,26		,-99		,-99		,-99		,-99		,-99		,-99		,26		,26		,-99		,-99		,26		,-99		,26		,26		,-99		,-99		,26		,-99	},
	{-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,22		,-99		,-99		,-99		,22		,-99		,-99		,22		,-99		,21		,-99		,22		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99	},
	{-99		,-99		,-99		,6		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,6		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99	}
};
const char* KeywordList[]= {
"print",
"formats",
"disableevent",
"enableevent",
"printf",
"break",
"poi",
"db",
"dd",
"dw",
"dq",
"neg",
"hi",
"low",
"not"
};
const char* OperatorsList[]= {
"@OR",
"@XOR",
"@AND",
"@ASR",
"@ASL",
"@ADD",
"@SUB",
"@MUL",
"@DIV",
"@MOD"
};
const char* OneOpFunc1[] = {
"@POI",
"@DB",
"@DD",
"@DW",
"@DQ",
"@NEG",
"@HI",
"@LOW",
"@NOT",
};
const char* OneOpFunc2[] = {
"@PRINT",
"@FORMATS",
"@DISABLEEVENT",
"@ENABLEEVENT",
};
const char* ZeroOpFunc1[] = {
"@BREAK"
};
const char* VarArgFunc1[] = {
"@PRINTF"
};
const SYMBOL_MAP SemanticRulesMapList[]= {
{"@OR", FUNC_OR},
{"@XOR", FUNC_XOR},
{"@AND", FUNC_AND},
{"@ASR", FUNC_ASR},
{"@ASL", FUNC_ASL},
{"@ADD", FUNC_ADD},
{"@SUB", FUNC_SUB},
{"@MUL", FUNC_MUL},
{"@DIV", FUNC_DIV},
{"@MOD", FUNC_MOD},
{"@PRINT", FUNC_PRINT},
{"@FORMATS", FUNC_FORMATS},
{"@DISABLEEVENT", FUNC_DISABLEEVENT},
{"@ENABLEEVENT", FUNC_ENABLEEVENT},
{"@PRINTF", FUNC_PRINTF},
{"@BREAK", FUNC_BREAK},
{"@POI", FUNC_POI},
{"@DB", FUNC_DB},
{"@DD", FUNC_DD},
{"@DW", FUNC_DW},
{"@DQ", FUNC_DQ},
{"@NEG", FUNC_NEG},
{"@HI", FUNC_HI},
{"@LOW", FUNC_LOW},
{"@NOT", FUNC_NOT},
{"@MOV", FUNC_MOV}
};
const SYMBOL_MAP RegisterMapList[]= {
{"rax", REGISTER_RAX},
{"rcx", REGISTER_RCX},
{"rdx", REGISTER_RDX},
{"rbx", REGISTER_RBX},
{"rsp", REGISTER_RSP},
{"rbp", REGISTER_RBP},
{"rsi", REGISTER_RSI},
{"rdi", REGISTER_RDI},
{"r8", REGISTER_R8},
{"r9", REGISTER_R9},
{"r10", REGISTER_R10},
{"r11", REGISTER_R11},
{"r12", REGISTER_R12},
{"r13", REGISTER_R13},
{"r14", REGISTER_R14},
{"r15", REGISTER_R15}
};
const SYMBOL_MAP PseudoRegisterMapList[]= {
{"pid", PSEUDO_REGISTER_PID},
{"tid", PSEUDO_REGISTER_TID},
{"proc", PSEUDO_REGISTER_PROC},
{"thread", PSEUDO_REGISTER_THREAD},
{"peb", PSEUDO_REGISTER_PEB},
{"teb", PSEUDO_REGISTER_TEB},
{"ip", PSEUDO_REGISTER_IP},
{"buffer", PSEUDO_REGISTER_BUFFER},
{"context", PSEUDO_REGISTER_CONTEXT}
};
const struct _TOKEN LalrLhs[RULES_COUNT]= 
{
	{NON_TERMINAL, "S"},
	{NON_TERMINAL, "BE"},
	{NON_TERMINAL, "B1"},
	{NON_TERMINAL, "B1'"},
	{NON_TERMINAL, "B1'"},
	{NON_TERMINAL, "B2"},
	{NON_TERMINAL, "B2'"},
	{NON_TERMINAL, "B2'"},
	{NON_TERMINAL, "B3"},
	{NON_TERMINAL, "B3"},
	{NON_TERMINAL, "CMP"},
	{NON_TERMINAL, "CMP"},
	{NON_TERMINAL, "CMP"},
	{NON_TERMINAL, "EXP"},
	{NON_TERMINAL, "E1"},
	{NON_TERMINAL, "E1'"},
	{NON_TERMINAL, "E1'"},
	{NON_TERMINAL, "E2"},
	{NON_TERMINAL, "E2'"},
	{NON_TERMINAL, "E2'"},
	{NON_TERMINAL, "E3"},
	{NON_TERMINAL, "E3"}
};
const struct _TOKEN LalrRhs[RULES_COUNT][MAX_RHS_LEN]= 
{
	{{SPECIAL_TOKEN, "("},{NON_TERMINAL, "BE"},{SPECIAL_TOKEN, ")"}},
	{{NON_TERMINAL, "B1"}},
	{{NON_TERMINAL, "B2"},{NON_TERMINAL, "B1'"}},
	{{KEYWORD, "&&"},{NON_TERMINAL, "B2"},{NON_TERMINAL, "B1'"}},
	{{EPSILON, "eps"}},
	{{NON_TERMINAL, "B3"},{NON_TERMINAL, "B2'"}},
	{{SPECIAL_TOKEN, "|"},{NON_TERMINAL, "B3"},{NON_TERMINAL, "B2'"}},
	{{EPSILON, "eps"}},
	{{NON_TERMINAL, "CMP"}},
	{{NON_TERMINAL, "EXP"}},
	{{NON_TERMINAL, "EXP"},{KEYWORD, ">"},{NON_TERMINAL, "EXP"}},
	{{NON_TERMINAL, "EXP"},{KEYWORD, "<"},{NON_TERMINAL, "EXP"}},
	{{SPECIAL_TOKEN, "("},{NON_TERMINAL, "CMP"},{SPECIAL_TOKEN, ")"}},
	{{NON_TERMINAL, "E1"}},
	{{NON_TERMINAL, "E2"},{NON_TERMINAL, "E1'"}},
	{{SPECIAL_TOKEN, "+"},{NON_TERMINAL, "E2"},{NON_TERMINAL, "E1'"}},
	{{EPSILON, "eps"}},
	{{NON_TERMINAL, "E3"},{NON_TERMINAL, "E2'"}},
	{{SPECIAL_TOKEN, "*"},{NON_TERMINAL, "E3"},{NON_TERMINAL, "E2'"}},
	{{EPSILON, "eps"}},
	{{ID, "_id"}},
	{{SPECIAL_TOKEN, "("},{NON_TERMINAL, "EXP"},{SPECIAL_TOKEN, ")"}}
};
const unsigned int LalrRhsSize[RULES_COUNT]= 
{
3,
1,
2,
3,
1,
2,
3,
1,
1,
1,
3,
3,
3,
1,
2,
3,
1,
2,
3,
1,
1,
3
};
const char* LalrNoneTerminalMap[NONETERMINAL_COUNT]= 
{
"E2'",
"E2",
"B1",
"B2'",
"B2",
"B3",
"EXP",
"B1'",
"E3",
"CMP",
"BE",
"E1'",
"S",
"E1"
};
const char* LalrTerminalMap[TERMINAL_COUNT]= 
{
"+",
"_id",
")",
"|",
">",
"&&",
"*",
"$",
"<",
"("
};
const int LalrGotoTable[LALR_STATE_COUNT][LALR_NONTERMINAL_COUNT]= 
{
	{-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,1		,-99	},
	{-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99	},
	{-99		,10		,4		,-99		,5		,6		,8		,-99		,11		,7		,3		,-99		,-99		,9	},
	{-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99	},
	{-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99	},
	{-99		,-99		,-99		,-99		,-99		,-99		,-99		,15		,-99		,-99		,-99		,-99		,-99		,-99	},
	{-99		,-99		,-99		,17		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99	},
	{-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99	},
	{-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99	},
	{-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99	},
	{-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,21		,-99		,-99	},
	{23		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99	},
	{-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99	},
	{-99		,10		,-99		,-99		,-99		,-99		,26		,-99		,11		,25		,-99		,-99		,-99		,9	},
	{-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99	},
	{-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99	},
	{-99		,10		,-99		,-99		,27		,6		,8		,-99		,11		,7		,-99		,-99		,-99		,9	},
	{-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99	},
	{-99		,10		,-99		,-99		,-99		,28		,8		,-99		,11		,7		,-99		,-99		,-99		,9	},
	{-99		,10		,-99		,-99		,-99		,-99		,29		,-99		,11		,-99		,-99		,-99		,-99		,9	},
	{-99		,10		,-99		,-99		,-99		,-99		,31		,-99		,11		,-99		,-99		,-99		,-99		,9	},
	{-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99	},
	{-99		,32		,-99		,-99		,-99		,-99		,-99		,-99		,11		,-99		,-99		,-99		,-99		,-99	},
	{-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99	},
	{-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,33		,-99		,-99		,-99		,-99		,-99	},
	{-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99	},
	{-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99	},
	{-99		,-99		,-99		,-99		,-99		,-99		,-99		,36		,-99		,-99		,-99		,-99		,-99		,-99	},
	{-99		,-99		,-99		,37		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99	},
	{-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99	},
	{-99		,10		,-99		,-99		,-99		,-99		,38		,-99		,11		,-99		,-99		,-99		,-99		,9	},
	{-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99	},
	{-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,39		,-99		,-99	},
	{40		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99	},
	{-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99	},
	{-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99	},
	{-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99	},
	{-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99	},
	{-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99	},
	{-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99	},
	{-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99	}
};
const int LalrActionTable[LALR_STATE_COUNT][LALR_NONTERMINAL_COUNT]= 
{
	{-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,2	},
	{-99		,-99		,-99		,-99		,-99		,-99		,-99		,99		,-99		,-99	},
	{-99		,12		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,13	},
	{-99		,-99		,14		,-99		,-99		,-99		,-99		,-99		,-99		,-99	},
	{-99		,-99		,-2		,-99		,-99		,-99		,-99		,-99		,-99		,-99	},
	{-99		,-99		,-5		,-99		,-99		,16		,-99		,-99		,-99		,-99	},
	{-99		,-99		,-8		,18		,-99		,-8		,-99		,-99		,-99		,-99	},
	{-99		,-99		,-9		,-9		,-99		,-9		,-99		,-99		,-99		,-99	},
	{-99		,-99		,-10		,-10		,20		,-10		,-99		,-99		,19		,-99	},
	{-99		,-99		,-14		,-14		,-14		,-14		,-99		,-99		,-14		,-99	},
	{22		,-99		,-17		,-17		,-17		,-17		,-99		,-99		,-17		,-99	},
	{-20		,-99		,-20		,-20		,-20		,-20		,24		,-99		,-20		,-99	},
	{-21		,-99		,-21		,-21		,-21		,-21		,-21		,-99		,-21		,-99	},
	{-99		,12		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,13	},
	{-99		,-99		,-99		,-99		,-99		,-99		,-99		,-1		,-99		,-99	},
	{-99		,-99		,-3		,-99		,-99		,-99		,-99		,-99		,-99		,-99	},
	{-99		,12		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,13	},
	{-99		,-99		,-6		,-99		,-99		,-6		,-99		,-99		,-99		,-99	},
	{-99		,12		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,13	},
	{-99		,12		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,30	},
	{-99		,12		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,30	},
	{-99		,-99		,-15		,-15		,-15		,-15		,-99		,-99		,-15		,-99	},
	{-99		,12		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,30	},
	{-18		,-99		,-18		,-18		,-18		,-18		,-99		,-99		,-18		,-99	},
	{-99		,12		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,30	},
	{-99		,-99		,34		,-99		,-99		,-99		,-99		,-99		,-99		,-99	},
	{-99		,-99		,35		,-99		,20		,-99		,-99		,-99		,19		,-99	},
	{-99		,-99		,-5		,-99		,-99		,16		,-99		,-99		,-99		,-99	},
	{-99		,-99		,-8		,18		,-99		,-8		,-99		,-99		,-99		,-99	},
	{-99		,-99		,-12		,-12		,-99		,-12		,-99		,-99		,-99		,-99	},
	{-99		,12		,-99		,-99		,-99		,-99		,-99		,-99		,-99		,30	},
	{-99		,-99		,-11		,-11		,-99		,-11		,-99		,-99		,-99		,-99	},
	{22		,-99		,-17		,-17		,-17		,-17		,-99		,-99		,-17		,-99	},
	{-20		,-99		,-20		,-20		,-20		,-20		,24		,-99		,-20		,-99	},
	{-99		,-99		,-13		,-13		,-99		,-13		,-99		,-99		,-99		,-99	},
	{-22		,-99		,-22		,-22		,-22		,-22		,-22		,-99		,-22		,-99	},
	{-99		,-99		,-4		,-99		,-99		,-99		,-99		,-99		,-99		,-99	},
	{-99		,-99		,-7		,-99		,-99		,-7		,-99		,-99		,-99		,-99	},
	{-99		,-99		,35		,-99		,-99		,-99		,-99		,-99		,-99		,-99	},
	{-99		,-99		,-16		,-16		,-16		,-16		,-99		,-99		,-16		,-99	},
	{-19		,-99		,-19		,-19		,-19		,-19		,-99		,-99		,-19		,-99	}
};
