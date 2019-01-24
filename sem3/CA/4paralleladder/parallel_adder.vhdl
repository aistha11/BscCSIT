library ieee;
use ieee.std_logic_1164.all;

entity paralleladder is port(
		a,b: in bit_vector(4 downto 0);
		s: out bit_vector(4 downto 0);
		cin: in bit;
		cout: out bit
	);
end paralleladder;

architecture a_paralleladder of paralleladder is
begin
	process(a,b,cin)
	 variable u: bit;
	 begin
		u :=cin;
		for i in 0 to 4 loop
			s(i) <= a(i) xor b(i) xor u;
			u := (a(i) and b(i)) or (b(i) and u) or (a(i) and u);
		end loop;
		cout <= u;
	end process;	
end a_paralleladder;