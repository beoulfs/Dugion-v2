module;
#include <iostream>
export module Monuments;


export void shrine() {
	int temp2 = rand() % 4;
	
	if (temp2 == 1) {
		std::cout << "+1 to strength checks \n";
	}
	else if (temp2 == 2) {
		std::cout << "5 temporary hit points \n";
	}
	else if (temp2 == 3) {
		std::cout << "+1 to melee weapon attacks";
	}
	else if (temp2 == 4) {
		std::cout << "restore one first level spell slot";
	}
}

export void mineshaft() {
	int type = rand() % 4;
	if (type == 1) {
		std::cout << "coal, staying in this mine deals 1d4 poison damage, starting at 1 hour, for every hour spent in the mine,\n roll a d20, for a roll above 18, a cave in occurs, dealing 10d6 bludgeoning damage.\nAny fire source here ignites the coal dust, causing a large explosion dealing 5d6 force and 5d6 fire, this causes a cave in roll at dc 10\n";
	}
	else if (type == 2) {
		std::cout << "Iron: this mine has abandoned for good reason. Natural magic makes this place home to a stone golem,\n comprised of the iron ore being extracted left for to long after a cave in. for every hour spent in this mine, roll a d20,\n anything above a 18 causes a cave in, dealing 10d6 bludgeoning damage. Roll one every minute during combat.\n";
	}
	else if (type == 3) {
		std::cout << "gold, this mine is the oldest, and has long since run out of valuable ore vines, \nhowever there are still trace amount in the walls. Gold ore can be sued the same as gold pieces and requires a dc 16 investigation or 20 perception to acquire.\n This mine has been extensively reinforced, and will not cave in.\n ";
	}
	else if (type == 4) {
		std::cout << "mithril, this mine has been abandoned recently. An ultra deep mine, \nthere is an elevator that lets you descend a level here. Mithril can be also mined out of the walls in the lower shaft.\n This material can be forged into crude ammunition over a long rest, and ignores magical resistances. Cave ins will not occur due to structural work. ";
	}
}
export void monuments() {
	srand(time(NULL));
	int temp = rand() % 20;
	int temp2 = rand() % 10;
	switch (temp) {
	case 1:
		std::cout << "a pillar of reflective back rock leading from the ceiling to the floor of the cavern.\n It is sounded by well preserved corpses that awaken into zombies if you couch them.\n Anyone who touches the obelisk must make a con save or take 3d6 necrotic damage.\n Several cloth wrapped packages litter the ground around it \n";
		break;
	case 2:
		std::cout << "a cracked clay tablet rest in the center of the chamber.It is covered is senseless writings \n in celestial.Surrounding the tablet is lead enchanted to look like gold. \n There is a human skeleton siting cross legged in the center.It disappears when you touch it \n";
		break;
	case 3:
		std::cout << "a simple crystal juts out form a perfectly round cavern,\n it sings a language you don’t understand if you touch it. \n";
		break;
	case 4:
		std::cout << "there is a orb floating in the center of the cavern,\nif you get closer then three feet to it moves away.  \n";
		break;
	case 5:
		std::cout << "the room is long and straight, and filled with a\n whispering just out of audible range.  \n";
		break;
	case 6:
		std::cout << " the room is full of hanging lights that swing faintly in a wind you cannot feel,\n make a dc 10 wis save or be stunned by the beauty.\n Each light can be removed by a dc 15 dex save to catch it. \n";
		break;
	case 7:
		std::cout << "there is a crack in this room, running from on side to another, there is a rickety\n bridge that crosses it roll a dc 10 dex to make it across \n";
		break;
	case 8:
		std::cout << " there is a statue surrounded by mouldering flowers, of some great hero eaten by the earth\n It has long scratches across it, and it is surrounded by a long dead park.\n The statues sword is a +3 longsword. \n";
		break;
	case 9:
		std::cout << "there is a fountain here, spilling water out of an ornate spout. The water is drinkable.\n There is a small depression that has a plugged hole in the bottom. If unplugged warm water spills out.\n It cannot be drunk. Several empty canteens surround the spring.  \n";
		break;
	case 10:
		std::cout << "this room has a mimic in it. It is full of gold. Drops 30 gp when killed. \n";
		break;
	case 11:
		std::cout << " a wide, calm river cuts though the dungeon, having eroded its way from the surface down to this point.\nIt can be drunk and is calm and flat enough to cross without assistance.\n The water is cold. You can make a dc 13 check to fish using an abandoned rod here. \n";
		break;
	case 12:
		std::cout << "an abandoned tram built by dwarves. it was basic stone benches and is non-functional.\n There is a simple flat stone with some kind of rune siting on the dashboard \n";
		break;
	case 13:
		std::cout << "what was here has long since been covered. The ceiling is caved in here, and you can see a glimmer of light at the top, \nand the floor is littered with the corpses of those who sought the far away exit.\n";
		break;
	case 14:
		std::cout << "a wrought iron bench. Siting on it cast sleep on you. Have a nice nap. \n";
		break;
	case 15:
		std::cout << " the remains of a cult litter this room, witch seems to have once been there hideout.\n Some strange madness gripped these people. At the center is a ring of bodies surrounding a cooking pot contain a skull1.\n The pot is also full of humans bones. Several of the corpses appear to have teach marks on theme\n Sitting with her back to the cook pot is the skeleton of a young girl.  \n";
		break;
	case 16:
		std::cout << " a simple shrine of stacked stones. It radiates a peace and serenity. \n It is surrounded by long decayed offerings. You can take a short rest to pray at the shrine and receive a blessing. \n";
		shrine();
		break;
	case 17:
		std::cout << "a room contains a long table set for a feast. The edge is surrounded by intricate runes. Any food taken out of the rune’s decays to dust immediately. \nThe food is perfectly edible otherwise. All of the silverware are +1 weapons. \n";
		break;
	case 18:
		std::cout << "this room clearly been made for a purpose.Any sound made is the rooms echoes infinitely.\nStaying in the room for 5 minutes makes you take 1d4 sonic damage. \n";
		break;
	case 19:
		std::cout << "the caver opens onto a massive lake. There is a small, abandoned building in the center, and boats tied on shore. There is a hag in the building,\n roll a loot table one tire above the hag. Boats are tied to the shore. \n";
		break;
	case 20:
		std::cout << "a mineshaft has been absorbed by the dungeon.   \n";
		mineshaft();
		break;
	}

}