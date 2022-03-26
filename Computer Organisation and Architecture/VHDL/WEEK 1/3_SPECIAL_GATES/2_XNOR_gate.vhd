--CODE 2: Special XNOR gate in vhdl
library IEEE;
use IEEE.std_logic_1164.all;

entity XNOR_gate is 
    port(
        A, B: in std_logic;
        Y: out std_logic);
end XNOR_gate;

-- Internal logic of the above component
architecture rtl of XNOR_gate is
begin
    Y <= A xnor B;
end rtl;

