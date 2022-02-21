maximum_input_value = input("Enter the maximum input value: ")
if maximum_input_value > 112
    maximum_input_value = 112
end

for i = 1 : maximum_input_value
    for j = 1 : 9
        if i % j
            disp(i)
            switch i % j
                case 0
                    %% Some logic which I tried to Understand 
                case 1
                    %% But I have completely failed to
                otherwise
                    %% Sorry Im helpless
            end
            break
        end
    end
end
