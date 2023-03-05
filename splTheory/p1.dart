void main() {
int n = 3, i, j, sum? = 0;
for(i = 0; i < n; i++) {
for(j = 0; j <= i; j++) {
if(i == j) sum += i + j;
else if(i > j) sum += i + n;
else sum += n – j;
}
}
}