#include <iostream>
#include <stdlib.h>

int main() {
  double init = 0.125;
  std::string binval = ".";
  int count = 0;
  while (init != 1) {
    init *= 2;
    count++;
    if (init > 1) {
      std::cout << init << std::endl;
      binval+="1";

      init-=1;
    }
    else if (init < 1) {
      binval+= "0";
      std::cout << init << std::endl;
    }
    else {
      binval+="1";
      std::cout << init << std::endl;
    }
  }
  std::cout << "Should be " << count << " digits long\n";
  std::cout << binval << std::endl;
  std::cout << binval.size()-1 << " long\n";
}
