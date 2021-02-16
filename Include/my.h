/*
** EPITECH PROJECT, 2020
** B-MUL-100-LYN-1-1-myhunter-mathieu.bobillier
** File description:
** my.h
*/

#ifndef MY_H_
#define MY_H_

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/System.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <SFML/Window.h>

typedef struct background_s {

    sfSprite *sprite;
    sfTexture *t;
    sfIntRect s;

} background_t;

typedef struct infogame_s {

    background_t *p;
    sfRenderWindow *sfWindow;

} infogame_t;

typedef struct animsprite_s {

    sfSprite *sprite;
    sfTexture *t;
    sfIntRect rect;
    sfVector2f pos;
    sfClock *clock;
    sfTime time;
    float seconds;

} animsprite_t;

int image(int argc, char **argv);
void mclock(animsprite_t *sprite);
void animation(animsprite_t *sprite);
int life(sfSprite *sprite, int life2);
int my_strlen(char *str);
infogame_t *create();
animsprite_t *create_object(char *path, sfVector2f pos, sfIntRect rect);
void display(infogame_t *g);
#endif
