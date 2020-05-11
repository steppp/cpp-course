#include <cstdio>

int main() {
	auto tha_answer { 42 };		// int
	auto foo { 2L };		// long
	auto beerprice { 4.0F };	// float
	auto meatorice { 6.0 };		// double
	auto politics_is_good{ false };	// bool
	auto my_name { "Stefano" };	// char[8]

	auto year { 2020 };		// int
	auto& year_ref = year;		// int&
	const auto& year_cref = year; 	// const int&
	auto* year_ptr = &year;		// int*
	const auto* year_cptr = &year;	// const int*;

	auto prob_wrog = &year;		// still int*
}
