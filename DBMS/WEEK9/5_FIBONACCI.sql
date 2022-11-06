-- CODE 5: Write a program to print fibonacci series upto n numbers

declare 
    n number := 8;
    first number := 0;
    second number := 1;
    third number;
begin
    if n > 0 then
        dbms_output.put_line(first);
    end if;
    if n > 1 then
        dbms_output.put_line(second);
    end if;
    for i in 2..n - 1 loop
        third := first + second;
        dbms_output.put_line(third);
        first := second;
        second := third;
    end loop;
end;

