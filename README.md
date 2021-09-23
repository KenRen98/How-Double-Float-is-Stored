# How-Double-Float-is-Stored

This is a simple code to demonstrate how double is stored in computer Memory.</br>
展示双精度和单精度浮点数在计算机内存中存储方式的简单代码

Demo output:
使用例子:

[root@localhost ~]# gcc print.c  -lm
[root@localhost ~]# ./a.out

Please enter a double number: 7464.1648


Double: 7464.164800
RawDouble: 5D83AB38

Dec Form:
*****************
Sign: 0
Exponent: 1035
Fraction: 3703336361865825


Hex Form:
*****************
Sign: 0
Exponent: 40B
Fraction: D282A30553261


Conversion:
*****************
Sign: Positive
Exponent: 12
Binary Fraction: 1101001010000010101000110000010101010011001001100001
Decimal Fraction: 1.822306
Raw Double in Decimal Calculation: 7464.164800=1.822306*2^12

Double Check Answer: 7464.164800
[root@localhost ~]#
