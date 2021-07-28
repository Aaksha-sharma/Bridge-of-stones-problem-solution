//use this piece of code to get solution of given problem. Happy coding!!
void findJumps(int N, int X){
    int j1,j2,jt;
    // Your code here
    jt=N/2+1;
    j1=X/2;
    j2=jt-j1-1;
    if (j1>=j2)
    {
        cout<<j2;
    }
    else
    {
        cout<<j1;
    }
    
    
    
    cout << endl;
    
}
