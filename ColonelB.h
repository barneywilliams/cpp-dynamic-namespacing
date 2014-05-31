#ifndef COLONEL_B
#define COLONEL_B

#include <stdio.h>
#define DYNAMIC_NAMESPACE ColonelB
#include "libFoo_v2/libFoo.h"

namespace ColonelB
{
	class ColonelB
	{
	public:
		ColonelB()
		{
			printf("ColonelB reporting for duty, sir!\n");
		}
		void Report()
		{
			printf("ColonelB asks its Foo: 'What's your 40 Foo?'\n");
			printf("ColonelB's Foo: %s\n", _Foo.Report40());
		}
	private:
		Foo _Foo;
	};
}

#undef DYNAMIC_NAMESPACE

#endif
