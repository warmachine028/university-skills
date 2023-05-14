--CODE 1: Special XOR gate in vhdl
library IEEE;
use IEEE.std_logic_1164.all;

entity XOR_gate is 
    port(
        A, B: in std_logic;
        Y: out std_logic);
end XOR_gate;

-- Internal logic of the above component
architecture rtl of XOR_gate is
begin
    Y <= A xor B;
end rtl;

