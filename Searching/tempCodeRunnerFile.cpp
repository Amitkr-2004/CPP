long long left=0;
        long long right=n;
        while(left<=right){
            long long k=left+(right-left)/2;
            if(((k*(k+1))/2)==n){
                return k;
            }
            else if(((k*(k+1))/2)<n){
                left=k+1;
            }
            else{
                right=k-1;
            }
        }
            return right;