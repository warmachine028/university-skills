# WEEK3: Yacc Programming

## 5th February 2023 Monday

| Sl.No | OBJECTIVE           | PATH                                                                |
| ----- | ------------------- | ------------------------------------------------------------------- |
| 1     | Count Identifiers   | [countIdentifiers.l](./1_countIdentifiers.l)                        |
| 2     | Valid Expression    | [📂TestValidity](./2_TestValidity/textValidity.y)                   |
| 3     | Level of Nested     | [📂Nested](./3_Nested/nested.y)                                     |
| 4     | Evaluate Expression | [📂EvaluateExpression](./4_EvaluateExpression/evaluateExpression.y) |
| 5     | Valid Variable      | [📂ValidVariable](./5_ValidVariable/validVariable.y)                |
| 6     | a^n b^n             | [📂StringGrammar](./6_StringGrammar/stringGrammar.y)                |
| 7     | a^nb                | [📂StringGrammar2](./7_StringGrammar2/stringGrammar2.y)             |
| 8     | Symbol Table        | [SymbolTable.c](./8_SymbolTable.c)                                  |

<!--
**Executing the entire code:
1. Compiling the Yacc File:
   $> yacc -d eval.y

2. Compiling the Lex file:
   $> lex eval.l

3. Linking the compiled Files and generate output file:
   $> cc y.tab.c lex.yy.c -lfl  <- lfl - link Flex Library

4. Running the output file:
   $> ./a.out
-->
