#include <iostream>
#include <unordered_set>
#include <vector>
int main() {
    int n,k;
    std::cin>>n>>k;
    std::unordered_set<int> closedRows, closedCols;
    std::vector<int> results;
    for (int i=0; i<k;++i) {
        int row,col;
        std::cin>>row>>col;
        closedRows.insert(row);
        closedCols.insert(col);
        int openCells =(n- closedRows.size())*(n- closedCols.size());
        results.push_back(openCells);
    }
    for (int result: results) {
    std::cout<< result<< " ";
    }
    std::cout<<std::endl;

    return 0;
}