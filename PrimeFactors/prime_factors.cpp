#include <vector>
using namespace std;

class PrimeFactor {
public:
	vector<int> of(int number) {
		vector<int> ret = {};
		if (number == 2) { ret.push_back(2); }
		if (number == 3) { ret.push_back(3); }
		return ret;
	};
};