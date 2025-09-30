#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool valid(vector<vector<char>>& board,int sr,int re,int sc,int ce){
        unordered_set<char> st;
        for(int i=sr;i<=re;i++){
            for(int j=sc;j<=ce;j++){
                if(board[i][j]=='.') continue;
                if(st.find(board[i][j])!=st.end()){
                    return false;
                }
                st.insert(board[i][j]);
            }
        }
        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        // check rows
        for(int i=0;i<9;i++){
            unordered_set<char> st;
            for(int j=0;j<9;j++){
                if(board[i][j]=='.') continue;
                if(st.find(board[i][j])!=st.end()){
                    return false;
                }
                st.insert(board[i][j]);
            }
        }

        
        // check columns
        for(int j=0;j<9;j++){
            unordered_set<char> st;
            for(int i=0;i<9;i++){
                if(board[i][j]=='.') continue;
                if(st.find(board[i][j])!=st.end()){
                    return false;
                }
                st.insert(board[i][j]);
            }
        }

        // check 3x3 sub-grids
        for(int sr=0;sr<9;sr+=3){
            int re=sr+2;
            for(int sc=0;sc<9;sc+=3){
                int ce=sc+2;
                if(!valid(board,sr,re,sc,ce)) return false;
            }
        }

        return true;
    }
};
