library ieee;
use ieee.std_logic_1164.all;

entity eparitych is port(
	a: in bit_vector(5 downto 0);
	pe: in bit;
	pc: out bit
	);
end eparitych;

architecture a_eparitych of eparitych is
begin
	process(a,pe)
		variable t: bit;
	begin
		t := pe;
		for i in 0 to 5 loop
			t := t xor a(i);
		end loop;
		pc <= t;
	end process;
end a_eparitych;