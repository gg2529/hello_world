
using namespace std;
#include <vector>


class A {

public:

void addValuetoVector( int a );
void printVector() const;

private:
vector<int> v;
typedef vector<int>::const_iterator it;

};
