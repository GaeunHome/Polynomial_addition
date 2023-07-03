#include<stdio.h>
#define MAXITEM 40
#define MAXDEGREE 10
void A2Bconvert(double[MAXITEM],int[MAXITEM],int[MAXITEM],int,double[MAXDEGREE+1][MAXDEGREE+1]);
int B2Aconvert(double[MAXITEM],int[MAXITEM],int[MAXITEM],double[MAXDEGREE+1][MAXDEGREE+1]);
void printIntArray(int a[], int len) {
  for(int i=0;i<len;i++) {
    if(i+1<len) printf("%d ",a[i]);
    else printf("%d\n",a[i]);
  }
}
int main() {
  double coef1[MAXITEM]={0}, coef2[MAXITEM]={0};
  int vars1[2][MAXITEM]={0}, vars2[2][MAXITEM]={0};
  double ans1[MAXDEGREE+1][MAXDEGREE+1]={0}, ans2[MAXDEGREE+1][MAXDEGREE+1]={0};
  double ans3[MAXDEGREE+1][MAXDEGREE+1]={0};
  int N;
  scanf("%d", &N);
  for(int i=0;i<N;i++) {
    scanf("%lf", &coef1[i]);
  }
  for(int i=0;i<2;i++) {
    for(int j=0;j<N;j++) {
    scanf("%d", &vars1[i][j]);
    }
  }
  A2Bconvert(coef1, vars1[0], vars1[1], N, ans1);
  scanf("%d", &N);
  for(int i=0;i<N;i++) {
    scanf("%lf", &coef2[i]);
  }
  for(int i=0;i<2;i++) {
    for(int j=0;j<N;j++) {
      scanf("%d", &vars2[i][j]);
    }
  }
  A2Bconvert(coef2, vars2[0], vars2[1], N, ans2);
  for(int i=0; i<MAXDEGREE+1; i++) {
    for(int j=0; j<MAXDEGREE+1; j++) {
      ans3[i][j] = ans1[i][j] + ans2[i][j];
    }
  }
  double coef3[MAXITEM]={0};
  int vars3[2][MAXITEM]={0};
  int A = B2Aconvert(coef3, vars3[0], vars3[1], ans3);
  for(int i=0; i<A; i++) {
    printf("%.2f", coef3[i]);
    if(i+1<A) printf(" ");
  }
  printf("\n");
  printIntArray(vars3[0], A);
  printIntArray(vars3[1], A);
  return 0;
}
void A2Bconvert(double x[MAXITEM], int y[MAXITEM], int z[MAXITEM], int w, double a[MAXDEGREE+1][MAXDEGREE+1]) {
  for(int i=0; i<w; i++) {
    for(int k=0; k<i; k++) {
      double tmp = 0;
      if(y[i]<y[k]) {
        tmp = y[k];
        y[k] = y[i];
        y[i] = tmp;
        tmp = 0;
        tmp = z[k];
        z[k] = z[i];
        z[i] = tmp;
      }
    }
  }
  for(int i=0; i<w; i++) {
    a[y[i]][z[i]] = x[i];
  }
}
int B2Aconvert(double x[MAXITEM], int y[MAXITEM], int z[MAXITEM], double w[MAXDEGREE+1][MAXDEGREE+1]) {
  int k=0;
  for(int i=0; i<MAXDEGREE+1; i++) {
    for(int j=0; j<MAXDEGREE+1; j++) {
      if(w[i][j]!=0) {
        x[k] = w[i][j];
        y[k] = i;
        z[k] = j;
        k++;
      }
    }
  }
  return k;
}
