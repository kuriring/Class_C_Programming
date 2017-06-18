#if POWER_TPYE == 0
    double power(int x, int y) {
        double result = 1;
        int i;
        for(i=0; i<y; i++) {
            printf("result = %d\n", (int)result);
            result *= x;
        }
        return result;
    }
#elif POWER_TPYE == 1
    double power(int x, int y) {
        double result = 1.0;
        int i;
        for(i=0; i<y; i++) {
            printf("result = %f\n", result);
            result *= x;
        }
        return result;
    }
#endif
