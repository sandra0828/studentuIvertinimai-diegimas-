#pragma once

#include "Studentas.h"
#include <algorithm>

using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::vector;

float vidurkis(vector <int> pazymiai);
float mediana(vector <int> pazymiai);
void galutinisPazymys(vector <Studentas>& studentai, string skaiciavimoBudas);