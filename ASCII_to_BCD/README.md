# Convert ASCII Number to BCD in C Programming

## Author:- Ajinkya Patil

## Github:- https://github.com/Ajinkya7poppyi

**We are given a problem to convert a ASCII (American Standard Code for Information Interchange) number to BCD (Binary-Coded Decimal).**

**ASCII**
*So firstly lets understand ASCII Table*

KEY | ASCII | BINARY | BCD
--- | --- | --- | ---
0 | 30 | 0011 0000 | 0000 0000
1	| 31 | 0011 0001 | 0000 0001
2	| 32 | 0011 0010 | 0000 0010
3	| 33 | 0011 0011 | 0000 0011
4	| 34 | 0011 0100 | 0000 0100
5	| 35 | 0011 0101 | 0000 0101
6	| 36 | 0011 0110 | 0000 0110
7	| 37 | 0011 0111 | 0000 0111
8	| 38 | 0011 1000 | 0000 1000
9	| 39 | 0011 1001 | 0000 1001


*BCD*
BCD is 4-bit binary representation of unsigned decimal number. There are two types in BCD.

*Unpacked BCD*
In Unpacked BCD, only one digit is represented in a single byte. Least significant 4-bits carry the weight-age of the decimal digit, while most significant once carry the non-relevant content.

*Packed BCD*
In Packed BCD, two decimal digits are stored into a single byte. So both Least Significant as well as Most significant 4-bits carry the weight-age of two decimals, respectively.

KEY | ASCII | BINARY | BCD
--- | --- | --- | ---
0	| 0000 0000 | 0000 0000 | 0000 0000
1	| 0000 0001	| 0000 0001	| 0000 0001
2	| 0000 0010	| 0000 0010	| 0000 0010
3	| 0000 0011	| 0000 0011	| 0000 0011
4	| 0000 0100	| 0000 0100	| 0000 0100
5	| 0000 0101	| 0000 0101	| 0000 0101
6	| 0000 0110	| 0000 0110	| 0000 0110
7	| 0000 0111	| 0000 0111	| 0000 0111
8	| 0000 1000	| 0000 1000	| 0000 1000
9	| 0000 1001	| 0000 1001	| 0000 1001
10	| 0000 1010	| 0000 0001 0000 0000	| 0001 0000
11	| 0000 1011	| 0000 0001 0000 0001	| 0001 0001
12	| 0000 1100	| 0000 0001 0000 0010	| 0001 0010
13	| 0000 1101	| 0000 0001 0000 0011	| 0001 0011
14	| 0000 1110	| 0000 0001 0000 0100	| 0001 0100
15	| 0000 1111	| 0000 0001 0000 0101	| 0001 0101
16	| 0001 0000	| 0000 0001 0000 0110	| 0001 0110
17	| 0001 0001	| 0000 0001 0000 0111	| 0001 0111
18	| 0001 0010	| 0000 0001 0000 1000	| 0001 1000
19	| 0001 0011	| 0000 0001 0000 1001	| 0001 1001
20	| 0001 0100	| 0000 0010 0000 0000	| 0010 0000
