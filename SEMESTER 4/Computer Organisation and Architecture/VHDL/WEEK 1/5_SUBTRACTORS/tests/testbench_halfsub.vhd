-- Testbench for HALF_subtractor
library IEEE;
use IEEE.std_logic_1164.all;

entity testbench is
    -- empty
end testbench;

architecture tb of testbench is
    component half_subtractor is 
        port(
            A, B: in std_logic;
            DIFFERENCE, BORROW: out std_logic);
    end component;

    signal a_in, b_in, d_out, b_out: std_logic;
    begin
        --connecting DUT
        DUT: half_subtractor port map(a_in, b_in, d_out, b_out);

    process
    begin
        a_in <= '0';
        b_in <= '0';
        wait for 1 ns;
        assert(d_out='0' and b_out='0') report "Fail 0/0" severity error;

        a_in <= '0';
        b_in <= '1';
        wait for 1 ns;
        assert(d_out='1' and b_out='0') report "Fail 0/1" severity error;

        a_in <= '1';
        b_in <= '0';
        wait for 1 ns;
        assert(d_out='1' and b_out='0') report "Fail 1/0" severity error;

        a_in <= '1';
        b_in <= '1';
        wait for 1 ns;
        assert(d_out='0' and b_out='1') report "Fail 1/1" severity error;

        --Clear inputs
        a_in <= '0';
        b_in <= '0';
        assert false report "Test Done." severity note;
        wait;
    end process;
end tb;