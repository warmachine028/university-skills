--CODE 2: FULL Adder in VHDL
library IEEE;
use IEEE.std_logic_1164.all;

entity FULL_adder is 
    port(
        A, B, Cin: in std_logic;
        SUM, CARRY: out std_logic);
end FULL_adder;

architecture rtl of FULL_adder is 
begin
    SUM <= A xor B xor Cin;
    CARRY <= (A and B) or (B and Cin) or (Cin and A);
end rtl;
