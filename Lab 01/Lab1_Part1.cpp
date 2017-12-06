/*
Linden Stirk
Lab1_Part1.cpp
*/

#include <iostream> 
#include <vector>
#include <string>
using namespace std;


void AddIngredients(vector<string> &ingredients)
{
	ingredients.push_back("lettuce");
	ingredients.push_back("tomato");
	ingredients.push_back("mayo");
	ingredients.push_back("bread");
}

void DisplayIngredients(const vector<string> &ingredients)
{
	for (unsigned int i = 0; i < ingredients.size(); i++)
	{
		cout << ingredients[i] << endl;
	}
}



int main()
{
	vector<string> ingredients;

	AddIngredients(ingredients);

	DisplayIngredients(ingredients);

	return 0;
}