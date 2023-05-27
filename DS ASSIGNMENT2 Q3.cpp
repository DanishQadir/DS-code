#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

class City {
public:
    City(int dist, int num) : distance(dist), number(num) {}
    int distance;
    int number;
};

class CityComparator {
public:
    bool operator() (const City& c1, const City& c2) {
        return c1.distance > c2.distance || (c1.distance == c2.distance && c1.number > c2.number);
    }
};

class NGO {
public:
    void findClosestCities(int N, int S, int K, const int cities[][2]) {
        priority_queue<City, vector<City>, CityComparator> pq;
        for (int i = 0; i < N; i++) {
            int distance = abs(S - cities[i][1]); 
            if (cities[i][0] >= 0) { 
                pq.push(City(distance, cities[i][1]));
            }
        }
        int closest_cities[K];
        for (int i = 0; i < K && !pq.empty(); i++) {
            closest_cities[i] = pq.top().number;
            pq.pop();
        }
        cout << "Closest neighboring cities:\n";
        for (int i = 0; i < K; i++) {
            cout << closest_cities[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int N = 5; 
    int S = 0;
    int K = 3; 
    int cities[][2] = {
        {-21, 1},
        {21, 2}, 
        {4, 3},
        {-12, 4}, 
		 {20, 5} 
    };
    
    NGO myNGO;
    myNGO.findClosestCities(N, S, K, cities);
    
    return 0;
}

