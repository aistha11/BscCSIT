library ieee;
use ieee.std_logic_1164.all;

entity mux_tb is
end mux_tb;

architecture a_mux_tb of mux_tb is 
component mux 
	port(
			x : in std_logic_vector(7 downto 0);
			s : in std_logic_vector(2 downto 0);
			cout : out std_logic 
		); 
end component;
signal x : std_logic_vector(7 downto 0) := (others=>'0');
signal s : std_logic_vector(2 downto 0) := (others=>'0');
signal cout : std_logic;
begin
	bijay : mux port map (x =>x, s =>s, cout =>cout);
	process begin
	x<="01010101" after 1 ns;
	    x<="01010101";
		s <="000";
		wait for 1 ns;
		
		s <="001";
		wait for 1 ns;
		
		s <="010";
		wait for 1 ns;
		
		s <="011";
		wait for 1 ns;
		
		s <="100";
		wait for 1 ns;
		
		s <="101";
		wait for 1 ns;
		
		s <="110";
		wait for 1 ns;
		
		s <="111";
		wait for 1 ns;
		wait;
	end process;
end a_mux_tb;
		