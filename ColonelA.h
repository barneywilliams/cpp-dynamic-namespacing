#ifndef COLONEL_A
#define COLONEL_A
namespace ColonelATerritory
{
	class Foo;
	class ColonelA
	{
	public:
		ColonelA();
		~ColonelA();
		void Report();
	private:
		Foo* _Foo;
	};
}
#endif
