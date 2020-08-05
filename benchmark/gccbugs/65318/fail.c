
int printf(const char *, ...); 

static short a = 0;
short b = -1; 
static unsigned short c = 0;

int
main ()
{
  if (a <= b) 
  {
    printf ("%d\n", c);
  }
  return 0;
}