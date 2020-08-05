int printf (const char *, ...);

int main ()
{
  long long t = -1; 
  int a = (0xFFFFFFFFLL & t) > 0;

  printf ("%d\n", a);

  return 0;
}