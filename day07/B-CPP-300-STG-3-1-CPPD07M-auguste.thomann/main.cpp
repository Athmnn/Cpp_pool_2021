#include "Federation.hpp"
#include "WarpSystem.hpp"
#include "Borg.hpp"
#include <iostream>

int main()
{
    Federation::Starfleet::Ship UssKreog(289, 132, "Kreog", 6);
    Federation ::Ship  Independent (150, 230, "Greok");
    WarpSystem :: QuantumReactor  QR;
    WarpSystem :: QuantumReactor  QR2;WarpSystem ::Core  core(&QR);
    WarpSystem ::Core  core2 (&QR2);
    UssKreog.setupCore (&core);
    UssKreog.checkCore ();
    Independent.setupCore (&core2);
    Independent.checkCore ();
    QR.setStability(false);
    QR2.setStability(false);
    UssKreog.checkCore ();
    Independent.checkCore ();
    
    Federation :: Starfleet ::Ship  UssKreog_ (289, 132, "Kreog", 6);
    Federation :: Starfleet :: Captain  James_("James T. Kirk");
    Federation :: Starfleet :: Ensign  Ensign_("Pavel Chekov");
    WarpSystem :: QuantumReactor  QR_;
    WarpSystem :: QuantumReactor  QR2_;
    WarpSystem ::Core  core_(&QR_);
    WarpSystem ::Core  core2_ (&QR2_);

    UssKreog_.setupCore (&core_);
    UssKreog_.checkCore ();
    UssKreog_.promote (&James_);

    Borg::Ship cube;
    cube.setupCore(&core2_);
    cube.checkCore();

    Federation :: Starfleet ::Ship  UssKreog__ (289, 132, "Kreog", 6, 6);

}
