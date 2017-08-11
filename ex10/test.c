#include <stdio.h>

void ft_scrambler(int ***a, int *b, int *******c, int ****d);

int main()
{
	int a = 10;
	int *ap = &a;
	int **app = &ap;
	int b = 20;
	int c = 30;
	int *cp = &c;
	int **cpp = &cp;
	int ***cppp = &cpp;
	int ****cpppp = &cppp;
	int *****cppppp = &cpppp;
	int ******cpppppp = &cppppp;
	int d = 40;
	int *dp = &d;
	int **dpp = &dp;
	int ***dppp = &dpp;
	printf("before a=%d, b=%d, c=%d, d=%d\n", a, b, c, d);
	ft_scrambler(&app, &b, &cpppppp, &dppp);
	printf("after  a=%d, b=%d, c=%d, d=%d\n", a, b, c, d);
}
