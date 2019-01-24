library ieee;
use ieee.std_logic_1164.all;

entity eparity is port(
	a: in bit_vector(5 downto 0);
	pe: out bit
	);
end eparity;

architecture a_eparity of eparity is
begin
	process(a)
		variable t: bit;
	begin
		t := a(0);
		for i in 1 to 5 loop
			t := t xor a(i);
		end loop;
		pe <= t;
	end process;
end a_eparity;