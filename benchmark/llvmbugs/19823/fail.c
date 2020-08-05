int printf (const char *, ...);

short a;
short b;
short *c = &a;
char d = 0;

int
main ()
{
  char *t = &d;

 lbl:
  b = (*t)--;
  *c = 1;
  if (d)
  {
    goto lbl;
  }

  printf ("%d\n", a);
  return 0;
}