//  Here in the following code output is: 130000000000
//bcz index till 10 got intialized with 0 and push_back added element after it bcz it is a dynamic ds
int main(){
    vector<int> res(10);
    res.push_back(5);
    res.push_back(15);
    res.push_back(25);
    cout<<res.size();
    for(int i=0; i<10; i++){
        cout<<res[i];
    }
    return 0;
}
