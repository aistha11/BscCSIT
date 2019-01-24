library ieee;
use ieee.std_logic_1164.all;

entity eparity_tb is
end eparity_tb;

architecture a_eparity_tb of eparity_tb is
component eparity 
	port(
		a: in bit_vector(5 downto 0);
		pe: out bit
	);
end component;
	signal a: bit_vector(5 downto 0);
	signal pe: bit;
	begin
	evenparitys: eparity port map(a=>a,pe=>pe);
	process begin
		a <= "000000";
		wait for 1 ns;
		
		a <= "000010";
		wait for 1 ns;
		
		a <= "011000";
		wait for 1 ns;
		
		a <= "111000";
		wait for 1 ns;
		
		a <= "111111";
		wait for 1 ns;
		wait;
	end process;
end a_eparity_tb;