library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity alu_tb is
end alu_tb;

architecture a_alu_tb of alu_tb is 
component alu 
	port(
			a,b : in signed(3 downto 0);
			alu_sel : in bit_vector(2 downto 0);
			y : out signed(3 downto 0)
		); 
end component;
signal a,b,y : signed(3 downto 0);
signal alu_sel : bit_vector(2 downto 0) := (others=>'0');
begin
	 bijay : alu port map (a=>a,b=>b,y=>y,alu_sel=>alu_sel);
	process begin
		alu_sel <= "000";
		a <= "0100";
		b <= "1001";
		wait for 1 ns;
		
		alu_sel <= "001";
		a <= "0100";
		b <= "1001";
		wait for 1 ns;
		
		alu_sel <= "010";
		a <= "0100";
		b <= "1001";
		wait for 1 ns;
		
		alu_sel <= "011";
		a <= "0100";
		b <= "1001";
		wait for 1 ns;
		
		alu_sel <= "100";
		a <= "0100";
		b <= "1001";
		wait for 1 ns;
		
		alu_sel <= "101";
		a <= "0100";
		b <= "1001";
		wait for 1 ns;
		
		alu_sel <= "110";
		a <= "0100";
		b <= "1001";
		wait for 1 ns;
		
		alu_sel <= "111";
		a <= "0100";
		b <= "1001";
		wait for 1 ns;
		
		
		wait;
	end process;
end a_alu_tb;
		