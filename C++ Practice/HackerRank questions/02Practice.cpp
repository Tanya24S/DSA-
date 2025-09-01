//Here it was giving me an error(that was not affecting the code as logic was fine) due to varible size issue in clang compiler, as I intialized as arr[n], instead use vector
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=n-1; i>=0;i--){
        cout<<arr[i]<<" ";
    }  
    return 0;
}
//
