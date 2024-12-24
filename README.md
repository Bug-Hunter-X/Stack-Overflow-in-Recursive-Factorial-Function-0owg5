# Stack Overflow in Recursive Factorial Function

This repository demonstrates a common error in recursive functions: stack overflow. The `foo` function calculates the factorial recursively, but it can easily lead to a stack overflow if the input is large. The solution shows how to mitigate this by adding a check for the base case or by using iterative approach.

## Bug

The `bug.hh` file contains the buggy recursive factorial function. It does not handle very large inputs and causes a stack overflow. 

## Solution

The `bugSolution.hh` file provides a corrected version of the factorial function that avoids stack overflow errors, either through iteration or by using a more robust base case.