-- CODE 1: Write a PL/SQL program to find the largest of three numbers

declare
    a number := 9;
    b number := 3;
    c number := 99;
begin
    if a > b then
        if a > c then
	        dbms_output.put_line('A is largest ');
        else 
            dbms_output.put_line('C is largest ');
        end if;
    elsif b > c then
        dbms_output.put_line('B is largest ');
    else 
        dbms_output.put_line('C is largest '); 
    end if;
end;