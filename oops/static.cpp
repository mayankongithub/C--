#include<iostream>
using namespace std;
class bike{
public:
    //STATIC FUNCTION IS MADE IN CLASS 
    static int noOfBikes;
    int tyreSize;
    int engine;

    bike(int tyreSize,int engine){
        this->tyreSize = tyreSize;
        this->engine = engine;
    }
    //STATIC FUNCTION
    static void increasenoofbikes(){
        noOfBikes++;
    }

};
//THIS IS USED IF OUR STATIC FUNTION IS NOT CREATED
int bike ::  noOfBikes = 10;
int main(){
    bike tvs(15,100);
    bike hero(17,150);
    bike honda(20,200);
    //tvs.increasenoofbikes();
    cout << tvs.tyreSize << endl;
    cout << tvs.engine << endl;

    cout << tvs.noOfBikes << endl;// this is first method similarly

    hero.increasenoofbikes();// && bike :: increasenoofbikes both are same
    cout << hero.tyreSize << endl;
    cout << hero.engine << endl;

    cout << hero.noOfBikes << endl;

    cout << honda.tyreSize<<endl;
    cout << honda.engine<<endl;
    bike :: increasenoofbikes(); // bike :: incresenoofbikes means give the value which is in bike

    cout << honda.noOfBikes << endl;
}