 // CODE 3: Write a YACC Program to recognise nested \
 IF control statements and display the levels of nesting
%{
    #include "y.tab.h"
%}

/* Rules and Actions */
%option noyywrap

%%
if return IF;
[{] return START;
[}] return STOP;
. ;
\n return 0;
%%

