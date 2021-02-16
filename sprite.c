/*
** EPITECH PROJECT, 2020
** B-MUL-100-LYN-1-1-myrunner-mathieu.bobillier
** File description:
** sprite.c
*/

#include "my.h"

animsprite_t *create_object(char *path, sfVector2f pos, sfIntRect rect)
{
    animsprite_t *object = malloc(sizeof(animsprite_t));
    object->t = sfTexture_createFromFile(path, NULL);
    object->sprite = sfSprite_create();
    object->rect = rect;
    object->pos = pos;
    sfSprite_setTextureRect(object->sprite, object->rect);
    sfSprite_setPosition(object->sprite, object->pos);
    return (object);
}