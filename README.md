# TandemLoop-Screening-Test-MD-JISHAN-KHAN


***Technologies Used:

- C++ programming language
- C++ (Standard Library)
- STL Containers: vector, map
- Control Structures: Loops, Conditionals
- Input/Output via cin and cout
- 

Problem 1: Create a small calculator which performs operations such as Addition, Subtraction, Multiplication and Division using class.

Task: Implement a calculator supporting +, -, *, / using OOP.

Approach:
Create a Calculator class with a method simple_class_calculator(a, b, op).
Take two numbers and an operation (+, -, *, /) from the user.
Use conditional statements (if, else if) to perform the chosen operation.
Handle division-by-zero cases with an error message.
Return the result and display it in main().



Problem 2: With a single integer as the input, generate the following until a = x [series of numbers as shown in below examples]

Task: Generate a series of odd numbers until count = a.

Approach:
Create a function generateSeries(int a) that returns a vector of odd numbers.
Loop from 0 to a-1 and generate each odd number using the formula 2*i + 1.
Store the numbers in a vector and return it.
Take a as input in main() and print the result using a range-based for loop.



Problem 3:  With a single integer as the input, generate the following until a = x [series of numbers as shown in below examples]

Task: Generate odd numbers where output length depends on input parity.

Approach:
Create a function conditionalSeries(int a) to return the required series.
Calculate number of terms to generate as a / 2 + 1.
Generate odd numbers using the formula 2*i + 1 up to the calculated term count.
Return the list of generated numbers.
Take user input and print the series in comma-separated format.


Problem 4:Get the total count of number listed in the dictionary which is multiple of [1,2,3,4,5,6,7,8,9]

Task: Count numbers divisible by 1 to 9 in a list.

Approach:
Use a function count_numbers_listed_dictionary(vector<int> nums) that returns a map<int, int>.
For each number i from 1 to 9:
Count how many elements in the list are divisible by i.
Store the result in a map as i → count.
Return the map and print each key-value pair as i:count.


  
