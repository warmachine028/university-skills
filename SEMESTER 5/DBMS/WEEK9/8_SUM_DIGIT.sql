-- CODE 8: Write a program to find the sum of digits of a number

declare 
    n number := 1921;
    digit number;
    sums number := 0;
begin
    while n > 0 loop
        digit := mod(n, 10);
        sums := sums + digit;
        n := floor(n / 10);
    end loop;
    dbms_output.put_line(sums);
end;