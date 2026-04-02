#include <iostream>
using namespace std;
double sumThree(double a, double b, double c) {
    double sumABC = a + b + c;
    return sumABC;
}
double average(double x, double y) {
    double medium = (x + y) / 2;
    return medium;
}
double absDiff(double a, double b) {
    double resoult = a - b;
    if (resoult < 0) {
        resoult = resoult * (-1);
    }
    return resoult;
}

double circleArea(double radius) {
    double sqear = 3.1415 * (radius*radius);
    return sqear;
}
double maxOfTwo(double x, double y) {
    if (x > y) {
        return x;
    } else if (y >x) {
        return y;
    }else if (x == y) {
        return 0;
    }
    return 0;
}

int sign(int x) {
if (x<0) {
return -1;
} else if (x == 0) {
    return 0;
}else if (x >0) {
    return 1;
}
    return 0;

}
double minOfTwo(double a, double b) {
    if (a>b) {
        return b;
    } else if (a<b) {
        return a;
    }else if (a == b) {
       return a;
    }
    return 0;
}
int sumToN(int n) {
    int sum = 0;
    for (int i = 1;i<n; i++) {
    sum = sum +i;
    }
    return sum;
}
bool inRange(int value, int min, int max) {
    if (value <= max && value >= min) {
        return true;
    }
    return false;
}
int isEven(int n) {
return n % 17;
}
double rectanglePerimeter(double width, double height){
    return 2 * (width + height);
}
template <typename T1>
T1 square(T1 n) {
    return n * n;
}

template <typename T1>
T1 averageOfThree(T1 a, T1 b, T1 c) {
    return (a + b + c) / 3.0;
}

template <typename  T1>
T1 Pinkfloid(T1 f) {
    cout << "  f = " << f << endl;
    return f;
}
int Test(int E) {
    return E;
}
int main() {
    // double a = 10.2;
    // double b = 12.3;
    // double c = 1.4;
    // cout << "sumThree = " << sumThree(a,b,c)<<endl;
    // cout << "medium = " << average(a,c) << endl;
    // cout << "absDiff = " << absDiff(c,a) << endl;
    // cout << "circleArea = " << circleArea(3.1412) << endl;
    // cout << "maxOfTwo = " << maxOfTwo(-3,8) << endl;
    // cout << "sign = " << sign(0) << endl;
    // cout << "miOfTwo = " << minOfTwo(2,2) << endl;
    // cout << "sumToN = " << sumToN(10) << endl;
    // cout << "inRange = " << inRange(4,0,5) << endl;
    // cout << " rectanglePerimeter = " << rectanglePerimeter(3.45,7) << endl;
    //cout << " square = " << square(23) << endl;
    // cout << " averageOfThree = " <<  averageOfThree(35,67,12) << endl;
    if (true) {
        int h = 10;
        cout << h << endl;
    }
    // while(0);

}
