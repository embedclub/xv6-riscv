#include "types.h"
#include "param.h"
#include "memlayout.h"
#include "aarch64.h"
#include "defs.h"

void main();

// entry.S needs one stack per CPU.
__attribute__ ((aligned (16))) char stack0[4096 * NCPU];

// entry.S jumps here in machine mode on stack0.
void
start()
{

  main();
}

