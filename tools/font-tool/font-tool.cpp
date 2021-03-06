#include <stdio.h>

typedef unsigned char BYTE;

/**
 * The tool figures out how many lines for each character.  No need to tell it.
 */
const BYTE font_a[] = {
  3, 0, 5, 0,
  5, 0, 7, 2,
  7, 2, 7, 8,
  1, 2, 1, 8,
  1, 5, 7, 5,
};
const BYTE font_b[] = {
  2, 0, 5, 0,
  5, 0, 7, 2,
  7, 2, 7, 3,
  7, 3, 6, 4,
  6, 4, 1, 4,
  6, 4, 7, 5,
  7, 5, 7, 7,
  7, 7, 6, 8,
  6, 8, 1, 8,
  1, 8, 1, 1,
};
const BYTE font_c[] = {
  3, 0, 6, 0,
  6, 0, 7, 1,
  7, 7, 6, 8,
  6, 8, 3, 8,
  3, 8, 1, 6,
  1, 6, 1, 2,
  1, 2, 3, 0,
};
const BYTE font_d[] = {
  1, 0, 5, 0,
  5, 0, 7, 2,
  7, 2, 7, 6,
  7, 6, 5, 8,
  5, 8, 1, 8,
  1, 8, 1, 0,
};
const BYTE font_e[] = {
  1, 0, 7, 0,
  1, 4, 7, 4,
  1, 4, 1, 8,
  1, 8, 7, 8,
};
const BYTE font_f[] = {
  1, 0, 7, 0,
  1, 4, 7, 4,
  1, 4, 1, 8,
};
const BYTE font_g[] = {
  3, 0, 6, 0,
  6, 0, 7, 1,
  7, 7, 6, 8,
  6, 8, 3, 8,
  3, 8, 1, 6,
  1, 6, 1, 2,
  1, 2, 3, 0,
  3, 4, 7, 4,
  7, 4, 7, 7,
};
const BYTE font_h[] = {
  1, 0, 1, 3,
  1, 4, 1, 8,
  1, 4, 7, 4,
  7, 0, 7, 8,
};
const BYTE font_i[] = {
  3, 0, 5, 0,
  4, 0, 4, 8,
  3, 8, 5, 8,
};
const BYTE font_j[] = {
  3, 0, 6, 0,
  6, 0, 6, 6,
  6, 6, 4, 8,
  4, 8, 2, 6,
  2, 6, 2, 5
};
const BYTE font_k[] = {
  1, 0, 1, 3,
  1, 8, 1, 4,
  1, 4, 2, 4,
  6, 0, 2, 4,
  6, 8, 2, 4,
};
const BYTE font_l[] = {
  1, 0, 1, 7,
  1, 8, 4, 8,
  4, 8, 6, 6,
};
const BYTE font_m[] = {
  1, 0, 1, 8,
  1, 0, 4, 3,
  4, 3, 7, 0,
  7, 0, 7, 8,
};
const BYTE font_n[] = {
  1, 0, 1, 8,
  1, 1, 7, 7,
  7, 8, 7, 0,
};
const BYTE font_o[] = {
  3, 0, 5, 0,
  5, 0, 7, 2,
  7, 2, 7, 6,
  7, 6, 5, 8,
  5, 8, 3, 8,
  3, 8, 1, 6,
  1, 6, 1, 2,
};
const BYTE font_p[] = {
  2, 0, 5, 0,
  5, 0, 7, 2,
  7, 2, 7, 3,
  7, 3, 5, 5,
  5, 5, 1, 5,
  1, 1, 1, 8,
};
const BYTE font_q[] = {
  3, 0, 5, 0,
  5, 0, 7, 2,
  7, 2, 7, 6,
  5, 8, 3, 8,
  3, 8, 1, 6,
  1, 6, 1, 2,
  1, 2, 3, 0,
  5, 6, 7, 8,
};
const BYTE font_r[] = {
  2, 0, 5, 0,
  5, 0, 7, 2,
  7, 2, 7, 3,
  7, 3, 5, 5,
  5, 5, 1, 5,
  1, 1, 1, 8,
  4, 5, 7, 8,
};
const BYTE font_s[] = {
  1, 2, 3, 0,
  3, 0, 7, 0,
  1, 3, 1, 4,
  1, 4, 7, 4,
  7, 4, 7, 6,
  7, 6, 5, 8,
  5, 8, 1, 8,
};
const BYTE font_t[] = {
  1, 0, 7, 0,
  4, 1, 4, 8,
};
const BYTE font_u[] = {
  1, 0, 1, 7,
  1, 7, 2, 8,
  2, 8, 6, 8,
  6, 8, 7, 7,
  7, 7, 7, 0,
};
const BYTE font_v[] = {
  1, 0, 1, 5,
  1, 5, 4, 8,
  4, 8, 7, 5,
  7, 5, 7, 0,
};
const BYTE font_w[] = {
  1, 0, 1, 8,
  1, 8, 4, 5,
  4, 5, 7, 8,
  7, 8, 7, 0,
};
const BYTE font_x[] = {
  1, 0, 1, 1,
  1, 1, 7, 7,
  7, 7, 7, 8,
  7, 0, 7, 1,
  7, 1, 1, 7,
  1, 7, 1, 8,
};
const BYTE font_y[] = {
  1, 0, 4, 3,
  4, 3, 7, 0,
  4, 4, 4, 8,
};
const BYTE font_z[] = {
  1, 0, 7, 0,
  7, 1, 1, 7,
  1, 7, 1, 8,
  1, 8, 7, 8,
};
const BYTE font_0[] = {
  3, 0, 5, 0,
  5, 0, 7, 2,
  7, 2, 7, 6,
  7, 6, 5, 8,
  5, 8, 3, 8,
  3, 8, 1, 6,
  1, 6, 1, 2,
  2, 6, 6, 2,
  1, 2, 3, 0,
};
const BYTE font_1[] = {
  2, 3, 5, 0,
  5, 0, 5, 8,
};
const BYTE font_2[] = {
  1, 1, 2, 0,
  2, 0, 6, 0,
  6, 0, 7, 1,
  7, 1, 7, 3,
  7, 3, 6, 4,
  6, 4, 2, 4,
  2, 4, 1, 5,
  1, 5, 1, 7,
  1, 7, 2, 8,
  2, 8, 7, 8,
};
const BYTE font_3[] = {
  1, 1, 2, 0,
  2, 0, 6, 0,
  6, 0, 7, 1,
  7, 1, 7, 3,
  7, 3, 6, 4,
  6, 4, 2, 4,
  6, 4, 7, 5,
  7, 5, 7, 7,
  7, 7, 6, 8,
  6, 8, 1, 8,
};
const BYTE font_4[] = {
  1, 0, 1, 3,
  1, 3, 2, 4,
  2, 4, 5, 4,
  6, 0, 6, 8,
};
const BYTE font_5[] = {
  1, 1, 2, 0,
  2, 0, 7, 0,
  1, 1, 1, 3,
  1, 3, 2, 4,
  2, 4, 6, 4,
  6, 4, 7, 5,
  7, 5, 7, 7,
  7, 7, 6, 8,
  6, 8, 2, 8,
  2, 8, 1, 7,
};
const BYTE font_6[] = {
  1, 1, 1, 4,
  1, 1, 2, 0,
  2, 0, 7, 0,
  2, 4, 6, 4,
  6, 4, 7, 5,
  7, 5, 7, 7,
  7, 7, 6, 8,
  6, 8, 2, 8,
  2, 8, 1, 7,
  1, 7, 1, 5,
  1, 5, 2, 4,
};
const BYTE font_7[] = {
  2, 0, 6, 0,
  6, 0, 7, 1,
  7, 1, 7, 8,
};
const BYTE font_8[] = {
  1, 1, 2, 0,
  2, 0, 6, 0,
  6, 0, 7, 1,
  7, 1, 7, 3,
  7, 3, 6, 4,
  2, 4, 1, 3,
  1, 3, 1, 1,
  2, 4, 6, 4,
  6, 4, 7, 5,
  7, 5, 7, 7,
  7, 7, 6, 8,
  6, 8, 2, 8,
  2, 8, 1, 7,
  1, 7, 1, 5,
  1, 5, 2, 4,
};
const BYTE font_9[] = {
  1, 1, 2, 0,
  2, 0, 6, 0,
  6, 0, 7, 1,
  7, 1, 7, 3,
  7, 3, 6, 4,
  2, 4, 1, 3,
  1, 3, 1, 1,
  2, 4, 6, 4,
  7, 4, 7, 7,
  7, 7, 6, 8,
  6, 8, 2, 8,
};
const BYTE font_qmark[] = {
  1, 1, 2, 0,
  2, 0, 6, 0,
  6, 0, 7, 1,
  7, 1, 7, 3,
  7, 3, 6, 4,
  6, 4, 4, 4,
  4, 4, 4, 6,
  4, 7, 4, 8,
};
const BYTE font_emark[] = {
  4, 0, 4, 6,
  4, 7, 4, 8,
};
const BYTE font_comma[] = {
  4, 6, 4, 7,
  4, 7, 3, 8,
};
const BYTE font_period[] = {
  4, 7, 4, 8,
};
const BYTE font_colon[] = {
  4, 3, 4, 4,
  4, 5, 4, 6,
};
const BYTE font_semicolon[] = {
  4, 3, 4, 4,
  4, 5, 4, 6,
  4, 6, 3, 7,
};
const BYTE font_plus[] = {
  4, 2, 4, 6,
  2, 4, 6, 4,
};
const BYTE font_minus[] = {
  2, 4, 6, 4,
};
const BYTE font_fslash[] = {
  1, 7, 7, 1,
};
const BYTE font_bslash[] = {
  1, 1, 7, 7,
};
const BYTE font_lt[] = {
  1, 4, 5, 0,
  1, 4, 5, 8,
};
const BYTE font_gt[] = {
  3, 0, 7, 4,
  7, 4, 3, 8,
};
const BYTE font_dquote[] = {
  3, 0, 3, 2,
  5, 0, 5, 2,
};
const BYTE font_squote[] = {
  4, 0, 4, 2,
};
const BYTE font_lparen[] = {
  3, 0, 1, 2,
  1, 2, 1, 6,
  1, 6, 3, 8,
};
const BYTE font_rparen[] = {
  1, 0, 3, 2,
  3, 2, 3, 6,
  3, 6, 1, 8,
};
const BYTE font_eq[] = {
  3, 4, 5, 4,
  3, 5, 5, 5,
};
const BYTE font_caret[] = {
  2, 2, 4, 0,
  4, 0, 6, 2
};
const BYTE font_uscore[] = {
  2, 8, 6, 8,
};
const BYTE font_at[] = {
  6, 7, 3, 7,
  3, 7, 1, 5,
  1, 5, 1, 3,
  1, 3, 3, 1,
  3, 1, 5, 1,
  5, 1, 7, 3,
  7, 3, 7, 4,
  7, 4, 5, 6,
  5, 6, 4, 6,
  4, 6, 3, 5,
  3, 5, 3, 4,
  3, 4, 4, 3,
  4, 3, 5, 3,
  5, 3, 5, 5,
};
const BYTE font_pound[] = {
  3, 1, 3, 7,
  5, 1, 5, 7,
  1, 3, 7, 3,
  1, 5, 7, 5,
};
const BYTE font_dollar[] = {
  3, 0, 3, 8,
  5, 0, 5, 8,
  1, 2, 2, 1,
  2, 1, 6, 1,
  6, 1, 7, 2,
  1, 2, 1, 3,
  1, 3, 2, 4,
  2, 4, 6, 4,
  6, 4, 7, 5,
  7, 5, 7, 6,
  7, 6, 6, 7,
  6, 7, 2, 7,
  2, 7, 1, 6,
};
const BYTE font_asterisk[] = {
  3, 0, 5, 2,
  5, 0, 3, 2,
  4, 0, 4, 1,
};
const BYTE font_percent[] = {
  1, 1, 3, 1,
  3, 1, 3, 3,
  3, 3, 1, 3,
  1, 3, 1, 1,
  1, 7, 7, 1,
  5, 5, 7, 5,
  7, 5, 7, 7,
  7, 7, 5, 7,
  5, 7, 5, 5,
};
const BYTE font_amp[] = {
  7, 8, 1, 2,
  1, 2, 1, 1,
  1, 1, 2, 0,
  2, 0, 4, 0,
  4, 0, 5, 1,
  2, 3, 1, 4,
  1, 4, 1, 7,
  1, 7, 2, 8,
  2, 8, 4, 8,
  4, 8, 6, 6,
  6, 6, 6, 5,
};

/**
 * FONT struct determines the variable name in the C output, the character, and the number of lines.
 *
 * We have an array of FONT structures, one per character.
 */
struct FONT {
  const char *name;
  const BYTE *lines;
  const BYTE num_lines;
} font[] = {
  { "font_a", font_a, sizeof(font_a) / 4 },
  { "font_b", font_b, sizeof(font_b) / 4 },
  { "font_c", font_c, sizeof(font_c) / 4 },
  { "font_d", font_d, sizeof(font_d) / 4 },
  { "font_e", font_e, sizeof(font_e) / 4 },
  { "font_f", font_f, sizeof(font_f) / 4 },
  { "font_g", font_g, sizeof(font_g) / 4 },
  { "font_h", font_h, sizeof(font_h) / 4 },
  { "font_i", font_i, sizeof(font_i) / 4 },
  { "font_j", font_j, sizeof(font_j) / 4 },
  { "font_k", font_k, sizeof(font_k) / 4 },
  { "font_l", font_l, sizeof(font_l) / 4 },
  { "font_m", font_m, sizeof(font_m) / 4 },
  { "font_n", font_n, sizeof(font_n) / 4 },
  { "font_o", font_o, sizeof(font_o) / 4 },
  { "font_p", font_p, sizeof(font_p) / 4 },
  { "font_q", font_q, sizeof(font_q) / 4 },
  { "font_r", font_r, sizeof(font_r) / 4 },
  { "font_s", font_s, sizeof(font_s) / 4 },
  { "font_t", font_t, sizeof(font_t) / 4 },
  { "font_u", font_u, sizeof(font_u) / 4 },
  { "font_v", font_v, sizeof(font_v) / 4 },
  { "font_w", font_w, sizeof(font_w) / 4 },
  { "font_x", font_x, sizeof(font_x) / 4 },
  { "font_y", font_y, sizeof(font_y) / 4 },
  { "font_z", font_z, sizeof(font_z) / 4 },
  { "font_0", font_0, sizeof(font_0) / 4 },
  { "font_1", font_1, sizeof(font_1) / 4 },
  { "font_2", font_2, sizeof(font_2) / 4 },
  { "font_3", font_3, sizeof(font_3) / 4 },
  { "font_4", font_4, sizeof(font_4) / 4 },
  { "font_5", font_5, sizeof(font_5) / 4 },
  { "font_6", font_6, sizeof(font_6) / 4 },
  { "font_7", font_7, sizeof(font_7) / 4 },
  { "font_8", font_8, sizeof(font_8) / 4 },
  { "font_9", font_9, sizeof(font_9) / 4 },
  { "font_qmark", font_qmark, sizeof(font_qmark) / 4 },
  { "font_emark", font_emark, sizeof(font_emark) / 4 },
  { "font_comma", font_comma, sizeof(font_comma) / 4 },
  { "font_period", font_period, sizeof(font_period) / 4 },
  { "font_colon", font_colon, sizeof(font_colon) / 4 },
  { "font_semicolon", font_semicolon, sizeof(font_semicolon) / 4 },
  { "font_plus", font_plus, sizeof(font_plus) / 4 },
  { "font_minus", font_minus, sizeof(font_minus) / 4 },
  { "font_fslash", font_fslash, sizeof(font_fslash) / 4 },
  { "font_bslash", font_bslash, sizeof(font_bslash) / 4 },
  { "font_lt", font_lt, sizeof(font_lt) / 4 },
  { "font_gt", font_gt, sizeof(font_gt) / 4 },
  { "font_dquote", font_dquote, sizeof(font_dquote) / 4 },
  { "font_squote", font_squote, sizeof(font_squote) / 4 },
  { "font_lparen", font_lparen, sizeof(font_lparen) / 4 },
  { "font_rparen", font_rparen, sizeof(font_rparen) / 4 },
  { "font_eq", font_eq, sizeof(font_eq) / 4 },
  { "font_caret", font_caret, sizeof(font_caret) / 4 },
  { "font_uscore", font_uscore, sizeof(font_uscore) / 4 },
  { "font_at", font_at, sizeof(font_at) / 4 },
  { "font_pound", font_pound, sizeof(font_pound) / 4 },
  { "font_dollar", font_dollar, sizeof(font_dollar) / 4 },
  { "font_asterisk", font_asterisk, sizeof(font_asterisk) / 4 },
  { "font_percent", font_percent, sizeof(font_percent) / 4 },
  { "font_amp", font_amp, sizeof(font_amp) / 4 },
};

const int NUM_CHARACTERS = sizeof(font) / sizeof(FONT);

/**
 * Main program simply generates the preamble for the .h file and rips through the
 * FONT array and generates source code.
 *
 * Output is to stdout, so you can pipe it to less for debugging.
 *
 * See the makefont.sh script, which compiles this program and then runs it to generate
 * charset.h in the evade project.
 */
int main() {
  printf("#ifndef CHARSET_H\n");
  printf("#define CHARSET_H\n\n");
  printf("// number of characters: %u\n\n", NUM_CHARACTERS);
  printf("#include \"Types.h\"\n\n");
  for (int i = 0; i < NUM_CHARACTERS; i++) {
    FONT *f = &font[i];
    const int num_lines = f->num_lines;
    const BYTE *data = f->lines;
    printf("const PROGMEM BYTE %s[] = {\n", f->name);

    printf("      9,\t\t // width\n");
    printf("      9,\t\t // height\n");
    printf("      %d,\t\t // Number of rows of coords\n", num_lines);
    printf("//  %4s %4s %4s %4s\n", "x1", "y1", "x2", "y2");
    for (int i = 0; i < num_lines; i++) {
      BYTE x1 = *data++,
           y1 = *data++,
           x2 = *data++,
           y2 = *data++;

      printf("    %3d, %3d, %3d, %3d,\n", x1 - 5, y1 - 5, x2 - 5, y2 - 5);
    }
    printf("};\n\n");
  }
  printf("#endif\n");
  return 0;
}
