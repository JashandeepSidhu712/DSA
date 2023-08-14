# XOR
XOR (exclusive OR) is a bitwise operation that compares the corresponding bits of two binary numbers and produces a new binary number. 

XOR returns 1 if the bits being compared are different, and it returns 0 if the bits are the same.

Here's how XOR is calculated between two binary digits:

0 XOR 0 = 0 <br>
0 XOR 1 = 1 <br>
1 XOR 0 = 1 <br>
1 XOR 1 = 0 <br>

### For example
let's calculate XOR between two 4-bit binary numbers, 1010 and 1101:

```
  1 0 1 0
X 1 1 0 1
-----------
  0 1 1 1
```

The result of the XOR operation is 0111, which is equivalent to the decimal number 7.

```
int result = num1 ^ num2;  // XOR between num1 and num2
```

XOR is a bitwise operation that compares corresponding bits of two numbers and produces a new number where each bit is determined by the XOR rules.
