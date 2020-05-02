#include <stdio.h>

//#define DEBUG    // DEBUG 매크로 정의
#undef DEBUG 

#ifdef DEBUG
#define trace(fmt, args...)  fprintf(stderr, "[%s : %s : %s : %d : %s()]: " fmt, __FILE__, __DATE__, __TIME__,  __LINE__, __func__, ##args)
#else
#define trace(fmt, args...)
#endif

int main()
{
#ifdef DEBUG     // DEBUG 매크로가 정의되어 있다면 #ifdef, #endif 사이의 코드를 컴파일
    printf("Debug: %s %s %s %d\n", __DATE__, __TIME__, __FILE__, __LINE__);
#endif

	trace("This is trace debug\n");

    return 0;
}
