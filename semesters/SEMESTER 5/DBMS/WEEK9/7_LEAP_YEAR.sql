-- CODE 7: Write a program to check whether a given year is leap year

declare 
    year number := 1900;
begin
    if (mod(year, 4) = 0 and mod(year, 100) != 0) or mod(year, 400) = 0 then
        dbms_output.put_line('leap year');
    else 
        dbms_output.put_line('not a leap year');
    end if;
end;