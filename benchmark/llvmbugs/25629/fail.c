
int printf (const char *, ...); 

int a;
int d; 
static char b = 48;
static char c;

int
main ()
{
  c = b;
  for (; c < 45; c++)
  {
    a = a ? d : d < a;
  }
  b = 0;
  printf ("%d\n", c);
  return 0;
}