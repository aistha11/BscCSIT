library ieee;
use ieee.std_logic_1164.all;

entity encoder_tb is
end encoder_tb;

architecture a_encoder_tb of encoder_tb is
component encoder 
	port(
		x: in std_logic_vector(7 downto 0);
		y: out std_logic_vector(2 downto 0)
		);
end component;
signal x: std_logic_vector(7 downto 0);
signal y: std_logic_vector(2 downto 0);

begin
	bijay: encoder port map(x =>x,y=>y);
	process begin
	 x <= "00000001";
	 wait for 1 ns;
	 
	 x <= "10001010";
	 wait for 1 ns;
	 
	 x <= "00000010";
	 wait for 1 ns;
	 
	 x <= "00000100";
	 wait for 1 ns;
	 
	 x <= "00001000";
	 wait for 1 ns;
	 
	 x <= "00010000";
	 wait for 1 ns;
	 
	 x <= "00100000";
	 wait for 1 ns;
	 
	 x <= "01000000";
	 wait for 1 ns;
	 
	 x <= "10000000";
	 wait for 1 ns;
	 wait;
	end process;
end a_encoder_tb;