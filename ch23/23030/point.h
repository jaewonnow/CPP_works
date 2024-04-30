#pragma once
class Point{
    public:  // 아주 단순한 구조체이므로 데이터를 public으로 한다.
        int x; int y;
    public:
        Point(int tx, int ty);
        void show();
};