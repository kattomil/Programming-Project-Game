#pragma once
#include <iostream>
#include <string>
#include <cstdlib>

using namespace System;
using namespace System::Collections::Generic;

ref class enemy
{
	public:
		static int hp;
		static int damage;

	public:
		enemy();

		void attack();
};

