double u[1782225];
int a, b, d, e;
static void foo(int *p1) {
  double c = 0.0;
  for (; a < 1335; a++) {
    b = 0;
    for (; b < 1335; b++)
      c = c + u[a + 1335 * a];
    u[1336 * a] *= 2;
  }
  *p1 = c;
}
void abort();
int main() {
  for (; d < 1782225; d++)
    u[d] = 2;
  foo(&e);
  if (e != 3564450)
    abort();
}
