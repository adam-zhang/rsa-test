#include <iostream>
#include <string>
#include <vector>
#include <polarssl/rsa.h>
#include <polarssl/entropy.h>
#include <polarssl/ctr_drbg.h>
#include <polarssl/bignum.h>

using namespace std;

void generateKey()
{
	char* pers = "rsa_generate_key";
	entropy_context entropy;
	entropy_init(&entropy);
	//ctr_drbg_context ctr_drbg;
	//if(ctr_drbg_init(&ctr_drbg, entropy_func, pers, 0, strlen(pers)) != 0)
	//{
	//	cout << "ctr_drbg_init failed" << endl;
	//	return;
	//}
}

int main(int, char**)
{
	generateKey();
	return 0;	
}
