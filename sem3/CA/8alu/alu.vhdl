--lab8 simulating 4 bit ALU using VHDL
library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity alu is port(
		a,b : in signed(3 downto 0);
		alu_sel : in bit_vector(2 downto 0);
		y : out signed(3 downto 0)
		);
end alu;

architecture a_alu of alu is
begin
	process(a,b,alu_sel)
	begin
		case (alu_sel) is
			when "000"=>
				y <= a + b;
			when "001"=>
				y <= a - b;
			when "010"=>
				y <= a + 1;
			when "011"=>
				y <= a - 1;
			when "100"=>
				y <= not a;
			when "101"=>
				y <= a and b;
			when "110"=>
				y <= a or b;
			when "111"=>
				y <= a xor b;
			when others=> null;
		end case;
	end process;
end a_alu;