#include "setting.h"
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

setting_t *make_setting(int switches, int lightbulbs)
{
    setting_t *setting = (setting_t *)malloc(sizeof(setting_t));
    setting->m_num_switches = switches;
    setting->m_num_lightbulbs = lightbulbs;
    setting->m_switches = NULL;

    return setting;
}

switch_t make_switch(int a, int b)
{
    struct switch_s s;
    s.m_lightbulb_a = a;
    s.m_lightbulb_b = b;

    return s;
}

setting_t *add_switch(setting_t *setting, switch_t s)
{
    size_t capacity = sizeof(setting->m_switches);
    printf("capacity of %d", capacity);

    if (setting->m_switches == NULL)
    {
        // TODO: add support for creating array
    }

    // TODO: resize array intelligently (doubling??)
}
