#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    
    int i=0,n,a[10000],j;
    scanf("%d",&n);
    for (i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++){
    printf("%d ",a[n-1-j]);
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

