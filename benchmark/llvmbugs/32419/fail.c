

unsigned short a;
int b;
int c;

short fn1 (unsigned short e)
{ 
  return e ? a % e : 0;
}

int main ()
{ 
  for (c = -20; c; c++)
  {
    b |= fn1 (c);
  }
  return 0;
}