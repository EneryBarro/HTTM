 int main() {
    int k,m,n;
    scanf("%d%d%d",&k,&m,&n);
 
    if (k > m)
        if (k > n) printf("Result: %d \n", k);
        else printf("Result: %d \n", n);
    else
        if (m > n) printf("Result: %d \n", m);
        else printf("Result: %d \n", n);
        return 0;
}
