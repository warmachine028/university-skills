-- CODE 1: 2:1 MUX using VHDL
library IEEE;
use IEEE.std_logic_1164.all;


entity MUX_2to1 is
    port(    
        I : in std_logic_vector (1 downto 0);
        S : in std_logic_vector;
        Y : out std_logic);
end MUX_2to1;


architecture rtl of MUX_2to1 is
begin
    with S select
        Y <= i(0) when "0",
             i(1) when others;
end rtl;