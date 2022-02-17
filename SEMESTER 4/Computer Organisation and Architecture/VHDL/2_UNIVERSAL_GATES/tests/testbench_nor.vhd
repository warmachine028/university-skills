-- Testbench for NOR gate
library IEEE;
use IEEE.std_logic_1164.all;
 
entity testbench is
-- empty
end testbench; 

architecture tb of testbench is

-- DUT component
component nor_gate is
port(
  A, B: in std_logic;
  Y: out std_logic);
end component;

signal a_in, b_in, q_out: std_logic;
begin
  -- Connect DUT
  DUT: nor_gate port map(a_in, b_in, q_out);

  process
  begin
    a_in <= '0';
    b_in <= '0';
    wait for 1 ns;
    assert(q_out='1') report "Fail 0/0" severity error;
  
    a_in <= '0';
    b_in <= '1';
    wait for 1 ns;
    assert(q_out='0') report "Fail 0/1" severity error;

    a_in <= '1';
    b_in <= '0';
    wait for 1 ns;
    assert(q_out='0') report "Fail 1/X" severity error;

    a_in <= '1';
    b_in <= '1';
    wait for 1 ns;
    assert(q_out='0') report "Fail 1/1" severity error;
    
    -- Clear inputs
    a_in <= '0';
    b_in <= '0';
    assert false report "Test done." severity note;
    wait;
  end process;
end tb;