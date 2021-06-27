int findMaxHeight(vector<Box>& boxes, int bottom_box_index, int index)
{
 
    // base case
    if (index < 0)
        return 0;
 
    if (dp[index] != -1)
        return dp[index];
 
    int maximumHeight = 0;
 
    // recurse
    for (int i = index; i >= 0; i--) {
 
    
        if (bottom_box_index == -1)
 
           
            || (boxes[i].length
                    < boxes[bottom_box_index].length
                && boxes[i].width
                       < boxes[bottom_box_index].width))
 
            maximumHeight
                = max(maximumHeight,
                      findMaxHeight(boxes, i, i - 1)
                          + boxes[i].height);
    }
 
    return dp[index] = maximumHeight;
}
 

int maxStackHeight(int height[], int width[], int length[],
                   int types)
{
    // creating a vector of type Box class
    vector<Box> boxes;
 
    // Initialize dp array with -1
    memset(dp, -1, sizeof(dp));
 
    Box box;
 
 
    for (int i = 0; i < types; i++) {
 
    
        box.height = height[i];
        box.length = max(length[i], width[i]);
        box.width = min(length[i], width[i]);
 
        boxes.push_back(box);
 
     
        box.height = width[i];
        box.length = max(length[i], height[i]);
        box.width = min(length[i], height[i]);
 
        boxes.push_back(box);
 
    
        box.height = length[i];
        box.length = max(width[i], height[i]);
        box.width = min(width[i], height[i]);
 
        boxes.push_back(box);
    }
 
   
    sort(boxes.begin(), boxes.end(), [](Box b1, Box b2) {
   
        return (b1.length * b1.width)
               < (b2.length * b2.width);
    });
   
=
 
    return findMaxHeight(boxes, -1, boxes.size() - 1);
}
