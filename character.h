#pragma once
#include <iostream>
#include <string>
#include <cstdlib>

using namespace System;
using namespace System::Collections::Generic;

ref class character
{
	public:
		static int hp;
		static int damage;

	public:
		character();

		void attack();
};

