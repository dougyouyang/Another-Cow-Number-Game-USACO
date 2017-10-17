//  Copyright © 2017 Dougy Ouyang. All rights reserved.

#include <iostream>

using namespace std;

int main()
{
    int n, score=0;
    
    cin >> n;
    
    while(n!=1)
    {
        if(n%2)
            n=n*3+1, score++;
        else
            n/=2, score++;
    }
    
    cout << score << endl;
    
    return 0;
}
