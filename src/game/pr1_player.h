#ifndef player_h
#define player_h


#define PLAYER_NAME_MAX_LENGTH 12


#include <stdlib.h>

#include "../vector.h"


typedef struct player {
	char *name;
	size_t nameLength;

	float rank;
	size_t id;

	char head;
	char body;
	char feet;

	char speed;
	char jump;
	char traction;

	size_t raceID;
	size_t raceNum;
	size_t slotNum;
} player;


void playerInit(player *p);

void playerUpdateInfo(player *p, const char *buffer, const size_t clientID);
unsigned char playerValidateInfo(player *p);
player *playerFind(const size_t clientID);
size_t playerFindID(const size_t clientID);

void playerRemove(player *p);


extern vector playerList;


#endif