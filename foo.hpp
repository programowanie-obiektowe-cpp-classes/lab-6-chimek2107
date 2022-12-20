#pragma once

#include "Human.hpp"

#include <list>
#include <vector>
#include <iostream>
#include <algorithm>

std::vector< char > foo(std::list< Human >& people)
{
	// Twoja implementacja tutaj
	
	std::vector< char > v(people.size());

	std::for_each(people.begin(), people.end(), [](Human &n) { n.birthday(); });
	std::transform(people.begin(), people.end(), v.begin(), [](const Human &n) { return n.isMonster() ? 'n' : 'y'; });
	std::reverse(v.begin(), v.end());


	return v;
}
