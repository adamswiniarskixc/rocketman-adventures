#ifndef STRUCTS_H
#define STRUCTS_H

#include <raylib.h>
#include <stdint.h>

static struct{
    Image redSoldier;
    Image rocket;
    Image launcher;
    Image particleSmoke;
    Image backgrounds[2];
    Image platform;
    Image parachute;
} Images;

typedef struct{
    Texture tx;
    short x,y;
    short speedX, speedY; //used for gravity and jumping
    int8_t cooldown;
    bool falling;
    uint8_t pickup;
} Soldier;

typedef struct{
    Texture tx;
    short x,y;
    unsigned short rotation;
    short speedX,speedY;
    bool collided;
    bool shouldExplode;
} Rocket;

typedef struct{
    Texture tx;
    short x,y;
    unsigned short rotation;
    int8_t flip; //1 means befault, -1 means flipped
} Launcher;

typedef struct{
    Texture tx;
    short x,y;
    unsigned short rotation;
    uint8_t alpha;
} Particle;

typedef struct{
    Texture tx;
    short x,y;
} Platform;

typedef struct{
    Texture tx;
    short x,y;
    uint8_t id; //0- parachute
} Pickup;

#endif
