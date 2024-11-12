#include <iostream>
#include <math.h>
#include <iomanip>

#define PI 3.14159
#define G 9.80665

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double h, angle, v, Vox, Voy, Ts, H, Vfy, Td, Tt, D;
    int p1, p2, n;

    while(cin >> h)
    {
        cin >> p1 >> p2;
        cin >> n;

        for(int i=0; i<n; i++)
        {
            cin >> angle >> v;

            angle = angle * PI / 180;//convert digree into radian
            Vox = v * cos(angle);//veloxity x component
            Voy = v * sin(angle);//velocity y componect

            Ts = Voy /  G;//v=u+at
            H = (Voy*Voy) / (2 *  G) + h;
            Vfy = sqrt(2 * G * H);
            Td = Vfy /  G;
            Tt = Ts + Td;
            D = Vox * Tt;//distance calculation

            if(D > p1 && D < p2)
                cout << fixed << setprecision(5) << D << " -> DUCK" << endl;
            else
                cout << fixed << setprecision(5) << D << " -> NUCK" << endl;

        }

    }
}
