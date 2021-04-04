#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Global macro variables

#define TOK_SEMICOLON 1                               // ;
#define TOK_TYPE 2                                    // :
#define TOK_COMMA 3                                   // ,
#define TOK_LPAREN 4                                  // (
#define TOK_RPAREN 5                                  // )
#define TOK_LBRACE 6                                  // {
#define TOK_RBRACE 7                                  // }
#define TOK_LBRACKET 8                                // [
#define TOK_RBRACKET 9                                // ]
#define TOK_DOT 10                                    // .
#define TOK_STRING 11                                 // "
#define TOK_EOF 12                                    // EOF
#define TOK_IDENTIFIER 13
#define TOK_EQUALS 14                                 // =
#define TOK_LBRACE 15                                 // {
#define TOK_RBRACE 16                                 // }
#define TOK_LESS_THAN 17                              // <
#define TOK_GREATER_THAN 18                           // >
#define TOK_LESS_THAN_EQUALS 19                       // <=
#define TOK_GREATER_THAN_EQUALS 20                    // >=
#define TOK_BAR_BAR 21                                // ||
#define TOK_SLASH 22                                  // /
#define TOK_EQUALS_EQUALS 23                          // ==
#define TOK_EQUALS_EQUALS 24                          // ===

// ---------------------------------------------------------------------------------------------------------------

typedef struct LEXER_STRUCT {
	char ch;             // current char
	unsigned int i;      // current index
	char* contents;      // all contents	
} lexer_t;

typedef struct TOKEN_STRUCT {
	int type;            // one of the TOK_... macros
	char* value;         // value of the token as string
} token_t;


int main(int argc, char* argv[]) {
	FILE* fp = fopen(argv[1], "r");
	if (fp == NULL) {
		printf("OTC > error: No such file exists as %s\n", argv[1]);
		return -1;
	}
	
 	return 0;
}
