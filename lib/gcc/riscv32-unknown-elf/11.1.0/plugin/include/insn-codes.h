/* Generated automatically by the program `gencodes'
   from the machine description file `md'.  */

#ifndef GCC_INSN_CODES_H
#define GCC_INSN_CODES_H

enum insn_code {
  CODE_FOR_nothing = 0,
  CODE_FOR_addsf3 = 1,
  CODE_FOR_adddf3 = 2,
  CODE_FOR_addsi3 = 3,
  CODE_FOR_adddi3 = 4,
  CODE_FOR_subsf3 = 7,
  CODE_FOR_subdf3 = 8,
  CODE_FOR_subdi3 = 9,
  CODE_FOR_subsi3 = 10,
  CODE_FOR_negdi2 = 13,
  CODE_FOR_negsi2 = 14,
  CODE_FOR_mulsf3 = 17,
  CODE_FOR_muldf3 = 18,
  CODE_FOR_mulsi3 = 19,
  CODE_FOR_muldi3 = 20,
  CODE_FOR_muldi3_highpart = 23,
  CODE_FOR_umuldi3_highpart = 24,
  CODE_FOR_usmuldi3_highpart = 25,
  CODE_FOR_mulsi3_highpart = 26,
  CODE_FOR_umulsi3_highpart = 27,
  CODE_FOR_usmulsi3_highpart = 28,
  CODE_FOR_divsi3 = 29,
  CODE_FOR_udivsi3 = 30,
  CODE_FOR_modsi3 = 31,
  CODE_FOR_umodsi3 = 32,
  CODE_FOR_divdi3 = 33,
  CODE_FOR_udivdi3 = 34,
  CODE_FOR_moddi3 = 35,
  CODE_FOR_umoddi3 = 36,
  CODE_FOR_divsf3 = 41,
  CODE_FOR_divdf3 = 42,
  CODE_FOR_sqrtsf2 = 43,
  CODE_FOR_sqrtdf2 = 44,
  CODE_FOR_fmasf4 = 45,
  CODE_FOR_fmadf4 = 46,
  CODE_FOR_fmssf4 = 47,
  CODE_FOR_fmsdf4 = 48,
  CODE_FOR_fnmssf4 = 49,
  CODE_FOR_fnmsdf4 = 50,
  CODE_FOR_fnmasf4 = 51,
  CODE_FOR_fnmadf4 = 52,
  CODE_FOR_abssf2 = 61,
  CODE_FOR_absdf2 = 62,
  CODE_FOR_copysignsf3 = 63,
  CODE_FOR_copysigndf3 = 64,
  CODE_FOR_negsf2 = 65,
  CODE_FOR_negdf2 = 66,
  CODE_FOR_sminsf3 = 67,
  CODE_FOR_smindf3 = 68,
  CODE_FOR_smaxsf3 = 69,
  CODE_FOR_smaxdf3 = 70,
  CODE_FOR_andsi3 = 71,
  CODE_FOR_iorsi3 = 72,
  CODE_FOR_xorsi3 = 73,
  CODE_FOR_anddi3 = 74,
  CODE_FOR_iordi3 = 75,
  CODE_FOR_xordi3 = 76,
  CODE_FOR_one_cmplsi2 = 80,
  CODE_FOR_one_cmpldi2 = 81,
  CODE_FOR_truncdfsf2 = 83,
  CODE_FOR_zero_extendsidi2 = 84,
  CODE_FOR_zero_extendhisi2 = 85,
  CODE_FOR_zero_extendhidi2 = 86,
  CODE_FOR_zero_extendqihi2 = 87,
  CODE_FOR_zero_extendqisi2 = 88,
  CODE_FOR_zero_extendqidi2 = 89,
  CODE_FOR_extendsidi2 = 90,
  CODE_FOR_extendqihi2 = 91,
  CODE_FOR_extendqisi2 = 92,
  CODE_FOR_extendqidi2 = 93,
  CODE_FOR_extendhihi2 = 94,
  CODE_FOR_extendhisi2 = 95,
  CODE_FOR_extendhidi2 = 96,
  CODE_FOR_extendsfdf2 = 97,
  CODE_FOR_fix_truncsfsi2 = 98,
  CODE_FOR_fix_truncsfdi2 = 99,
  CODE_FOR_fix_truncdfsi2 = 100,
  CODE_FOR_fix_truncdfdi2 = 101,
  CODE_FOR_fixuns_truncsfsi2 = 102,
  CODE_FOR_fixuns_truncsfdi2 = 103,
  CODE_FOR_fixuns_truncdfsi2 = 104,
  CODE_FOR_fixuns_truncdfdi2 = 105,
  CODE_FOR_floatsisf2 = 106,
  CODE_FOR_floatdisf2 = 107,
  CODE_FOR_floatsidf2 = 108,
  CODE_FOR_floatdidf2 = 109,
  CODE_FOR_floatunssisf2 = 110,
  CODE_FOR_floatunsdisf2 = 111,
  CODE_FOR_floatunssidf2 = 112,
  CODE_FOR_floatunsdidf2 = 113,
  CODE_FOR_lrintsfsi2 = 114,
  CODE_FOR_lroundsfsi2 = 115,
  CODE_FOR_lrintsfdi2 = 116,
  CODE_FOR_lroundsfdi2 = 117,
  CODE_FOR_lrintdfsi2 = 118,
  CODE_FOR_lrounddfsi2 = 119,
  CODE_FOR_lrintdfdi2 = 120,
  CODE_FOR_lrounddfdi2 = 121,
  CODE_FOR_got_loadsi = 122,
  CODE_FOR_got_loaddi = 123,
  CODE_FOR_tls_add_tp_lesi = 124,
  CODE_FOR_tls_add_tp_ledi = 125,
  CODE_FOR_got_load_tls_gdsi = 126,
  CODE_FOR_got_load_tls_gddi = 127,
  CODE_FOR_got_load_tls_iesi = 128,
  CODE_FOR_got_load_tls_iedi = 129,
  CODE_FOR_auipcsi = 130,
  CODE_FOR_auipcdi = 131,
  CODE_FOR_fence = 148,
  CODE_FOR_fence_i = 149,
  CODE_FOR_ashlsi3 = 150,
  CODE_FOR_ashrsi3 = 151,
  CODE_FOR_lshrsi3 = 152,
  CODE_FOR_ashldi3 = 159,
  CODE_FOR_ashrdi3 = 160,
  CODE_FOR_lshrdi3 = 161,
  CODE_FOR_zero_extendsidi2_shifted = 180,
  CODE_FOR_jump = 251,
  CODE_FOR_indirect_jumpsi = 252,
  CODE_FOR_indirect_jumpdi = 253,
  CODE_FOR_tablejumpsi = 254,
  CODE_FOR_tablejumpdi = 255,
  CODE_FOR_blockage = 256,
  CODE_FOR_simple_return = 257,
  CODE_FOR_simple_return_internal = 258,
  CODE_FOR_eh_set_lr_si = 259,
  CODE_FOR_eh_set_lr_di = 260,
  CODE_FOR_eh_return_internal = 261,
  CODE_FOR_sibcall_internal = 262,
  CODE_FOR_sibcall_value_internal = 263,
  CODE_FOR_call_internal = 264,
  CODE_FOR_call_value_internal = 265,
  CODE_FOR_nop = 266,
  CODE_FOR_trap = 267,
  CODE_FOR_gpr_save = 268,
  CODE_FOR_gpr_restore = 269,
  CODE_FOR_gpr_restore_return = 270,
  CODE_FOR_riscv_frflags = 271,
  CODE_FOR_riscv_fsflags = 272,
  CODE_FOR_riscv_mret = 273,
  CODE_FOR_riscv_sret = 274,
  CODE_FOR_riscv_uret = 275,
  CODE_FOR_stack_tiesi = 276,
  CODE_FOR_stack_tiedi = 277,
  CODE_FOR_stack_protect_set_si = 278,
  CODE_FOR_stack_protect_set_di = 279,
  CODE_FOR_stack_protect_test_si = 280,
  CODE_FOR_stack_protect_test_di = 281,
  CODE_FOR_mem_thread_fence_1 = 282,
  CODE_FOR_atomic_storesi = 283,
  CODE_FOR_atomic_storedi = 284,
  CODE_FOR_atomic_addsi = 285,
  CODE_FOR_atomic_orsi = 286,
  CODE_FOR_atomic_xorsi = 287,
  CODE_FOR_atomic_andsi = 288,
  CODE_FOR_atomic_adddi = 289,
  CODE_FOR_atomic_ordi = 290,
  CODE_FOR_atomic_xordi = 291,
  CODE_FOR_atomic_anddi = 292,
  CODE_FOR_atomic_fetch_addsi = 293,
  CODE_FOR_atomic_fetch_orsi = 294,
  CODE_FOR_atomic_fetch_xorsi = 295,
  CODE_FOR_atomic_fetch_andsi = 296,
  CODE_FOR_atomic_fetch_adddi = 297,
  CODE_FOR_atomic_fetch_ordi = 298,
  CODE_FOR_atomic_fetch_xordi = 299,
  CODE_FOR_atomic_fetch_anddi = 300,
  CODE_FOR_atomic_exchangesi = 301,
  CODE_FOR_atomic_exchangedi = 302,
  CODE_FOR_atomic_cas_value_strongsi = 303,
  CODE_FOR_atomic_cas_value_strongdi = 304,
  CODE_FOR_mulditi3 = 357,
  CODE_FOR_umulditi3 = 358,
  CODE_FOR_usmulditi3 = 359,
  CODE_FOR_mulsidi3 = 360,
  CODE_FOR_umulsidi3 = 361,
  CODE_FOR_usmulsidi3 = 362,
  CODE_FOR_movdi = 363,
  CODE_FOR_movsi = 364,
  CODE_FOR_movhi = 365,
  CODE_FOR_movqi = 366,
  CODE_FOR_movsf = 367,
  CODE_FOR_movdf = 368,
  CODE_FOR_cpymemsi = 369,
  CODE_FOR_clear_cache = 370,
  CODE_FOR_movsicc = 371,
  CODE_FOR_movdicc = 372,
  CODE_FOR_condjump = 373,
  CODE_FOR_cbranchqi4 = 374,
  CODE_FOR_cbranchsi4 = 375,
  CODE_FOR_cbranchdi4 = 376,
  CODE_FOR_cbranchsf4 = 377,
  CODE_FOR_cbranchdf4 = 378,
  CODE_FOR_cstoresi4 = 379,
  CODE_FOR_cstoredi4 = 380,
  CODE_FOR_cstoresf4 = 381,
  CODE_FOR_cstoredf4 = 382,
  CODE_FOR_flt_quietsfsi4 = 383,
  CODE_FOR_fle_quietsfsi4 = 384,
  CODE_FOR_flt_quietsfdi4 = 385,
  CODE_FOR_fle_quietsfdi4 = 386,
  CODE_FOR_flt_quietdfsi4 = 387,
  CODE_FOR_fle_quietdfsi4 = 388,
  CODE_FOR_flt_quietdfdi4 = 389,
  CODE_FOR_fle_quietdfdi4 = 390,
  CODE_FOR_indirect_jump = 391,
  CODE_FOR_tablejump = 392,
  CODE_FOR_prologue = 393,
  CODE_FOR_epilogue = 394,
  CODE_FOR_sibcall_epilogue = 395,
  CODE_FOR_return = 396,
  CODE_FOR_eh_return = 397,
  CODE_FOR_sibcall = 398,
  CODE_FOR_sibcall_value = 399,
  CODE_FOR_call = 400,
  CODE_FOR_call_value = 401,
  CODE_FOR_untyped_call = 402,
  CODE_FOR_restore_stack_nonlocal = 403,
  CODE_FOR_get_thread_pointersi = 404,
  CODE_FOR_get_thread_pointerdi = 405,
  CODE_FOR_stack_protect_set = 406,
  CODE_FOR_stack_protect_test = 407,
  CODE_FOR_mem_thread_fence = 408,
  CODE_FOR_atomic_compare_and_swapsi = 409,
  CODE_FOR_atomic_compare_and_swapdi = 410,
  CODE_FOR_atomic_test_and_set = 411
};

const unsigned int NUM_INSN_CODES = 412;
#endif /* GCC_INSN_CODES_H */
