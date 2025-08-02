#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float num1, num2, num3, num4;
    cin >> num1 >> num2 >> num3 >> num4;

    float numAverage = ((num1 * 2) + (num2 * 3) + (num3 * 4) + (num4 * 1)) / 10;
    cout << fixed << "Media: " << setprecision(1) << numAverage << endl;
    if (numAverage >= 7.0)
    {
        cout << "Aluno aprovado." << endl;
    }
    else if (numAverage < 5.0)
    {
        cout << "Aluno reprovado." << endl;
    }
    else if (numAverage >= 5.0 && numAverage <= 6.9)
    {
        cout << "Aluno em exame." << endl;
        float num5;
        cin >> num5;
        cout << "Nota do exame: " << num5 << endl;
        float newAverage = (numAverage + num5) / 2;
        if (newAverage >= 5.0)
        {
            cout << "Aluno aprovado." << endl;
        }
        else if (newAverage <= 4.9)
        {
            cout << "Aluno reprovado." << endl;
        }
        cout << "Media final: " << newAverage << endl;
    }

    return 0;
}
