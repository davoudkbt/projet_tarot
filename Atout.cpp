#include "Atout.hpp"

Atout::Atout(string val, double pts, int rg) {
	valeur = val;
	points = pts;
	rang = rg;
	if (pts == 4.5)
		bout = true;
	else
		bout = false;
}

Atout::~Atout() {
	
}

bool Atout::estBout() {
	return bout;
}

string Atout::getNom() {
	return valeur;
}