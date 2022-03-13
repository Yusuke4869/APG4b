#include <bits/stdc++.h>
using namespace std;

void print_int(int x) {
  cout << x << endl;
}

void print_vec(vector<int> vec) {
  cout << "[ ";
  for (int i = 0; i < vec.size(); i++) {
    cout << vec.at(i) << " ";
  }
  cout << "]" << endl;
}

int main() {
  int N;
  cin >> N;
  map<string, int> int_dic;
  map<string, vector<int>> vec_dic;

  string order, var, sign, tmp;
  int score;
  vector<vector<int>> vec_score(2);

  for (int i = 0; i < N; i++) {
    cin >> order;
    var = "";
    sign = "";
    tmp = "";
    score = 0;
    vec_score = {{}, {}};

    if (order == "int") {
      cin >> var >> sign >> tmp;
      if (int_dic.count(tmp)) score = int_dic[tmp];
      else score = stoi(tmp);

      while (tmp != ";") {
        if (tmp == "+" || tmp == "-") sign = tmp;
        else if (int_dic.count(tmp)) {
          if (sign == "+") score+=int_dic[tmp];
          else if (sign == "-") score-=int_dic[tmp];
        } else {
          if (sign == "+") score+=stoi(tmp);
          else if (sign == "-") score-=stoi(tmp);
        }

        cin >> tmp;
      }
      int_dic[var] = score;
    } else if (order == "print_int") {
      cin >> tmp;
      if (int_dic.count(tmp)) score = int_dic[tmp];
      else score = stoi(tmp);

      while (tmp != ";") {
        if (tmp == "+" || tmp == "-") sign = tmp;
        else if (int_dic.count(tmp)) {
          if (sign == "+") score+=int_dic[tmp];
          else if (sign == "-") score-=int_dic[tmp];
        } else {
          if (sign == "+") score+=stoi(tmp);
          else if (sign == "-") score-=stoi(tmp);
        }

        cin >> tmp;
      }
      print_int(score);
    } else if (order == "vec") {
      cin >> var >> sign >> tmp;

      while (tmp != ";") {
        if (tmp == "[") score++;
        else if (tmp == "]") {
          if (score == 2) {
            if (sign == "+") {
              for (int j = 0; j < vec_score[0].size(); j++) {
                vec_score[0][j]+=vec_score[1][j];
              }
            } else if (sign == "-") {
              for (int j = 0; j < vec_score[0].size(); j++) {
                vec_score[0][j]-=vec_score[1][j];
              }
            }
            score--;
            vec_score[1] = {};
          }
        } else if (tmp == ",") {
          cin >> tmp;
          continue;
        } else if (tmp == "+" || tmp == "-") sign = tmp;
        else if (vec_dic.count(tmp)) {
          vec_score[score] = vec_dic[tmp];
          score++;

          if (score == 2) {
            if (sign == "+") {
              for (int j = 0; j < vec_score[0].size(); j++) {
                vec_score[0][j]+=vec_score[1][j];
              }
            } else if (sign == "-") {
              for (int j = 0; j < vec_score[0].size(); j++) {
                vec_score[0][j]-=vec_score[1][j];
              }
            }
            score--;
            vec_score[1] = {};
          }
        } else if (int_dic.count(tmp)) vec_score[score - 1].push_back(int_dic[tmp]);
        else vec_score[score - 1].push_back(stoi(tmp));

        cin >> tmp;
      }
      vec_dic[var] = vec_score[0];
    } else if (order == "print_vec") {
      cin >> tmp;

      while (tmp != ";") {
        if (tmp == "[") score++;
        else if (tmp == "]") {
          if (score == 2) {
            if (sign == "+") {
              for (int j = 0; j < vec_score[0].size(); j++) {
                vec_score[0][j]+=vec_score[1][j];
              }
            } else if (sign == "-") {
              for (int j = 0; j < vec_score[0].size(); j++) {
                vec_score[0][j]-=vec_score[1][j];
              }
            }
            score--;
            vec_score[1] = {};
          }
        } else if (tmp == ",") {
          cin >> tmp;
          continue;
        } else if (tmp == "+" || tmp == "-") sign = tmp;
        else if (vec_dic.count(tmp)) {
          vec_score[score] = vec_dic[tmp];
          score++;

          if (score == 2) {
            if (sign == "+") {
              for (int j = 0; j < vec_score[0].size(); j++) {
                vec_score[0][j]+=vec_score[1][j];
              }
            } else if (sign == "-") {
              for (int j = 0; j < vec_score[0].size(); j++) {
                vec_score[0][j]-=vec_score[1][j];
              }
            }
            score--;
            vec_score[1] = {};
          }
        } else if (int_dic.count(tmp)) vec_score[score - 1].push_back(int_dic[tmp]);
        else vec_score[score - 1].push_back(stoi(tmp));

        cin >> tmp;
      }
      print_vec(vec_score[0]);
    }
  }
}
