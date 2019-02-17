#!/bin/sh
echo
echo
echo "Checking norminette..."
echo "————————————————————————"
norminette */*.[ch]


echo
echo
echo
echo "Checking output..."


echo "—————————————————————————————————————————————————————————————————————————"
echo "INPUT #1:	3 + 42 * (1 - 2 / (3 + 4) - 1 % 21) + 1 "
echo
./eval_expr "3 + 42 * (1 - 2 / (3 + 4) - 1 % 21) + 1"
echo "3 + 42 * (1 - 2 / (3 + 4) - 1 % 21) + 1" | bc 


echo "—————————————————————————————————————————————————————————————————————————"
echo "INPUT #2:	500 / 2"
echo
./eval_expr "500 / 2"
echo "500 / 2" | bc 


echo "—————————————————————————————————————————————————————————————————————————"
echo "INPUT #3:	-(-2147483647)"
echo
./eval_expr "-(-2147483647)"
echo "-(-2147483647)" | bc 


echo "—————————————————————————————————————————————————————————————————————————"
echo "INPUT #4:	(-(2147483647) - (-5))"
echo
./eval_expr "(-(2147483647) - (-5))"
echo "(-(2147483647) - (-5))" | bc 


echo "—————————————————————————————————————————————————————————————————————————"
echo "INPUT #5:	900 / 3 + (200 - (5 + 3 + (2 % 4 - (2 / (3 + 4) + 1 % 21 - 1))))"
echo
./eval_expr "900 / 3 + (200 - (5 + 3 + (2 % 4 - (2 / (3 + 4) + 1 % 21 - 1))))"
echo "900 / 3 + (200 - (5 + 3 + (2 % 4 - (2 / (3 + 4) + 1 % 21 - 1))))" | bc 


echo "—————————————————————————————————————————————————————————————————————————"
echo "INPUT #6:	2 * 300 * 2 - (900 - (-300 + 200 - 600 / 3)) + 42"
echo
./eval_expr "2 * 300 * 2 - (900 - (-300 + 200 - 600 / 3)) + 42"
echo "2 * 300 * 2 - (900 - (-300 + 200 - 600 / 3)) + 42" | bc 


echo "—————————————————————————————————————————————————————————————————————————"
echo "INPUT #7:	(-(5000 + 2000000000 + (-(-147478647))) + 1) - 2"
echo
./eval_expr "(-(5000 + 2000000000 + (-(-147478647))) + 1) - 2"
echo "(-(5000 + 2000000000 + (-(-147478647))) + 1) - 2" | bc 


echo "—————————————————————————————————————————————————————————————————————————"
echo "INPUT #8:	((1+(2+(3+(4+(5+(6+(7+(8+(9+(10+(11+(12))))))))))))) - ((1+(2+(3+(4+(5+(6+(7+(8+(9+(10+(11+(12))))))))))))) + 1"
echo
./eval_expr "((1+(2+(3+(4+(5+(6+(7+(8+(9+(10+(11+(12))))))))))))) - ((1+(2+(3+(4+(5+(6+(7+(8+(9+(10+(11+(12))))))))))))) + 1"
echo "((1+(2+(3+(4+(5+(6+(7+(8+(9+(10+(11+(12))))))))))))) - ((1+(2+(3+(4+(5+(6+(7+(8+(9+(10+(11+(12))))))))))))) + 1" | bc


echo "—————————————————————————————————————————————————————————————————————————"
echo "INPUT #9:	((1*(2*(3*(4*(5*(6*(7*(8*(9*(10*(11*(12)))))))))))))"
echo
./eval_expr "((1*(2*(3*(4*(5*(6*(7*(8*(9*(10*(11*(12)))))))))))))"
echo "((1*(2*(3*(4*(5*(6*(7*(8*(9*(10*(11*(12)))))))))))))" | bc 


echo "—————————————————————————————————————————————————————————————————————————"
echo "INPUT #10:		((((((0))))))"
echo
./eval_expr "((((((0))))))"
echo "((((((0))))))" | bc 


echo "—————————————————————————————————————————————————————————————————————————"
echo "INPUT #11:		90-90-90-90-90 * 2000000 + 157 - 2 * (3333333)"
echo
./eval_expr "90-90-90-90-90 * 2000000 + 157 - 2 * (3333333)"
echo "90-90-90-90-90 * 2000000 + 157 - 2 * (3333333)" | bc 


echo "—————————————————————————————————————————————————————————————————————————"
echo "INPUT #12:		100 * (2 / 2) * 100"
echo
./eval_expr "100 * (2 / 2) * 100"
echo "100 * (2 / 2) * 100" | bc 


echo "—————————————————————————————————————————————————————————————————————————"
echo "INPUT #13:		3+3"
echo
./eval_expr "3+3"
echo "3+3" | bc 


echo "—————————————————————————————————————————————————————————————————————————"
echo "INPUT #14:		-42"
echo
./eval_expr "-42"
echo "-42" | bc 


echo "—————————————————————————————————————————————————————————————————————————"
echo "INPUT #15:		-5 -5 + 5"
echo
./eval_expr "-5 -5 + 5"
echo "-5 -5 + 5" | bc 


echo "—————————————————————————————————————————————————————————————————————————"
echo "INPUT #16:		(2*2)*(3*3)*(4*4)"
echo
./eval_expr "(2*2)*(3*3)*(4*4)"
echo "(2*2)*(3*3)*(4*4)" | bc 


echo "—————————————————————————————————————————————————————————————————————————"
echo "INPUT #17:		5*4*3*2*1"
echo
./eval_expr "5*4*3*2*1"
echo "5*4*3*2*1" | bc 


echo "—————————————————————————————————————————————————————————————————————————"
echo "INPUT #18:		EMPTY STRING TEST"
echo
./eval_expr ""
echo "" | bc


echo "—————————————————————————————————————————————————————————————————————————"
echo "INPUT #19:		-232 * 56 + 31 -1 * (43) + 2 * 10 * 10 * (129 - 128)"
echo
./eval_expr "-232 * 56 + 31 -1 * (43) + 2 * 10 * 10 * (129 - 128)"
echo "-232 * 56 + 31 -1 * (43) + 2 * 10 * 10 * (129 - 128)" | bc


echo "—————————————————————————————————————————————————————————————————————————"
