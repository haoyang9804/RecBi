short s;
int a;
int b;
int c;
volatile int v;
static int u[] = { 0, 0, 0, 0, 0, 1 };

void foo() {
  int i;
  int j;
  for (; b <= 0; ++b) {
    int k;
    int d = 0;
    for (; d <= 5; d++) {
      int *l = &c;
      int e = 0;
      for (; e <= 0; e++) {
        int *m = &k;
        unsigned int n = u[d];
        i = !a ? n : n / a;
        j = s ? 0 : (1 >> v);
        *m = j;
      }
      *l = k < i;
    }
  }
}
int main() {
  foo();
  return 0;
}