library ieee;
use ieee.std_logic_1164.all;

entity comparator is port (
			a,b : in bit_vector (7 downto 0);
			g,l,e : out bit
			);
end comparator;

architecture a_comparator of comparator is
begin
	process(a,b)
	begin
	if (a=b) then
		e <= '1';
		g <= '0';
		l <= '0';
	elsif (a>b) then
		e <= '0';
		g <= '1';
		l <= '0';
	else
		e <= '0';
		g <= '0';
		l <= '1';
	end if;
	end process;
end a_comparator;