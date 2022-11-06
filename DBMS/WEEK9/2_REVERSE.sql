-- CODE 2: Write a program to find the reverse of a number 

declare
    a number(4) := 304;
    rem number := 0;
    rev number := 0;
begin
    while a > 0 loop
        rem := mod(a, 10);
        rev := rev * 10 + rem;
        a := a / 10;
    end loop;
    dbms_output.put_line(rev);
end;