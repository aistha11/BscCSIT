library ieee;
use ieee.std_logic_1164.all;

entity Decoder_tb is
end Decoder_tb;

architecture a_Decoder_tb of Decoder_tb is
component Decoder 
	port(
		x: in bit_vector(2 downto 0);
		y: out bit_vector(7 downto 0)
	);
end component;
	signal x: bit_vector(2 downto 0);
	signal y: bit_vector(7 downto 0);
	begin
	bijay: Decoder port map(x => x,y => y);
	process begin
		x <= "000";
		wait for 1 ns;
		
		x <= "001";
		wait for 1 ns;
		
		x <= "010";
		wait for 1 ns;
		
		x <= "011";
		wait for 1 ns;
		
		x <= "100";
		wait for 1 ns;
		
		x <= "101";
		wait for 1 ns;
		
		x <= "110";
		wait for 1 ns;
		
		x <= "111";
		wait for 1 ns;
		wait;
	end process;
end a_Decoder_tb;