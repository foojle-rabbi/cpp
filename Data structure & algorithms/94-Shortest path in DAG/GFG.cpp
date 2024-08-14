/*
Ki solve kormu vai eitao je coder army etto easy kore bujhaibe vabte pari nai. eita toh mante hobe je banda accha hi padatahe
jai hoook oikhane onek shundor kore concept clear koray. tar sathe toh abar ache hello world er channel. pera nai chill
ekta theke na bujhte parle arekta theke bujhbo. 

toh ekhon asi how solve this problem? 
problem solve korar jono just 3 ta step follow korte hobe. 
    1. first make adjacency list
    2. Find the topological sort of that graph
    3. in the return you will get a stack.
    4. now empty the stack with just a one line of extra code. 

but tar poreo eikhane koyekta jinish missing ache jemon. amader jei graph ta deoya thakbe sheta hobe weighted graph. ar 
amader ei vector er moddhe edges gula deoya thakbe sheta hobe 2d array. jar moddhe 3 ta row thakbe. toh first ta hobe u 
second ta hobe aamr v ar third ta hobe amar weight. 

er sathe amra jei adj vector nibo oitar moddheo kichu changes anbo. like vector<pair<int, int> adj[size]; ar amader jei ans 
vector hobe oitare first e INT_MAX diye initialize korbo. ar last e return korar shomoy jeigualr value int max hobe oigular 
moddhe -1 set kore ans return korbo. 

eituku e. baas
*/