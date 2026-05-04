#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAG_SIZE 128

typedef struct {
    char title[31];
    char artist[31];
    char album[31];
    char year[5];
    char comment[31];
    unsigned char genre;
} ID3v1Tag;

int read_id3v1_tag(const char *filename, ID3v1Tag *tag)
{
    FILE *fp = fopen(filename, "rb");
    if (fp == NULL)
    {
        printf("Error: Cannot open file %s\n", filename);
        return 0;
    }

    fseek(fp, -TAG_SIZE, SEEK_END);

    char buffer[TAG_SIZE];
    fread(buffer, TAG_SIZE, 1, fp);
    fclose(fp);

    if (strncmp(buffer, "TAG", 3) != 0)
    {
        printf("No ID3v1 tag found in this file.\n");
        return 0;
    }

    strncpy(tag->title, buffer + 3, 30);
    tag->title[30] = '\0';

    strncpy(tag->artist, buffer + 33, 30);
    tag->artist[30] = '\0';

    strncpy(tag->album, buffer + 63, 30);
    tag->album[30] = '\0';

    strncpy(tag->year, buffer + 93, 4);
    tag->year[4] = '\0';

    strncpy(tag->comment, buffer + 97, 30);
    tag->comment[30] = '\0';

    tag->genre = buffer[127];

    return 1;
}

void display_tag(ID3v1Tag tag)
{
    printf("\n------ MP3 TAG INFO ------\n");
    printf("Title   : %s\n", tag.title);
    printf("Artist  : %s\n", tag.artist);
    printf("Album   : %s\n", tag.album);
    printf("Year    : %s\n", tag.year);
    printf("Comment : %s\n", tag.comment);
    printf("Genre ID: %d\n", tag.genre);
    printf("--------------------------\n");
}

int main()
{
    char filename[100];
    ID3v1Tag tag;

    printf("Enter MP3 filename: ");
    scanf("%s", filename);

    if (read_id3v1_tag(filename, &tag))
    {
        display_tag(tag);
    }
    else
    {
        printf("Failed to read MP3 tag.\n");
    }

    return 0;
}
