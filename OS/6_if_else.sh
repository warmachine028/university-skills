# CODE 6: Given two integers, X and Y, identify whether X < Y or X > Y or X = Y.
# 
# Exactly one of the following lines:
# - X is less than Y
# - X is greater than Y
# - X is equal to Y

read x
read y
if [[ $x -gt $y ]]; then
    echo X is greater than Y
elif [[ $x -lt $y ]]; then
    echo X is less than Y
else
    echo X is equal to Y
fi

[[ $x -gt $y ]] && echo X is greater than Y
[[ $x -lt $y ]] && echo X is less than Y
[[ $x -eq $y ]] && echo X is equal to Y
