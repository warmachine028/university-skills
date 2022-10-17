set serveroutput on 
declare
a number;
n number;
c number;
begin
a := &a;
n := &n;
c := &c;
    if (a > n and a > c) then
	dbms_output.put_line('a is largest ' || a);
    elsif (n > a and n > c) then
	dbms_output.put_line('n is largest ' || n);
    else
	dbms_output.put_line('c is largest ' || c);
    end if;
end;



# for Loop
declare
i number(4) := 1;
n number(4) := &n;
f number(4) := 1;
begin
    for i in 1..n
    loop
        f := f * i;
    end loop;
    dbms_output.put_line('Factorial of ' || n || 'is: ' || f);
end;



# while loop
declare
n number(4) := &n;
s number(4) := 0;
r = number(4);
begin
    while n >0 loop
	r := mod(n, 10);
	s := (s * 10) + r;
	n := trunc(n/10);
    end loop;
    dbms_output.put_line('the reverse of the number is ' s);
end;




