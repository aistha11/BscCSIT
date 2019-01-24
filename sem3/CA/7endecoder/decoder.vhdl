library ieee;
use ieee.std_logic_1164.all;

entity Decoder is port(
	x: in bit_vector(2 downto 0);
	y: out bit_vector(7 downto 0)
	);
end Decoder;

architecture a_Decoder of Decoder is
begin
	process(x)
	begin
		if(x = "000") then
			y <= "00000001";
		elsif (x = "001") then
			y <= "00000010";
		elsif (x = "010") then
			y <= "00000100";
		elsif (x = "011") then
			y <= "00001000";
		elsif (x = "100") then
			y <= "00010000";
		elsif (x = "101") then
			y <= "00100000";
		elsif (x = "110") then
			y <= "01000000";
		else 
			y <= "10000000";
		end if;
		
	end process;
end a_Decoder;