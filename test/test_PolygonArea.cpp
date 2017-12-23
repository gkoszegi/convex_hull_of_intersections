#include <PolygonArea.h>

#include "unit_test.h"

using namespace gk;

// =================================================================================================
TEST_CASE(area_degenerate)
{
    CHECK_EQ(convex_area({{5,6}, {2,5}}), 0.0);
    CHECK_EQ(convex_area({{2,5}}), 0.0);
    CHECK_EQ(convex_area({}), 0.0);
}

// =================================================================================================
TEST_CASE(area_triangle)
{
    CHECK_EQ(convex_area({{0,0}, {5,0}, {0,5}}), 12.5);
    CHECK_EQ(convex_area({{0,0}, {-4,0}, {0,-4}}), 8);
    CHECK_EQ(convex_area({{0,1}, {1,1}, {0,0}}), 0.5);
    CHECK_EQ(convex_area({{0,1}, {1,1}, {0.5,0}}), 0.5);
}

// =================================================================================================
TEST_CASE(area_rectangle)
{
    CHECK_EQ(convex_area({{0,0}, { 5,0}, { 5, 5}, { 0, 5}}), 25.0);
    CHECK_EQ(convex_area({{0,0}, {-4,0}, {-4,-4}, { 0,-4}}), 16.0);
    CHECK_EQ(convex_area({{0,1}, {1,1},  { 0, 0}, {-1, 0}}),  1.0);
    CHECK_EQ(convex_area({{0,1}, {1,1},  { 0,-1}, {-1,-1}}),  2.0);
}

// =================================================================================================
TEST_CASE(area_example)
{
    std::vector<Point> points{
        { 1.37204, -4.80807},
        { 7.44964, -3.40377},
        {10.0    ,  2.0    },
        { 9.30639,  5.038  },
        { 6.69811,  7.9434 },
        { 3.0    ,  9.0    },
        {-2.03111,  6.86703},
        {-3.91051,  3.11576},
        {-2.65194, -2.12984},
    };

    CHECK(std::fabs(convex_area(points) - 140.0776) < 1e-4);
}
