--  ULA 16bits
--:operações feitas na ULA:
----------------------------------
--     op1  op0 |   S
--	    0    0    | A + B
--	    0    1    | A and B
--      1    0    | A
--      1    1    | not A

----------------------------------
----------------------------------
library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_unsigned.all; -- biblioteca para soma e subtração

entity ula is
	port(
		A : in std_logic_vector(15 downto 0);
		B : in std_logic_vector(15 downto 0);
		op : in std_logic_vector(1 downto 0); -- operação desejada
		--N, Z, C, V : out std_logic; -- N = negativo, Z = zero, C = carry
		S : out std_logic_vector(15 downto 0;
);
end ula;	

architecture ULA of ula is
--signal a, b, s : std_logic_vector(16 downto 0);
--signal ss : std_logic_vector(15 downto 0);
begin
	process(A,B,op)
		begin
		case op is
		when "00" => S <= A + B;
		when "01" => S <= A and B;
		when "10" => S <= A;
		when "11" => S <= not A;
		end case;
		
	end process;
end ULA;





	