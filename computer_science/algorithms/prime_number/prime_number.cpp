#include <iostream>
#include <math.h>

using namespace std;

bool is_prime_number(int n) {
	if (n < 2) return false;
  if (n == 2) return true;
	if ((n % 2) == 0) return false;
	
  int s = sqrt(n);
	
  for (int i = 3; i <= s; i += 2) 
    if (n % i == 0) return false;
	
  return true;
}

int main() {
  int n;
  cin >> n;

  while (n) {
    if (is_prime_number(n)) cout << "True" << endl;
    else cout << "False" << endl;
    cin >> n;
  }

  return 0;
}
