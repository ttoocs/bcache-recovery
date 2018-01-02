#include "linux/types.h"

// The atomic type
typedef struct {
	volatile int counter;
} atomic_t;

#define u64 __u64

u64 local_clock(void){
	return 0x1337BEEF; //DirtyHack for now
}


