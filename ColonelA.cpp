#include "ColonelA.h"
#include <stdio.h>
#define FooNamespace ColonelATerritory
#include <libFoo.h>

using namespace ColonelATerritory;

ColonelA::ColonelA()
{
	_Foo = new Foo();
	printf("ColonelA reporting for duty, sir!\n");
}

ColonelA::~ColonelA()
{
	delete _Foo;
	_Foo = NULL;
}

void ColonelA::Report()
{
	printf("ColonelA asks its Foo: 'What's your 40 Foo?'\n");
	printf("ColonelA's Foo: %s\n", _Foo->Report40());
}

#undef FooNamespace
