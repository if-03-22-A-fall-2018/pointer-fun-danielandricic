## IF.03.01 Procedural Programming
# Assignment Pointer Fun

## Objective
This assignment lets you practise a bit more with the difference between references and values.

## Materials
- Atom or any other editor
- gcc
- terminal.

## Required Tasks
1. Write a `main` function which declares
   - an integer variable `int_value`
   - a pointer to an integer `int_pointer`

3. Assign some values to the variables. Take care how to assign a value to the pointer. What is possible there?

2. Define a function `print_integers` which accepts the following paramters
   - an integer variable `int_value`
   - a pointer to an integer `int_pointer`
   
   The function shall print both parameters in the following form
   `Got an integer value <x> and an address to an integer with value <y>` where `<x>` and `<y>` shall be replaced by the actual values of the parameters passed.
   
4. Call the function `print_integers` in the `main` function.

5. Define a function `change_integers` which accepts the same parameters as `print_integers`. In the function body the values of the two parameters shall be changed to some different values.

6. Call the function `change_integers` and then again call `print_integers` at the end of the `main` function. Which values are changed, which are not? Why?
   

## Hints
- Take care to keep the work loop "Implement a little", "Test a little" to avoid the 100 lines of error mess.

## Extra Credit
Document your implementation in an extra text file or in an inline comment. In particular:
- Write down the reasons, how you assigned values to the variables in the main function.
- Give alternatives how to pass parameters when calling the different functions.
- Write down the reasons, why some variables are not changed by `change_integers`.

## Evaluation
All coding assignments will get checked. Most common reasons that your assignment is marked down are:

- Program does not build or builds with warnings
- One or more items in the *Required Tasks* section are not satisfied
- Submitted code is visually sloppy and hard to read

## Things to Learn
- Repeat using primitive data types, like integer, float/doubles
- Repeat implementing functions

