--8:3 encoder
library ieee;
use ieee.std_logic_1164.all;

entity encoder is port(
	x: in std_logic_vector(7 downto 0);
	y: out std_logic_vector(2 downto 0)
	);
end encoder;

architecture a_encoder of encoder is 
begin 
	process(x)
		begin	
		if(x = "00000001") then
			y <= "000";
		
		elsif(x = "00000010") then
			y <= "001";
			
		elsif(x = "00000100") then
			y <= "010";
			
		elsif(x = "00001000") then
			y <= "011";
		
		elsif(x = "00010000") then
			y <= "100";
		
		elsif(x = "00100000") then
			y <= "101";
		
		elsif(x = "01000000") then
			y <= "110";
		
		elsif( x = "10000000") then
			y <= "111";
		else
			y <= "XXX";
		end if;
	end process;
end a_encoder;