#include <ctest.h>
#include <algorythm.h>

CTEST(Length_pack, firstLength)
{
	const int st = 0;
	const int sp = 1;
	double in = 10;
	const int n = 1;

	const double rez = convert(st, sp, in, n);
	const double exp_rez = 1;

	ASSERT_DBL_NEAR(exp_rez, rez); 
}

CTEST(Length_pack, secondLength)
{
	const int st = 0;
	const int sp = 3;
	double in = 30000;
	const int n = 1;

	const double rez = convert(st, sp, in, n);
	const double exp_rez = 30;

	ASSERT_DBL_NEAR(exp_rez, rez); 
}

CTEST(Length_pack, thirdLength)
{
	const int st = 1;
	const int sp = 4;
	double in = 100;
	const int n = 1;

	const double rez = convert(st, sp, in, n);
	const double exp_rez = 0.328;

	ASSERT_DBL_NEAR(exp_rez, rez); 
}
