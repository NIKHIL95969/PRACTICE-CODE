# Maps
-Maps are associative containers that store elements in a mapped fashion. Each element has a key value and a mapped value. No two mapped values can have the same key values.

### Types 
- Ordered maps 
- Unordered maps

## Syntax
- map<Datatype,Datatpye> name;
- map<int,int> mp;

## NOTE:
- insertion and acces in map take O(log n) time
- map work on the red black trees
- map store unique data and in sorted order
- if the value of any key value exit the then the existing value replace with new value
- if you use the m.find(3);(m = nameofmap and 3 = key) function to find the value in map if it not exit it give the m.end();

![map code](map.png)