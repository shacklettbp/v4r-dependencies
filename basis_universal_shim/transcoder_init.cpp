#include <basisu_transcoder.h>

__attribute__((constructor)) void init()
{
    basist::basisu_transcoder_init();
}
