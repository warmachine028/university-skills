-- CODE 10: Write a code to count odd and even digits in a number

declare 
    n number := 10112;
    odd number := 0;
    even number := 0;
    digit number;
begin
    while n > 0 loop
        digit := mod(n, 10);
        if mod(digit, 2) > 0 then
            odd := odd + 1;
        else
            even := even + 1;
        end if;
        n := floor(n / 10);
    end loop;
    dbms_output.put_line('Odd Digits: ' || odd);
    dbms_output.put_line('Even Digits: ' || even);
end;