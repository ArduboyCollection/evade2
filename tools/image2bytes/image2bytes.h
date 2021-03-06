// Constants
#ifndef USAGE
#define USAGE "Usage: image2bytes [-voh] [file...]"
#endif

#ifndef RD_FAIL
#define RD_FAIL "Failed to load file"
#endif

#ifndef SZ_FAIL
#define SZ_FAIL "Image dimensions exceed 255px limit"
#endif

#ifndef WR_FAIL
#define WR_FAIL "Failed to write to file"
#endif

#ifndef NO_MEM
#define NO_MEM "Failed to allocate"
#endif

#ifdef _WIN32
#define PATH_SEP   "\\"
#else
#define PATH_SEP   "/"
#endif

#define STB_IMAGE_IMPLEMENTATION

// Colors
#define OK  "\x1b[32m"
#define INF "\x1b[36m"
#define RST "\x1b[0m"
#define ERR "\x1b[31m"

// Includes
#include <ctype.h>
#include <unistd.h>
#include <libgen.h>
#include "stb_image.h"

// Typedefs
typedef struct Bytes Bytes;
typedef struct Arguments Arguments;

// Structs
struct Bytes {
    char *file;
    unsigned char *data;
    unsigned long int length;
};

struct Arguments {
  char **images;
  char *output;
  int verbosity;
};

// Functions
Bytes *image_to_bytes(char *const filename);
void free_bytes(Bytes *bytes);
void print_bytes(const Bytes *bytes);
void export_bytes(const Bytes *bytes);
void bytes_to_ascii(const Bytes *bytes);

// Utils
char *build_path(const char *dir, const char *file);
char *replace_file_ext(const char *str, const char *rep);
void str_to_var(char* str, const char rep, const unsigned int is_const);

// Variables
Arguments arguments;
