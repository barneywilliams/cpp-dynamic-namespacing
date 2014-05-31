#include <stdio.h>
#include "ColonelA.h"
#include "ColonelB.h"

int main(void)
{
	printf("The General: All Colonels report their 40! STAT!\n");

	ColonelA::ColonelA a;
	ColonelB::ColonelB b;

	a.Report();
	b.Report();

	printf("The General: All Colonels and their Foos are reporting for duty!\n");
}
