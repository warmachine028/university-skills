--CODE 1: Universal NAND gate in vhdl
library IEEE;
use IEEE.std_logic_1164.all;

entity NAND_gate is 
    port(
        A, B: in std_logic;
        Y: out std_logic);
end NAND_gate;

architecture rtl of NAND_gate is
begin
    Y <= A nand B;
end rtl;

