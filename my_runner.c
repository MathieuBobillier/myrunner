/*
** EPITECH PROJECT, 2020
** B-MUL-100-LYN-1-1-myrunner-mathieu.bobillier
** File description:
** myrunner.c
*/

#include "my.h"

sfRenderWindow *create_renderwindow(int x, int y, int bits, char *name)
{
    sfVideoMode video = {x, y, bits};
    sfRenderWindow *window = sfRenderWindow_create(video, name, sfClose, NULL);
    sfRenderWindow_setFramerateLimit(window, 30);
    return (window);
}

void affichagemenu(sfWindow *window, sfSprite *affichage)
{
    sfRenderWindow_drawSprite(window, affichage, NULL);
}

int main(void)
{
    infogame_t *g = create();
    sfEvent event;
    sfIntRect rect = {0, 0, 200, 49};
    animsprite_t *player = malloc(sizeof(animsprite_t));
    player = create_object("./Image/luffy.png", (sfVector2f) {250, 550}, rect);
    g->sfWindow = create_renderwindow(800, 600, 32, "Window");
    player ->clock = sfClock_create();
    while (sfRenderWindow_isOpen(g->sfWindow)) {
        sfRenderWindow_clear(g->sfWindow, sfBlack);
        display(g);
        sfSprite_setTexture(player->sprite, player->t, sfTrue);
        mclock(player);
        sfSprite_setTextureRect(player->sprite, player->rect);
        sfRenderWindow_drawSprite(g->sfWindow, player->sprite, NULL);
        while (sfRenderWindow_pollEvent(g->sfWindow, &event)) {
            if (event.type == sfEvtClosed)
            sfRenderWindow_close(g->sfWindow);
            }
            sfRenderWindow_display(g->sfWindow);
            }
}