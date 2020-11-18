#include <assert.h>

namespace hardware {
int add(int a, int b) { return a + b; }

int subtract(int a, int b) { return a - b; }

double divide(int a, int b) {
  assert(b != 0);
  return a / b;
}
} // namespace hardware
