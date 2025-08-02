#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

typedef struct student {
   string name;
   ll number;
   ll previous;
   ll next;
} student;

int main() {
   ll n;
   vector<student> students;

   while (true) {
      cin >> n;
      if (n == 0) break;
      for (ll i = 0; i < n; i++) {
         student p;
         cin >> p.name >> p.number;
         if (i == 0) p.previous = n - 1;
         else p.previous = i - 1;
         if (i == n - 1) p.next = 0;
         else p.next = i + 1;
         students.push_back(p);
      }
      ll num = students[0].number;
      ll current = 0;

      while (n > 1) {

         if (num % 2 != 0) {
            // Clockwise direction (odd token)
            for (ll i = 0; i < num; i++) {
               current = students[current].next;
            }
         }
         else {
            // Counterclockwise direction (even token)
            for (ll i = 0; i < num; i++) {
               current = students[current].previous;
            }
         }
         num = students[current].number;

         // Update pointers to remove current participant from the circle
         students[students[current].previous].next = students[current].next;
         students[students[current].next].previous = students[current].previous;

         // Decrease number of participants
         n--;
      }
      // Output the winner
      printf("Vencedor(a): ");
      cout << students[students[current].next].name << endl;

      students.clear();
   }

}
