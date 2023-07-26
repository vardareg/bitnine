# Recursive (Top-Down) Approach
## Description
The recursive approach directly implements the given piecewise recurrence relation. It uses the function call stack to store intermediate results, which avoids explicit dynamic memory allocation.
## Pros
- Simple and easy to implement.
- Follows directly from the mathematical definition of the problem.
## Cons
- Can be very slow for large inputs due to repeated computation of the same subproblems.
- The function call stack can overflow for large inputs.
# Dynamic Programming (Bottom-Up) Approach
## Description
The bottom-up dynamic programming approach builds up the solution from smaller to larger subproblems, storing the intermediate results in an array. This avoids the overhead of recursive function calls.
## Pros
- Much faster for large inputs due to the absence of function call overhead and the use of stored intermediate results.
- No risk of stack overflow.
## Cons
- Uses extra space to store all intermediate results.
- Can be more difficult to implement correctly compared to recursion.
# Memoization (Top-Down Dynamic Programming) Approach
## Description
The memoization approach is a top-down method that combines the simplicity of the recursive approach with the efficiency of dynamic programming. It stores the results of expensive function calls and reuses the results when the same inputs occur again.
## Pros
- Simple to implement, like the recursive approach.
- Simple to implement, like the recursive approach.
- Only computes and stores the values that are actually needed.
## Cons
- Uses extra space to store intermediate results.
- Stack overflow can occur for large inputs due to recursion.
- The memoization table needs to be initialized before use.