#include "Rearrange.h"

Individual Rearrange::mutate(Individual i, int k){
    if(k > i.getLength()){
        int dividend = k / i.getLength();
        k = k - (dividend * i.getLength());
    }

    std::string list_pre_k; std::string list_post_k_inc_k;
    std::string full_list = i.getString();

    for(int x = 0; x < k; x++){list_pre_k += full_list[x];}
    for(int x = k; x < i.getLength(); x++){list_post_k_inc_k += full_list[x];}

    Individual new_indie(list_post_k_inc_k + list_pre_k);
    return new_indie;

}
