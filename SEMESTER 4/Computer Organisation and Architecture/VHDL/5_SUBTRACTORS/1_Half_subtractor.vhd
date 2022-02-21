--CODE 1: HALF subtractor in VHDL
library IEEE;
use IEEE.std_logic_1164.all;

entity HALF_subtractor is 
    port(
        A, B: in std_logic;
        DIFFERENCE, BORROW: out std_logic);
end HALF_subtractor;

architecture rtl of HALF_subtractor is 
begin
    DIFFERENCE <= A xor B;
    BORROW <= (not A) and B;
end rtl;
