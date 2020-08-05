int printf(const char *, ...);
int a, d;
int *b = &a, **c;
int main ()
{
    int e;
    {
        int f[4];
        for (d = 0; d < 4; d++)
            f[d] = 1;
        e = f[1];
    }
    int *g[28] = { };
    *b = e;
    c = &g[0];
    printf ("%d\n", a);
    return 0;
}
