#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* fp;
    char nama_file[100];
    int vertex_asal, vertex_tujuan, banyak_edges;
    int banyak_vertex;

    // Input nama file
    printf("Masukkan graph : ");
    scanf("%s", &nama_file);

    // Cek isi file
    fp = fopen(nama_file, "r");

    if (fp == NULL)
    {
        printf("Error : file invalid!\n");
    }
    else
    {
        fseek(fp, 0, SEEK_END);
        int size = ftell(fp);

        if (size == 0)
        {
            printf("Error : file empty!\n ");
        }
        else
        {
            // Input vertex asal, tujuan, serta banyak edges
            printf("Masukkan Vertex Asal : ");
            scanf("%d", &vertex_asal);

            printf("Masukkan Vertex Tujuan : ");
            scanf("%d", &vertex_tujuan);

            printf("Masukkan Banyak Edges : ");
            scanf("%d", &banyak_edges);

            // Membaca line pertama dari file
            // ini kode


        }
    }
    return 0;
}
