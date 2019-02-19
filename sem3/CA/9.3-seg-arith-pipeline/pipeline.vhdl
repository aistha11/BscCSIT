library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity pipeline	is port(
			a,b,c : in integer;
			clk : in std_logic;
			y : out integer
		);
	end pipeline;
	
architecture a_pipeline of pipeline is
signal R1,R2,R3,R4,R5,R6: integer := 0;
	begin
		y <= R6;
	    process(clk)
			begin
			if( rising_edge (clk)) then
				for i in 0 to 2 loop
					case(i) is
					when 0 =>
						R1 <= a;
						R2 <= b;
						R3 <= c;
					when 1 =>
						R4 <= R1*R2;
						R5 <= R3;
					when 2 => 
						R6 <= R4 + R5;
						when others => NULL;
					end case;
				end loop;
			end if;
		end process;
end a_pipeline;
			
			