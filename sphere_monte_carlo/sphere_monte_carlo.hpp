double *monomial_value ( int dim_num, int point_num, double x[], int expon[] );
double r8_gamma ( double x );
double r8_uniform_01 ( int *seed );
double *r8mat_normal_01_new ( int m, int n, int *seed );
double *r8vec_normal_01_new ( int n, int *seed );
double r8vec_sum ( int n, double a[] );
double *r8vec_uniform_01_new ( int n, int *seed );
double sphere01_monomial_integral ( int e[3] );
double *sphere01_sample ( int n, int *seed );
void timestamp ( );