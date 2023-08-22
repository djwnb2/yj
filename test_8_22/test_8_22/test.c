#define _CRT_SECURE_NO_WARNINGS

int maxDistToClosest(int* seats, int seatsSize) {
    int res = 0, l = 0;
    while (l < seatsSize && seats[l] == 0) {
        ++l;
    }
    res = fmax(res, l);
    while (l < seatsSize) {
        int r = l + 1;
        while (r < seatsSize && seats[r] == 0) {
            ++r;
        }
        if (r == seatsSize) {
            res = fmax(res, r - l - 1);
        }
        else {
            res = fmax(res, (r - l) / 2);
        }
        l = r;
    }
    return res;
}

