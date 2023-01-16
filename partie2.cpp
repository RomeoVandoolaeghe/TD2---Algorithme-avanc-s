#include <algorithm>
#include <vector>
#include <iostream>
#include <stdlib.h>   
#include <time.h>   
constexpr int TAILLEVEC = 20;
constexpr int value = 254;
constexpr int max_value = 100;


using namespace std;




std::vector<int> tab;
int recherchedicho(vector<int>& t, int(search_value), int(vector_size));


int main() {
	srand(time(NULL));
	for (int i = 0; i <= TAILLEVEC; i++) {
		tab.push_back(rand() % max_value);

	}
	std::sort(tab.begin(), tab.end());
	for (int i = 0; i <= TAILLEVEC; i++) {
		cout << tab[i] << " ";

	}
	cout << " " << endl;

	cout << recherchedicho(tab, value, TAILLEVEC) << endl;
}


int recherchedicho(vector<int>& t, int search_value, int vector_size) {
	int min = 0;
	int max = vector_size;
	while (min < max) {
		int mid = (min + max) / 2;
		if (t[mid] < search_value) {
			min = mid + 1;
		}
		else
		{
			max = mid;
		}
	}
	if (t[min] == search_value) {
		return min;
	}
	else
	{
		return -1;
	}
}

