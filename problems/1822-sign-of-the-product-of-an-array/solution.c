int arraySign(int* nums, int numsSize) {
    
    int negative = 0;

    for(int i = 0 ; i < numsSize ; i++){
        if(nums[i] == 0){
            return 0;
        }

        if(nums[i] < 0){
            negative++;
        }
    }

    if(negative % 2 == 0){
        return 1;
    }else{
        return -1;
    }

}
