#include<iostream>
#include<vector>
int countVisiblePillars(const std::vector<int>& heights,int l,int r) {
    int maxHeight=-1;
    int visibleCount=0;
    for(int i=l; i<=r;++i){
        if (heights[i]>maxHeight) {
        visibleCount++;
        maxHeight=heights[i];
        }
    }
return visibleCount;
}
int main(){
    int n;
    std::cin>>n;
    std::vector<int> heights(n);
    for(int i=0;i<n;i++){
    std::cin>>heights[i];
    }
    int q;
    std::cin>>q;
    while(q--) {
    int l,r;
    std::cin>>l>>r;
    std::cout<<countVisiblePillars(heights,l,r)<<std::endl;
    }
    return 0;
}
