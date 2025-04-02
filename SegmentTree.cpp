#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

class Segment_Tree{
    private:
    int n;
    vector<int> segmentTreeMin;

    void build(const vector<int> &arr , int node , int start, int end){
        if (start == end){
            segmentTreeMin[node] == arr[start];
        }else{
            int mid = (start+end)/2;
            build(arr,2*node+1,start,mid);
            build(arr,2*node+2,mid+1,end);
            segmentTreeMin[node] = mid(segmentTreeMin[2*node+1], segmentTreeMin(2*node+2));
        }
    }
    void update(const vector<int> &arr, int node , int start, int end ){
        if (start == end){
            segmentTreeMin[node] = arr[start];
            }
            else{
               int mid = (start+end)/2;
               if(index < = mid){
                update(index,value,2*node+1,start,mid);
               }else{
                update(index,value,2*node+2,mid+1,end);
               }
               segmentTreeMin[node] = min(segmentTreeMin[2*node+1], segmentTreeMin[2*node+2]);

            }

    }
    public:
    Segment_Tree(const vector<int>&arr){
        n = arr.size();
        segmentTreeMin.resize(4*n);
        build(arr,0,0,n-1);
    }
    void update(int index, int val){
        update(index, val, 0,0,n-1);

    }
    int quriery{
        retunr Segment_Tree[0];
    }
};




int main(){
    int n;
    cin >> n ;
    vector<int> arr(n);
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }
    Segment_Tree(arr);
    int m;
    cin>>m;
    vector<int> results;

    for(int i = 0; i<m; i++){
        int id ,x ;
        cin>>id>>x;
        Segment_Tree.update(id -1,x);
        results.push_back(Segment_Tree.)
    }
    for (int res : results){
        cout<<res;
    }

    return 0;
}











    
