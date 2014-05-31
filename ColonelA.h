#ifndef COLONEL_A
#define COLONEL_A

#include <stdio.h>
#define DYNAMIC_NAMESPACE ColonelA
#include "libFoo_v1/libFoo.h"

namespace ColonelA
{
	class ColonelA
	{
	public:
		ColonelA()
		{
			printf("ColonelA reporting for duty, sir!\n");
		}
		void Report()
		{
			printf("ColonelA asks its Foo: 'What's your 40 Foo?'\n");
			printf("ColonelB's Foo: %s\n", _Foo.Report40());
		}
	private:
		Foo _Foo;
	};
}

#undef DYNAMIC_NAMESPACE

#endif
