#include<stdio.h>
void main()
{
	int a = 78,b,c;
	b = a<< 2; // 78 * 2^2 
	c=a>>3; // 78 / 2^ 3
	printf(" %d %d ",b,c);
	

}

	/*

	printf("%u ", ~a);
	
	}
	0 000 0100
	
	1111  1011
	
	-128 + 64 +32 + 16 + 8 +2 +1 = -5


/*	c = a| b;
	d = c & a;
	e = d ^ b;
	printf ("  %d %d %d ", c,d,e);
}	// 111 78 15
	// 111 128 67
	// 111 78 47
	// 111 78 80

*/
