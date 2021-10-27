#ifndef CGE_LEXER
#define CGE_LEXER
#define token_result static int
#define CGE_MainFunc main
#define CGE_Main int
#endif

#ifndef bool
#define bool _Bool
#define b8 bool
#endif

#include <stdio.h>
#include <windows.h>

typedef enum flag{
    STRING,
    WHITE_SPACE,
    SYMBOL,
    NONE
}flag;

typedef struct token{
    flag TOKEN_FLAG;
    char* string;
}token;

token_result TokenIsNumber(int c){    
    return (c >= '0' && c <= '9');
}

//TODO: Setting up a dynamic arrayfor the Token Generation Queue, setting up a way to queue and free tokens, 
//      and setting up a way to check and return token values as flag values
token_result TokenGenQueue[5];

flag GetTokenFlagProc(int c){
    int TokenFlag = TokenIsNumber(c);

    printf("%i", TokenFlag);
       
    // for (int i = 0; i < (sizeof(flag)/sizeof(enum)); i++){
    //     //code
    // }
}

CGE_Main
CGE_MainFunc()
{
    GetTokenFlagProc(1);
    while(1);
    return 0;
}