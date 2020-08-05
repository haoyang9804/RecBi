void abort();
char a;
int b, c = 9, d, e;
void fn1() {
  unsigned f = 1;
  int g = 8, h = 5;
  for (; a != 6; a--) {
    int *i = &h, *j;
    for (;;) {
      int k = e, l = ~1;
      if (g && h) {
        k = g;
        l = f;
        f = -(~(c && b) | -~(e * ~l));
        if (c < f)
          abort();
      }
      g = k;
      f = l;
      if (d <= 8)
        break;
      *i = 0;
      for (; *j <= 0;)
        ;
    }
  }
}
int main() {
  fn1();
  return 0;
}
