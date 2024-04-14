#include <stdio.h>
#include <math.h>
#include <string.h>

typedef struct {
    int x;
    int y;
} Point;

double distance(Point A, Point B) {
    double d = sqrt( pow((B.x - A.x), 2) + pow((B.y - A.y), 2) );
    return d;
}

int main() {
    int w, h, x0, y0;
    char magic[10];
    int cx, cy, level;
    int t;

    int magic_fire[4] = {200, 20, 30, 50};
    int magic_water[4] = {300, 10, 25, 40};
    int magic_earth[4] = {400, 25, 55, 70};
    int magic_air[4] = {100, 18, 38, 60};

    scanf("%d", &t);

    while (t--) {
        scanf("%d %d %d %d", &w, &h, &x0, &y0);
        scanf("%s %d %d %d", &magic, &level, &cx, &cy);

        Point pointA, pointB;
        if (cx < x0)
            pointA.x = x0;
        else if (cx > x0 + w)
            pointA.x = x0 + w;
        else
            pointA.x = cx;

        if (cy < y0)
            pointA.y = y0;
        else if (cy > y0 + h)
            pointA.y = y0 + h;
        else
            pointA.y = cy;

        pointB.x = cx, pointB.y = cy;
        
        double dist = distance(pointB, pointA);
        int damage = 0;
        if (!strcmp(magic, "fire")) {
            if (dist <= magic_fire[level])
                damage = magic_fire[0];
        }
        if (!strcmp(magic, "water")) {
            if (dist <= magic_water[level])
                damage = magic_water[0];
        } 
        if (!strcmp(magic, "earth")) {
            if (dist <= magic_earth[level])
                damage = magic_earth[0];
        }
        if (!strcmp(magic, "air")) {
            if (dist <= magic_air[level])
                damage = magic_air[0];
        }

        printf("%d\n", damage);
    }

    return 0;
}