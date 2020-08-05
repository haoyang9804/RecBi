int a, e, f;
short b, c, d;
int fn1(p1, p2) { return p2 == 0 || p1 && p2 == 1 ? p1 : p1 % p2; }

static short fn2() {
  int g, h, i = fn1(c, f);
  f = fn1(d, 2);
  g = fn1(b, c);
  h = fn1(g > 0, c);
  c = (3 >= h ^ 7) <= fn1(i, c);
  if (fn1(e, 1))
    return a;
}

int main() {
  fn2();
  return 0;
}
