#include "ColonelB.h"
#include <stdio.h>
#define FooNamespace ColonelBTerritory
#include <libFoo.h>

using namespace ColonelBTerritory;

ColonelB::ColonelB()
{
	_Foo = new Foo();
	printf("ColonelB reporting for duty, sir!\n");
}

ColonelB::~ColonelB()
{
	delete _Foo;
	_Foo = NULL;
}

void ColonelB::Report()
{
	printf("ColonelB asks its Foo: 'What's your 40 Foo?'\n");
	printf("ColonelB's Foo: %s\n", _Foo->Report40());
}

#undef FooNamespace
