C $Header: /u/gcmpack/MITgcm/pkg/gchem/GCHEM.h,v 1.14 2016/05/23 13:09:31 jmc Exp $
C $Name:  $

#ifdef ALLOW_GCHEM

CBOP
C    !ROUTINE: GCHEM.h
C    !INTERFACE:

C    !DESCRIPTION:
C Contains tracer parameters and input files for chemical tracers.
C These can be read in from data.gchem
C
C--   COMMON /GCHEM_PARM_L/ Logical valued parameters used by GCHEM pkg.
C     useCFC    :: flag to turn on/off CFC pkg
C     useDIC    :: flag to turn on/off DIC pkg
C     useBLING  :: flag to turn on/off BLING pkg
C     useDARWIN :: flag to turn on/off darwin pkg
C     useREcoM :: flag to turn on/off REcoM pkg
C     useBIMAP :: flag to turn on/off BIMAP pkg
C     useFGM   :: flag to turn on/off FGM pkg
C
C--   COMMON /GCHEM_PARAMS/
C  nsubtime    :: number of chemistry timesteps per deltaTtracer
C                 (default 1)
C  Filename*   :: various spare filenames
C  gchem_int*  :: place holder to read in a integer number, set at run time
C  gchem_rl*   :: place holder to read in a real number, set at run time
C  gchem_ForcingPeriod :: periodic forcing parameter specific for gchem (seconds)
C  gchem_ForcingCycle  :: periodic forcing parameter specific for gchem (seconds)

CEOP

      COMMON /GCHEM_PARM_L/
     &              useCFC,
     &              useDIC,
     &              useBLING,
     &              useDARWIN
     &     ,useREcoM, useBIMAP, useFGM

      LOGICAL useCFC, useDIC, useBLING, useDARWIN
      LOGICAL useREcoM, useBIMAP, useFGM

      COMMON /GCHEM_PARAMS/
     &                   Filename1,
     &                   Filename2,
     &                   Filename3,
     &                   Filename4,
     &                   Filename5,
     &                   nsubtime,
     &           gchem_int1, gchem_int2, gchem_int3,
     &           gchem_int4, gchem_int5,
     &           gchem_rl1, gchem_rl2, gchem_rl3,
     &           gchem_rl4, gchem_rl5,
     &           gchem_ForcingPeriod, gchem_ForcingCycle

      INTEGER nsubtime
      CHARACTER*(MAX_LEN_FNAM) Filename1
      CHARACTER*(MAX_LEN_FNAM) Filename2
      CHARACTER*(MAX_LEN_FNAM) Filename3
      CHARACTER*(MAX_LEN_FNAM) Filename4
      CHARACTER*(MAX_LEN_FNAM) Filename5
      INTEGER gchem_int1
      INTEGER gchem_int2
      INTEGER gchem_int3
      INTEGER gchem_int4
      INTEGER gchem_int5
      _RL     gchem_rl1
      _RL     gchem_rl2
      _RL     gchem_rl3
      _RL     gchem_rl4
      _RL     gchem_rl5
      _RL     gchem_ForcingPeriod
      _RL     gchem_ForcingCycle

#endif /* ALLOW_GCHEM */
