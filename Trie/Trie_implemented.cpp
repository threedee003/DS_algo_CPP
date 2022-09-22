#include <bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define nline "\n"
#define int long long
const int inf = 2e9+10;
const int N = 1e5+10;
const float pi = 3.14159;



class TrieNode{
public:
   char data;
   TrieNode* children[26];
   bool isTerminal;

   TrieNode(char c){
      data = c;
      for(int i = 0; i < 26; ++i){
         children[i] = nullptr;
      }
      isTerminal = false;
   }
};


class Trie{
public:
   TrieNode* root;

   Trie(){
      root = new TrieNode('\0');
   }

   void insertUtil(TrieNode* root, string word){
      //base case
      if(word.size() == 0){
         root->isTerminal = true;
         return;
      }
      // word is in caps
      int index = word[0]-'A';
      TrieNode* child;
      // if present
      if(root->children[index] != nullptr){
         child = root->children[index];
      }
      // if absent
      else{
         child = new TrieNode(word[0]);
         root->children[index] = child;
      }

      insertUtil(child,word.substr(1));

   }

   void insertWord(string word){
      insertUtil(root,word);
   }


   bool searchUtil(TrieNode* root,string word){
      if(word.size() == 0){
         return root->isTerminal;
      }
      int index = word[0]-'A';
      TrieNode* child;


      //if present
      if(root->children[index] != nullptr){
         child = root->children[index];
      }

      //if absent
      else{
         return false;
      }

      return searchUtil(child,word.substr(1));
   }





   bool search(string word){
      return searchUtil(root,word);
   }







};








int32_t main(){
   Trie* t  = new Trie();
   t->insertWord("HELLO");
   cout << "Present : " << t->search("HELL") << nline;
   return 0;
}
