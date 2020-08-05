int a = -1;
int b;

unsigned int foo (int p) {  return p; }

int main ()
{
  if ((b = 1 % foo (a)) > a)
  {
    return 0;
  }
  return 1;
}