/*
S -> letters A
A -> letters | digits | epsilon
*/

%%
[A-Z_a-z]+   return letters;
[0-9]+	     return digits;
%%
