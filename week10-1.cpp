#include <stdio.h>
#include <vector>
using namespace std;

int main()
{
    ///int a[10];
    ///std::vector<int> a;///�j�p�O�h��,�i�H��
    vector<int> a;///�ŧi

    for(int i=0; i<10; i++){
        a.push_back(i*20);
    ///    scanf("%d", &a[i] );
    ///    printf("%d", a[i] );
    }
    for(int i=0; i<10;i++){
        printf("%d ",a[i] );
    }
}
