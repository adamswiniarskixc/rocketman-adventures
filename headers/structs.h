#ifndef STRUCTS_H
#define STRUCTS_H

#include <raylib.h>
#include <sys/types.h>

static struct{
    Image redSoldier;
    Image rocket;
    Image launcher;
    Image particleSmoke;
    Image background;
    Image platform;
} Images;

typedef struct{
    Texture tx;
    float x,y;
    float speedX, speedY; //used for gravity and jumping
    float cooldown;
    bool falling;
} Soldier;

typedef struct{
    Texture tx;
    float x,y;
    unsigned short rotation;
    short speedX,speedY;
} Rocket;

typedef struct{
    Texture tx;
    float x,y;
    unsigned short rotation;
    int8_t flip; //1 means befault, -1 means flipped
} Launcher;

typedef struct{
    Texture tx;
    float x,y;
    unsigned short rotation;
    u_int8_t alpha;
    float cooldownAlpha;
} Particle;

typedef struct{
    Texture tx;
    float x,y;
} Platform;

#endif
