
#include "Character_Buffer.hpp"



namespace cuttlefish
{


Spin_Lock Character_Buffer_Flusher<std::ofstream>::lock; // Definition of the static lock of `Character_Buffer_Flusher`.


}
