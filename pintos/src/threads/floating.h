#ifndef THREADS_FLOATING
#define THREADS_FLOATING

#define F 16384

int
int_to_fp(int n){
	return n*F;
}

int
fp_to_int_zero(int x){
	return x/F;
}


int
fp_to_int_near(int x){
	if (x >= 0){
		return (x + F/2);
	}
	return (x - F/2);
}

int
add_fp(int x, int y){
	return x + y;
}

int
sub_fp(int x, int y){
	return (x - y);
}

int
add_fp_int(int x, int n){
	return x + n*F;
}

int
sub_fp_int(int x, int n){
	return x - n*F;
}

int
mult_fp(int x, int y){
	return (((int64_t)x)*y/F);
}

int
mult_fp_int(int x, int n){
	return x*n;
}

int
div_fp(int x, int y){
	return (((int64_t)x)*F/y);
}

int
div_fp_int(int x, int n){
	return x/n;
}


#endif 
