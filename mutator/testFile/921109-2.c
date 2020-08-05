#define XtSetArg(arg, n, d) \
((void)((arg).name = (n), (arg).value = (long)(d)))

#define DEBUG-OR-NOT

typedef struct {
 char * name;
 long value;
} Arg, *ArgList;

main()
{
 Arg arg;

 XtSetArg(arg, "name",
#ifdef DEBUG
	 1
#else
	 0
#endif
	 );
}
