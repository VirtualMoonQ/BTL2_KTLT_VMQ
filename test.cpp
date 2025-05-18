#include "hcmcampaign.h"

using namespace std;

// void testVehicle() {
//     Position pos(3, 4); // Assuming Position has a constructor like Position(int x, int y)
//     Vehicle v(10, 20, pos, VehicleType::TANK); // Use correct enum value from VehicleType
//     cout << v.getAttackScore();
//     // Test getAttackScore
//     // int expectedScore = (static_cast<int>(VehicleType::TANK) * 304 + 10 * 20) / 30;
//     // assert(v.getAttackScore() == expectedScore);

//     // Print string representation
//     std::string description = v.str();
//     std::cout << "Vehicle Description: " << description << std::endl;
// }

// int main() {
//     testVehicle();
//     std::cout << "All tests passed!" << std::endl;
//     return 0;
// }
// 
int main(){
    cout<< SPECIALFORCES << endl;
    Infantry specialOfLiber(5, 4, Position(3, 3), SPECIALFORCES);
    cout << specialOfLiber.str();
}