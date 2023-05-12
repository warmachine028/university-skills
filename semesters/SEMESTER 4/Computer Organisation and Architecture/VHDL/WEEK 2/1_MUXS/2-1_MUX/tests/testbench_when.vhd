-- Testbench for when syntax
library IEEE;
use IEEE.std_logic_1164.all;
 
entity testbench is
-- empty
end testbench; 

architecture tb of testbench is

-- DUT component
component MUX_2to1 is
    port(    
        I : in std_logic_vector (1 downto 0);
        S : in std_logic_vector;
        Y : out std_logic);
end component;

signal I0_in, I1_in, S_in, q_out: std_logic;
begin
  -- Connect DUT
  DUT: MUX_2to1 port map(I0_in, I1_in, S_in, q_out);

  process
  begin
    I0_in <= '0';
    I1_in <= '1';
    S_in <= '0';
    wait for 1 ns;
    assert(q_out='0') report "Fail 010/0" severity error;
  
    I0_in <= '1';
    I1_in <= '0';
    S_in <= '0';
    wait for 1 ns;
    assert(q_out='1') report "Fail 100/1" severity error;

    I0_in <= '1';
    I1_in <= 'X';
    S_in <= '1';
    wait for 1 ns;
    assert(q_out='X') report "Fail 1X1/X" severity error;

    -- Clear inputs
    I0_in <= '0';
    I1_in <= '0';
    S_in <= '0';
    assert false report "Test done." severity note;
    wait;
  end process;
end tb;