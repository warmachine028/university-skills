# CODE 7: Read in one character from STDIN.
# If the character is 'Y' or 'y' display "YES".
# If the character is 'N' or 'n' display "NO".
# No other character will be provided as input.

read char

if [[ $char == [yY] ]]; then 
    echo YES
elif [[ $char == [nN] ]]; then 
    echo NO
fi
