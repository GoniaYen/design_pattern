#include "Strategy.h"

class Strategy;
class Context
{
  private:
    Strategy *_stg;

  public:
    Context(Strategy *stg);
    ~Context();
    void do_action();
};
