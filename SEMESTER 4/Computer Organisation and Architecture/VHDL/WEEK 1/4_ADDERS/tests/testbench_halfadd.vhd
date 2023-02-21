-- Testbench for HALF_adder
library IEEE;
use IEEE.std_logic_1164.all;

entity testbench is
    -- empty
end testbench;

architecture tb of testbench is
    component half_adder is 
        port(
            A, B: in std_logic;
            SUM, CARRY: out std_logic);
    end component;

    signal a_in, b_in, s_out, c_out: std_logic;
    begin
        --connecting DUT
        DUT: half_adder port map(a_in, b_in, s_out, c_out);

    process
    begin
        a_in <= '0';
        b_in <= '0';
        wait for 1 ns;
        assert(s_out='0' and c_out='0') report "Fail 0/0" severity error;

        a_in <= '0';
        b_in <= '1';
        wait for 1 ns;
        assert(s_out='1' and c_out='0') report "Fail 0/1" severity error;

        a_in <= '1';
        b_in <= '0';
        wait for 1 ns;
        assert(s_out='1' and c_out='0') report "Fail 1/0" severity error;

        a_in <= '1';
        b_in <= '1';
        wait for 1 ns;
        assert(s_out='0' and c_out='1') report "Fail 1/1" severity error;

        --Clear inputs
        a_in <= '0';
        b_in <= '0';
        assert false report "Test Done." severity note;
        wait;
    end process;
end tb;