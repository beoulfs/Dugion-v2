module;
#include <cstdlib>
#include <iostream>
#include <ctime>

export module Module;
import Monuments;
export void progression()
{
	int temp = 0;
	std::cin >> temp;

	if (temp == 1) {
		std::cout << "a goblin barakade with 1d6 goblins \n";
	}
	else if (temp == 2) {
		std::cout << "dead end \n";
	}
	else if (temp == 3) {
		std::cout << "path split \n";
	}
	else if (temp == 4) {
		std::cout << "small stream, dc 10 dex to cross \n";
	}
	else if (temp == 5) {
		std::cout << "spike trap \n";
	}
	else if (temp == 6) {
		std::cout << "blank tripwire \n";
	}
	else if (temp == 7) {
		std::cout << "path loops back \n";
	}
	else if (temp == 8) {
		std::cout << "goblin patrole \n";
	}
	else if (temp == 9) {
		std::cout << "hole \n";
	}
	else if (temp == 10) {
		monuments();
	}
	else if (temp == 11) {
		std::cout << "goblin barakade \n";
	}
	else if (temp == 12) {
		std::cout << "locked door \n";
	}
	else if (temp == 13) {
		std::cout << "path fork \n";
	}
	else if (temp == 14) {
		std::cout << "notes in an unkown lagnguige writtan on the wall \n";
	}
	else if (temp == 15) {
		std::cout << " goblin knight \n";
	}
	else if (temp == 16) {
		std::cout << "goblin patrole \n";
	}
	else if (temp == 17) {
		std::cout << "zombi goblin \n";
	}
	else if (temp == 18) {
		std::cout << "pit trap \n";
	}
	else if (temp == 19) {
		std::cout << "rendom explosion \n";
	}
	else if (temp == 20) {
		monuments();
	}
}

export void prog2() {
	int temp1 = 0;
	std::cin >> temp1;
	int temp2 = rand() % 10;
	switch (temp1) {
	case 1:
		std::cout << "dead end \n";
		break;
	case 2:
		std::cout << "path split, re roll \n";
		break;
	case 3:
		std::cout << "1d4 Scelatons \n";
		break;
	case 4:
		std::cout << "path continues \n";
		break;
	case 5:
		std::cout << "Path loops back \n";
		break;
	case 6:
		std::cout << " There is a hole, go back and roll again\n";
		break;
	case 7:
		std::cout << "Floor is coverd in a thin layer of water \n";
		break;
	case 8:
		std::cout << "1d4 rats \n";
		break;
	case 9:
		std::cout << "1d6 rats \n";
		break;
	case 10:
		monuments();
		break;
	case 11:
		std::cout << "path split \n";
		break;
	case 12:
		std::cout << "three way split \n";
		break;
	case 13:
		std::cout << "random empty room \n";
		break;
	case 14:
		std::cout << "1d8 rats \n";
		break;
	case 15:
		std::cout << "1d6 skeletons \n";
		break;
	case 16:
		std::cout << " A small lush pond \n";
		break;
	case 17:
		std::cout << " A bag with"; temp2; " gold \n";
		break;
	case 18:
		temp2 = rand() % 4;
		std::cout << temp2; "healing potions\n";
		break;
	case 19:
		monuments();
		break;
	case 20:
		std::cout << "accent treasure, roll individual loot table = to party mean level  \n";
		break;
	}
}