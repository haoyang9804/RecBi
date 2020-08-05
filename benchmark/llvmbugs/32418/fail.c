

int a = 2;
int b = 1;
int c = 1;
int d;

int main ()
{
  d = ~(-(c && (b && ~0)) & 2);
  c = c / (~(~0 / a) - d);
  return 0; 
}