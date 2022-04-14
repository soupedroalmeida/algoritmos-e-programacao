#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    double x; 
    double y; 
} Point;

typedef struct {
    Point lowleft; 
    Point upright; 
} Rectangle;

void pointShow(Point p){
    printf("pointShow: (%.2lf, %.2lf)\n", p.x, p.y);
}

double pointDist(Point p1, Point p2){
    double dist = sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
    return dist;
}

int pointEq(Point p1, Point p2){
    return (p1.x - p2.x < 0.000001 && p1.y - p2.y < 0.000001);
}

void recArea(Rectangle r){
    double area = (r.upright.x - r.lowleft.x) * (r.upright.y - r.lowleft.y);
    printf("recArea: %.2lf\n", area);
}

int pointInRectangle(Point p, Rectangle r){
    return (p.x >= r.lowleft.x && p.x <= r.upright.x && p.y >= r.lowleft.y && p.y <= r.upright.y);
}

int recInRectangle (Rectangle r1, Rectangle r2){
    return (pointInRectangle(r1.lowleft, r2) && pointInRectangle(r1.upright, r2));
}

void farthestPoints(int list_size, Point point_list[list_size]){
    Point result[2];

    for (int i = 0; i < list_size - 1; i++)
    {
        for (int j = i; j < list_size - 1; j++)
        {
            if (pointDist(point_list[i], point_list[j]) > pointDist(result[0], result[1]))
            {
                result[0] = point_list[i];
                result[1] = point_list[j];
            }
        }
    }

    pointShow(result[0]);
    pointShow(result[1]);
}

int main(void) {
    Point p1 = {.25, .75};
    Point p2 = {0, .75};

    pointShow(p1);
    pointShow(p2);

    printf("pointDist: %.2lf\n", pointDist(p1, p2));
    
    printf("pointEq: %d\n", pointEq(p1, p2));

    // --------------------------------------------------

    Rectangle r1 = {{0, 0}, {1, 1}};
    
    recArea(r1);

    printf("inRectangle: %d\n", pointInRectangle(p1, r1));

    Rectangle r2 = {{.25, .25}, {.75, .75}};

    printf("recInRectangle: %d\n", recInRectangle(r2, r1));

    // --------------------------------------------------

    Point p3 = {.50, .50};
    Point p4 = {0, .50};
    Point p5 = {.25, .25};

    Point point_list[5] = {p1, p2, p3, p4, p5};

    farthestPoints(5, point_list);

    return 0;
}