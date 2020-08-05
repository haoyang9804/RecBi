

int printf (const char *, ...);

int a;
int b;
int c = 2;
int d;
unsigned short e;

char fn1 (int p1)
{
  return p1 ? a / p1 : a;
}

int main ()
{
  e = fn1 (c);
  long long f = ~(~(d | 4294967295) & ~b);
  if (f > e)
  {
    printf ("0\n") ;
  }
  return 0; 
}