#include <stdio.h>

#ifndef __SETTING_H__
#define __SETTING_H__ 1

typedef struct switch_s
{
    int m_lightbulb_a;
    int m_lightbulb_b;
} switch_t;

typedef struct setting_s
{
    int m_num_switches;
    int m_num_lightbulbs;
    switch_t *m_switches;
} setting_t;

switch_t make_switch(int, int);
setting_t *add_switch(setting_t *, switch_t);

#endif //inclusion guard