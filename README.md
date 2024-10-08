Simple Calculator Program
=========================

Overview
--------

This is a basic calculator program written in C++ that allows users to perform basic arithmetic operations: addition, subtraction, multiplication, and division. The user is prompted to enter two numbers and an operator. The program calculates and displays the result based on the user's input.

Features
--------

*   **Input Numbers**: The program takes two numbers from the user.
    
*   **Operation Selection**: The user selects one of the four basic arithmetic operations (`+`, `-`, `*`, `/`).
    
*   **Calculation and Output**: Based on the selected operation, the program performs the calculation and displays the result.
    
*   **Error Handling**: The program checks for an invalid operator and informs the user if the input is not one of the valid operators.
    

How It Works
------------

1.  **User Input**:
    
    *   The user is prompted to enter two numbers (`num_1` and `num_2`).
        
    *   The user is then asked to enter an arithmetic operator (`+`, `-`, `*`, or `/`).
        
2.  **Condition Check**:
    
    *   The program uses a series of if-else statements to check the operator and perform the corresponding arithmetic operation.
        
3.  **Operations**:
    
    *   **Addition**: If the user enters `+`, the program calculates the sum of the two numbers.
        
    *   **Subtraction**: If the user enters `-`, the program calculates the difference between the two numbers.
        
    *   **Multiplication**: If the user enters `*`, the program calculates the product of the two numbers.
        
    *   **Division**: If the user enters `/`, the program calculates the quotient of the two numbers.
        
4.  **Invalid Input**:
    
    *   If the user enters an invalid operator (not `+`, `-`, `*`, or `/`), the program prompts the user to enter a valid operator.
        

### Program Flow:

1.  The program asks for two numbers (`num_1` and `num_2`).
    
2.  The user is then prompted to choose an operator.
    
3.  The program calculates the result based on the operator and displays the result.
    
4.  If the user provides an invalid operator, the program informs them to enter a valid operator.