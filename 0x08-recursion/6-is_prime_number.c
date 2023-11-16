#include "main.h"

int prim_chk(int n, int prck);
/**
 * is_prime_number - cals prime numbers
 *
 * @n:number to check if prime
 *
 * Return:nu.ber if prime
*/

int is_prime_number(int n)
{
	return (prim_chk(n, 2));

}

/**
 * prim_chk - ckecks for prime nums
 *
 * @n:num to check
 * @prck:cross check par
 *
 * Return:returns 1, returns 0, and other wise checked num
*/

int prim_chk(int n, int prck)
{
	if (prck >= n && n > 1)
		return (1);
	else if (n % prck == 0 || n <= 1)
		return (0);
	else
		return (prim_chk(n, prck + 1));
}
