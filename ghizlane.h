#ifndef SILENT_H
#define SILENT_H

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool slntmark(char c);

char *slnt_get_string(void);
char *slnt_string(const char *prompt);
int slnt_int(const char *prompt);

#ifdef __cplusplus
}
#endif

#endif
