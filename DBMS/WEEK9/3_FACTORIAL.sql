-- CODE 3: Write a program to find the factorial of a number

declare 
    n number := 3;
    fact number := 1;
begin
    while n > 0 loop
        fact := fact * n;
        n := n - 1;
    end loop;
    dbms_output.put_line(fact);
end;