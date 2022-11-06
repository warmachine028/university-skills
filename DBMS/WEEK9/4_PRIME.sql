-- CODE 4: Write a program to check whether a given number is prime

declare 
    n number := 81;
    flag number := 0;
begin
    for i in 2..sqrt(n) + 1 loop
        if mod(n, i) = 0 then
            flag := 1;
        end if;
    end loop;
    if flag = 1 then
        dbms_output.put_line('not prime');
    else 
        dbms_output.put_line('prime');
    end if;
end;
