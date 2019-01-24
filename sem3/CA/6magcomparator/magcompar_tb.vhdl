library ieee;
use ieee.std_logic_1164.all;

entity comparator_tb is
end comparator_tb;

architecture a_comparator_tb of comparator_tb is
component comparator
	port (
		a,b : in bit_vector (7 downto 0);
		g,l,e : out bit
	);
end component;
signal a,b : bit_vector (7 downto 0);
signal g,l,e : bit;
	 begin
	 comparators: comparator port map (a=>a,b=>b,g=>g,l=>l,e=>e);
	 process begin
		a <= "01000010";
		b <= "01000000";
		wait for 1 ns;
		
		a <= "01000000";
		b <= "01000100";
		wait for 1 ns;
		
		a <= "01010000";
		b <= "01010010";
		wait for 1 ns;
		
		a <= "01000000";
		b <= "01000000";
		wait for 1 ns;
		wait;
	end process;
end a_comparator_tb;
