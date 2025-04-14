#include "Modules/Software/software.h"
#include "Shell/"

void init_kernel() {
  
  start_serial();
  
  while (true) {
    process_command();
  }
}
