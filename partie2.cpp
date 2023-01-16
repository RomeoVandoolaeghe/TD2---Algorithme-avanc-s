#include <algorithm>
#include <vector>
#include <iostream>
#include <stdlib.h>   
#include <time.h>  
//partie 3 : constantes
constexpr int TAILLEVEC = 100;
constexpr int value = 42;
constexpr int max_value = 100;


using namespace std;




std::vector<int> tab;

int recherchedicho(vector<int>& t, int(search_value), int(vector_size));
void binarysearch(vector<int>& t);


int main() {
	//partie2 : generation d'un tableau trié de nombres aléatoires
	srand(time(NULL));
	for (int i = 0; i <= TAILLEVEC; i++) {
		tab.push_back(rand() % max_value);
	}
	std::sort(tab.begin(), tab.end());
	for (int i = 0; i <= TAILLEVEC; i++) {
		cout << tab[i] << " ";

	}
	cout << " " << endl;


	//test fonctions
	cout << recherchedicho(tab, value, TAILLEVEC) << endl;
	binarysearch(tab);
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




//Partie 5 : binary_search STL
void binarysearch(vector<int>& t) {

	srand(time(NULL));
	for (int i = 0; i <= TAILLEVEC; i++) {
		t.push_back(rand() % max_value);
	}
	std::sort(t.begin(), t.end());
	for (int i = 0; i <= TAILLEVEC; i++) {
		cout << t[i] << " ";

	}
	cout << " " << endl;

	std::cout << "Searching for " << value << '\n';
	if (std::binary_search(t.begin(), t.end(), value)) {
		std::cout << "valeur trouvee " << '\n';
	}
	else {
		std::cout << "valeur non trouvee\n";
	}


}