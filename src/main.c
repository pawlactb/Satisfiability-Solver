#include <stdio.h>
#include "io.h"
#include "setting.h"

int main(int argc, char **argv)
{
    read_file("test1.txt");

    switch_t s = make_switch(-2, 4);
    printf("(%d, %d)\n", s.m_lightbulb_a, s.m_lightbulb_b);
}