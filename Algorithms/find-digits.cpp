// Complete the findDigits function below.
int findDigits(int n) {
  int a, b = 1, count = 0;

  a = n;

  while (a > 0) {
    b = a % 10;
    a = a / 10;

    if (b != 0 && n % b == 0) {
      count++;
    }
  }

  return count;
}
