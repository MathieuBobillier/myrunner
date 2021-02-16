/*
** EPITECH PROJECT, 2020
** B-MUL-100-LYN-1-1-myrunner-mathieu.bobillier
** File description:
** infogame.c
*/

#include "my.h"

char *ecranmalloc(char *str, int *i)
{
    char *stra = malloc(sizeof(char *) *my_strlen(str) + 30);
    for (*i = 0; str[*i] != '\0'; (*i)++) {
        stra[*i] = str[*i];
    }
    return (stra);
}

char *cint(char *str, int cint)
{
    int i;
    char *stra = ecranmalloc(str, &i);

    stra[i] = cint + 48;
    stra[i + 1] = '.';
    stra[i + 2] = 'p';
    stra[i + 3] = 'n';
    stra[i + 4] = 'g';

    return (stra);
}

infogame_t *create(void)
{
    infogame_t *g = malloc(sizeof(infogame_t));
    g->p = malloc(sizeof(background_t) * 2);
    for (int i = 0; i < 2; i++) {
        g->p[i].s = (sfIntRect){0, 0, 1600, 600};
        g->p[i].sprite = sfSprite_create();
        g->p[i].t = sfTexture_createFromFile(cint("Image/", i + 1), &g->p[i].s);
    }
    return (g);
}