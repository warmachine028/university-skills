--CODE 2: FULL subtractor in VHDL
library IEEE;
use IEEE.std_logic_1164.all;

entity FULL_subtractor is 
    port(
        A, B, Bin: in std_logic;
        DIFFERENCE, BORROW: out std_logic);
end FULL_subtractor;

architecture rtl of FULL_subtractor is 
    signal and1, and2, and3 : std_logic;
begin
    and1 <= (not A) and B;
    and2 <= B and Bin;
    and3 <= Bin and (not A);
    DIFFERENCE <= A xor B xor Bin;
    BORROW <= and1 or and2 or and3;
end rtl;
