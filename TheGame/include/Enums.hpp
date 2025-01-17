//
//  enums.h
//  AssetManagerv1
//
//  Created by Denis Flynn on 03/10/2018.
//  Copyright � 2018 Denis Flynn. All rights reserved.
//

#ifndef Enums_hpp
#define Enums_hpp

// Music tracks.
enum class MUSIC_TRACK {
	ALT_1,
	ALT_2,
	ALT_3,
	ALT_4,
	COUNT
};

// Game states.
enum class GAME_STATE {
	MAIN_MENU,
	PLAYING,
	GAME_OVER
};

// Game modes (single player, multiplayer)
enum class GAME_MODE {
	SINGLE,
	MULTI_HOST,
	MULTI_CLIENT
};

// Spawnable items.
enum class ITEM {
	GEM,
	GOLD,
	HEART,
	POTION,
	KEY,
	COUNT
};

// Enemy humanoid types.
enum class HUMANOID {
	GOBLIN,
	SKELETON,
	COUNT
};

// Potions.
enum class POTION {
	ATTACK,
	DEFENSE,
	STRENGTH,
	DEXTERITY,
	STAMINA,
	COUNT
};

// Animation states.
enum class ANIMATION_STATE {
	WALK_UP,
	WALK_DOWN,
	WALK_RIGHT,
	WALK_LEFT,
	IDLE_UP,
	IDLE_DOWN,
	IDLE_RIGHT,
	IDLE_LEFT,
	COUNT
};

// Tiles.
enum class TILE {
	WALL_SINGLE,
	WALL_TOP_END,
	WALL_SIDE_RIGHT_END,
	WALL_BOTTOM_LEFT,
	WALL_BOTTOM_END,
	WALL_SIDE,
	WALL_TOP_LEFT,
	WALL_SIDE_LEFT_T,
	WALL_SIDE_LEFT_END,
	WALL_BOTTOM_RIGHT,
	WALL_TOP,
	WALL_BOTTOM_T,
	WALL_TOP_RIGHT,
	WALL_SIDE_RIGHT_T,
	WALL_TOP_T,
	WALL_INTERSECTION,
	WALL_DOOR_LOCKED,
	WALL_DOOR_UNLOCKED,
	WALL_ENTRANCE,
	FLOOR,
	FLOOR_ALT,
	EMPTY,
	COUNT
};

// Game views.
enum class VIEW {
	MAIN,
	UI,
	DEBUG,
	COUNT
};

// Keys for input
enum class KEY {
	KEY_LEFT,
	KEY_RIGHT,
	KEY_UP,
	KEY_DOWN,
	KEY_ATTACK,
	COUNT
};

// Colors provided by SFML.
enum class COLOR {
	BLACK,
	WHITE,
	RED,
	GREEN,
	BLUE,
	YELLOW,
	MAGENTA,
	CYAN,
	TRANSPARENT,
	COUNT
};

// Player classes.
enum class PLAYER_CLASS {
	WARRIOR,
	MAGE,
	ARCHER,
	THIEF,
	COUNT
};

// Player traits.
enum class PLAYER_TRAIT {
	ATTACK,
	DEFENSE,
	STRENGTH,
	DEXTERITY,
	STAMINA,
	COUNT
};
#endif /* Enums_hpp */
