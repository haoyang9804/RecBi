int printf(const char*, ...);
int a, b, c;
short fn1(int p1, int p2) { return p1 + p2; }

int main() {
  a = 0;
  for (; a < 30; a = fn1(a, 4)) {
    c = b;
    b = 6;
  }
  printf("%d\n", c);
  return 0;
}
