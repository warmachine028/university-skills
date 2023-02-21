--CODE 1: Basic OR gate in vhdl
library IEEE;
use IEEE.std_logic_1164.all;

-- An Entity is like a structure of the the circuit 
-- This defines all input and output pins
entity OR_gate is 
    port(
        A, B: in std_logic;
        Y: out std_logic);
end OR_gate;

-- Internal logic of the above component
architecture rtl of OR_gate is
begin
    Y <= A or B;
end rtl;

