//SHL test: verbal, cognitive ability (not your average type though), sql, coding section (each section had it's own time limit)
//Verbal was ok, cognitive baility was ok too, the only negative was my speed and pie charts, I forgot their concept lol
//Sql went well along with coding questions, where I was able to solve both and pass all test cases (It was pretty easy honestly, haha)
//This was offline in campus, I was very sad for not getting shortlisted as my test went pretty well :(
//The only coding question I remember is given an array and a number k, sort in increasing order till k elements then sort it in decreasing order from that till the end of array
//and return array.
//Tbh, I just used in-built functions, maybe I shouldn't have? idk, I made two vectors, push_back till k in one and after in another then sort one and reverse sort other
//then concatenate array and return the first one as answer, and that worked honestly. Note, you have to take k value after array values input
//Code:
int main(){
  int n;
  cin>>n;
  vector<int> arr(n);
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  int k;
  cin>>k;
  vector<int> first_half;
  vector<int> second_half;
  for(int i=0; i<n; i++){
    if(i<k){
      first_half.push_back(arr[i]);
    }
    else if(i>=k){
      second_half.push_back(arr[i]);
    } 
  }
  sort(first_half.begin(), first_half.end());
  sort(second_half.begin(), second_half.end());
  reverse(second_half.begin(), second_half.end());
  first_half.insert(first_half.end(), second_half.begin(), second_half.end());
  for(int num: first_half){
    cout<<num<<" ";
  }
}
//General aptitude question that fried me bcz I literally forgot
/* Questions: How can I create a pie chart showing the profit gain percentages for four chemical grades produced by a company? Each grade costs $30,000 to produce, regardless of 
the number of litres made. For example, Grade 1 produced 675 litres and was sold at $250 per litre, and Grade 2 produced 250 litres and was sold at $300 per litre. 
  Similarly, the production quantity (in litres) and selling price per litre are given for Grade 3 and Grade 4. Based on this data, how can I calculate and represent 
the profit gain percentage for each grade in a pie chart?*/
/*Rules:
For each grade:
Revenue = litres × price_per_litre
Profit = Revenue − Cost

Profit percentage shown in the pie chart = (profit of that grade) ÷ (sum of profits of all included grades) × 100.*/
