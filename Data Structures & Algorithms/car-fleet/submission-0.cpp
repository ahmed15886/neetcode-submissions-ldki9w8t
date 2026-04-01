class Solution {
public:
    int carFleet(int target, vector<int>& pos, vector<int>& speed) {
    vector<pair<int,int>> cars;
    for (int i = 0; i < pos.size(); i++) cars.push_back({pos[i], speed[i]});
    sort(cars.rbegin(), cars.rend());
    
    int res = 0; double cur = 0;
    for (auto& [p, s] : cars) {
        double time = (double)(target - p) / s;
        if (time > cur) { cur = time; res++; }
    }
    return res;
}
};