
int main() {
 int n, num, sum = 0, i;
 printf("Enter n number: ");
 scanf("%d", &n);
 printf("Enter %d numbers:\n", n);
 for (i = 0; i < n; i++) {
 scanf("%d", &num);
 sum += num;
 }
 printf("Sum: %d\n", sum);
 return 0;
}
 
