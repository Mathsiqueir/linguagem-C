int main(int argc, char const *argv[])
{
    int v[2][2];
    int i, j;

    for(i=0; i<2;i++){
        for(j=0; j<2;j++){
            printf("Digite um dado: \n");
            scanf("%d", &v[i][j]);}
           }
    for(i=0; i<2;i++){
        for(j=0; j<2;j++){
            printf("%d ", v[i][j]);
        }
        printf("\n");
    }       
}
