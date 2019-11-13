#include <stdio.h>

#ifndef __IO_H__
#define __IO_H__ 1

void read_file(const char *);

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

#endif //inclusion guard
