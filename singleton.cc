#include <iostream>
using namespace std;
// There can be only once instance of CIFS server on a system so making this class as singlton
class CifsServer
{
public:
    static CifsServer &
    getInstance()
    {
        static CifsServer singletonObj;
        return singletonObj;
    }
    ~CifsServer() {}
   bool getLeasingCap() const;
   void setLeasingCap(int cap);
   private:
    CifsServer()
          : _LeasingCap(1)
    {
    }
    bool _LeasingCap;
};

inline bool
CifsServer::getLeasingCap() const
{
    return _LeasingCap;
}

inline void
CifsServer::setLeasingCap(int cap)
{
    _LeasingCap = cap;
}

int main() {
	cout << "Leasing cap=" << CifsServer::getInstance().getLeasingCap();
	CifsServer::getInstance().setLeasingCap(0);
	cout << "Leasing cap for next time when we call getInstace is=" << CifsServer::getInstance().getLeasingCap();
}
