//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//

#ifndef CRISPY_DOOM_ACTIONS_FWD_DECL_HPP
#define CRISPY_DOOM_ACTIONS_FWD_DECL_HPP

struct mobj_s;
struct player_s;
struct pspdef_t;

void  A_Light0(mobj_s*, player_s*, pspdef_t*);
void A_WeaponReady(mobj_s*, player_s*, pspdef_t*);
void A_Lower(mobj_s*, player_s*, pspdef_t*);
void A_Raise(mobj_s*, player_s*, pspdef_t*);
void A_Punch(mobj_s*, player_s*, pspdef_t*);
void A_ReFire(mobj_s*, player_s*, pspdef_t*);
void A_FirePistol(mobj_s*, player_s*, pspdef_t*);
void A_Light1(mobj_s*, player_s*, pspdef_t*);
void A_FireShotgun(mobj_s*, player_s*, pspdef_t*);
void A_Light2(mobj_s*, player_s*, pspdef_t*);
void A_FireShotgun2(mobj_s*, player_s*, pspdef_t*);
void A_CheckReload(mobj_s*, player_s*, pspdef_t*);
void A_OpenShotgun2(mobj_s*, player_s*, pspdef_t*);
void A_LoadShotgun2(mobj_s*, player_s*, pspdef_t*);
void A_CloseShotgun2(mobj_s*, player_s*, pspdef_t*);
void A_FireCGun(mobj_s*, player_s*, pspdef_t*);
void A_GunFlash(mobj_s*, player_s*, pspdef_t*);
void A_FireMissile(mobj_s*, player_s*, pspdef_t*);
void A_Saw(mobj_s*, player_s*, pspdef_t*);
void A_FirePlasma(mobj_s*, player_s*, pspdef_t*);
void A_BFGsound(mobj_s*, player_s*, pspdef_t*);
void A_FireBFG(mobj_s*, player_s*, pspdef_t*);
void A_BFGSpray(mobj_s*);
void A_Explode(mobj_s*);
void A_Pain(mobj_s*);
void A_PlayerScream(mobj_s*);
void A_Fall(mobj_s*);
void A_XScream(mobj_s*);
void A_Look(mobj_s*);
void A_Chase(mobj_s*);
void A_FaceTarget(mobj_s*);
void A_PosAttack (mobj_s*);
void A_Scream(mobj_s*);
void A_SPosAttack (mobj_s*);
void A_VileChase(mobj_s*);
void A_VileStart(mobj_s*);
void A_VileTarget (mobj_s*);
void A_VileAttack(mobj_s*);
void A_StartFire(mobj_s*);
void A_Fire(mobj_s*);
void A_FireCrackle(mobj_s*);
void A_Tracer(mobj_s*);
void A_SkelWhoosh (mobj_s*);
void A_SkelFist (mobj_s*);
void A_SkelMissile (mobj_s*);
void A_FatRaise(mobj_s*);
void A_FatAttack1 (mobj_s*);
void A_FatAttack2 (mobj_s*);
void A_FatAttack3 (mobj_s*);
void A_BossDeath(mobj_s*);
void A_CPosAttack(mobj_s*);
void A_CPosRefire (mobj_s*);
void A_TroopAttack(mobj_s*);
void A_SargAttack(mobj_s*);
void A_HeadAttack (mobj_s*);
void A_BruisAttack (mobj_s*);
void A_SkullAttack(mobj_s*);
void A_Metal(mobj_s*);
void A_SpidRefire(mobj_s*);
void A_BabyMetal(mobj_s*);
void A_BspiAttack(mobj_s*);
void A_Hoof(mobj_s*);
void A_CyberAttack(mobj_s*);
void A_PainAttack(mobj_s*);
void A_PainDie(mobj_s*);
void A_KeenDie(mobj_s*);
void A_BrainPain(mobj_s*);
void A_BrainScream(mobj_s*);
void A_BrainDie(mobj_s*);
void A_BrainAwake(mobj_s*);
void A_BrainSpit(mobj_s*);
void A_SpawnSound(mobj_s*);
void A_SpawnFly(mobj_s*);
void A_BrainExplode(mobj_s*);
// [crispy] additional BOOM and MBF states, sprites and code pointers
void A_Stop(mobj_s*);
void A_Die(mobj_s*);
void A_FireOldBFG(mobj_s*, player_s*, pspdef_t*);
void A_Detonate(mobj_s*);
void A_Mushroom(mobj_s*);
void A_BetaSkullAttack(mobj_s*);
// [crispy] more MBF code pointers
extern void A_Spawn(mobj_s*);
extern void A_Turn(mobj_s*);
extern void A_Face(mobj_s*);
extern void A_Scratch(mobj_s*);
extern void A_PlaySound(mobj_s*);
extern void A_RandomJump (mobj_s*, player_s*, pspdef_t*);
extern void A_LineEffect(mobj_s*);

#endif //CRISPY_DOOM_ACTIONS_FWD_DECL_HPP
