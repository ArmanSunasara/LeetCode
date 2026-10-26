class TimeMap {
private:
    unordered_map<string, vector<pair<int, string>>> db;

public:
    TimeMap() {}

    void set(string key, string value, int timestamp) {

        db[key].push_back({timestamp, value});
    }

    string get(string key, int timestamp) 
    {

        if (db.find(key) == db.end()) {
            return "";
        }

        auto& hist = db[key];

        int l = 0;
        int r = hist.size() - 1;
        int ans = -1;

        while (l <= r) {
            int mid = (l + r) / 2;

                if (hist[mid].first <= timestamp) {
                    ans = mid;
                    l = mid + 1;
                } else {
                    r = mid - 1;
                }
        }
        if (ans == -1) {
            return "";
        }

        return hist[ans].second;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */