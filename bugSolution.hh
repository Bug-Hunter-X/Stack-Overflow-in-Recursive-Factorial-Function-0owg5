function foo(x: int): int {
  if (x == 0) {
    return 1;
  } else if (x < 0) {
    return 0; // Handle negative inputs
  } else {
    var result = 1;
    for (var i = 1; i <= x; ++i) {
      result *= i;
    }
    return result;
  }
}

function main(): void {
  echo foo(5);
  echo foo(0);
  echo foo(-5);
}

// OR use this version with a check for maximum recursion depth

function foo(x: int, maxDepth: int = 1000): int {
  if (x == 0) {
    return 1;
  } else if (maxDepth <= 0) {
     return 0; // Handle exceeding maximum recursion depth
  } else {
    return x * foo(x - 1, maxDepth -1);
  }
}

function main(): void {
  echo foo(5);
  echo foo(0);
  echo foo(1000);
}
