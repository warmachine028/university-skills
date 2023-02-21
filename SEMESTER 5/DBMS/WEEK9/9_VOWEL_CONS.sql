-- CODE 9: Write a program to check the number of vowels and consonants in a string


declare
    string varchar(200) := 'Pritam Kundu';
    vowels number := 0;
    consonants number := 0;
    c char;
begin
    for i in 1 .. length(string) loop
        c := substr(string, i, 1);
        if INSTR('aeiouAEIOU', c) > 0 then
            vowels := vowels + 1;
        elsif c != ' ' then
            consonants := consonants + 1;
        end if;
    end loop;
    dbms_output.put_line('vowels: ' || vowels);
    dbms_output.put_line('consonants: ' || consonants);
end;