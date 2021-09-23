# How-Double-Float-is-Stored

This is a simple code to demonstrate how double is stored in computer Memory.</br>
展示双精度和单精度浮点数在计算机内存中存储方式的简单代码

Demo output(使用例子):</br>

[root@localhost ~]# gcc ShowDoubleConversion.c  -lm</br>
[root@localhost ~]# ./a.out</br>

Please enter a double number: 7464.1648</br>


Double: 7464.164800</br>
RawDouble: 5D83AB38</br>

Dec Form:</br>
*****************</br>
Sign: 0</br>
Exponent: 1035</br>
Fraction: 3703336361865825</br>


Hex Form:</br>
*****************</br>
Sign: 0</br>
Exponent: 40B</br>
Fraction: D282A30553261</br>


Conversion:</br>
*****************</br>
Sign: Positive</br>
Exponent: 12</br>
Binary Fraction: 1101001010000010101000110000010101010011001001100001</br>
Decimal Fraction: 1.822306</br>
Raw Double in Decimal Calculation: 7464.164800=1.822306*2^12</br>

Double Check Answer: 7464.164800</br>
[root@localhost ~]#</br>
