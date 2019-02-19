library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
entity pipeline_tb is
end pipeline_tb;

architecture a_pipeline_tb of pipeline_tb is 
component pipeline
		port(
			a,b,c : in integer;
			clk : in std_logic;
			y : out integer
		);
end component;
signal a,b,c,y : integer := 0;
signal clk : std_logic := '0';
constant clkperiod : time := 2 ns;
	begin
		bijay : pipeline port map(a=>a,b=>b,c=>c,y=>y,clk=>clk);
		def_clock : process begin
			clk <= '0';
			wait for clkperiod/2;
			clk <= '1';
			wait for clkperiod/2;
			end process;
		def_input : process begin
			a <= 2;
			b <= 3;
			c<= 4;
			wait for clkperiod;
			a <= 3;
			b <= 5;
			c<= 2;
			wait for clkperiod;
			a <= 4;
			b <= 1;
			c<= 3;
			wait for clkperiod;
			a <= 2;
			b <= 3;
			c<= 4;
			wait for clkperiod;
			wait ;
		end process;
end a_pipeline_tb;
	
	
		 
		 
		 