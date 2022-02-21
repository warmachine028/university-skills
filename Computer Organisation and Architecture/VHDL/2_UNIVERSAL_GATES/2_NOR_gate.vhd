--CODE 2: Universal NOR gate in vhdl
library IEEE;
use IEEE.std_logic_1164.all;

entity NOR_gate is 
    port(
        A, B: in std_logic;
        Y: out std_logic);
end NOR_gate;

architecture rtl of NOR_gate is
begin
    Y <= A nor B;
end rtl;

