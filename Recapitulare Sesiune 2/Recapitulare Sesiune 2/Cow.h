#pragma once
#include "Animal.h"

class Cow : public Animal {
	string GetName() override {
		return "Cow";
	}

	bool IsAFish() override {
		return false;
	}

	bool IsABird() override {
		return false;
	}

	bool IsAMammal() override {
		return true;
	}
};