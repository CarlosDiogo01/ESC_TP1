c NPROCS = 32 CLASS = C
c  
c  
c  This file is generated automatically by the setparams utility.
c  It sets the number of processors and the class of the NPB
c  in this directory. Do not modify it by hand.
c  
        character class
        parameter (class ='C')
        integer m, npm
        parameter (m=32, npm=32)
        logical  convertdouble
        parameter (convertdouble = .false.)
        character*11 compiletime
        parameter (compiletime='06 Mar 2016')
        character*5 npbversion
        parameter (npbversion='3.3.1')
        character*6 cs1
        parameter (cs1='mpif77')
        character*9 cs2
        parameter (cs2='$(MPIF77)')
        character*17 cs3
        parameter (cs3='-lmpi -lgfortran ')
        character*6 cs4
        parameter (cs4='(none)')
        character*14 cs5
        parameter (cs5='-O3 -lgfortran')
        character*15 cs6
        parameter (cs6='-O3 -lgfortran ')
        character*6 cs7
        parameter (cs7='randi8')
