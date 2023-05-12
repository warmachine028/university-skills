# CODE 11:
# Create a script for system clock information

today = datestr(now, 'dddd, dd-mmmm-yyyy');
now = datestr(now, 'HH:MM AM');

fprintf('Today is %s\n', today)
fprintf('The current time is %s\n', now)
