library ieee;
use ieee.std_logic_1164.all;

entity parallel_tb is
end parallel_tb;

architecture a_parallel_tb of parallel_tb is
component paralleladder
	port(
		a,b: in bit_vector(4 downto 0);
		s: out bit_vector(4 downto 0);
		cin: in bit;
		cout: out bit
	   );
	end component;
		signal a,b,s : bit_vector(4 downto 0);
		signal cin,cout : bit;
		begin 
			paralleladders : paralleladder port map( a => a,b => b,s => s,cin => cin,cout => cout);
			process begin
				a <= "00000";
				b <= "00000";
				wait for 1 ns;
				
				a <= "01100";
				b <= "01000";
				wait for 1 ns;
				
				a <= "00110";
				b <= "01100";
				wait for 1 ns;
				
				a <= "11100";
				b <= "01110";
				wait for 1 ns;
				
				a <= "11111";
				b <= "11111";
				wait for 1 ns;
				wait;
			end process;
end a_parallel_tb;			