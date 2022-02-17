# For Loops
disp("For Loops")
number = 1;
for i = number: number + 10
    disp(i)
end

# While Loops
disp("While Loops")
i = number;
while i <= number + 10
    disp(i);
    i += 1;
end 

for i = 0 : 10
    n = 1;
    factorial = 1;
    while n < i
        n = n + 1;
        factorial = factorial * n;
    end
    # Printing multiple values in same line
    # num2str(<integer-value>) converts number into string
    disp([num2str(i), "! = ", num2str(factorial)])
end   
