#include "TKTL_BitArray.h"

// Untested
int BitArrayAt(const struct BitArray * self, unsigned int position)
{
  if (position > self->lastElement)
      return -1;
  
  unsigned int byte = position / 8;
  unsigned int bit = postion % 8;
  
  return self->storage[byte] & (1 << bit); 
}
