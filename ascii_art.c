#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
  int L;
  scanf("%d", &L);
  int H;
  scanf("%d", &H);
  fgetc(stdin);
  char T[257];
  scanf("%[^\n]", T);
  fgetc(stdin);
  char phrase[1025] = "";
  int j = 0;
  int code;
  for (int i = 0; i < H; i++)
  {
    char ROW[1025];
    scanf("%[^\n]", ROW);
    fgetc(stdin);
    for (int m = 0; m < strlen(T); m++)
    {
      if (toupper(T[m]) < 'A' || toupper(T[m]) > 'Z')
        code = 26;
      else
        code = toupper(T[m]) - 65;
      for (int k = L * code; k < L * (code + 1); k++)
      {
        phrase[j++] = ROW[k];
      }
    }
    printf("%s\n", phrase);
    j = 0;
  }

  // Write an answer using printf(). DON'T FORGET THE TRAILING \n
  // To debug: fprintf(stderr, "Debug messages...\n");

  // printf("answer\n");

  return 0;
}