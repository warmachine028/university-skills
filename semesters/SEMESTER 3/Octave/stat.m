# Function to find statistics of an array
function [avg, std_dev] = stat(x)
    n = length(x);
    avg = average(x) ;
    std_dev = sqrt(sum((x - avg).^2 / n));
end

# Function to find average
function avg = average(array)
    avg = sum(array) / numel(array);
end
