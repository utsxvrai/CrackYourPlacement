class Solution {
public:
    int power(int n, int k){
        if(k == 0){
            return 1;
        }
        int z = n;
        for(int i = 1; i < k; i++){
            n = n * z;
        }
        return n;
    }


    string intToRoman(int num) {
        int a = num/1000;
        int amod = num%1000;
        int count=0;
        int tmp;
        while(amod){
            count++;
            amod = amod/10;
        }
        amod = num%1000;
        string tab[] = {"I", "V", "X", "L", "C", "D", "M"};
        string s = "";
        int k = power(10,4);
        cout << k ;
        for(int i = 0; i< num/1000; i++){
            s+="M";
        }
        for(int i = count-1; i>=0; i--){
            tmp =amod/power(10,i);
            if(tmp == 9){
                s+=tab[2*i];
                s+=tab[2*i+2];
            } else if (tmp == 4){
                s+=tab[2*i];
                s+=tab[2*i+1];
            } else {
                if(tmp >= 5){
                    tmp = tmp - 5;
                    s+=tab[2*i + 1];
                }
                for(int j = 0; j< tmp; j++){
                    s+=tab[2*i];
                }
            }
            cout << amod << "|";
            amod = amod%(power(10,i));
            
        }
        return s;
    }
};