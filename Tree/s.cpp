class Solution
{
public:
  bool checkIfExist(vector<int> &arr)
  {

    set<int> s;
    for (int i = 0; i < arr.size(); i++)
    {
      if ((s.find(arr[i]) != s.end()) || (arr[i] % 2 == 0 && s.find(arr[i] / 2) != s.end()))
      {
        return true;
      }
      else
      {
        s.insert(arr[i]);
      }
    }
  }
};
int main()
{
  vector<int> v = {1, 2, 3, 4};
  v = plusOne(v);
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i];
  }
}
