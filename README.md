# C-programming-

## Question One
Transfer of signals is a process of transmitting information from one point to another.
You are tasked with implementing a program in C to simulate the transfer of signals through a communication channel. The program should model the transmission of a digital signal through a noisy channel and employ error detection and correction techniques.

-A signal carrying "UCU" looks like;
  - U-01010101
  - C-01000011
  - U-01010101
Write a C Program that performs the following action.
a) Store the above signal in a multidimensional array called `clean_signal`.  
b) Implement a function `add_noise` that takes a digital signal structure and adds random noise to the signal. The function should randomly flip a certain percentage of bits in the signal. Store the new signal in a variable called `noise`.  
c) Print the new signal on the screen.  
d) Implement a function `detect_errors` that checks for errors in the received signal.  
e) Implement a function `correct_errors` that corrects any detected errors in the received signal.

## Question Two
Create a program that calculates how many red ants there are in a colony. The user should be prompted to enter the initial population of red ants (for example, 100,000,000), the average daily population increase as a percentage of the current population (for example, 3.4%), and the number of days the population will multiply (for example, 15 days).

a) Using a while loop, show the ants population per day.  
b) After calculating the population for each day, compute and display the total population growth over the entire period.  
c) Compute and display the average daily population increase over the specified period.  
d) Input Validation: If the population's initial size is less than two, do not accept it. Never accept a population growth rate on an average daily basis that is negative. Never accept a multiplicative figure for the number of days that is less than one.

## Question Three
In the Department of Computing Electronics Laboratory, students often encounter circuits composed of multiple resistors connected either in series or parallel configurations. Calculating the total resistance of such circuits is essential for understanding their behavior.

a) Create a flowchart to illustrate your solution.  
b) Implement a C program that allows the user to choose between calculating the total resistance of resistors connected in series or in parallel. Use a switch structure.  
c) If the user chooses series connection, prompt the user to enter the values of each resistor, store these values in a single dimension array and calculate the total resistance using the formula: `total_resistance = resistor1 + resistor2 + ... + resistorN`.  
d) If the user chooses parallel connection, prompt the user to enter the values of each resistor, store these values in a single dimension array and calculate the total resistance using the formula: `1/ total_resistance = 1/resistor1 + 1/resistor2 + ... + 1/resistorN`.  
e) Implement validation for resistor values, ensuring they fall within a specific range (e.g., 1 ohm to 10,000 ohms). Prompt the user to re-enter values if they are outside this range.  
f) For each answer above, show two values, ohms (Ω) and kilo-ohms (kΩ).

## Question Four
Your 6 year old sister is struggling with arithmetic at school. With the acquired knowledge attained in C programming, write a program for your sister, to help her polish her arithmetics.
The program should simply perform an operation of any two numbers between 0 and 9. Your 6-year-old sister should enter any two numbers.
She should then choose an operand, choose what arithmetic to test i.e. either "+", or "-", or "*", or "/" e.g.

Choose operation by selecting the number;  
1. "+"  
2. "-"  
3. "*"  
4. "/"

a) She should enter the answer of the expression and the program should mark him and keep a record of failed attempts and passed attempts.  
b) Let the program keep asking your sister if she wishes to continue with her math exercise and terminates when she has at least answered 10 correct questions.  
c) The program should show a well formatted report of how many expressions done, how many have been passed and how many failed before terminating.
