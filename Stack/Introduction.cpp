//How to Identify if it's a stack problem: (Aditya verma playlist)
//1. It'll be an array question (usually for array question you apply either stack or heap but with heap you'll feel like sorting)
//2. If you have written brute force solution of O(n^2) where we have depended loop, where j(nested loop) value depends on i, here you can write a better solution using stack.
//First identify the pattern(from those you have studied) then if there can be any variation from it.
//_______________________________________________________________________________________________________________________________________________________________________________
// (Geeks for geeks offline course)
//To implement any solution that requires you to remove elements from between adn thenr estack them without any gap, usually we use stack for such problems
//Also, to implement insertion, access the last element, as well remove the last element, for such operation we'll use stack that has LIFO implementation (Last in first out)


//Gfg Lec 1:
st.size(): to check size of stack
underflow: when you try to call when stack is empty(common)
overflow: when push called on full st(unlikely)

//Why use stack when vector has the above features? bcz it is a legacy ds and was here before vector(but companies might not use stack since vector can handle it)

//Note:
//In the NGE question: we need return in order hence we can follow two approaches: 1. maintain a hashmap but that would increase space complexity
                                                                                //2. Use array index feature itself(hence instead of element append index)

