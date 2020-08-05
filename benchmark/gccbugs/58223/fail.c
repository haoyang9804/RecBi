int printf (const char *, ...);

int a[2];
int b;

int main ()
{
  for (b = 0; b < 2; b++)
    {
      a[0] = 1;
      a[b] = 0;
    }
  printf ("%d\n", a[0]);
  return 0;
}