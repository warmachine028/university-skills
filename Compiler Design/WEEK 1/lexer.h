#ifndef LEXER_H
#define LEXER_H

typedef enum TokenType1 TokenType;
enum TokenType1 {
    INVALID,
    OPEN,
    PLUS,
    MINUS,
    STAR,
    SLASH,
    NUM,
    CLOSE,
};

typedef struct Token *Token;

Token getToken(Token);

// #define <constant>'s replaced by pre-processors
// enums are replaced by the complers


#endif
