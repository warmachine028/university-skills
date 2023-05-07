/* 
S -> aSb | a | b | epsilon

a^n b^n U a^(n+1) b^n U a^n b^(n+1)
------------------------------------------
S -> aSb | ab | epsilon
S -> aSb | epsilon           [ Removed redundant production rule "S -> ab" ]

a^n b ^ n
*/
