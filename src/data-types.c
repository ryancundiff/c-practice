#include <stdio.h>

int main() {
  int integer = 1;
  float decimal_1 = 2.3;
  double decimal_2 = 4.5;
  char character = 'a';
  char string[] = "abc";

  /*
    C format specifiers:
      - %d or %i: Signed integer (e.g., int)
      - %u: Unsigned integer
      - %f: Floating-point number (e.g., float)
      - %lf: Double-precision floating-point number (e.g., double)
      - %c: Single character
      - %s: String (null-terminated character array)

    Modifiers for integer types:
      - %hd : Short integer
      - %ld : Long integer
      - %lld : Long long integer
      - %hu : Unsigned short integer
      - %lu : Unsigned long integer
      - %llu : Unsigned long long integer

    Special:
      - %e or %E : Scientific notation (e.g., 1.23e+03)
      - %g or %G : Shorter of %f or %e
      - %p : Pointer address
      - %o : Octal representation
      - %x or %X : Hexadecimal representation (lowercase/uppercase)
      - %% : Prints a literal % character

    Precision:
      - %5d : Minimum width of 5 for an integer
      - %.2f : Floating-point number with 2 decimal places
      - %10.3f : Minimum width of 10, with 3 decimal places
  */

  printf("An integer: %i\n", integer);
  printf("A float: %f\n", decimal_1);
  printf("A double: %lf\n", decimal_2);
  printf("A character: %c\n", character);
  printf("A string: %s\n", string);

  // Type Casting
  // Implicit type casting is when the compiler tries to convert a type for you. This can be dangerous and we should avoid it if we can.
  // Explicit casting is when you tell the compiler what type to convert to. This is a safer option.
  
  int c_int = 99;
  char c_char_implicit = c_int; // Implicit casting.
  char c_char_explicit = (char)c_int; // Explicit casting.

  printf("\nImplicit C character: %c\n", c_char_implicit);
  printf("Explicit C character: %c", c_char_explicit);
}