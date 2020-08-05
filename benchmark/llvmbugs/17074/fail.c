int printf (const char *, ...);

int a, b = 7;
char c;

int main ()
{
 lbl: 
  {
    int *d = &b;
    *d &= 1;
    c--;
    if (a)
      ;
    else if (c)
      goto lbl;
  }
  printf ("%d\n", b);
  return 0;
}
