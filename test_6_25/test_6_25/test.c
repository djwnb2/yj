#define _CRT_SECURE_NO_WARNINGS


bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {

    if (xCenter >= x1 && xCenter <= x2 && yCenter >= y1 && yCenter <= y2) {
        return true;
    }

    // ����Բ�ĵ����ε�ˮƽ�ʹ�ֱ����
    int distX = xCenter < x1 ? x1 - xCenter : (xCenter > x2 ? xCenter - x2 : 0);
    int distY = yCenter < y1 ? y1 - yCenter : (yCenter > y2 ? yCenter - y2 : 0);

    // ����Բ�ĵ����ε���������ƽ��
    int squaredDist = distX * distX + distY * distY;


    return squaredDist <= (radius * radius);
}
