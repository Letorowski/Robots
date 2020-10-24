#include <iostream>
using namespace std;
 
int main() {
    int t, w;
    char t1, t2, r, p, s, r2, p2, s2, vib; 
     cin >> vib;
    if (vib == 'P'){
    cin >> t1;
    cin >> t2;

    if (t1 == t2){
     cout << "Hmm" << endl;
     exit(0);
    }
   if (t1 == 'R' && t2 == 'P'){
     cout << "1p Win" << endl;
     exit(0);
    }
    if (t1 == 'R' && t2 == 'S'){
     cout << "2p Win" << endl;
     exit(0);
    }
       if (t1 == 'S' && t2 == 'P'){
     cout << "1p Win" << endl;
     exit(0);
    }
       if (t1 == 'P' && t2 == 'R'){
     cout << "2p Win" << endl;
     exit(0);
    }
    if (t1 == 'S' && t2 == 'R'){
     cout << "1p Win" << endl;
     exit(0);
    }
       if (t1 == 'P' && t2 == 'S'){
     cout << "2p Win" << endl;
     exit(0);
    }
    else {
        cout << "Eeeeeror" << endl;
    }
    }
    
    
    else {
         cin >> t1;
         w = rand() % 3;
         if (w == 1)
         {
             t2 = 'R';
         }
                if (w == 2)
                {
             t2 = 'S';
         }
                if (w == 3)
                {
             t2 = 'P';
         }
           if (t1 == t2)
           {
     cout << "Hmm" << endl;
     exit(0);
    }
   if (t1 == 'R' && t2 == 'P')
   {
     cout << "1p Win" << endl;
     exit(0);;
    }
    if (t1 == 'R' && t2 == 'S'){
     cout << "Bot Win" << endl;
     exit(0);
    }
       if (t1 == 'S' && t2 == 'P'){
     cout << "1p Win" << endl;
     exit(0);;
    }
       if (t1 == 'P' && t2 == 'R'){
     cout << "Bot Win" << endl;
     exit(0);
    }
    if (t1 == 'S' && t2 == 'R'){
     cout << "1p Win" << endl;
     exit(0);
    }
       if (t1 == 'P' && t2 == 'S'){
     cout << "Bot Win" << endl;
    exit(0);
    }
    if (t1 != 'R', 'P', 'S'){
         cout << "Eeeeeror" << endl;
         
    }

    }
    return 0;
}