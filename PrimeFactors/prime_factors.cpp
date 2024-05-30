#include <vector>
using namespace std;

class PrimeFactor {
public:
	vector<int> of(int number) {
		vector<int> ret = {};
		if (number == 2) { ret = { 2 }; }
		return ret;
	};
};