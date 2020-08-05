struct S1 {
  signed f2;
  unsigned f3;
  signed f4 : 18;
  signed f5 : 1;
  unsigned f6;
};
int a, c, f, d = 118;
static char b = -5L, e;
void fn1(struct S1 p1) {}
int main() {
  struct S1 g = {6, 9, 7, 0, 2};
  fn1(g);
  e = d >> 5;
  g.f5 = e;
  c || ~f;
  int h = -g.f5;
  a = 7 % (~b / g.f5) - h;
  return 0;
}
