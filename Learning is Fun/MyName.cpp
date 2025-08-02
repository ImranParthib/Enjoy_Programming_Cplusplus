#include <iostream>
using namespace std;

int main() {
    
    char ch='#';
    cout<<endl;
    char J[5][5] = {
        {' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' '}
    };
    char K[5][5] = {
        {' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' '}
    };
    char L[5][5] = {
        {' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' '}
    };
    char I[5][5] = {
        {' ', ch, ch, ch, ' '},
        {' ', ' ', ch, ' ', ' '},
        {' ', ' ', ch, ' ', ' '},
        {' ', ' ', ch, ' ', ' '},
        {' ', ch, ch, ch, ' '}
    };

    char M[5][5] = {
        {ch, ' ', ' ', ' ', ch},
        {ch, ch, ' ', ch, ch},
        {ch, ' ', ch, ' ', ch},
        {ch, ' ', ' ', ' ', ch},
        {ch, ' ', ' ', ' ', ch}
    };

    char R[5][5] = {
        {ch, ch, ch, ch, ' '},
        {ch, ' ', ' ', ch, ' '},
        {ch, ch, ch, ch, ' '},
        {ch, ' ', ch, ' ', ' '},
        {ch, ' ', ' ', ch, ' '}
    };

    char A[5][5] = {
        {' ', ' ', ch, ' ', ' '},
        {' ', ch, ' ', ch, ' '},
        {ch, ch, ch, ch, ch},
        {ch, ' ', ' ', ' ', ch},
        {ch, ' ', ' ', ' ', ch}
    };

    char N[5][5] = {
        {ch, ' ', ' ', ' ', ch},
        {ch, ch, ' ', ' ', ch},
        {ch, ' ', ch, ' ', ch},
        {ch, ' ', ' ', ch, ch},
        {ch, ' ', ' ', ' ', ch}
    };
    char P[5][5] = {
    {ch, ch, ch, ch, ' '},
    {ch, ' ', ' ', ch, ' '},
    {ch, ch, ch, ch, ' '},
    {ch, ' ', ' ', ' ', ' '},
    {ch, ' ', ' ', ' ', ' '}
};

char T[5][5] = {
    {ch, ch, ch, ch, ch},
    {' ', ' ', ch, ' ', ' '},
    {' ', ' ', ch, ' ', ' '},
    {' ', ' ', ch, ' ', ' '},
    {' ', ' ', ch, ' ', ' '}
};

char H[5][5] = {
    {ch, ' ', ' ', ' ', ch},
    {ch, ' ', ' ', ' ', ch},
    {ch, ch, ch, ch, ch},
    {ch, ' ', ' ', ' ', ch},
    {ch, ' ', ' ', ' ', ch}
};

char B[5][5] = {
    {ch, ch, ch, ch, ' '},
    {ch, ' ', ' ', ch, ' '},
    {ch, ch, ch, ch, ' '},
    {ch, ' ', ' ', ch, ' '},
    {ch, ch, ch, ch, ' '}
};

    // Print IMRAN in the same line
    
    for(int i=0;i<7;i++){
      for (int i = 0; i < 5; i++) {
        // Print 'I'
        
        for (int j = 0; j < 5; j++) {
            cout << K[i][j] << " ";
        }
        cout << "  "; // Add space between letters
        for (int j = 0; j < 5; j++) {
            cout << L[i][j] << " ";
        }
        cout << "  "; // Add space between letters
        for (int j = 0; j < 5; j++) {
            cout << I[i][j] << " ";
        }
        cout << "  "; // Add space between letters

        // Print 'M'
        for (int j = 0; j < 5; j++) {
            cout << M[i][j] << " ";
        }
        cout << "  "; // Add space between letters

        // Print 'R'
        for (int j = 0; j < 5; j++) {
            cout << R[i][j] << " ";
        }
        cout << "  "; // Add space between letters

        // Print 'A'
        for (int j = 0; j < 5; j++) {
            cout << A[i][j] << " ";
        }
        cout << "  "; // Add space between letters

        // Print 'N'
        for (int j = 0; j < 5; j++) {
            cout << N[i][j] << " ";
        }
        cout << "  ";
         // Add space between letters
          // Add space between letters
        for (int j = 0; j < 2; j++) {
            cout << J[i][j] << " ";
        }
        cout << "  ";
        // Print 'P'
        for (int j = 0; j < 5; j++) {
            cout << P[i][j] << " ";
        }
        cout << "  ";
        // Print 'A'
        for (int j = 0; j < 5; j++) {
            cout << A[i][j] << " ";
        }
        cout << "  "; // Add space between letters
        // Print 'A'
        for (int j = 0; j < 5; j++) {
            cout << R[i][j] << " ";
        }
        cout << "  "; // Add space between letters
        // Print 'A'
        for (int j = 0; j < 5; j++) {
            cout << T[i][j] << " ";
        }
        cout << "  "; // Add space between letters
        // Print 'A'
        for (int j = 0; j < 5; j++) {
            cout << H[i][j] << " ";
        }
        cout << "  "; // Add space between letters
        // Print 'A'
        for (int j = 0; j < 5; j++) {
            cout << I[i][j] << " ";
        }
        cout << "  "; // Add space between letters
        // Print 'A'
        for (int j = 0; j < 5; j++) {
            cout << B[i][j] << " ";
        }
        cout << "  "; // Add space between letters
        
        cout << endl; // Move to the next line after printing each row of letters
        
    } 
    cout<<endl; 
    }
    return 0;
}
