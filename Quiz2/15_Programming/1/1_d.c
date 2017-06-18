double power(int x, int y) {
    double result = 1.0;
    int i;
 
    for(i=0; i<y; i++) {
    #if (DEBUG == 2 && LEVEL == 3)
        printf("result = %f, LINE = %d\n", result, __LINE__);
    #endif
        result *= x;
    }
 
    return result;
}
