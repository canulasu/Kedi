#include "Modules/Software/software.h"

void init_kernel() {
  
  start_serial();
  
  while (true) {
    process_command();
  }
}
