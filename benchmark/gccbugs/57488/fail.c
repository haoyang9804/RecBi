int printf(const char *, ...);

int i;
int j;
int *pj = &j;
int **ppj = &pj;
int x;
int *px = &x;

short s;
short *ps = &s;
short k;

unsigned short u;
unsigned short *pu = &u;
unsigned short **ppu = &pu;

char c;
char *pc = &c;

unsigned char v = 48;

int
bar (int p)
{
    p = k;
    *px = **ppu = i;
    *ppj = &p;
    if (**ppj)
    {
        *pj = p;
    }
    return p;
}

void
foo ()
{
    for (; i <= 3; i++)
    {
    	for (; j; j--)
        {
            ;
        }
    }
    
    u ^= bar (*pj);
    
    for (k = 1; k >= 0; k--)
    {
        int l;
        bar (0);
        for (l = 1; l < 5; l++)
        {
            int m;
            for (m = 6; m; m--)
            {
            	v--;
                *ps = *pc;
            }
        }
    }
}

int
main ()
{
    foo ();
    printf ("%d\n", v);
    return 0;
}