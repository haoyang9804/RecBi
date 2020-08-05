

int printf (const char *, ...);

short d = -1;
char e;
char h;

int
main ()
{
  char i;
  int j = 0; 
  h = e = d;
  i = e < j ? e : e << 1;
  printf ("%d\n", i);
  return 0;
}