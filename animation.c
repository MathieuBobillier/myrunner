/*
** EPITECH PROJECT, 2020
** B-MUL-100-LYN-1-1-myrunner-mathieu.bobillier
** File description:
** animation.c
*/

#include "my.h"

void animation(animsprite_t *sprite)
{
    sfIntRect *rect = &sprite->rect;

    rect->top = 1;
    rect->left += 49;
    if (rect->left == 147)
        rect->left = 0;
    rect->height = 49;
    rect->width = 45;
    sfSprite_setTextureRect(sprite->sprite, *rect);
}

void mclock(animsprite_t *sprite)
{
    animsprite_t *temp = sprite;
    sprite->time = sfClock_getElapsedTime(sprite->clock);
    sprite->seconds = sprite->time.microseconds / 1000000.0;
    if (sprite->seconds > 0.2)
    {
        sprite->clock = sfClock_create();
        animation(temp);
    }
}