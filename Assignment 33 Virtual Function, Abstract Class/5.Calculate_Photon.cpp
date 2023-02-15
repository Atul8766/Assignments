#include <iostream>
#include <cmath>
using namespace std;

class Photon
{
    protected:
    double wave;
    virtual void set_value(double val)=0;

};
class Calculate_PhotonEnergy : public Photon
{
    public:
    void set_value(double val)
    {
        wave = val;
    }
    void calculate()
    {
        // Photon Formula E = hc/lamda
        /*
        E = photon energy,

        h = Planck’s constant (6.626×10^-34)

        c = speed of light (3*108*10^8 m/s)

        λ = wavelength of the light. (Given)
        */
       double E = (6.262*pow(10,-34))*((3)*pow(10,8))/wave*pow(10,-9);
       cout<<"E = "<<E;
    }
};

int main()
{
    Calculate_PhotonEnergy p1;
    p1.set_value(650);
    p1.calculate();
    return 0;
}