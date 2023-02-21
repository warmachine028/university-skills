--CODE 1: HALF Adder in VHDL
library IEEE;
use IEEE.std_logic_1164.all;

entity HALF_adder is 
    port(
        A, B: in std_logic;
        SUM, CARRY: out std_logic);
end HALF_adder;

architecture rtl of HALF_adder is 
begin
    SUM <= A xor B;
    CARRY <= A and B;
end rtl;
