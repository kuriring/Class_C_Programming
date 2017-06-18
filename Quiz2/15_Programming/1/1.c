double power(int x, int y)
{
    double result = 1.0;
    int i;
 
    for(i=0; i<y; i++)
    {
        printf("result = %f\n", result);  //①
        result *= x;
    }
    
    return 0;
}
