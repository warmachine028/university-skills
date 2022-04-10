#!/usr/bin/env bash

# CODE 17: Rajesh’s basic salary (BASIC) is input through the keyboard. His dearness allowance (DA) is 52% of BASIC. House rent allowance (HRA) is 15% of BASIC. Contributory provident fund is 12% of (BASIC + DA). Write a shell script to calculate his gross salary  and take  home salary  using  the  following formula: 
# Gross salary = BASIC + DA + HRA  
# Take  home salary  =  Gross salary - (BASIC  + DA) * 0.12 

read -p "Basic Salary: " -r BASIC

DA=$(($BASIC * 52 / 100))
HRA=$(($BASIC * 15 / 100))
PROVIDENT_FUND=$((($BASIC + $DA) * 12 / 100))

GROSS_SALARY=$(($BASIC + $DA + $HRA))
TAKE_HOME_SALARY=$(($GROSS_SALARY - $PROVIDENT_FUND))

echo "Gross Salary: $GROSS_SALARY"
echo "Take Home Salary: $TAKE_HOME_SALARY"
