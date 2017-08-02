

#include "analyticsIndicator.hpp"

void AnalyticsIndicator::next(double number) {
	this->count++;
	this->sum += number;
	this->average = this->sum/this->count;
}

std::string AnalyticsIndicator::get() {
	std::stringstream ss;
	ss << this->count << "," << this->sum << "," << this->average << std::endl;
	return ss.str();
}