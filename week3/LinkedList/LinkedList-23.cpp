struct Node* multiplyTwoLists(struct Node* first, 
                        struct Node* second) 
{ 
    
    int m = reverse(&first), n = reverse(&second); 
  
   
    struct Node* result = make_empty_list(m + n + 1); 
  
    
    struct Node *second_ptr = second, 
        *result_ptr1 = result, *result_ptr2, *first_ptr; 
  
    while (second_ptr) { 
  
        int carry = 0; 
  
        
        result_ptr2 = result_ptr1; 
  
        first_ptr = first; 
  
        while (first_ptr) { 
  
            
            int mul = first_ptr->data * second_ptr->data 
                    + carry; 
  
           
            result_ptr2->data += mul % 10; 
  
             
            carry = mul / 10 + result_ptr2->data / 10; 
            result_ptr2->data = result_ptr2->data % 10; 
  
            first_ptr = first_ptr->next; 
            result_ptr2 = result_ptr2->next; 
        } 
  
        if (carry > 0) { 
            result_ptr2->data += carry; 
        } 
  
        result_ptr1 = result_ptr1->next; 
        second_ptr = second_ptr->next; 
    } 
  
    reverse(&result); 
    reverse(&first); 
    reverse(&second)
