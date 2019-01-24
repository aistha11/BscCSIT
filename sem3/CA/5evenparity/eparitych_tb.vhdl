library ieee;
use ieee.std_logic_1164.all;

entity eparitych_tb is
end eparitych_tb;

architecture a_eparitych_tb of eparitych_tb is
component eparitych 
	port(
		a: in bit_vector(5 downto 0);
		pe: in bit;
		pc: out bit
	);
end component;
	signal a: bit_vector(5 downto 0);
	signal pe,pc: bit;
	begin
	evenparitych: eparitych port map(a=>a,pe=>pe,pc=>pc);
	process begin
		pe <= '0';
		a <= "000000";
		wait for 1 ns;
		
		pe <= '0';
		a <= "000100";
		wait for 1 ns;
		
		pe <= '0';
		a <= "011000";
		wait for 1 ns;
		
		pe <= '1';
		a <= "111000";
		wait for 1 ns;
		
		pe <= '1';
		a <= "111111";
		wait for 1 ns;
		wait;
	end process;
end a_eparitych_tb;