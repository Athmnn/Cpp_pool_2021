/*
** WarpSystem.hpp for B-CPP-300-STG-3-1-CPPD07M-auguste.thomann in /home/auguste/delivery/tek2/CPP_pool/day07/B-CPP-300-STG-3-1-CPPD07M-auguste.thomann
**
** Made by 
** Login   <>
**
** Started on  Wed Jan 13 09:11:33 2021 
** Last update Thu Jan 13 09:11:36 2021 
*/

#ifndef __WARP_SYSTEM__
#define __WARP_SYSTEM__

namespace WarpSystem {
    class QuantumReactor {
    private:
        bool _stabilty = true;

    public:
        bool isStable() const;
        void setStability(bool const visibility);
    };

    class Core {
    public:
        QuantumReactor *_coreReactor;

        QuantumReactor *checkReactor() const;

        explicit Core(QuantumReactor *quantumReactor);
    };
}

#endif /* __WARP_SYSTEM__ */
