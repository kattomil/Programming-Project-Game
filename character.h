#pragma once
#include <iostream>
#include <string>
#include <cstdlib>

using namespace System;
using namespace System::Collections::Generic;

ref class character
{
	public:
		static int whichchar = 1;

		static int invincibility = 0;
		static int invtime = 0;

		static int doubledamage = 0;

		static int usedspecial = 0;
		static int hp;
		static int damage;

	public:
		character();

		void attack();
		void make_invincible();
		void heal();
};

