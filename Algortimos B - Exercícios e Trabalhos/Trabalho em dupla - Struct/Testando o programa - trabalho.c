/* Teste - Trabalho
*/

int main(){
    int i = 0, z[10], t = 9, x;

    do{
        z[i] = i * 2;
        i++;
    }while(i < 10);

    x = 4;

    printf("%d, %d, %d, %d\n", i, z[x], z[t], x);


return 0;
}
