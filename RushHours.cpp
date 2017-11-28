#include "RushHours.h"

void Manager::AddTimeSpan(float s, float e) {
	_spans.push_back(s);
	_spans.push_back(e);
}

bool Manager::IsRushHour(float t) {
	for (int i=0; i+1<_spans.size(); i+=2) {
		if (t >= _spans[i] && t <= _spans[i+1])
			return true;
	}
	return false;
}
