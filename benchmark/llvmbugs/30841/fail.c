

int printf (const char *, ...);

unsigned a;
volatile short b;
unsigned long long c;

int main ()
{ 
  int d = ~(~5UL & c) % 5;
  5 % (d | 1) || b;
  int e = ~((d | 5LL) % 7 + (~0 | a));
  printf ("%d\n", e);
  return 0;
}