int printf (const char *, ...);

int a;
int b;
int c;
int d;
int e = 1; 

struct S
{
  int f;
};

volatile struct S s;

void foo (int *p)
{
  int i;
  for (i = 0; i < 4; i++) {
    int t[2] = {0, 0};
    for (; b < 2; b++) {
      d = 0;
      for (; d >= 0; d--)
	    {
        c = 0;
      }
      for (; c < 7; c++)
	    {
        t[1] ^= 1;
      }
    }
    if (t[1]) {
      s; 
      *p = e;
    }
  }
}

int main ()
{
  foo (&a);
  printf ("%d\n", a);
  return 0;
}