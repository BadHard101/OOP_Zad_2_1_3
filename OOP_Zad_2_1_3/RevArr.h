#include <vector>
#ifndef RevArr_H
#define RevArr_H

class RevArr {
	int n_arr;
	std::vector<int> arr;
public:
	RevArr(int);
	int scanElms();
	void getElms();
	int revElms();
};

#endif // !RevArr_H
