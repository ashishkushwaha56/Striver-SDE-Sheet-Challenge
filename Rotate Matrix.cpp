/* Problem link :- https://www.codingninjas.com/codestudio/problems/rotate-matrix_981260?topList=striver-sde-sheet-problems&leftPanelTab=1 */

#include <bits/stdc++.h> 

int temp;

void f(vector<vector<int>> &mat, bool &ok, int &val, int i, int j, int &left_bound, int &right_bound, int &upper_vound, int &lower_vound, pair<int, int> &start) {
    if (!ok) {
        // f(v,)
        ok = true;
        // if(i == start.ff and j == )
        val = mat[i][j];
        if (i == upper_vound and (j >= left_bound and j < right_bound)) {
            f(mat, ok, val, i, (j + 1), left_bound, right_bound, upper_vound, lower_vound, start);
        }
        else if (j == right_bound and (i >= upper_vound and i < lower_vound)) {
            f(mat, ok, val, (i + 1), (j), left_bound, right_bound, upper_vound, lower_vound, start);
        }
        else if (i == lower_vound and (j <= right_bound and j > left_bound)) {
            f(mat, ok, val, i, (j - 1), left_bound, right_bound, upper_vound, lower_vound, start);
        }
        else if (j == left_bound and (i <= lower_vound and i > upper_vound)) {
            f(mat, ok, val, (i - 1), (j), left_bound, right_bound, upper_vound, lower_vound, start);
        }
    }
    if (i == start.first and j == start.second) {
        mat[i][j] = val;
        return;
    }
    temp = mat[i][j];
    mat[i][j] = val;
    val = temp;
    if (i == upper_vound and (j >= left_bound and j < right_bound)) {
        f(mat, ok, val, i, (j + 1), left_bound, right_bound, upper_vound, lower_vound, start);
    }
    else if (j == right_bound and (i >= upper_vound and i < lower_vound)) {
        f(mat, ok, val, (i + 1), (j), left_bound, right_bound, upper_vound, lower_vound, start);
    }
    else if (i == lower_vound and (j <= right_bound and j > left_bound)) {
        f(mat, ok, val, i, (j - 1), left_bound, right_bound, upper_vound, lower_vound, start);
    }
    else if (j == left_bound and (i <= lower_vound and i > upper_vound)) {
        f(mat, ok, val, (i - 1), (j), left_bound, right_bound, upper_vound, lower_vound, start);
    }
}

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
//     ll n, m;
//     cin >> n >> m;
//     vector<vector<ll>> v(n, vector<ll>(m));
//     for() {
//         cin >> v[i];
//     }
    int g = min(m, n);
    int count = g / 2;
    int left_bound = 0;
    int right_bound = m - 1;
    int upper_vound = 0;
    int lower_vound = n - 1;
    bool ok = false;
    pair<int, int> p;
    int val;
    for (int i = 0; i < count; i++) {
        val = mat[i][i];
        p = {i, i};
        f(mat, ok, val, i, i, left_bound, right_bound, upper_vound, lower_vound, p);
        left_bound++;
        upper_vound++;
        right_bound--;
        lower_vound--;
        ok = false;
    }

}
