#include <stdint.h>
#include <stdint.h>

#include <misc/debug.h>

#include <generated/bstruct_bstruct_test.h>

int main ()
{
    int nb = 3;
    int nc = 2;
    int m = 6;
    
    str1Params p;
    ASSERT_FORCE(str1Params_Init(&p, nb, nc, m))
    
    printf("len=%zu align=%zu\n", p.len, p.align);
    
    void *s = malloc(p.len);
    ASSERT_FORCE(s)
    
    return 0;
}
