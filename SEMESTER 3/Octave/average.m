# To define a function we write a function of same name as the file
# To use the function we call it from the CLI

# Function to find average of an array

function ave = average(x)
    # ave = sum(x(:))/numel(x);
    ave = sum(x)/length(x);
end

# Function calling syntax:
# ave = average([1, 2, 3])