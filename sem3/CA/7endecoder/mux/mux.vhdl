library ieee;
use ieee.std_logic_1164.all;

entity mux is port(
		x : in std_logic_vector(7 downto 0);
		s : in std_logic_vector(2 downto 0);
		cout : out std_logic
		);
end mux;

architecture a_mux of mux is
begin
	process(x,s)
	begin
		case s is
			when "000"=>cout<=x(0);
			when "001"=>cout<=x(1);
			when "010"=>cout<=x(2);
			when "011"=>cout<=x(3);
			when "100"=>cout<=x(4);
			when "101"=>cout<=x(5);
			when "110"=>cout<=x(6);
			when "111"=>cout<=x(7);
			when others=> null;
		end case;
	end process;
end a_mux;