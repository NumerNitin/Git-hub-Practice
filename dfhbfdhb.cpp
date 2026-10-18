// #include <iostream>
// #include <string>
// using namespace std;

// class Player {
// public:
//     string name;
//     void greet() { 
//         cout << "Hello, " << name << "!\n"; }
// };

// int main() {
//     Player p1;
//     p1.name = "Charlie";

//     // 1. Declaration and Binding
//     // Must be bound instantly; no ampersand used on the right side
//     Player &ref = p1; 

//     // 2. Accessing members via reference
//     // ref.greet();          // Outputs: Hello, Charlie!
//     ref.name = "David";   // Directly alters p1.name
//     ref.greet();          // Outputs: Hello, Charlie!

//     // Note: Attempting to do "ref = p2" later will not rebind the reference. 
//     // It will instead overwrite p1's underlying values with p2's data.

//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;

class Player {
public:
    string name;
    void greet() { 
        std::cout << "Hello, " << name << "!\n"; }
};

int main() {
    Player p1;
    p1.name = "Alice";

    // 1. Declaration and Assignment
    // The ampersand (&) extracts the memory address of p1
    Player* ptr = &p1; 

    // 2. Accessing members via pointer
    ptr->greet();          // Outputs: Hello, Alice!
    ptr->name = "Bob";     // Directly alters p1.name
    
    // 3. Pointer reassignment and Nullability
    ptr = nullptr;         // Perfectly valid
    
    return 0;
}