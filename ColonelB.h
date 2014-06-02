#ifndef COLONEL_B
#define COLONEL_B
namespace ColonelBTerritory
{
  class Foo;
  class ColonelB
  {
  public:
    ColonelB();
    ~ColonelB();
    void Report();
  private:
    Foo* _Foo;
  };
}
#endif
