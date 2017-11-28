#include <vector>
using std::vector;

class Manager {
	public:
	bool IsRushHour(float t);
	void AddTimeSpan(float s, float e);
	private:
	vector<float> _spans;
};
