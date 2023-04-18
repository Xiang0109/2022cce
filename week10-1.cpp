#include <stdio.h>
#include <vector>
using namespace std;

int main()
{
    ///int a[10];
    ///std::vector<int> a;///大小是多少,可以變
    vector<int> a;///宣告

    for(int i=0; i<10; i++){
        a.push_back(i*20);
    ///    scanf("%d", &a[i] );
    ///    printf("%d", a[i] );
    }
    for(int i=0; i<10;i++){
        printf("%d ",a[i] );
    }
}
