class Solution {
public:
    int calPoints(vector<string>& operations) {

        stack<int> placar;
        int totalScore = 0; 

        for(string c : operations){

            if(c == "+"){
                int aux = placar.top();
                placar.pop();
                
                int aux2 = placar.top() + aux;
                placar.push(aux);
                placar.push(aux2);

            } else if (c == "C") {

                placar.pop();

            } else if (c == "D"){
                int cDoubled = 2 * placar.top();
                placar.push(cDoubled);
            }

            else placar.push(stoi(c));
        }

        while (!placar.empty()){
            
            totalScore += placar.top();
            placar.pop();

        }

        return totalScore;

        
    }
};