function foo(x: int): int {
  if (x == 0) {
    return 1;
  } else {
    return x * foo(x - 1);
  }
}

function main(): void {
  echo foo(5);
}

This code is intended to calculate the factorial of a given integer. However, it will cause a stack overflow error if the input is a large number because it does not handle the base case properly. The recursion depth will exceed the maximum allowed limit, leading to a stack overflow. 