// Get the Convex Hull with co-leaner poitns. O(nLog(n))

vector<Point> convex_hull(vector<Point> ans) {
    sort(ans.begin(), ans.end());
    vector<Point> up,low;
    up.push_back(ans[0]);
    for(int i = 1; i < ans.size(); i++) {
        while(up.size() > 1 && ((up.back() - up[up.size() - 2])^(ans[i] - up.back())) > 0LL) {
            up.pop_back();
        }
        up.push_back(ans[i]);
    }

    low.push_back(ans.back());
    for(int i = int(ans.size()) - 2; i >= 0; i--) {
        while(low.size() > 1 && ((low.back() - low[low.size() - 2])^(ans[i] - low.back())) > 0LL) {
            low.pop_back();
        }
        low.push_back(ans[i]);
    }

    for(int i = 1; i < int(low.size()) - 1; i++) {
        up.push_back(low[i]);
    }
    return up;
}