#include<stdio.h>

#include<vec2.h>


int main() {
    vec2_t a = {1, 2};
    vec2_t b = {5, 2};
    vec2_t c = vec2_add(a, b);

    printf("%d %d\n", c.x, c.y);
    return 0;
}
