    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            temp=0;
            for(int k=i;k<=j;k++){
                temp = temp + v[k];
            }
            if(sum<temp)
                sum=temp;
        }
    }