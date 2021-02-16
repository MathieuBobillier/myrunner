/*
** EPITECH PROJECT, 2020
** B-MUL-100-LYN-1-1-myrunner-mathieu.bobillier
** File description:
** displayer.c
*/

#include "my.h"

void bougerlerectangle(sfIntRect *rect, int offset, int valeurmax)
{
    rect->left += offset;
    if (rect->left > valeurmax) {
        rect->left = 0;
    }
}

void display(infogame_t *g)
{
    for (int i = 0; i < 2; i++) {
        sfSprite_setTexture(g->p[i].sprite, g->p[i].t, sfTrue);
        bougerlerectangle(&g->p[i].s, (i + 1), 800);
        sfSprite_setTextureRect(g->p[i].sprite, g->p[i].s);
        sfRenderWindow_drawSprite(g->sfWindow, g->p[i].sprite, NULL);
    }
}