library ieee;
use ieee.std_logic_1164.all;

entity xor_tb is
end xor_tb;

architecture xor_tb_beh of xor_tb is
component xor1
	port(
		a,b : in bit;
		c : out bit
	);	
end component;
	signal p,q,r: bit;
	begin
		xorgate: xor1 port map(a=>p,b=>q,c=>r);
		process begin
		p <= '0';
		q <= '0';
		wait for 1 ns;
		
		p <= '1';
		q <= '0';
		wait for 1 ns;
		
		p <= '0';
		q <= '1';
		wait for 1 ns;
		
		p <= '1';
		q <= '1';
		wait for 1 ns;
		wait;
	end process;
end xor_tb_beh;