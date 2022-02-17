--CODE 3: Basic NOT gate in vhdl
library IEEE;
use IEEE.std_logic_1164.all;

entity NOT_gate is 
    port(
        A: in std_logic;
        Y: out std_logic);
end NOT_gate;

architecture rtl of NOT_gate is
begin
    Y <= not A;
end rtl;

