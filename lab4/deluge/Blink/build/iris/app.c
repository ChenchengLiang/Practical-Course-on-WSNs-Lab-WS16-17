#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 147 "/usr/lib/gcc/avr/4.8.1/include/stddef.h" 3
typedef int ptrdiff_t;
#line 212
typedef unsigned int size_t;
#line 324
typedef int wchar_t;
# 8 "/usr/lib/x86_64-linux-gnu/ncc/deputy_nodeputy.h"
struct __nesc_attr_nonnull {
#line 8
  int dummy;
}  ;
#line 9
struct __nesc_attr_bnd {
#line 9
  void *lo, *hi;
}  ;
#line 10
struct __nesc_attr_bnd_nok {
#line 10
  void *lo, *hi;
}  ;
#line 11
struct __nesc_attr_count {
#line 11
  int n;
}  ;
#line 12
struct __nesc_attr_count_nok {
#line 12
  int n;
}  ;
#line 13
struct __nesc_attr_one {
#line 13
  int dummy;
}  ;
#line 14
struct __nesc_attr_one_nok {
#line 14
  int dummy;
}  ;
#line 15
struct __nesc_attr_dmemset {
#line 15
  int a1, a2, a3;
}  ;
#line 16
struct __nesc_attr_dmemcpy {
#line 16
  int a1, a2, a3;
}  ;
#line 17
struct __nesc_attr_nts {
#line 17
  int dummy;
}  ;
# 121 "/usr/lib/gcc/avr/4.8.1/../../../avr/include/stdint.h" 3
typedef signed int int8_t __attribute((__mode__(__QI__))) ;
typedef unsigned int uint8_t __attribute((__mode__(__QI__))) ;
typedef signed int int16_t __attribute((__mode__(__HI__))) ;
typedef unsigned int uint16_t __attribute((__mode__(__HI__))) ;
typedef signed int int32_t __attribute((__mode__(__SI__))) ;
typedef unsigned int uint32_t __attribute((__mode__(__SI__))) ;

typedef signed int int64_t __attribute((__mode__(__DI__))) ;
typedef unsigned int uint64_t __attribute((__mode__(__DI__))) ;
#line 142
typedef int16_t intptr_t;




typedef uint16_t uintptr_t;
#line 159
typedef int8_t int_least8_t;




typedef uint8_t uint_least8_t;




typedef int16_t int_least16_t;




typedef uint16_t uint_least16_t;




typedef int32_t int_least32_t;




typedef uint32_t uint_least32_t;







typedef int64_t int_least64_t;






typedef uint64_t uint_least64_t;
#line 213
typedef int8_t int_fast8_t;




typedef uint8_t uint_fast8_t;




typedef int16_t int_fast16_t;




typedef uint16_t uint_fast16_t;




typedef int32_t int_fast32_t;




typedef uint32_t uint_fast32_t;







typedef int64_t int_fast64_t;






typedef uint64_t uint_fast64_t;
#line 273
typedef int64_t intmax_t;




typedef uint64_t uintmax_t;
# 77 "/usr/lib/gcc/avr/4.8.1/../../../avr/include/inttypes.h" 3
typedef int32_t int_farptr_t;



typedef uint32_t uint_farptr_t;
# 281 "/usr/lib/x86_64-linux-gnu/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void * source)  ;




static __inline uint8_t __nesc_hton_uint8(void * target, uint8_t value)  ;





static __inline uint8_t __nesc_ntoh_leuint8(const void * source)  ;




static __inline uint8_t __nesc_hton_leuint8(void * target, uint8_t value)  ;
#line 310
static __inline uint16_t __nesc_ntoh_uint16(const void * source)  ;




static __inline uint16_t __nesc_hton_uint16(void * target, uint16_t value)  ;






static __inline uint16_t __nesc_ntoh_leuint16(const void * source)  ;




static __inline uint16_t __nesc_hton_leuint16(void * target, uint16_t value)  ;
#line 340
static __inline uint32_t __nesc_ntoh_uint32(const void * source)  ;






static __inline uint32_t __nesc_hton_uint32(void * target, uint32_t value)  ;
#line 372
static __inline int32_t __nesc_ntoh_int32(const void * source)  ;
#line 372
static __inline int32_t __nesc_hton_int32(void * target, int32_t value)  ;
#line 431
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_int64_t;typedef int64_t __nesc_nxbase_nx_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_uint64_t;typedef uint64_t __nesc_nxbase_nx_uint64_t  ;


typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_int64_t;typedef int64_t __nesc_nxbase_nxle_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_uint64_t;typedef uint64_t __nesc_nxbase_nxle_uint64_t  ;
# 117 "/usr/lib/gcc/avr/4.8.1/../../../avr/include/string.h" 3
extern void *memcpy(void *arg_0x7fa21eb8a1f0, const void *arg_0x7fa21eb8a4c8, size_t arg_0x7fa21eb8a770);



extern void *memset(void *arg_0x7fa21eb85020, int arg_0x7fa21eb85288, size_t arg_0x7fa21eb85530);
# 71 "/usr/lib/gcc/avr/4.8.1/../../../avr/include/stdlib.h" 3
#line 68
typedef struct __nesc_unnamed4242 {
  int quot;
  int rem;
} div_t;





#line 74
typedef struct __nesc_unnamed4243 {
  long quot;
  long rem;
} ldiv_t;


typedef int (*__compar_fn_t)(const void *arg_0x7fa21eb64838, const void *arg_0x7fa21eb64b10);
# 25 "/opt/tinyos-2.1.2/tos/system/tos.h"
typedef uint8_t bool;
enum __nesc_unnamed4244 {
#line 26
  FALSE = 0, TRUE = 1
};
typedef nx_int8_t nx_bool;
uint16_t TOS_NODE_ID = 1;






struct __nesc_attr_atmostonce {
};
#line 37
struct __nesc_attr_atleastonce {
};
#line 38
struct __nesc_attr_exactlyonce {
};
# 244 "/usr/lib/gcc/avr/4.8.1/../../../avr/include/avr/fuse.h" 3
#line 239
typedef struct __nesc_unnamed4245 {

  unsigned char low;
  unsigned char high;
  unsigned char extended;
} __fuse_t;
# 51 "/opt/tinyos-2.1.2/tos/types/TinyError.h"
enum __nesc_unnamed4246 {
  SUCCESS = 0, 
  FAIL = 1, 
  ESIZE = 2, 
  ECANCEL = 3, 
  EOFF = 4, 
  EBUSY = 5, 
  EINVAL = 6, 
  ERETRY = 7, 
  ERESERVE = 8, 
  EALREADY = 9, 
  ENOMEM = 10, 
  ENOACK = 11, 
  ELAST = 11
};

typedef uint8_t error_t  ;

static inline error_t ecombine(error_t r1, error_t r2)  ;
# 25 "/opt/tinyos-2.1.2/tos/chips/atm128/atm128const.h"
typedef const uint8_t const_uint8_t __attribute((__progmem__)) ;
typedef const uint16_t const_uint16_t __attribute((__progmem__)) ;
typedef const uint32_t const_uint32_t __attribute((__progmem__)) ;
typedef const int8_t const_int8_t __attribute((__progmem__)) ;
typedef const int16_t const_int16_t __attribute((__progmem__)) ;
typedef const int32_t const_int32_t __attribute((__progmem__)) ;
# 90 "/opt/tinyos-2.1.2/tos/chips/atm1281/atm128hardware.h"
static __inline void __nesc_enable_interrupt()  ;



static __inline void __nesc_disable_interrupt()  ;




typedef uint8_t __nesc_atomic_t;
__nesc_atomic_t __nesc_atomic_start(void );
void __nesc_atomic_end(__nesc_atomic_t original_SREG);









#line 110
__inline __nesc_atomic_t 
__nesc_atomic_start(void )   ;









#line 120
__inline void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)   ;







typedef uint8_t mcu_power_t  ;


enum __nesc_unnamed4247 {
  ATM128_POWER_IDLE = 0, 
  ATM128_POWER_ADC_NR = 1, 
  ATM128_POWER_EXT_STANDBY = 2, 
  ATM128_POWER_SAVE = 3, 
  ATM128_POWER_STANDBY = 4, 
  ATM128_POWER_DOWN = 5
};


static inline mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)  ;
#line 155
#line 147
typedef struct __nesc_unnamed4248 {

  uint8_t porf : 1;
  uint8_t extrf : 1;
  uint8_t borf : 1;
  uint8_t wdrf : 1;
  uint8_t jtrf : 1;
  uint8_t resv1 : 3;
} Atm128_MCUSR_t;










#line 158
typedef struct __nesc_unnamed4249 {

  uint8_t srw00 : 1;
  uint8_t srw01 : 1;
  uint8_t srw10 : 1;
  uint8_t srw11 : 1;
  uint8_t srl : 3;
  uint8_t sre : 1;
} Atm128_XMCRA_t;







#line 169
typedef struct __nesc_unnamed4250 {

  uint8_t xmm : 3;
  uint8_t resv1 : 4;
  uint8_t xmbk : 1;
} Atm128_XMCRB_t;







typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_float;typedef float __nesc_nxbase_nx_float  ;
# 82 "/opt/tinyos-2.1.2/tos/chips/atm1281/adc/Atm128Adc.h"
enum __nesc_unnamed4251 {
  ATM128_ADC_VREF_OFF = 0, 
  ATM128_ADC_VREF_AVCC = 1, 
  ATM128_ADC_VREF_1_1 = 2, 
  ATM128_ADC_VREF_2_56 = 3
};


enum __nesc_unnamed4252 {
  ATM128_ADC_RIGHT_ADJUST = 0, 
  ATM128_ADC_LEFT_ADJUST = 1
};



enum __nesc_unnamed4253 {
  ATM128_ADC_SNGL_ADC0 = 0, 
  ATM128_ADC_SNGL_ADC1, 
  ATM128_ADC_SNGL_ADC2, 
  ATM128_ADC_SNGL_ADC3, 
  ATM128_ADC_SNGL_ADC4, 
  ATM128_ADC_SNGL_ADC5, 
  ATM128_ADC_SNGL_ADC6, 
  ATM128_ADC_SNGL_ADC7, 
  ATM128_ADC_DIFF_ADC00_10x, 
  ATM128_ADC_DIFF_ADC10_10x, 
  ATM128_ADC_DIFF_ADC00_200x, 
  ATM128_ADC_DIFF_ADC10_200x, 
  ATM128_ADC_DIFF_ADC22_10x, 
  ATM128_ADC_DIFF_ADC32_10x, 
  ATM128_ADC_DIFF_ADC22_200x, 
  ATM128_ADC_DIFF_ADC32_200x, 
  ATM128_ADC_DIFF_ADC01_1x, 
  ATM128_ADC_DIFF_ADC11_1x, 
  ATM128_ADC_DIFF_ADC21_1x, 
  ATM128_ADC_DIFF_ADC31_1x, 
  ATM128_ADC_DIFF_ADC41_1x, 
  ATM128_ADC_DIFF_ADC51_1x, 
  ATM128_ADC_DIFF_ADC61_1x, 
  ATM128_ADC_DIFF_ADC71_1x, 
  ATM128_ADC_DIFF_ADC02_1x, 
  ATM128_ADC_DIFF_ADC12_1x, 
  ATM128_ADC_DIFF_ADC22_1x, 
  ATM128_ADC_DIFF_ADC32_1x, 
  ATM128_ADC_DIFF_ADC42_1x, 
  ATM128_ADC_DIFF_ADC52_1x, 
  ATM128_ADC_SNGL_1_23, 
  ATM128_ADC_SNGL_GND
};







#line 133
typedef struct __nesc_unnamed4254 {

  uint8_t mux : 5;
  uint8_t adlar : 1;
  uint8_t refs : 2;
} Atm128Admux_t;




enum __nesc_unnamed4255 {
  ATM128_ADC_PRESCALE_2 = 0, 
  ATM128_ADC_PRESCALE_2b, 
  ATM128_ADC_PRESCALE_4, 
  ATM128_ADC_PRESCALE_8, 
  ATM128_ADC_PRESCALE_16, 
  ATM128_ADC_PRESCALE_32, 
  ATM128_ADC_PRESCALE_64, 
  ATM128_ADC_PRESCALE_128, 



  ATM128_ADC_PRESCALE
};


enum __nesc_unnamed4256 {
  ATM128_ADC_ENABLE_OFF = 0, 
  ATM128_ADC_ENABLE_ON
};


enum __nesc_unnamed4257 {
  ATM128_ADC_START_CONVERSION_OFF = 0, 
  ATM128_ADC_START_CONVERSION_ON
};


enum __nesc_unnamed4258 {
  ATM128_ADC_FREE_RUNNING_OFF = 0, 
  ATM128_ADC_FREE_RUNNING_ON
};


enum __nesc_unnamed4259 {
  ATM128_ADC_INT_FLAG_OFF = 0, 
  ATM128_ADC_INT_FLAG_ON
};


enum __nesc_unnamed4260 {
  ATM128_ADC_INT_ENABLE_OFF = 0, 
  ATM128_ADC_INT_ENABLE_ON
};










#line 189
typedef struct __nesc_unnamed4261 {

  uint8_t adps : 3;
  uint8_t adie : 1;
  uint8_t adif : 1;
  uint8_t adate : 1;
  uint8_t adsc : 1;
  uint8_t aden : 1;
} Atm128Adcsra_t;









#line 200
typedef struct __nesc_unnamed4262 {

  uint8_t adts : 3;
  uint8_t mux5 : 1;
  uint8_t resv1 : 2;
  uint8_t acme : 1;
  uint8_t resv2 : 1;
} Atm128Adcsrb_t;


typedef uint8_t Atm128_ADCH_t;
typedef uint8_t Atm128_ADCL_t;
# 41 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4263 {
#line 41
  int notUsed;
} 
#line 41
TSecond;
typedef struct __nesc_unnamed4264 {
#line 42
  int notUsed;
} 
#line 42
TMilli;
typedef struct __nesc_unnamed4265 {
#line 43
  int notUsed;
} 
#line 43
T32khz;
typedef struct __nesc_unnamed4266 {
#line 44
  int notUsed;
} 
#line 44
TMicro;
# 81 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/Atm128Timer.h"
enum __nesc_unnamed4267 {
  ATM128_CLK8_OFF = 0x0, 
  ATM128_CLK8_NORMAL = 0x1, 
  ATM128_CLK8_DIVIDE_8 = 0x2, 
  ATM128_CLK8_DIVIDE_32 = 0x3, 
  ATM128_CLK8_DIVIDE_64 = 0x4, 
  ATM128_CLK8_DIVIDE_128 = 0x5, 
  ATM128_CLK8_DIVIDE_256 = 0x6, 
  ATM128_CLK8_DIVIDE_1024 = 0x7
};


enum __nesc_unnamed4268 {
  ATM128_CLK16_OFF = 0x0, 
  ATM128_CLK16_NORMAL = 0x1, 
  ATM128_CLK16_DIVIDE_8 = 0x2, 
  ATM128_CLK16_DIVIDE_64 = 0x3, 
  ATM128_CLK16_DIVIDE_256 = 0x4, 
  ATM128_CLK16_DIVIDE_1024 = 0x5, 
  ATM128_CLK16_EXTERNAL_FALL = 0x6, 
  ATM128_CLK16_EXTERNAL_RISE = 0x7
};


enum __nesc_unnamed4269 {
  AVR_CLOCK_OFF = 0, 
  AVR_CLOCK_ON = 1, 
  AVR_CLOCK_DIVIDE_8 = 2
};

enum __nesc_unnamed4270 {
  ATM128_TIMER_COMPARE_NORMAL = 0, 
  ATM128_TIMER_COMPARE_TOGGLE, 
  ATM128_TIMER_COMPARE_CLEAR, 
  ATM128_TIMER_COMPARE_SET
};



enum __nesc_unnamed4271 {
  ATM128_WAVE8_NORMAL = 0, 
  ATM128_WAVE8_PWM, 
  ATM128_WAVE8_CTC, 
  ATM128_WAVE8_PWM_FAST
};


enum __nesc_unnamed4272 {
  ATM128_WAVE16_NORMAL = 0, 
  ATM128_WAVE16_PWM_8BIT, 
  ATM128_WAVE16_PWM_9BIT, 
  ATM128_WAVE16_PWM_10BIT, 
  ATM128_WAVE16_CTC_COMPARE, 
  ATM128_WAVE16_PWM_FAST_8BIT, 
  ATM128_WAVE16_PWM_FAST_9BIT, 
  ATM128_WAVE16_PWM_FAST_10BIT, 
  ATM128_WAVE16_PWM_CAPTURE_LOW, 
  ATM128_WAVE16_PWM_COMPARE_LOW, 
  ATM128_WAVE16_PWM_CAPTURE_HIGH, 
  ATM128_WAVE16_PWM_COMPARE_HIGH, 
  ATM128_WAVE16_CTC_CAPTURE, 
  ATM128_WAVE16_RESERVED, 
  ATM128_WAVE16_PWM_FAST_CAPTURE, 
  ATM128_WAVE16_PWM_FAST_COMPARE
};


enum __nesc_unnamed4273 {
  ATM128_COMPARE_OFF = 0, 
  ATM128_COMPARE_TOGGLE, 
  ATM128_COMPARE_CLEAR, 
  ATM128_COMPARE_SET
};
#line 168
#line 156
typedef union __nesc_unnamed4274 {

  uint8_t flat;
  struct __nesc_unnamed4275 {
    uint8_t wgm00 : 1;
    uint8_t wgm01 : 1;
    uint8_t resv1 : 2;
    uint8_t com0b0 : 1;
    uint8_t com0b1 : 1;
    uint8_t com0a0 : 1;
    uint8_t com0a1 : 1;
  } bits;
} Atm128_TCCR0A_t;
#line 183
#line 171
typedef union __nesc_unnamed4276 {

  uint8_t flat;
  struct __nesc_unnamed4277 {
    uint8_t cs00 : 1;
    uint8_t cs01 : 1;
    uint8_t cs02 : 2;
    uint8_t wgm02 : 1;
    uint8_t resv1 : 2;
    uint8_t foc0b : 1;
    uint8_t foc0a : 1;
  } bits;
} Atm128_TCCR0B_t;
#line 195
#line 186
typedef union __nesc_unnamed4278 {

  uint8_t flat;
  struct __nesc_unnamed4279 {
    uint8_t toie0 : 1;
    uint8_t ocie0a : 1;
    uint8_t ocie0e : 1;
    uint8_t resv1 : 5;
  } bits;
} Atm128_TIMSK0_t;
#line 207
#line 198
typedef union __nesc_unnamed4280 {

  uint8_t flat;
  struct __nesc_unnamed4281 {
    uint8_t tov0 : 1;
    uint8_t ocf0a : 1;
    uint8_t ocf0b : 1;
    uint8_t resv1 : 5;
  } bits;
} Atm128_TIFR0_t;
#line 223
#line 210
typedef union __nesc_unnamed4282 {

  uint8_t flat;
  struct __nesc_unnamed4283 {
    uint8_t tcr2bub : 1;
    uint8_t tcr2aub : 1;
    uint8_t ocr2bub : 1;
    uint8_t ocr2aub : 1;
    uint8_t tcn2ub : 1;
    uint8_t as2 : 1;
    uint8_t exclk : 1;
    uint8_t resv1 : 1;
  } bits;
} Atm128_ASSR_t;
#line 236
#line 226
typedef union __nesc_unnamed4284 {

  uint8_t flat;
  struct __nesc_unnamed4285 {
    uint8_t wgm20 : 1;
    uint8_t wgm21 : 1;
    uint8_t resv1 : 2;
    uint8_t comb : 2;
    uint8_t coma : 2;
  } bits;
} Atm128_TCCR2A_t;
#line 249
#line 239
typedef union __nesc_unnamed4286 {

  uint8_t flat;
  struct __nesc_unnamed4287 {
    uint8_t cs : 3;
    uint8_t wgm22 : 1;
    uint8_t resv1 : 2;
    uint8_t foc2b : 1;
    uint8_t foc2a : 1;
  } bits;
} Atm128_TCCR2B_t;
#line 261
#line 252
typedef union __nesc_unnamed4288 {

  uint8_t flat;
  struct __nesc_unnamed4289 {
    uint8_t toie : 1;
    uint8_t ociea : 1;
    uint8_t ocieb : 1;
    uint8_t resv1 : 5;
  } bits;
} Atm128_TIMSK2_t;
#line 273
#line 264
typedef union __nesc_unnamed4290 {

  uint8_t flat;
  struct __nesc_unnamed4291 {
    uint8_t tov : 1;
    uint8_t ocfa : 1;
    uint8_t ocfb : 1;
    uint8_t resv1 : 5;
  } bits;
} Atm128_TIFR2_t;
#line 286
#line 277
typedef union __nesc_unnamed4292 {

  uint8_t flat;
  struct __nesc_unnamed4293 {
    uint8_t wgm01 : 2;
    uint8_t comc : 2;
    uint8_t comb : 2;
    uint8_t coma : 2;
  } bits;
} Atm128_TCCRA_t;
#line 299
#line 289
typedef union __nesc_unnamed4294 {

  uint8_t flat;
  struct __nesc_unnamed4295 {
    uint8_t cs : 3;
    uint8_t wgm23 : 2;
    uint8_t resv1 : 1;
    uint8_t ices : 1;
    uint8_t icnc : 1;
  } bits;
} Atm128_TCCRB_t;
#line 311
#line 302
typedef union __nesc_unnamed4296 {

  uint8_t flat;
  struct __nesc_unnamed4297 {
    uint8_t resv1 : 5;
    uint8_t focc : 1;
    uint8_t focb : 1;
    uint8_t foca : 1;
  } bits;
} Atm128_TCCRC_t;
#line 326
#line 314
typedef union __nesc_unnamed4298 {

  uint8_t flat;
  struct __nesc_unnamed4299 {
    uint8_t toie : 1;
    uint8_t ociea : 1;
    uint8_t ocieb : 1;
    uint8_t ociec : 1;
    uint8_t resv1 : 1;
    uint8_t icie : 1;
    uint8_t resv2 : 2;
  } bits;
} Atm128_TIMSK_t;
#line 341
#line 329
typedef union __nesc_unnamed4300 {

  uint8_t flat;
  struct __nesc_unnamed4301 {
    uint8_t tov : 1;
    uint8_t ocfa : 1;
    uint8_t ocfb : 1;
    uint8_t ocfc : 1;
    uint8_t resv1 : 1;
    uint8_t icf : 1;
    uint8_t resv2 : 2;
  } bits;
} Atm128_TIFR_t;
#line 353
#line 344
typedef union __nesc_unnamed4302 {

  uint8_t flat;
  struct __nesc_unnamed4303 {
    uint8_t psrsync : 1;
    uint8_t psrasy : 1;
    uint8_t resv1 : 5;
    uint8_t tsm : 1;
  } bits;
} Atm128_GTCCR_t;



typedef uint8_t Atm128_TCNT1H_t;
typedef uint8_t Atm128_TCNT1L_t;
typedef uint8_t Atm128_TCNT3H_t;
typedef uint8_t Atm128_TCNT3L_t;
typedef uint8_t Atm128_TCNT4H_t;
typedef uint8_t Atm128_TCNT4L_t;
typedef uint8_t Atm128_TCNT5H_t;
typedef uint8_t Atm128_TCNT5L_t;


typedef uint8_t Atm128_OCR1AH_t;
typedef uint8_t Atm128_OCR1AL_t;
typedef uint8_t Atm128_OCR1BH_t;
typedef uint8_t Atm128_OCR1BL_t;
typedef uint8_t Atm128_OCR1CH_t;
typedef uint8_t Atm128_OCR1CL_t;


typedef uint8_t Atm128_OCR3AH_t;
typedef uint8_t Atm128_OCR3AL_t;
typedef uint8_t Atm128_OCR3BH_t;
typedef uint8_t Atm128_OCR3BL_t;
typedef uint8_t Atm128_OCR3CH_t;
typedef uint8_t Atm128_OCR3CL_t;


typedef uint8_t Atm128_OCR4AH_t;
typedef uint8_t Atm128_OCR4AL_t;
typedef uint8_t Atm128_OCR4BH_t;
typedef uint8_t Atm128_OCR4BL_t;
typedef uint8_t Atm128_OCR4CH_t;
typedef uint8_t Atm128_OCR4CL_t;


typedef uint8_t Atm128_OCR5AH_t;
typedef uint8_t Atm128_OCR5AL_t;
typedef uint8_t Atm128_OCR5BH_t;
typedef uint8_t Atm128_OCR5BL_t;
typedef uint8_t Atm128_OCR5CH_t;
typedef uint8_t Atm128_OCR5CL_t;


typedef uint8_t Atm128_ICR1H_t;
typedef uint8_t Atm128_ICR1L_t;
typedef uint8_t Atm128_ICR3H_t;
typedef uint8_t Atm128_ICR3L_t;
typedef uint8_t Atm128_ICR4H_t;
typedef uint8_t Atm128_ICR4L_t;
typedef uint8_t Atm128_ICR5H_t;
typedef uint8_t Atm128_ICR5L_t;
# 85 "/opt/tinyos-2.1.2/tos/platforms/iris/MicaTimer.h"
typedef struct __nesc_unnamed4304 {
} 
#line 85
T64khz;
typedef struct __nesc_unnamed4305 {
} 
#line 86
T128khz;
typedef struct __nesc_unnamed4306 {
} 
#line 87
T2mhz;
typedef struct __nesc_unnamed4307 {
} 
#line 88
T4mhz;
#line 158
typedef TMicro TOne;
typedef TMicro TThree;
typedef uint32_t counter_one_overflow_t;
typedef uint16_t counter_three_overflow_t;
enum __nesc_unnamed4308 {
  MICA_PRESCALER_ONE = ATM128_CLK16_DIVIDE_8, 
  MICA_DIVIDE_ONE_FOR_32KHZ_LOG2 = 5, 
  MICA_PRESCALER_THREE = ATM128_CLK16_DIVIDE_8, 
  MICA_DIVIDE_THREE_FOR_MICRO_LOG2 = 0, 
  EXT_STANDBY_T0_THRESHOLD = 12
};





enum __nesc_unnamed4309 {
  PLATFORM_MHZ = 8
};
# 62 "/opt/tinyos-2.1.2/tos/platforms/micaz/hardware.h"
enum __nesc_unnamed4310 {
  TOS_SLEEP_NONE = ATM128_POWER_IDLE
};


enum __nesc_unnamed4311 {
  CHANNEL_THERMISTOR = ATM128_ADC_SNGL_ADC1
};


enum __nesc_unnamed4312 {
  PLATFORM_BAUDRATE = 57600L
};
# 43 "/opt/tinyos-2.1.2/tos/types/Leds.h"
enum __nesc_unnamed4313 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 52 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/Deluge.h"
#line 40
typedef nx_struct DelugeIdent {
  nx_uint32_t uidhash;
  nx_uint32_t size;
  nx_uint8_t numPgs;
  nx_uint8_t reserved;
  nx_uint16_t crc;
  nx_uint8_t appname[16];
  nx_uint8_t username[16];
  nx_uint8_t hostname[16];
  nx_uint8_t platform[16];
  nx_uint32_t timestamp;
  nx_uint32_t userhash;
} __attribute__((packed)) DelugeIdent;

enum __nesc_unnamed4314 {
  DELUGE_INVALID_UID = 0xffffffff, 
  DELUGE_NUM_VOLUMES = 4, 
  DELUGE_KEY = 0xDE00, 
  DELUGE_AM_FLASH_VOL_MANAGER = 0x53, 
  DELUGE_AM_DELUGE_MANAGER = 0x54
};

enum __nesc_unnamed4315 {
  DELUGE_CMD_STOP = 1, 
  DELUGE_CMD_LOCAL_STOP = 2, 
  DELUGE_CMD_ONLY_DISSEMINATE = 3, 
  DELUGE_CMD_DISSEMINATE_AND_REPROGRAM = 4, 
  DELUGE_CMD_REPROGRAM = 5, 
  DELUGE_CMD_REBOOT = 6
};









#line 74
typedef nx_struct DelugeCmd {
  nx_uint8_t type;
  nx_uint32_t uidhash;
  nx_uint8_t imgNum;
  nx_uint32_t size;
} __attribute__((packed)) DelugeCmd;






#line 81
typedef struct BootArgs {
  uint16_t address;
  uint32_t imageAddr;
  uint8_t gestureCount;
  bool noReprogram;
} BootArgs;
# 4 "build/iris/StorageVolumes.h"
enum __nesc_unnamed4316 {
  VOLUME_GOLDENIMAGE, 
  VOLUME_DELUGE3, 
  VOLUME_DELUGE1, 
  VOLUME_DELUGE2
};
# 42 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/extra/micaz/TOSBoot_platform.h"
enum __nesc_unnamed4317 {
  TOSBOOT_ARGS_ADDR = 0xff0, 
  TOSBOOT_GESTURE_MAX_COUNT = 3, 
  TOSBOOT_GOLDEN_IMG_ADDR = 0x0L, 
  TOSBOOT_INT_PAGE_SIZE = 256
};
# 41 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230DriverLayer.h"
#line 38
typedef nx_struct rf230_header_t {

  nxle_uint8_t length;
} __attribute__((packed)) rf230_header_t;









#line 43
typedef struct rf230_metadata_t {

  uint8_t lqi;
  union  {

    uint8_t power;
    uint8_t rssi;
  } ;
} rf230_metadata_t;

enum rf230_registers_enum {

  RF230_TRX_STATUS = 0x01, 
  RF230_TRX_STATE = 0x02, 
  RF230_TRX_CTRL_0 = 0x03, 
  RF230_PHY_TX_PWR = 0x05, 
  RF230_PHY_RSSI = 0x06, 
  RF230_PHY_ED_LEVEL = 0x07, 
  RF230_PHY_CC_CCA = 0x08, 
  RF230_CCA_THRES = 0x09, 
  RF230_IRQ_MASK = 0x0E, 
  RF230_IRQ_STATUS = 0x0F, 
  RF230_VREG_CTRL = 0x10, 
  RF230_BATMON = 0x11, 
  RF230_XOSC_CTRL = 0x12, 
  RF230_PLL_CF = 0x1A, 
  RF230_PLL_DCU = 0x1B, 
  RF230_PART_NUM = 0x1C, 
  RF230_VERSION_NUM = 0x1D, 
  RF230_MAN_ID_0 = 0x1E, 
  RF230_MAN_ID_1 = 0x1F, 
  RF230_SHORT_ADDR_0 = 0x20, 
  RF230_SHORT_ADDR_1 = 0x21, 
  RF230_PAN_ID_0 = 0x22, 
  RF230_PAN_ID_1 = 0x23, 
  RF230_IEEE_ADDR_0 = 0x24, 
  RF230_IEEE_ADDR_1 = 0x25, 
  RF230_IEEE_ADDR_2 = 0x26, 
  RF230_IEEE_ADDR_3 = 0x27, 
  RF230_IEEE_ADDR_4 = 0x28, 
  RF230_IEEE_ADDR_5 = 0x29, 
  RF230_IEEE_ADDR_6 = 0x2A, 
  RF230_IEEE_ADDR_7 = 0x2B, 
  RF230_XAH_CTRL = 0x2C, 
  RF230_CSMA_SEED_0 = 0x2D, 
  RF230_CSMA_SEED_1 = 0x2E
};

enum rf230_trx_register_enums {

  RF230_CCA_DONE = 1 << 7, 
  RF230_CCA_STATUS = 1 << 6, 
  RF230_TRX_STATUS_MASK = 0x1F, 
  RF230_P_ON = 0, 
  RF230_BUSY_RX = 1, 
  RF230_BUSY_TX = 2, 
  RF230_RX_ON = 6, 
  RF230_TRX_OFF = 8, 
  RF230_PLL_ON = 9, 
  RF230_SLEEP = 15, 
  RF230_BUSY_RX_AACK = 17, 
  RF230_BUSR_TX_ARET = 18, 
  RF230_RX_AACK_ON = 22, 
  RF230_TX_ARET_ON = 25, 
  RF230_RX_ON_NOCLK = 28, 
  RF230_AACK_ON_NOCLK = 29, 
  RF230_BUSY_RX_AACK_NOCLK = 30, 
  RF230_STATE_TRANSITION_IN_PROGRESS = 31, 
  RF230_TRAC_STATUS_MASK = 0xE0, 
  RF230_TRAC_SUCCESS = 0, 
  RF230_TRAC_SUCCESS_DATA_PENDING = 1 << 5, 
  RF230_TRAC_CHANNEL_ACCESS_FAILURE = 3 << 5, 
  RF230_TRAC_NO_ACK = 5 << 5, 
  RF230_TRAC_INVALID = 7 << 5, 
  RF230_TRX_CMD_MASK = 0x1F, 
  RF230_NOP = 0, 
  RF230_TX_START = 2, 
  RF230_FORCE_TRX_OFF = 3
};

enum rf230_phy_register_enums {

  RF230_TX_AUTO_CRC_ON = 1 << 7, 
  RF230_TX_PWR_MASK = 0x0F, 
  RF230_RSSI_MASK = 0x1F, 
  RF230_CCA_REQUEST = 1 << 7, 
  RF230_CCA_MODE_0 = 0 << 5, 
  RF230_CCA_MODE_1 = 1 << 5, 
  RF230_CCA_MODE_2 = 2 << 5, 
  RF230_CCA_MODE_3 = 3 << 5, 
  RF230_CHANNEL_MASK = 0x1F, 
  RF230_CCA_CS_THRES_SHIFT = 4, 
  RF230_CCA_ED_THRES_SHIFT = 0
};

enum rf230_irq_register_enums {

  RF230_IRQ_BAT_LOW = 1 << 7, 
  RF230_IRQ_TRX_UR = 1 << 6, 
  RF230_IRQ_TRX_END = 1 << 3, 
  RF230_IRQ_RX_START = 1 << 2, 
  RF230_IRQ_PLL_UNLOCK = 1 << 1, 
  RF230_IRQ_PLL_LOCK = 1 << 0
};

enum rf230_control_register_enums {

  RF230_AVREG_EXT = 1 << 7, 
  RF230_AVDD_OK = 1 << 6, 
  RF230_DVREG_EXT = 1 << 3, 
  RF230_DVDD_OK = 1 << 2, 
  RF230_BATMON_OK = 1 << 5, 
  RF230_BATMON_VHR = 1 << 4, 
  RF230_BATMON_VTH_MASK = 0x0F, 
  RF230_XTAL_MODE_OFF = 0 << 4, 
  RF230_XTAL_MODE_EXTERNAL = 4 << 4, 
  RF230_XTAL_MODE_INTERNAL = 15 << 4
};

enum rf230_pll_register_enums {

  RF230_PLL_CF_START = 1 << 7, 
  RF230_PLL_DCU_START = 1 << 7
};

enum rf230_spi_command_enums {

  RF230_CMD_REGISTER_READ = 0x80, 
  RF230_CMD_REGISTER_WRITE = 0xC0, 
  RF230_CMD_REGISTER_MASK = 0x3F, 
  RF230_CMD_FRAME_READ = 0x20, 
  RF230_CMD_FRAME_WRITE = 0x60, 
  RF230_CMD_SRAM_READ = 0x00, 
  RF230_CMD_SRAM_WRITE = 0x40
};
# 253 "/usr/lib/gcc/avr/4.8.1/../../../avr/include/util/crc16.h" 3
#line 252
static __inline uint16_t 
_crc_ccitt_update(uint16_t __crc, uint8_t __data);
# 42 "/opt/tinyos-2.1.2/tos/platforms/iris/chips/rf230/RadioConfig.h"
enum __nesc_unnamed4318 {





  RF230_TRX_CTRL_0_VALUE = 0, 





  RF230_CCA_MODE_VALUE = RF230_CCA_MODE_3, 





  RF230_CCA_THRES_VALUE = 0xC7
};
#line 82
static __inline uint16_t RF230_CRCBYTE_COMMAND(uint16_t crc, uint8_t data);







typedef TOne TRadio;
typedef uint16_t tradio_size;
# 45 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/TinyosNetworkLayer.h"
#line 42
typedef nx_struct network_header_t {

  nxle_uint8_t network;
} __attribute__((packed)) network_header_t;
# 40 "/opt/tinyos-2.1.2/tos/types/IeeeEui64.h"
enum __nesc_unnamed4319 {
#line 40
  IEEE_EUI64_LENGTH = 8
};


#line 42
typedef struct ieee_eui64 {
  uint8_t data[IEEE_EUI64_LENGTH];
} ieee_eui64_t;
# 47 "/opt/tinyos-2.1.2/tos/types/Ieee154.h"
typedef uint16_t ieee154_panid_t;
typedef uint16_t ieee154_saddr_t;
typedef ieee_eui64_t ieee154_laddr_t;







#line 51
typedef struct __nesc_unnamed4320 {
  uint8_t ieee_mode : 2;
  union __nesc_unnamed4321 {
    ieee154_saddr_t saddr;
    ieee154_laddr_t laddr;
  } ieee_addr;
} ieee154_addr_t;



enum __nesc_unnamed4322 {
  IEEE154_BROADCAST_ADDR = 0xffff, 
  IEEE154_LINK_MTU = 127
};

struct ieee154_frame_addr {
  ieee154_addr_t ieee_src;
  ieee154_addr_t ieee_dst;
  ieee154_panid_t ieee_dstpan;
};

enum __nesc_unnamed4323 {
  IEEE154_MIN_HDR_SZ = 6
};
#line 86
enum ieee154_fcf_enums {
  IEEE154_FCF_FRAME_TYPE = 0, 
  IEEE154_FCF_SECURITY_ENABLED = 3, 
  IEEE154_FCF_FRAME_PENDING = 4, 
  IEEE154_FCF_ACK_REQ = 5, 
  IEEE154_FCF_INTRAPAN = 6, 
  IEEE154_FCF_DEST_ADDR_MODE = 10, 
  IEEE154_FCF_SRC_ADDR_MODE = 14
};

enum ieee154_fcf_type_enums {
  IEEE154_TYPE_BEACON = 0, 
  IEEE154_TYPE_DATA = 1, 
  IEEE154_TYPE_ACK = 2, 
  IEEE154_TYPE_MAC_CMD = 3, 
  IEEE154_TYPE_MASK = 7
};

enum ieee154_fcf_addr_mode_enums {
  IEEE154_ADDR_NONE = 0, 
  IEEE154_ADDR_SHORT = 2, 
  IEEE154_ADDR_EXT = 3, 
  IEEE154_ADDR_MASK = 3
};
# 47 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/Ieee154PacketLayer.h"
#line 40
typedef nx_struct ieee154_simple_header_t {

  nxle_uint16_t fcf;
  nxle_uint8_t dsn;
  nxle_uint16_t destpan;
  nxle_uint16_t dest;
  nxle_uint16_t src;
} __attribute__((packed)) ieee154_simple_header_t;
# 6 "/opt/tinyos-2.1.2/tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4324 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4325 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
# 43 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/ActiveMessageLayer.h"
#line 40
typedef nx_struct activemessage_header_t {

  nx_am_id_t type;
} __attribute__((packed)) activemessage_header_t;
# 42 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/MetadataFlagsLayer.h"
#line 38
typedef struct flags_metadata_t {


  uint8_t flags;
} flags_metadata_t;
# 41 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/TimeStampingLayer.h"
#line 38
typedef struct timestamp_metadata_t {

  uint32_t timestamp;
} timestamp_metadata_t;
# 41 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/LowPowerListeningLayer.h"
#line 38
typedef struct lpl_metadata_t {

  uint16_t sleepint;
} lpl_metadata_t;
# 42 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/PacketLinkLayer.h"
#line 38
typedef struct link_metadata_t {

  uint16_t maxRetries;
  uint16_t retryDelay;
} link_metadata_t;
# 58 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230Radio.h"
#line 48
typedef nx_struct rf230packet_header_t {

  rf230_header_t rf230;
  ieee154_simple_header_t ieee154;

  network_header_t network;


  activemessage_header_t am;
} __attribute__((packed)) 
rf230packet_header_t;




#line 60
typedef nx_struct rf230packet_footer_t {
} __attribute__((packed)) 

rf230packet_footer_t;
#line 76
#line 65
typedef struct rf230packet_metadata_t {







  timestamp_metadata_t timestamp;
  flags_metadata_t flags;
  rf230_metadata_t rf230;
} rf230packet_metadata_t;
# 83 "/opt/tinyos-2.1.2/tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4326 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4327 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4328 {
  SERIAL_PROTO_ACK = 67, 
  SERIAL_PROTO_PACKET_ACK = 68, 
  SERIAL_PROTO_PACKET_NOACK = 69, 
  SERIAL_PROTO_PACKET_UNKNOWN = 255
};
#line 121
#line 109
typedef struct radio_stats {
  uint8_t version;
  uint8_t flags;
  uint8_t reserved;
  uint8_t platform;
  uint16_t MTU;
  uint16_t radio_crc_fail;
  uint16_t radio_queue_drops;
  uint16_t serial_crc_fail;
  uint16_t serial_tx_fail;
  uint16_t serial_short_packets;
  uint16_t serial_proto_drops;
} radio_stats_t;







#line 123
typedef nx_struct serial_header {
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) serial_header_t;




#line 131
typedef nx_struct serial_packet {
  serial_header_t header;
  nx_uint8_t data[];
} __attribute__((packed)) serial_packet_t;



#line 136
typedef nx_struct serial_metadata {
  nx_uint8_t ack;
} __attribute__((packed)) serial_metadata_t;
# 43 "/opt/tinyos-2.1.2/tos/platforms/iris/platform_message.h"
#line 40
typedef union message_header {
  rf230packet_header_t rf230;
  serial_header_t serial;
} message_header_t;



#line 45
typedef union message_footer {
  rf230packet_footer_t rf230;
} message_footer_t;



#line 49
typedef union message_metadata {
  rf230packet_metadata_t rf230;
} message_metadata_t;
# 19 "/opt/tinyos-2.1.2/tos/types/message.h"
#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[28];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;
# 63 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugePageTransfer.h"
typedef int32_t object_id_t;
typedef nx_int32_t nx_object_id_t;
typedef uint32_t object_size_t;
typedef nx_uint32_t nx_object_size_t;
typedef uint8_t page_num_t;
typedef nx_uint8_t nx_page_num_t;

enum __nesc_unnamed4329 {
  DELUGET2_PKT_PAYLOAD_SIZE = 28 - sizeof(nx_object_id_t ) - sizeof(nx_page_num_t ) - sizeof(nx_uint8_t ), 
  DELUGET2_BYTES_PER_PAGE = 1024, 
  DELUGET2_PKTS_PER_PAGE = (DELUGET2_BYTES_PER_PAGE - 1) / DELUGET2_PKT_PAYLOAD_SIZE + 1, 
  DELUGET2_PKT_BITVEC_SIZE = (DELUGET2_PKTS_PER_PAGE - 1) / 8 + 1, 

  DELUGE_PKT_PAYLOAD_SIZE = 23, 
  DELUGE_PKTS_PER_PAGE = 48, 
  DELUGE_BYTES_PER_PAGE = DELUGE_PKTS_PER_PAGE * DELUGE_PKT_PAYLOAD_SIZE, 

  DELUGE_VERSION = 2, 
  DELUGE_MAX_ADV_PERIOD_LOG2 = 22, 
  DELUGE_NUM_NEWDATA_ADVS_REQUIRED = 2, 
  DELUGE_NUM_MIN_ADV_PERIODS = 2, 
  DELUGE_MAX_NUM_REQ_TRIES = 1, 
  DELUGE_REBOOT_DELAY = 4, 
  DELUGE_FAILED_SEND_DELAY = 16, 
  DELUGE_MIN_DELAY = 16, 

  DELUGE_IDENT_SIZE = 128, 
  DELUGE_INVALID_ADDR = 0x7fffffffL, 
  DELUGE_MIN_ADV_PERIOD_LOG2 = 9, 
  DELUGE_MAX_REQ_DELAY = 0x1L << (DELUGE_MIN_ADV_PERIOD_LOG2 - 1), 
  DELUGE_NACK_TIMEOUT = DELUGE_MAX_REQ_DELAY >> 0x1, 
  DELUGE_MAX_IMAGE_SIZE = 128L * 1024L, 
  DELUGE_MAX_PAGES = 128, 
  DELUGE_CRC_SIZE = sizeof(uint16_t ), 
  DELUGE_CRC_BLOCK_SIZE = DELUGE_MAX_PAGES * DELUGE_CRC_SIZE, 
  DELUGE_GOLDEN_IMAGE_NUM = 0x0, 
  DELUGE_INVALID_OBJID = 0xff, 
  DELUGE_INVALID_PKTNUM = 0xff, 
  DELUGE_INVALID_PGNUM = 0xff, 
  DELUGE_QSIZE = 2
};






#line 105
typedef struct DelugeAdvTimer {
  uint32_t timer : 32;
  uint8_t periodLog2 : 8;
  bool overheard : 1;
  uint8_t newAdvs : 7;
} DelugeAdvTimer;







#line 112
typedef nx_struct DelugeObjDesc {
  nx_object_id_t objid;
  nx_page_num_t numPgs;
  nx_uint16_t crc;
  nx_page_num_t numPgsComplete;
  nx_uint8_t reserved;
} __attribute__((packed)) DelugeObjDesc;
# 52 "/opt/tinyos-2.1.2/tos/types/Storage.h"
typedef uint8_t volume_id_t;
typedef uint32_t storage_addr_t;
typedef uint32_t storage_len_t;
typedef uint32_t storage_cookie_t;

enum __nesc_unnamed4330 {
  SEEK_BEGINNING = 0
};
# 47 "/opt/tinyos-2.1.2/tos/platforms/mica2/chips/at45db/HplAt45db_chip.h"
enum __nesc_unnamed4331 {
  AT45_MAX_PAGES = 2048, 
  AT45_PAGE_SIZE = 264, 
  AT45_PAGE_SIZE_LOG2 = 8
};

typedef uint16_t at45page_t;
typedef uint16_t at45pageoffset_t;
# 16 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45db.h"
enum __nesc_unnamed4332 {
  AT45_C_READ_BUFFER1 = 0xd4, 
  AT45_C_READ_BUFFER2 = 0xd6, 
  AT45_C_READ_CONTINUOUS = 0xe8, 
  AT45_C_READ_PAGE = 0xd2, 
  AT45_C_WRITE_BUFFER1 = 0x84, 
  AT45_C_WRITE_BUFFER2 = 0x87, 
  AT45_C_WRITE_MEM_BUFFER1 = 0x82, 
  AT45_C_WRITE_MEM_BUFFER2 = 0x85, 
  AT45_C_FILL_BUFFER1 = 0x53, 
  AT45_C_FILL_BUFFER2 = 0x55, 
  AT45_C_FLUSH_BUFFER1 = 0x83, 
  AT45_C_FLUSH_BUFFER2 = 0x86, 
  AT45_C_QFLUSH_BUFFER1 = 0x88, 
  AT45_C_QFLUSH_BUFFER2 = 0x89, 
  AT45_C_COMPARE_BUFFER1 = 0x60, 
  AT45_C_COMPARE_BUFFER2 = 0x61, 
  AT45_C_REQ_STATUS = 0xd7, 
  AT45_C_ERASE_PAGE = 0x81
};
# 49 "/opt/tinyos-2.1.2/tos/chips/at45db/At45db.h"
enum __nesc_unnamed4333 {
  AT45_ERASE, 
  AT45_DONT_ERASE, 
  AT45_PREVIOUSLY_ERASED
};
# 47 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeMsgs.h"
enum __nesc_unnamed4334 {
  DELUGE_ADV_NORMAL = 0, 
  DELUGE_ADV_ERROR = 1, 
  DELUGE_ADV_PC = 2, 
  DELUGE_ADV_PING = 3, 
  DELUGE_ADV_RESET = 4
};







#line 55
typedef nx_struct DelugeAdvMsg {
  nx_uint16_t sourceAddr;
  nx_uint8_t version;
  nx_uint8_t type;
  DelugeObjDesc objDesc;
  nx_uint8_t reserved;
} __attribute__((packed)) DelugeAdvMsg;







#line 63
typedef nx_struct DelugeReqMsg {
  nx_uint16_t dest;
  nx_uint16_t sourceAddr;
  nx_object_id_t objid;
  nx_page_num_t pgNum;
  nx_uint8_t requestedPkts[DELUGET2_PKT_BITVEC_SIZE];
} __attribute__((packed)) DelugeReqMsg;






#line 71
typedef nx_struct DelugeDataMsg {
  nx_object_id_t objid;
  nx_page_num_t pgNum;
  nx_uint8_t pktNum;
  nx_uint8_t data[DELUGET2_PKT_PAYLOAD_SIZE];
} __attribute__((packed)) DelugeDataMsg;
# 50 "/opt/tinyos-2.1.2/tos/chips/atm128/crc.h"
const uint16_t crcTable[256] __attribute((__progmem__))  = { 
0x0000, 0x1021, 0x2042, 0x3063, 0x4084, 0x50a5, 0x60c6, 0x70e7, 
0x8108, 0x9129, 0xa14a, 0xb16b, 0xc18c, 0xd1ad, 0xe1ce, 0xf1ef, 
0x1231, 0x0210, 0x3273, 0x2252, 0x52b5, 0x4294, 0x72f7, 0x62d6, 
0x9339, 0x8318, 0xb37b, 0xa35a, 0xd3bd, 0xc39c, 0xf3ff, 0xe3de, 
0x2462, 0x3443, 0x0420, 0x1401, 0x64e6, 0x74c7, 0x44a4, 0x5485, 
0xa56a, 0xb54b, 0x8528, 0x9509, 0xe5ee, 0xf5cf, 0xc5ac, 0xd58d, 
0x3653, 0x2672, 0x1611, 0x0630, 0x76d7, 0x66f6, 0x5695, 0x46b4, 
0xb75b, 0xa77a, 0x9719, 0x8738, 0xf7df, 0xe7fe, 0xd79d, 0xc7bc, 
0x48c4, 0x58e5, 0x6886, 0x78a7, 0x0840, 0x1861, 0x2802, 0x3823, 
0xc9cc, 0xd9ed, 0xe98e, 0xf9af, 0x8948, 0x9969, 0xa90a, 0xb92b, 
0x5af5, 0x4ad4, 0x7ab7, 0x6a96, 0x1a71, 0x0a50, 0x3a33, 0x2a12, 
0xdbfd, 0xcbdc, 0xfbbf, 0xeb9e, 0x9b79, 0x8b58, 0xbb3b, 0xab1a, 
0x6ca6, 0x7c87, 0x4ce4, 0x5cc5, 0x2c22, 0x3c03, 0x0c60, 0x1c41, 
0xedae, 0xfd8f, 0xcdec, 0xddcd, 0xad2a, 0xbd0b, 0x8d68, 0x9d49, 
0x7e97, 0x6eb6, 0x5ed5, 0x4ef4, 0x3e13, 0x2e32, 0x1e51, 0x0e70, 
0xff9f, 0xefbe, 0xdfdd, 0xcffc, 0xbf1b, 0xaf3a, 0x9f59, 0x8f78, 
0x9188, 0x81a9, 0xb1ca, 0xa1eb, 0xd10c, 0xc12d, 0xf14e, 0xe16f, 
0x1080, 0x00a1, 0x30c2, 0x20e3, 0x5004, 0x4025, 0x7046, 0x6067, 
0x83b9, 0x9398, 0xa3fb, 0xb3da, 0xc33d, 0xd31c, 0xe37f, 0xf35e, 
0x02b1, 0x1290, 0x22f3, 0x32d2, 0x4235, 0x5214, 0x6277, 0x7256, 
0xb5ea, 0xa5cb, 0x95a8, 0x8589, 0xf56e, 0xe54f, 0xd52c, 0xc50d, 
0x34e2, 0x24c3, 0x14a0, 0x0481, 0x7466, 0x6447, 0x5424, 0x4405, 
0xa7db, 0xb7fa, 0x8799, 0x97b8, 0xe75f, 0xf77e, 0xc71d, 0xd73c, 
0x26d3, 0x36f2, 0x0691, 0x16b0, 0x6657, 0x7676, 0x4615, 0x5634, 
0xd94c, 0xc96d, 0xf90e, 0xe92f, 0x99c8, 0x89e9, 0xb98a, 0xa9ab, 
0x5844, 0x4865, 0x7806, 0x6827, 0x18c0, 0x08e1, 0x3882, 0x28a3, 
0xcb7d, 0xdb5c, 0xeb3f, 0xfb1e, 0x8bf9, 0x9bd8, 0xabbb, 0xbb9a, 
0x4a75, 0x5a54, 0x6a37, 0x7a16, 0x0af1, 0x1ad0, 0x2ab3, 0x3a92, 
0xfd2e, 0xed0f, 0xdd6c, 0xcd4d, 0xbdaa, 0xad8b, 0x9de8, 0x8dc9, 
0x7c26, 0x6c07, 0x5c64, 0x4c45, 0x3ca2, 0x2c83, 0x1ce0, 0x0cc1, 
0xef1f, 0xff3e, 0xcf5d, 0xdf7c, 0xaf9b, 0xbfba, 0x8fd9, 0x9ff8, 
0x6e17, 0x7e36, 0x4e55, 0x5e74, 0x2e93, 0x3eb2, 0x0ed1, 0x1ef0 };









static uint16_t crcByte(uint16_t oldCrc, uint8_t byte) __attribute((noinline))  ;
# 33 "/opt/tinyos-2.1.2/tos/types/Resource.h"
typedef uint8_t resource_client_id_t;
# 45 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/TimeSyncMessageLayer.h"
typedef nx_int32_t timesync_relative_t;


typedef nx_uint32_t timesync_absolute_t;









#line 50
typedef nx_struct timesync_footer_t {

  nx_am_id_t type;
  nx_union timestamp_t {

    timesync_relative_t relative;
    timesync_absolute_t absolute;
  } __attribute__((packed)) timestamp;
} __attribute__((packed)) timesync_footer_t;
# 41 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128Spi.h"
enum __nesc_unnamed4335 {
  ATM128_SPI_CLK_DIVIDE_4 = 0, 
  ATM128_SPI_CLK_DIVIDE_16 = 1, 
  ATM128_SPI_CLK_DIVIDE_64 = 2, 
  ATM128_SPI_CLK_DIVIDE_128 = 3
};
#line 58
#line 49
typedef struct __nesc_unnamed4336 {
  uint8_t spie : 1;
  uint8_t spe : 1;
  uint8_t dord : 1;
  uint8_t mstr : 1;
  uint8_t cpol : 1;
  uint8_t cpha : 1;
  uint8_t spr : 2;
} 
Atm128SPIControl_s;



#line 59
typedef union __nesc_unnamed4337 {
  uint8_t flat;
  Atm128SPIControl_s bits;
} Atm128SPIControl_t;

typedef Atm128SPIControl_t Atm128_SPCR_t;








#line 67
typedef struct __nesc_unnamed4338 {
  uint8_t spif : 1;
  uint8_t wcol : 1;
  uint8_t rsvd : 5;
  uint8_t spi2x : 1;
} 
Atm128SPIStatus_s;



#line 74
typedef union __nesc_unnamed4339 {
  uint8_t flat;
  Atm128SPIStatus_s bits;
} Atm128SPIStatus_t;

typedef Atm128SPIStatus_t Atm128_SPSR_t;

typedef uint8_t Atm128_SPDR_t;
# 40 "/opt/tinyos-2.1.2/tos/lib/net/drip/DisseminationEngine.h"
enum __nesc_unnamed4340 {
  AM_DISSEMINATION_MESSAGE = 0x60, 
  AM_DISSEMINATION_PROBE_MESSAGE = 0x61, 
  DISSEMINATION_SEQNO_UNKNOWN = 0
};





#line 46
typedef nx_struct dissemination_message {
  nx_uint16_t key;
  nx_uint32_t seqno;
  nx_uint8_t ( data)[0];
} __attribute__((packed)) dissemination_message_t;



#line 52
typedef nx_struct dissemination_probe_message {
  nx_uint16_t key;
} __attribute__((packed)) dissemination_probe_message_t;
# 45 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/extra/mica2/NetProg_platform.h"
static inline void netprog_reboot();
# 48 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/extra/TOSBoot.h"
#line 44
typedef struct tosboot_args_t {
  uint32_t imageAddr;
  uint8_t gestureCount;
  bool noReprogram;
} tosboot_args_t;
# 651 "/usr/lib/gcc/avr/4.8.1/../../../avr/include/avr/eeprom.h" 3
uint8_t __eerd_byte_m1281(const uint8_t *__p) __attribute((__pure__)) ;
#line 678
void __eewr_byte_m1281(uint8_t *__p, uint8_t __value);
# 4 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/imgNum2volumeId.h"
uint8_t _imgNum2volumeId[4] = { 
VOLUME_GOLDENIMAGE, 
VOLUME_DELUGE1, 
VOLUME_DELUGE2, 
VOLUME_DELUGE3 };


enum __nesc_unnamed4341 {
  NON_DELUGE_VOLUME = 0xFF
};
typedef TMilli BlinkC__Timer0__precision_tag;
enum HilTimerMilliC____nesc_unnamed4342 {
  HilTimerMilliC__TIMER_COUNT = 5U
};
typedef TMilli /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC__0__precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC__0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__size_type;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__timer_size;
typedef uint8_t HplAtm1281Timer2AsyncP__Compare__size_type;
typedef uint8_t HplAtm1281Timer2AsyncP__Timer__timer_size;
typedef TMilli /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__LocalTime__precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__precision_tag;
typedef uint32_t /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__size_type;
typedef TMilli ObjectTransferP__Timer__precision_tag;
typedef TMilli DelugePageTransferP__Timer__precision_tag;
typedef uint16_t RandomMlcgC__SeedInit__parameter;
enum AMQueueP____nesc_unnamed4343 {
  AMQueueP__NUM_CLIENTS = 5U
};
typedef TRadio RF230RadioP__PacketTimeStamp__precision_tag;
typedef uint32_t RF230RadioP__PacketTimeStamp__size_type;
typedef TRadio /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__precision_tag;
typedef tradio_size /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__size_type;
typedef TRadio /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__precision_tag;
typedef uint32_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__size_type;
typedef TRadio /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__LocalTimeRadio__precision_tag;
typedef TMilli /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__LocalTimeMilli__precision_tag;
typedef TMilli /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampMilli__precision_tag;
typedef uint32_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampMilli__size_type;
typedef TMicro RF230DriverLayerP__BusyWait__precision_tag;
typedef uint16_t RF230DriverLayerP__BusyWait__size_type;
typedef uint8_t RF230DriverLayerP__PacketRSSI__value_type;
typedef TRadio RF230DriverLayerP__PacketTimeStamp__precision_tag;
typedef uint32_t RF230DriverLayerP__PacketTimeStamp__size_type;
typedef TRadio RF230DriverLayerP__LocalTime__precision_tag;
typedef uint8_t RF230DriverLayerP__PacketTransmitPower__value_type;
typedef uint8_t RF230DriverLayerP__PacketTimeSyncOffset__value_type;
typedef uint8_t RF230DriverLayerP__PacketLinkQuality__value_type;
typedef uint16_t HplRF230P__Capture__size_type;
typedef uint16_t HplAtm1281Timer1P__CompareA__size_type;
typedef uint16_t HplAtm1281Timer1P__Capture__size_type;
typedef uint16_t HplAtm1281Timer1P__CompareB__size_type;
typedef uint16_t HplAtm1281Timer1P__CompareC__size_type;
typedef uint16_t HplAtm1281Timer1P__Timer__timer_size;
typedef uint16_t /*InitOneP.InitOne*/Atm128TimerInitC__0__timer_size;
typedef /*InitOneP.InitOne*/Atm128TimerInitC__0__timer_size /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__timer_size;
typedef TOne /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__frequency_tag;
typedef uint16_t /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size;
typedef /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__frequency_tag /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__precision_tag;
typedef /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__size_type;
typedef /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__size_type;
typedef /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__timer_size;
enum /*HplRF230C.AlarmC*/AlarmOne16C__0____nesc_unnamed4344 {
  AlarmOne16C__0__COMPARE_ID = 0U
};
typedef TOne /*CounterOne16C.NCounter*/Atm128CounterC__0__frequency_tag;
typedef uint16_t /*CounterOne16C.NCounter*/Atm128CounterC__0__timer_size;
typedef /*CounterOne16C.NCounter*/Atm128CounterC__0__frequency_tag /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__precision_tag;
typedef /*CounterOne16C.NCounter*/Atm128CounterC__0__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__size_type;
typedef /*CounterOne16C.NCounter*/Atm128CounterC__0__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__timer_size;
typedef TMicro /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__to_precision_tag;
typedef uint32_t /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__to_size_type;
typedef TMicro /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__from_precision_tag;
typedef uint16_t /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__from_size_type;
typedef uint32_t /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__upper_count_type;
typedef /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__from_precision_tag /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__precision_tag;
typedef /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__from_size_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__size_type;
typedef /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__to_precision_tag /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__Counter__precision_tag;
typedef /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__to_size_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__Counter__size_type;
typedef TMicro /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag;
typedef /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__LocalTime__precision_tag;
typedef /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__precision_tag;
typedef uint32_t /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__size_type;
typedef TMicro BusyWaitMicroC__BusyWait__precision_tag;
typedef uint16_t BusyWaitMicroC__BusyWait__size_type;
enum /*DelugeC.BlockReaderDeluge1*/BlockReaderC__0____nesc_unnamed4345 {
  BlockReaderC__0__CLIENT_ID = 0U
};
enum BlockStorageManagerC____nesc_unnamed4346 {
  BlockStorageManagerC__NUM_CLIENTS = 17U
};
enum /*BlockStorageManagerC.BlockStorageC_Golden*/BlockStorageC__0____nesc_unnamed4347 {
  BlockStorageC__0__BLOCK_ID = 0U + 0U, BlockStorageC__0__RESOURCE_ID = 0U
};
typedef TMicro At45dbP__BusyWait__precision_tag;
typedef uint16_t At45dbP__BusyWait__size_type;
typedef TMicro HplAt45dbIOP__BusyWait__precision_tag;
typedef uint16_t HplAt45dbIOP__BusyWait__size_type;
enum /*BlockStorageManagerC.BlockStorageC_1*/BlockStorageC__1____nesc_unnamed4348 {
  BlockStorageC__1__BLOCK_ID = 1U + 0U, BlockStorageC__1__RESOURCE_ID = 1U
};
enum /*BlockStorageManagerC.BlockStorageC_2*/BlockStorageC__2____nesc_unnamed4349 {
  BlockStorageC__2__BLOCK_ID = 2U + 0U, BlockStorageC__2__RESOURCE_ID = 2U
};
enum /*BlockStorageManagerC.BlockStorageC_3*/BlockStorageC__3____nesc_unnamed4350 {
  BlockStorageC__3__BLOCK_ID = 3U + 0U, BlockStorageC__3__RESOURCE_ID = 3U
};
enum /*DelugeC.BlockReaderDeluge1.BlockStorageLockClientC*/BlockStorageLockClientC__1____nesc_unnamed4351 {
  BlockStorageLockClientC__1__CLIENT_ID = 0U
};
enum /*DelugeC.BlockReaderDeluge2*/BlockReaderC__1____nesc_unnamed4352 {
  BlockReaderC__1__CLIENT_ID = 1U
};
enum /*DelugeC.BlockReaderDeluge2.BlockStorageLockClientC*/BlockStorageLockClientC__2____nesc_unnamed4353 {
  BlockStorageLockClientC__2__CLIENT_ID = 1U
};
enum /*DelugeC.BlockReaderDeluge3*/BlockReaderC__2____nesc_unnamed4354 {
  BlockReaderC__2__CLIENT_ID = 2U
};
enum /*DelugeC.BlockReaderDeluge3.BlockStorageLockClientC*/BlockStorageLockClientC__3____nesc_unnamed4355 {
  BlockStorageLockClientC__3__CLIENT_ID = 2U
};
enum /*DelugeC.BlockWriterDeluge1*/BlockWriterC__0____nesc_unnamed4356 {
  BlockWriterC__0__CLIENT_ID = 3U
};
enum /*DelugeC.BlockWriterDeluge1.BlockStorageLockClientC*/BlockStorageLockClientC__4____nesc_unnamed4357 {
  BlockStorageLockClientC__4__CLIENT_ID = 3U
};
enum /*DelugeC.BlockWriterDeluge2*/BlockWriterC__1____nesc_unnamed4358 {
  BlockWriterC__1__CLIENT_ID = 4U
};
enum /*DelugeC.BlockWriterDeluge2.BlockStorageLockClientC*/BlockStorageLockClientC__5____nesc_unnamed4359 {
  BlockStorageLockClientC__5__CLIENT_ID = 4U
};
enum /*DelugeC.BlockWriterDeluge3*/BlockWriterC__2____nesc_unnamed4360 {
  BlockWriterC__2__CLIENT_ID = 5U
};
enum /*DelugeC.BlockWriterDeluge3.BlockStorageLockClientC*/BlockStorageLockClientC__6____nesc_unnamed4361 {
  BlockStorageLockClientC__6__CLIENT_ID = 5U
};
typedef DelugeCmd /*DelugeC.DisseminatorC*/DisseminatorC__0__t;
enum /*DelugeC.DisseminatorC*/DisseminatorC__0____nesc_unnamed4362 {
  DisseminatorC__0__TIMER_ID = 0U
};
typedef /*DelugeC.DisseminatorC*/DisseminatorC__0__t /*DelugeC.DisseminatorC.DisseminatorP*/DisseminatorP__0__t;
typedef /*DelugeC.DisseminatorC.DisseminatorP*/DisseminatorP__0__t /*DelugeC.DisseminatorC.DisseminatorP*/DisseminatorP__0__DisseminationUpdate__t;
typedef /*DelugeC.DisseminatorC.DisseminatorP*/DisseminatorP__0__t /*DelugeC.DisseminatorC.DisseminatorP*/DisseminatorP__0__DisseminationValue__t;
typedef TMilli /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Timer__precision_tag;
typedef DelugeCmd DelugeP__DisseminationValue__t;
enum /*DelugeMetadataC.BlockReaderGoldenImage*/BlockReaderC__3____nesc_unnamed4363 {
  BlockReaderC__3__CLIENT_ID = 6U
};
enum /*DelugeMetadataC.BlockReaderGoldenImage.BlockStorageLockClientC*/BlockStorageLockClientC__7____nesc_unnamed4364 {
  BlockStorageLockClientC__7__CLIENT_ID = 6U
};
enum /*DelugeMetadataC.BlockReaderDeluge1*/BlockReaderC__4____nesc_unnamed4365 {
  BlockReaderC__4__CLIENT_ID = 7U
};
enum /*DelugeMetadataC.BlockReaderDeluge1.BlockStorageLockClientC*/BlockStorageLockClientC__8____nesc_unnamed4366 {
  BlockStorageLockClientC__8__CLIENT_ID = 7U
};
enum /*DelugeMetadataC.BlockReaderDeluge2*/BlockReaderC__5____nesc_unnamed4367 {
  BlockReaderC__5__CLIENT_ID = 8U
};
enum /*DelugeMetadataC.BlockReaderDeluge2.BlockStorageLockClientC*/BlockStorageLockClientC__9____nesc_unnamed4368 {
  BlockStorageLockClientC__9__CLIENT_ID = 8U
};
enum /*DelugeMetadataC.BlockReaderDeluge3*/BlockReaderC__6____nesc_unnamed4369 {
  BlockReaderC__6__CLIENT_ID = 9U
};
enum /*DelugeMetadataC.BlockReaderDeluge3.BlockStorageLockClientC*/BlockStorageLockClientC__10____nesc_unnamed4370 {
  BlockStorageLockClientC__10__CLIENT_ID = 9U
};
enum /*DelugeMetadataC.BlockWriterGoldenImage*/BlockWriterC__3____nesc_unnamed4371 {
  BlockWriterC__3__CLIENT_ID = 10U
};
enum /*DelugeMetadataC.BlockWriterGoldenImage.BlockStorageLockClientC*/BlockStorageLockClientC__11____nesc_unnamed4372 {
  BlockStorageLockClientC__11__CLIENT_ID = 10U
};
enum /*DelugeMetadataC.BlockWriterDeluge1*/BlockWriterC__4____nesc_unnamed4373 {
  BlockWriterC__4__CLIENT_ID = 11U
};
enum /*DelugeMetadataC.BlockWriterDeluge1.BlockStorageLockClientC*/BlockStorageLockClientC__12____nesc_unnamed4374 {
  BlockStorageLockClientC__12__CLIENT_ID = 11U
};
enum /*DelugeMetadataC.BlockWriterDeluge2*/BlockWriterC__5____nesc_unnamed4375 {
  BlockWriterC__5__CLIENT_ID = 12U
};
enum /*DelugeMetadataC.BlockWriterDeluge2.BlockStorageLockClientC*/BlockStorageLockClientC__13____nesc_unnamed4376 {
  BlockStorageLockClientC__13__CLIENT_ID = 12U
};
enum /*DelugeMetadataC.BlockWriterDeluge3*/BlockWriterC__6____nesc_unnamed4377 {
  BlockWriterC__6__CLIENT_ID = 13U
};
enum /*DelugeMetadataC.BlockWriterDeluge3.BlockStorageLockClientC*/BlockStorageLockClientC__14____nesc_unnamed4378 {
  BlockStorageLockClientC__14__CLIENT_ID = 13U
};
enum /*DelugeC.DelugeMetadataClientC*/DelugeMetadataClientC__0____nesc_unnamed4379 {
  DelugeMetadataClientC__0__CLIENT_ID = 0U
};
enum /*DelugeC.DelugeVolumeManagerClientC*/DelugeVolumeManagerClientC__0____nesc_unnamed4380 {
  DelugeVolumeManagerClientC__0__CLIENT_ID = 0U
};
enum /*DelugeVolumeManagerC.BlockWriterDeluge1*/BlockWriterC__7____nesc_unnamed4381 {
  BlockWriterC__7__CLIENT_ID = 14U
};
enum /*DelugeVolumeManagerC.BlockWriterDeluge1.BlockStorageLockClientC*/BlockStorageLockClientC__15____nesc_unnamed4382 {
  BlockStorageLockClientC__15__CLIENT_ID = 14U
};
enum /*DelugeVolumeManagerC.BlockWriterDeluge2*/BlockWriterC__8____nesc_unnamed4383 {
  BlockWriterC__8__CLIENT_ID = 15U
};
enum /*DelugeVolumeManagerC.BlockWriterDeluge2.BlockStorageLockClientC*/BlockStorageLockClientC__16____nesc_unnamed4384 {
  BlockStorageLockClientC__16__CLIENT_ID = 15U
};
enum /*DelugeVolumeManagerC.BlockWriterDeluge3*/BlockWriterC__9____nesc_unnamed4385 {
  BlockWriterC__9__CLIENT_ID = 16U
};
enum /*DelugeVolumeManagerC.BlockWriterDeluge3.BlockStorageLockClientC*/BlockStorageLockClientC__17____nesc_unnamed4386 {
  BlockStorageLockClientC__17__CLIENT_ID = 16U
};
enum /*DelugeC.BlockStorageLockClientC*/BlockStorageLockClientC__0____nesc_unnamed4387 {
  BlockStorageLockClientC__0__CLIENT_ID = 17U
};
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t PlatformP__Init__init(void );
#line 62
static error_t MotePlatformP__PlatformInit__init(void );
# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__clr(void );
static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__toggle(void );



static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__clr(void );
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__toggle(void );



static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP__3__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP__3__IO__set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP__3__IO__clr(void );


static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void );
#line 41
static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set(void );
static void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP__9__IO__makeOutput(void );
#line 46
static void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeOutput(void );
#line 44
static void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeInput(void );

static void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__set(void );
static void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__clr(void );


static void /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP__26__IO__makeInput(void );
#line 43
static bool /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP__26__IO__get(void );
#line 41
static void /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP__26__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortD.Bit3*/HplAtm128GeneralIOPinP__27__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortD.Bit3*/HplAtm128GeneralIOPinP__27__IO__set(void );



static void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__makeInput(void );
#line 41
static void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP__29__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP__29__IO__set(void );
static void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP__29__IO__clr(void );


static void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__makeInput(void );
#line 41
static void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__clr(void );
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t MeasureClockC__Init__init(void );
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(
# 56 "/opt/tinyos-2.1.2/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x7fa21e9ff7d8);
# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__default__runTask(
# 56 "/opt/tinyos-2.1.2/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x7fa21e9ff7d8);
# 57 "/opt/tinyos-2.1.2/tos/interfaces/Scheduler.nc"
static void SchedulerBasicP__Scheduler__init(void );
#line 72
static void SchedulerBasicP__Scheduler__taskLoop(void );
#line 65
static bool SchedulerBasicP__Scheduler__runNextTask(void );
# 76 "/opt/tinyos-2.1.2/tos/interfaces/McuSleep.nc"
static void McuSleepC__McuSleep__sleep(void );
# 52 "/opt/tinyos-2.1.2/tos/interfaces/McuPowerState.nc"
static void McuSleepC__McuPowerState__update(void );
# 83 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
static void BlinkC__Timer0__fired(void );
# 60 "/opt/tinyos-2.1.2/tos/interfaces/Boot.nc"
static void BlinkC__Boot__booted(void );
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t LedsP__Init__init(void );
# 61 "/opt/tinyos-2.1.2/tos/interfaces/Leds.nc"
static void LedsP__Leds__led0Off(void );





static void LedsP__Leds__led0Toggle(void );




static void LedsP__Leds__led1On(void );










static void LedsP__Leds__led1Toggle(void );
#line 77
static void LedsP__Leds__led1Off(void );
#line 94
static void LedsP__Leds__led2Off(void );
#line 134
static void LedsP__Leds__set(uint8_t val);
#line 56
static void LedsP__Leds__led0On(void );
#line 89
static void LedsP__Leds__led2On(void );
# 109 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__getNow(void );
#line 103
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__startAt(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__size_type t0, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__size_type dt);
#line 116
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__getAlarm(void );
#line 73
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__stop(void );
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Init__init(void );
# 64 "/opt/tinyos-2.1.2/tos/lib/timer/Counter.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__get(void );
# 58 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__fired(void );
# 70 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__overflow(void );
# 89 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/HplAtm128TimerCtrl8.nc"
static uint8_t HplAtm1281Timer2AsyncP__TimerCtrl__getInterruptFlag(void );
#line 82
static void HplAtm1281Timer2AsyncP__TimerCtrl__setControlB(uint8_t control);
#line 81
static void HplAtm1281Timer2AsyncP__TimerCtrl__setControlA(uint8_t control);
# 62 "/opt/tinyos-2.1.2/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t HplAtm1281Timer2AsyncP__McuPowerOverride__lowestState(void );
# 68 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/HplAtm128TimerAsync.nc"
static void HplAtm1281Timer2AsyncP__TimerAsync__setTimer2Asynchronous(void );
#line 86
static int HplAtm1281Timer2AsyncP__TimerAsync__compareABusy(void );
# 48 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
static HplAtm1281Timer2AsyncP__Compare__size_type HplAtm1281Timer2AsyncP__Compare__get(void );





static void HplAtm1281Timer2AsyncP__Compare__set(HplAtm1281Timer2AsyncP__Compare__size_type t);










static void HplAtm1281Timer2AsyncP__Compare__start(void );
# 61 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer.nc"
static HplAtm1281Timer2AsyncP__Timer__timer_size HplAtm1281Timer2AsyncP__Timer__get(void );
# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );
# 78 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
# 136 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
#line 129
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );
# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
# 83 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );
#line 136
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(
# 48 "/opt/tinyos-2.1.2/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7fa21e652da0);
# 83 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(
# 48 "/opt/tinyos-2.1.2/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7fa21e652da0);
# 151 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getdt(
# 48 "/opt/tinyos-2.1.2/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7fa21e652da0);
# 144 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__gett0(
# 48 "/opt/tinyos-2.1.2/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7fa21e652da0);
# 64 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(
# 48 "/opt/tinyos-2.1.2/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7fa21e652da0, 
# 64 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
uint32_t dt);








static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(
# 48 "/opt/tinyos-2.1.2/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7fa21e652da0, 
# 73 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
uint32_t dt);




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(
# 48 "/opt/tinyos-2.1.2/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7fa21e652da0);
# 82 "/opt/tinyos-2.1.2/tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 83 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
static void ObjectTransferP__Timer__fired(void );
# 110 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
static void ObjectTransferP__SendAdvMsg__sendDone(
#line 103
message_t * msg, 






error_t error);
# 78 "/opt/tinyos-2.1.2/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



ObjectTransferP__ReceiveAdvMsg__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 112 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
static void ObjectTransferP__BlockWrite__syncDone(
# 57 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/ObjectTransferP.nc"
uint8_t arg_0x7fa21e522288, 
# 112 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
error_t error);
#line 71
static void ObjectTransferP__BlockWrite__writeDone(
# 57 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/ObjectTransferP.nc"
uint8_t arg_0x7fa21e522288, 
# 71 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
storage_addr_t addr, 
#line 66
void * buf, 




storage_len_t len, 
error_t error);










static error_t ObjectTransferP__BlockWrite__default__erase(
# 57 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/ObjectTransferP.nc"
uint8_t arg_0x7fa21e522288);
# 91 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
static void ObjectTransferP__BlockWrite__eraseDone(
# 57 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/ObjectTransferP.nc"
uint8_t arg_0x7fa21e522288, 
# 91 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
error_t error);
#line 103
static error_t ObjectTransferP__BlockWrite__default__sync(
# 57 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/ObjectTransferP.nc"
uint8_t arg_0x7fa21e522288);
# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void ObjectTransferP__signalObjRecvDone__runTask(void );
# 48 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugePageTransfer.nc"
static void ObjectTransferP__DelugePageTransfer__suppressMsgs(object_id_t new_objid);
static void ObjectTransferP__DelugePageTransfer__receivedPage(object_id_t new_objid, page_num_t new_pgNum);
# 42 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/ObjectTransfer.nc"
static error_t ObjectTransferP__ObjectTransfer__receive(object_id_t new_objid, object_size_t new_size, uint8_t img_num);
#line 41
static error_t ObjectTransferP__ObjectTransfer__publish(object_id_t new_objid, object_size_t new_size, uint8_t img_num);



static error_t ObjectTransferP__ObjectTransfer__stop(void );
# 110 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
static void DelugePageTransferP__SendReqMsg__sendDone(
#line 103
message_t * msg, 






error_t error);
# 56 "/opt/tinyos-2.1.2/tos/interfaces/BlockRead.nc"
static error_t DelugePageTransferP__BlockRead__default__read(
# 50 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugePageTransferP.nc"
uint8_t arg_0x7fa21e48f320, 
# 56 "/opt/tinyos-2.1.2/tos/interfaces/BlockRead.nc"
storage_addr_t addr, 
#line 49
void * buf, 






storage_len_t len);
#line 95
static void DelugePageTransferP__BlockRead__computeCrcDone(
# 50 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugePageTransferP.nc"
uint8_t arg_0x7fa21e48f320, 
# 95 "/opt/tinyos-2.1.2/tos/interfaces/BlockRead.nc"
storage_addr_t addr, storage_len_t len, 
uint16_t crc, error_t error);
#line 67
static void DelugePageTransferP__BlockRead__readDone(
# 50 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugePageTransferP.nc"
uint8_t arg_0x7fa21e48f320, 
# 67 "/opt/tinyos-2.1.2/tos/interfaces/BlockRead.nc"
storage_addr_t addr, 
#line 62
void * buf, 




storage_len_t len, 
error_t error);
# 112 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
static void DelugePageTransferP__BlockWrite__syncDone(
# 51 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugePageTransferP.nc"
uint8_t arg_0x7fa21e48e4a0, 
# 112 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
error_t error);
#line 71
static void DelugePageTransferP__BlockWrite__writeDone(
# 51 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugePageTransferP.nc"
uint8_t arg_0x7fa21e48e4a0, 
# 71 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
storage_addr_t addr, 
#line 66
void * buf, 




storage_len_t len, 
error_t error);
#line 91
static void DelugePageTransferP__BlockWrite__eraseDone(
# 51 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugePageTransferP.nc"
uint8_t arg_0x7fa21e48e4a0, 
# 91 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
error_t error);
#line 58
static error_t DelugePageTransferP__BlockWrite__default__write(
# 51 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugePageTransferP.nc"
uint8_t arg_0x7fa21e48e4a0, 
# 58 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
storage_addr_t addr, 
#line 51
void * buf, 






storage_len_t len);
# 78 "/opt/tinyos-2.1.2/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



DelugePageTransferP__ReceiveDataMsg__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
#line 78
static 
#line 74
message_t * 



DelugePageTransferP__ReceiveReqMsg__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 110 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
static void DelugePageTransferP__SendDataMsg__sendDone(
#line 103
message_t * msg, 






error_t error);
# 45 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugePageTransfer.nc"
static error_t DelugePageTransferP__DelugePageTransfer__setWorkingPage(object_id_t new_objid, page_num_t new_pgNum);
static error_t DelugePageTransferP__DelugePageTransfer__dataAvailable(uint16_t sourceAddr);



static void DelugePageTransferP__DelugePageTransfer__setImgNum(uint8_t new_img_num);
#line 47
static bool DelugePageTransferP__DelugePageTransfer__isTransferring(void );



static error_t DelugePageTransferP__DelugePageTransfer__stop(void );
# 83 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
static void DelugePageTransferP__Timer__fired(void );
# 52 "/opt/tinyos-2.1.2/tos/interfaces/Random.nc"
static uint16_t RandomMlcgC__Random__rand16(void );
#line 46
static uint32_t RandomMlcgC__Random__rand32(void );
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t RandomMlcgC__Init__init(void );
# 50 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BitVecUtils.nc"
static error_t BitVecUtilsC__BitVecUtils__indexOf(uint16_t *pResult, uint16_t fromIndex, 
uint8_t *bitVec, uint16_t length);
# 61 "/opt/tinyos-2.1.2/tos/interfaces/Crc.nc"
static uint16_t CrcC__Crc__seededCrc16(uint16_t startCrc, 
#line 57
void * buf, 



uint8_t len);
#line 50
static uint16_t CrcC__Crc__crc16(
#line 46
void * buf, 



uint8_t len);
# 80 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
static error_t /*ObjectTransferC.SendAdvMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 135
static 
#line 133
void * 

/*ObjectTransferC.SendAdvMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__getPayload(
#line 132
message_t * msg, 


uint8_t len);
# 100 "/opt/tinyos-2.1.2/tos/interfaces/Send.nc"
static void /*ObjectTransferC.SendAdvMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(
#line 96
message_t * msg, 



error_t error);
# 110 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(
# 48 "/opt/tinyos-2.1.2/tos/system/AMQueueImplP.nc"
am_id_t arg_0x7fa21e360488, 
# 103 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 75 "/opt/tinyos-2.1.2/tos/interfaces/Send.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(
# 46 "/opt/tinyos-2.1.2/tos/system/AMQueueImplP.nc"
uint8_t arg_0x7fa21e361318, 
# 67 "/opt/tinyos-2.1.2/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 125
static 
#line 123
void * 

/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__getPayload(
# 46 "/opt/tinyos-2.1.2/tos/system/AMQueueImplP.nc"
uint8_t arg_0x7fa21e361318, 
# 122 "/opt/tinyos-2.1.2/tos/interfaces/Send.nc"
message_t * msg, 


uint8_t len);
#line 112
static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__maxPayloadLength(
# 46 "/opt/tinyos-2.1.2/tos/system/AMQueueImplP.nc"
uint8_t arg_0x7fa21e361318);
# 100 "/opt/tinyos-2.1.2/tos/interfaces/Send.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(
# 46 "/opt/tinyos-2.1.2/tos/system/AMQueueImplP.nc"
uint8_t arg_0x7fa21e361318, 
# 96 "/opt/tinyos-2.1.2/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask(void );
#line 75
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask(void );
# 63 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
static error_t RF230RadioP__ActiveMessageConfig__checkFrame(message_t *msg);
#line 46
static am_addr_t RF230RadioP__ActiveMessageConfig__source(message_t *msg);
#line 40
static am_addr_t RF230RadioP__ActiveMessageConfig__destination(message_t *msg);








static void RF230RadioP__ActiveMessageConfig__setSource(message_t *msg, am_addr_t addr);
#line 43
static void RF230RadioP__ActiveMessageConfig__setDestination(message_t *msg, am_addr_t addr);
#line 55
static void RF230RadioP__ActiveMessageConfig__setGroup(message_t *msg, am_group_t grp);
# 60 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioAlarm.nc"
static void RF230RadioP__RadioAlarm__fired(void );
# 46 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230DriverConfig.nc"
static uint8_t RF230RadioP__RF230DriverConfig__maxPayloadLength(void );
#line 40
static uint8_t RF230RadioP__RF230DriverConfig__headerLength(message_t *msg);
#line 52
static uint8_t RF230RadioP__RF230DriverConfig__metadataLength(message_t *msg);






static uint8_t RF230RadioP__RF230DriverConfig__headerPreloadLength(void );





static bool RF230RadioP__RF230DriverConfig__requiresRssiCca(message_t *msg);
# 86 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
static void RF230RadioP__SoftwareAckConfig__reportChannelError(void );
#line 80
static void RF230RadioP__SoftwareAckConfig__createAckPacket(message_t *data, message_t *ack);
#line 55
static bool RF230RadioP__SoftwareAckConfig__requiresAckWait(message_t *msg);






static bool RF230RadioP__SoftwareAckConfig__isAckPacket(message_t *msg);






static bool RF230RadioP__SoftwareAckConfig__verifyAckPacket(message_t *data, message_t *ack);
#line 43
static uint16_t RF230RadioP__SoftwareAckConfig__getAckTimeout(void );
#line 75
static bool RF230RadioP__SoftwareAckConfig__requiresAckReply(message_t *msg);
# 52 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/UniqueConfig.nc"
static void RF230RadioP__UniqueConfig__setSequenceNumber(message_t *msg, uint8_t number);





static void RF230RadioP__UniqueConfig__reportChannelError(void );
#line 42
static uint8_t RF230RadioP__UniqueConfig__getSequenceNumber(message_t *msg);




static am_addr_t RF230RadioP__UniqueConfig__getSender(message_t *msg);
# 46 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/RandomCollisionConfig.nc"
static uint16_t RF230RadioP__RandomCollisionConfig__getCongestionBackoff(message_t *msg);
#line 40
static uint16_t RF230RadioP__RandomCollisionConfig__getInitialBackoff(message_t *msg);










static uint16_t RF230RadioP__RandomCollisionConfig__getMinimumBackoff(void );





static uint16_t RF230RadioP__RandomCollisionConfig__getTransmitBarrier(message_t *msg);
# 60 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__default__fired(
# 43 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t arg_0x7fa21e1d3220);
# 50 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__wait(
# 43 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t arg_0x7fa21e1d3220, 
# 50 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioAlarm.nc"
tradio_size timeout);




static void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__cancel(
# 43 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t arg_0x7fa21e1d3220);
# 45 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioAlarm.nc"
static bool /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__isFree(
# 43 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t arg_0x7fa21e1d3220);
# 65 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioAlarm.nc"
static tradio_size /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__getNow(
# 43 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t arg_0x7fa21e1d3220);
# 78 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
static void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__fired(void );
# 48 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/Tasklet.nc"
static void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__run(void );










static void TaskletC__Tasklet__schedule(void );
#line 72
static void TaskletC__Tasklet__suspend(void );






static void TaskletC__Tasklet__resume(void );
# 42 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubReceive__receive(message_t *msg);
# 54 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/BareSend.nc"
static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__sendDone(message_t *msg, error_t error);
# 59 "/opt/tinyos-2.1.2/tos/interfaces/SendNotifier.nc"
static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SendNotifier__default__aboutToSend(
# 48 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x7fa21e184020, 
# 59 "/opt/tinyos-2.1.2/tos/interfaces/SendNotifier.nc"
am_addr_t dest, 
#line 57
message_t * msg);
# 78 "/opt/tinyos-2.1.2/tos/interfaces/Packet.nc"
static uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__payloadLength(
#line 74
message_t * msg);
#line 126
static 
#line 123
void * 


/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__getPayload(
#line 121
message_t * msg, 




uint8_t len);
#line 106
static uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__maxPayloadLength(void );
#line 94
static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 80 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
static error_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__send(
# 45 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x7fa21e188778, 
# 80 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 135
static 
#line 133
void * 

/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__getPayload(
# 45 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x7fa21e188778, 
# 132 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
message_t * msg, 


uint8_t len);
#line 123
static uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__maxPayloadLength(
# 45 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x7fa21e188778);
# 78 "/opt/tinyos-2.1.2/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__default__receive(
# 47 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x7fa21e186480, 
# 71 "/opt/tinyos-2.1.2/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 49 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__payloadLength(message_t *msg);









static uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__maxPayloadLength(void );
#line 54
static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__headerLength(message_t *msg);
# 78 "/opt/tinyos-2.1.2/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__default__receive(
# 46 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x7fa21e187908, 
# 71 "/opt/tinyos-2.1.2/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
#line 78
static 
#line 74
message_t * 



/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ReceiveDefault__default__receive(
# 51 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x7fa21e184be0, 
# 71 "/opt/tinyos-2.1.2/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 88 "/opt/tinyos-2.1.2/tos/interfaces/AMPacket.nc"
static am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__source(
#line 84
message_t * amsg);
#line 68
static am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__address(void );









static am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__destination(
#line 74
message_t * amsg);
#line 121
static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setSource(
#line 117
message_t * amsg, 



am_addr_t addr);
#line 103
static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 147
static am_id_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__type(
#line 143
message_t * amsg);
#line 162
static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setType(
#line 158
message_t * amsg, 



am_id_t t);
#line 136
static bool /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__isForMe(
#line 133
message_t * amsg);
#line 187
static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setGroup(
#line 184
message_t * amsg, 


am_group_t grp);







static am_group_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__localGroup(void );
# 78 "/opt/tinyos-2.1.2/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SnoopDefault__default__receive(
# 52 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x7fa21e183808, 
# 71 "/opt/tinyos-2.1.2/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 55 "/opt/tinyos-2.1.2/tos/system/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC__amAddress(void );
# 50 "/opt/tinyos-2.1.2/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void );




static am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void );
# 57 "/opt/tinyos-2.1.2/tos/system/ActiveMessageAddressC.nc"
static void ActiveMessageAddressC__initAmAddress(am_group_t myGroup, am_addr_t myAddr);
# 54 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/BareSend.nc"
static void /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__sendDone(message_t *msg, error_t error);
# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static void /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__granted(void );
# 46 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__send(message_t *msg);
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__Init__init(void );
# 79 "/opt/tinyos-2.1.2/tos/interfaces/ResourceQueue.nc"
static error_t /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id);
#line 53
static bool /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );








static bool /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
# 53 "/opt/tinyos-2.1.2/tos/interfaces/ResourceRequested.nc"
static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(
# 52 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fa21e0aa020);
# 61 "/opt/tinyos-2.1.2/tos/interfaces/ResourceRequested.nc"
static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__immediateRequested(
# 52 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fa21e0aa020);
# 65 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(
# 56 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fa21e0a8538);
# 59 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(
# 56 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fa21e0a8538);
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__release(
# 51 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fa21e0ace30);
# 97 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__immediateRequest(
# 51 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fa21e0ace30);
# 88 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__request(
# 51 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fa21e0ace30);
# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__default__granted(
# 51 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fa21e0ace30);
# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void );
# 54 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/BareSend.nc"
static void /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubSend__sendDone(message_t *msg, error_t error);
# 42 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubReceive__receive(message_t *msg);
# 78 "/opt/tinyos-2.1.2/tos/interfaces/Packet.nc"
static uint8_t /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Packet__payloadLength(
#line 74
message_t * msg);
# 97 "/opt/tinyos-2.1.2/tos/interfaces/Ieee154Send.nc"
static void /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__default__sendDone(message_t *msg, error_t error);
# 78 "/opt/tinyos-2.1.2/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__default__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 54 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/BareSend.nc"
static void /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__sendDone(message_t *msg, error_t error);
# 42 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubReceive__receive(message_t *msg);
# 49 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__payloadLength(message_t *msg);
#line 43
static uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__headerLength(message_t *msg);
# 46 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__send(message_t *msg);
# 49 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__payloadLength(message_t *msg);









static uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__maxPayloadLength(void );
#line 54
static void /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__headerLength(message_t *msg);





static uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__payloadLength(message_t *msg);









static uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__maxPayloadLength(void );
#line 54
static void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__headerLength(message_t *msg);
# 131 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
static uint16_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestPan(message_t *msg);
#line 120
static uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDSN(message_t *msg);
#line 75
static bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isAckFrame(message_t *msg);
#line 156
static void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setSrcAddr(message_t *msg, uint16_t addr);
#line 69
static void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createDataFrame(message_t *msg);
#line 125
static void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDSN(message_t *msg, uint8_t dsn);
#line 88
static void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createAckReply(message_t *data, message_t *ack);
#line 151
static uint16_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getSrcAddr(message_t *msg);
#line 63
static bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isDataFrame(message_t *msg);
#line 99
static bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getAckRequired(message_t *msg);
#line 94
static bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__verifyAckReply(message_t *data, message_t *ack);
#line 178
static ieee154_saddr_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localAddr(void );
#line 162
static bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckWait(message_t *msg);










static ieee154_panid_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localPan(void );
#line 146
static void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestAddr(message_t *msg, uint16_t addr);
#line 136
static void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestPan(message_t *msg, uint16_t pan);
#line 185
static bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isForMe(message_t *msg);
#line 168
static bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckReply(message_t *msg);
#line 141
static uint16_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(message_t *msg);
# 54 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/BareSend.nc"
static void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__sendDone(message_t *msg, error_t error);
# 53 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__receive(message_t *msg);
#line 46
static bool /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__header(message_t *msg);
# 46 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__send(message_t *msg);
# 80 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/Neighborhood.nc"
static void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__evicted(uint8_t idx);
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Init__init(void );
# 46 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/NeighborhoodFlag.nc"
static bool NeighborhoodP__NeighborhoodFlag__get(
# 43 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/NeighborhoodP.nc"
uint8_t arg_0x7fa21df37970, 
# 46 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/NeighborhoodFlag.nc"
uint8_t idx);




static void NeighborhoodP__NeighborhoodFlag__set(
# 43 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/NeighborhoodP.nc"
uint8_t arg_0x7fa21df37970, 
# 51 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/NeighborhoodFlag.nc"
uint8_t idx);
# 71 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/Neighborhood.nc"
static uint8_t NeighborhoodP__Neighborhood__insertNode(am_addr_t id);
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t NeighborhoodP__Init__init(void );
# 104 "/opt/tinyos-2.1.2/tos/interfaces/SplitControl.nc"
static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__start(void );
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SoftwareInit__init(void );
# 69 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioState.nc"
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__done(void );
# 46 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__send(message_t *msg);
# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__runTask(void );
# 53 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__receive(message_t *msg);
#line 46
static bool /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__header(message_t *msg);
# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__runTask(void );
#line 75
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__runTask(void );
# 63 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioSend.nc"
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__ready(void );
#line 56
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__sendDone(error_t error);
# 48 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioChannel.nc"
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__default__setChannelDone(void );
# 48 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/Tasklet.nc"
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__run(void );
# 63 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioSend.nc"
static void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__ready(void );
#line 56
static void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__sendDone(error_t error);
# 53 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__receive(message_t *msg);
#line 46
static bool /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__header(message_t *msg);
# 60 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__fired(void );
# 48 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioSend.nc"
static error_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__send(message_t *msg);
# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__runTask(void );
# 63 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioSend.nc"
static void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__ready(void );
#line 56
static void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__sendDone(error_t error);
# 53 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__receive(message_t *msg);
#line 46
static bool /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__header(message_t *msg);
# 60 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__fired(void );
# 48 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioSend.nc"
static error_t /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__send(message_t *msg);
# 49 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__payloadLength(message_t *msg);









static uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__maxPayloadLength(void );
#line 54
static void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__headerLength(message_t *msg);
#line 65
static uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__metadataLength(message_t *msg);
# 70 "/opt/tinyos-2.1.2/tos/interfaces/PacketTimeStamp.nc"
static void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__clear(
#line 66
message_t * msg);
#line 78
static void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__set(
#line 73
message_t * msg, 




/*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__size_type value);
# 49 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__payloadLength(message_t *msg);









static uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__maxPayloadLength(void );
#line 54
static void /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__headerLength(message_t *msg);
#line 65
static uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__metadataLength(message_t *msg);
# 55 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/PacketFlag.nc"
static void /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(
# 42 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
uint8_t arg_0x7fa21dd6db60, 
# 55 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/PacketFlag.nc"
message_t *msg);
#line 40
static bool /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__get(
# 42 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
uint8_t arg_0x7fa21dd6db60, 
# 40 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/PacketFlag.nc"
message_t *msg);









static void /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(
# 42 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
uint8_t arg_0x7fa21dd6db60, 
# 50 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/PacketFlag.nc"
message_t *msg);
# 52 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioCCA.nc"
static void RF230DriverLayerP__RadioCCA__default__done(error_t error);
# 51 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/PacketField.nc"
static void RF230DriverLayerP__PacketRSSI__clear(message_t *msg);





static void RF230DriverLayerP__PacketRSSI__set(message_t *msg, RF230DriverLayerP__PacketRSSI__value_type value);
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t RF230DriverLayerP__SoftwareInit__init(void );
# 60 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioAlarm.nc"
static void RF230DriverLayerP__RadioAlarm__fired(void );
# 56 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioState.nc"
static error_t RF230DriverLayerP__RadioState__turnOn(void );
# 46 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/PacketField.nc"
static RF230DriverLayerP__PacketTransmitPower__value_type RF230DriverLayerP__PacketTransmitPower__get(message_t *msg);
#line 40
static bool RF230DriverLayerP__PacketTransmitPower__isSet(message_t *msg);
# 49 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t RF230DriverLayerP__RadioPacket__payloadLength(message_t *msg);









static uint8_t RF230DriverLayerP__RadioPacket__maxPayloadLength(void );
#line 54
static void RF230DriverLayerP__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t RF230DriverLayerP__RadioPacket__headerLength(message_t *msg);
#line 65
static uint8_t RF230DriverLayerP__RadioPacket__metadataLength(message_t *msg);
# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void RF230DriverLayerP__releaseSpi__runTask(void );
# 46 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/PacketField.nc"
static RF230DriverLayerP__PacketTimeSyncOffset__value_type RF230DriverLayerP__PacketTimeSyncOffset__get(message_t *msg);
#line 40
static bool RF230DriverLayerP__PacketTimeSyncOffset__isSet(message_t *msg);
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t RF230DriverLayerP__PlatformInit__init(void );
# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static void RF230DriverLayerP__SpiResource__granted(void );
# 57 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/PacketField.nc"
static void RF230DriverLayerP__PacketLinkQuality__set(message_t *msg, RF230DriverLayerP__PacketLinkQuality__value_type value);
# 48 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioSend.nc"
static error_t RF230DriverLayerP__RadioSend__send(message_t *msg);
# 61 "/opt/tinyos-2.1.2/tos/interfaces/GpioCapture.nc"
static void RF230DriverLayerP__IRQ__captured(uint16_t time);
# 48 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/Tasklet.nc"
static void RF230DriverLayerP__Tasklet__run(void );
# 60 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplRF230P__Capture__captured(HplRF230P__Capture__size_type t);
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t HplRF230P__PlatformInit__init(void );
# 66 "/opt/tinyos-2.1.2/tos/interfaces/GpioCapture.nc"
static void HplRF230P__IRQ__disable(void );
#line 53
static error_t HplRF230P__IRQ__captureRisingEdge(void );
# 65 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
static void Atm128SpiP__ResourceConfigure__unconfigure(
# 95 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x7fa21dbe1c38);
# 59 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
static void Atm128SpiP__ResourceConfigure__configure(
# 95 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x7fa21dbe1c38);
# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void Atm128SpiP__zeroTask__runTask(void );
# 82 "/opt/tinyos-2.1.2/tos/interfaces/SpiPacket.nc"
static void Atm128SpiP__SpiPacket__default__sendDone(
#line 75
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 45 "/opt/tinyos-2.1.2/tos/interfaces/SpiByte.nc"
static uint8_t Atm128SpiP__SpiByte__write(uint8_t tx);
# 109 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128Spi.nc"
static void Atm128SpiP__Spi__dataReady(uint8_t data);
# 62 "/opt/tinyos-2.1.2/tos/interfaces/FastSpiByte.nc"
static void Atm128SpiP__FastSpiByte__splitWrite(uint8_t data);
#line 74
static uint8_t Atm128SpiP__FastSpiByte__splitReadWrite(uint8_t data);
#line 68
static uint8_t Atm128SpiP__FastSpiByte__splitRead(void );
#line 81
static uint8_t Atm128SpiP__FastSpiByte__write(uint8_t data);
# 89 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128Spi.nc"
static void HplAtm128SpiP__SPI__sleep(void );
#line 83
static void HplAtm128SpiP__SPI__initMaster(void );
#line 122
static void HplAtm128SpiP__SPI__setMasterBit(bool isMaster);
#line 113
static void HplAtm128SpiP__SPI__enableInterrupt(bool enabled);
#line 97
static uint8_t HplAtm128SpiP__SPI__read(void );
#line 141
static void HplAtm128SpiP__SPI__setMasterDoubleSpeed(bool on);
#line 131
static void HplAtm128SpiP__SPI__setClock(uint8_t speed);




static bool HplAtm128SpiP__SPI__isInterruptPending(void );
#line 125
static void HplAtm128SpiP__SPI__setClockPolarity(bool highWhenIdle);
#line 103
static void HplAtm128SpiP__SPI__write(uint8_t data);
#line 116
static void HplAtm128SpiP__SPI__enableSpi(bool busOn);
#line 128
static void HplAtm128SpiP__SPI__setClockPhase(bool sampleOnTrailing);
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__Init__init(void );
# 79 "/opt/tinyos-2.1.2/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__enqueue(resource_client_id_t id);
#line 53
static bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty(void );








static bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue(void );
# 53 "/opt/tinyos-2.1.2/tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__default__requested(
# 52 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fa21e0aa020);
# 61 "/opt/tinyos-2.1.2/tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__default__immediateRequested(
# 52 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fa21e0aa020);
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__release(
# 51 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fa21e0ace30);
# 97 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__immediateRequest(
# 51 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fa21e0ace30);
# 88 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__request(
# 51 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fa21e0ace30);
# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__default__granted(
# 51 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fa21e0ace30);
# 128 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__isOwner(
# 51 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fa21e0ace30);
# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__grantedTask__runTask(void );
# 91 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/HplAtm128TimerCtrl16.nc"
static uint8_t HplAtm1281Timer1P__TimerCtrl__getInterruptFlag(void );
#line 83
static void HplAtm1281Timer1P__TimerCtrl__setControlB(uint8_t control);
#line 80
static uint8_t HplAtm1281Timer1P__TimerCtrl__getControlB(void );
# 62 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm1281Timer1P__CompareA__reset(void );
#line 54
static void HplAtm1281Timer1P__CompareA__set(HplAtm1281Timer1P__CompareA__size_type t);










static void HplAtm1281Timer1P__CompareA__start(void );


static void HplAtm1281Timer1P__CompareA__stop(void );
# 88 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplAtm1281Timer1P__Capture__setEdge(bool up);
#line 47
static HplAtm1281Timer1P__Capture__size_type HplAtm1281Timer1P__Capture__get(void );
#line 64
static void HplAtm1281Timer1P__Capture__reset(void );


static void HplAtm1281Timer1P__Capture__start(void );


static void HplAtm1281Timer1P__Capture__stop(void );
# 58 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm1281Timer1P__CompareB__default__fired(void );
#line 58
static void HplAtm1281Timer1P__CompareC__default__fired(void );
# 87 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer.nc"
static bool HplAtm1281Timer1P__Timer__test(void );
#line 61
static HplAtm1281Timer1P__Timer__timer_size HplAtm1281Timer1P__Timer__get(void );
#line 104
static void HplAtm1281Timer1P__Timer__setScale(uint8_t scale);
#line 67
static void HplAtm1281Timer1P__Timer__set(HplAtm1281Timer1P__Timer__timer_size t);










static void HplAtm1281Timer1P__Timer__start(void );
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t /*InitOneP.InitOne*/Atm128TimerInitC__0__Init__init(void );
# 70 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__overflow(void );
# 109 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
static /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__size_type /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__getNow(void );
#line 103
static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__startAt(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__size_type t0, /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__size_type dt);
#line 66
static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__start(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__size_type dt);






static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__stop(void );
# 58 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__fired(void );
# 70 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__overflow(void );
# 64 "/opt/tinyos-2.1.2/tos/lib/timer/Counter.nc"
static /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__size_type /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__get(void );






static bool /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__isOverflowPending(void );
# 70 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__overflow(void );
# 82 "/opt/tinyos-2.1.2/tos/lib/timer/Counter.nc"
static void /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__overflow(void );
#line 64
static /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__Counter__size_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__Counter__get(void );
# 61 "/opt/tinyos-2.1.2/tos/lib/timer/LocalTime.nc"
static uint32_t /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__LocalTime__get(void );
# 82 "/opt/tinyos-2.1.2/tos/lib/timer/Counter.nc"
static void /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void );
# 66 "/opt/tinyos-2.1.2/tos/lib/timer/BusyWait.nc"
static void BusyWaitMicroC__BusyWait__wait(BusyWaitMicroC__BusyWait__size_type dt);
# 80 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
static error_t /*ObjectTransferC.SendReqMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 135
static 
#line 133
void * 

/*ObjectTransferC.SendReqMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__getPayload(
#line 132
message_t * msg, 


uint8_t len);
# 100 "/opt/tinyos-2.1.2/tos/interfaces/Send.nc"
static void /*ObjectTransferC.SendReqMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__sendDone(
#line 96
message_t * msg, 



error_t error);
# 80 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
static error_t /*ObjectTransferC.SendDataMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMSend__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 135
static 
#line 133
void * 

/*ObjectTransferC.SendDataMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMSend__getPayload(
#line 132
message_t * msg, 


uint8_t len);
# 100 "/opt/tinyos-2.1.2/tos/interfaces/Send.nc"
static void /*ObjectTransferC.SendDataMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__2__Send__sendDone(
#line 96
message_t * msg, 



error_t error);
# 39 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/VolumeId.nc"
static volume_id_t /*DelugeC.BlockReaderDeluge1.VolumeIdC*/VolumeIdC__0__VolumeId__get(void );
# 56 "/opt/tinyos-2.1.2/tos/interfaces/BlockRead.nc"
static error_t /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockRead__read(
# 40 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/BlockStorageManagerP.nc"
uint8_t arg_0x7fa21d928840, 
# 56 "/opt/tinyos-2.1.2/tos/interfaces/BlockRead.nc"
storage_addr_t addr, 
#line 49
void * buf, 






storage_len_t len);
#line 95
static void /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockRead__default__computeCrcDone(
# 40 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/BlockStorageManagerP.nc"
uint8_t arg_0x7fa21d928840, 
# 95 "/opt/tinyos-2.1.2/tos/interfaces/BlockRead.nc"
storage_addr_t addr, storage_len_t len, 
uint16_t crc, error_t error);
#line 83
static error_t /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockRead__computeCrc(
# 40 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/BlockStorageManagerP.nc"
uint8_t arg_0x7fa21d928840, 
# 83 "/opt/tinyos-2.1.2/tos/interfaces/BlockRead.nc"
storage_addr_t addr, storage_len_t len, 
uint16_t crc);
#line 67
static void /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockRead__default__readDone(
# 40 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/BlockStorageManagerP.nc"
uint8_t arg_0x7fa21d928840, 
# 67 "/opt/tinyos-2.1.2/tos/interfaces/BlockRead.nc"
storage_addr_t addr, 
#line 62
void * buf, 




storage_len_t len, 
error_t error);
# 112 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
static void /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockWrite__default__syncDone(
# 41 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/BlockStorageManagerP.nc"
uint8_t arg_0x7fa21d927ad8, 
# 112 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
error_t error);
#line 71
static void /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockWrite__default__writeDone(
# 41 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/BlockStorageManagerP.nc"
uint8_t arg_0x7fa21d927ad8, 
# 71 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
storage_addr_t addr, 
#line 66
void * buf, 




storage_len_t len, 
error_t error);










static error_t /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockWrite__erase(
# 41 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/BlockStorageManagerP.nc"
uint8_t arg_0x7fa21d927ad8);
# 91 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
static void /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockWrite__default__eraseDone(
# 41 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/BlockStorageManagerP.nc"
uint8_t arg_0x7fa21d927ad8, 
# 91 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
error_t error);
#line 58
static error_t /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockWrite__write(
# 41 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/BlockStorageManagerP.nc"
uint8_t arg_0x7fa21d927ad8, 
# 58 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
storage_addr_t addr, 
#line 51
void * buf, 






storage_len_t len);
#line 103
static error_t /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockWrite__sync(
# 41 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/BlockStorageManagerP.nc"
uint8_t arg_0x7fa21d927ad8);
# 39 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/VolumeId.nc"
static volume_id_t /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__VolumeId__default__get(
# 47 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/BlockStorageManagerP.nc"
uint8_t arg_0x7fa21d921180);
# 47 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/StorageMap.nc"
static storage_addr_t /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__StorageMap__getPhysicalAddress(
# 42 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/BlockStorageManagerP.nc"
uint8_t arg_0x7fa21d926e08, 
# 47 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/StorageMap.nc"
storage_addr_t addr);
# 56 "/opt/tinyos-2.1.2/tos/interfaces/BlockRead.nc"
static error_t /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockRead__default__read(
# 45 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/BlockStorageManagerP.nc"
volume_id_t arg_0x7fa21d925b10, 
# 56 "/opt/tinyos-2.1.2/tos/interfaces/BlockRead.nc"
storage_addr_t addr, 
#line 49
void * buf, 






storage_len_t len);
#line 95
static void /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockRead__computeCrcDone(
# 45 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/BlockStorageManagerP.nc"
volume_id_t arg_0x7fa21d925b10, 
# 95 "/opt/tinyos-2.1.2/tos/interfaces/BlockRead.nc"
storage_addr_t addr, storage_len_t len, 
uint16_t crc, error_t error);
#line 83
static error_t /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockRead__default__computeCrc(
# 45 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/BlockStorageManagerP.nc"
volume_id_t arg_0x7fa21d925b10, 
# 83 "/opt/tinyos-2.1.2/tos/interfaces/BlockRead.nc"
storage_addr_t addr, storage_len_t len, 
uint16_t crc);
#line 67
static void /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockRead__readDone(
# 45 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/BlockStorageManagerP.nc"
volume_id_t arg_0x7fa21d925b10, 
# 67 "/opt/tinyos-2.1.2/tos/interfaces/BlockRead.nc"
storage_addr_t addr, 
#line 62
void * buf, 




storage_len_t len, 
error_t error);
# 112 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
static void /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockWrite__syncDone(
# 46 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/BlockStorageManagerP.nc"
volume_id_t arg_0x7fa21d923df0, 
# 112 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
error_t error);
#line 71
static void /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockWrite__writeDone(
# 46 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/BlockStorageManagerP.nc"
volume_id_t arg_0x7fa21d923df0, 
# 71 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
storage_addr_t addr, 
#line 66
void * buf, 




storage_len_t len, 
error_t error);










static error_t /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockWrite__default__erase(
# 46 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/BlockStorageManagerP.nc"
volume_id_t arg_0x7fa21d923df0);
# 91 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
static void /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockWrite__eraseDone(
# 46 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/BlockStorageManagerP.nc"
volume_id_t arg_0x7fa21d923df0, 
# 91 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
error_t error);
#line 58
static error_t /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockWrite__default__write(
# 46 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/BlockStorageManagerP.nc"
volume_id_t arg_0x7fa21d923df0, 
# 58 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
storage_addr_t addr, 
#line 51
void * buf, 






storage_len_t len);
#line 103
static error_t /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockWrite__default__sync(
# 46 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/BlockStorageManagerP.nc"
volume_id_t arg_0x7fa21d923df0);
# 96 "/opt/tinyos-2.1.2/tos/chips/at45db/At45db.nc"
static void BlockStorageP__At45db__copyPageDone(error_t error);
#line 136
static void BlockStorageP__At45db__syncDone(error_t error);
#line 154
static void BlockStorageP__At45db__flushDone(error_t error);
#line 80
static void BlockStorageP__At45db__writeDone(error_t error);
#line 116
static void BlockStorageP__At45db__eraseDone(error_t error);
#line 194
static void BlockStorageP__At45db__computeCrcDone(error_t error, uint16_t crc);
#line 173
static void BlockStorageP__At45db__readDone(error_t error);
# 112 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
static void BlockStorageP__BlockWrite__default__syncDone(
# 55 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7fa21d8bf1d0, 
# 112 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
error_t error);
#line 71
static void BlockStorageP__BlockWrite__default__writeDone(
# 55 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7fa21d8bf1d0, 
# 71 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
storage_addr_t addr, 
#line 66
void * buf, 




storage_len_t len, 
error_t error);










static error_t BlockStorageP__BlockWrite__erase(
# 55 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7fa21d8bf1d0);
# 91 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
static void BlockStorageP__BlockWrite__default__eraseDone(
# 55 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7fa21d8bf1d0, 
# 91 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
error_t error);
#line 58
static error_t BlockStorageP__BlockWrite__write(
# 55 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7fa21d8bf1d0, 
# 58 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
storage_addr_t addr, 
#line 51
void * buf, 






storage_len_t len);
#line 103
static error_t BlockStorageP__BlockWrite__sync(
# 55 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7fa21d8bf1d0);
# 56 "/opt/tinyos-2.1.2/tos/interfaces/BlockRead.nc"
static error_t BlockStorageP__BlockRead__read(
# 56 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7fa21d8be4b8, 
# 56 "/opt/tinyos-2.1.2/tos/interfaces/BlockRead.nc"
storage_addr_t addr, 
#line 49
void * buf, 






storage_len_t len);
#line 95
static void BlockStorageP__BlockRead__default__computeCrcDone(
# 56 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7fa21d8be4b8, 
# 95 "/opt/tinyos-2.1.2/tos/interfaces/BlockRead.nc"
storage_addr_t addr, storage_len_t len, 
uint16_t crc, error_t error);
#line 83
static error_t BlockStorageP__BlockRead__computeCrc(
# 56 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7fa21d8be4b8, 
# 83 "/opt/tinyos-2.1.2/tos/interfaces/BlockRead.nc"
storage_addr_t addr, storage_len_t len, 
uint16_t crc);
#line 103
static storage_len_t BlockStorageP__BlockRead__getSize(
# 56 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7fa21d8be4b8);
# 67 "/opt/tinyos-2.1.2/tos/interfaces/BlockRead.nc"
static void BlockStorageP__BlockRead__default__readDone(
# 56 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7fa21d8be4b8, 
# 67 "/opt/tinyos-2.1.2/tos/interfaces/BlockRead.nc"
storage_addr_t addr, 
#line 62
void * buf, 




storage_len_t len, 
error_t error);
# 50 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbBlockConfig.nc"
static at45page_t BlockStorageP__BConfig__npages(
# 62 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7fa21d8a6020);
# 30 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbBlockConfig.nc"
static int BlockStorageP__BConfig__default__flipped(
# 62 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7fa21d8a6020);
# 24 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbBlockConfig.nc"
static int BlockStorageP__BConfig__default__isConfig(
# 62 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7fa21d8a6020);
# 37 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbBlockConfig.nc"
static int BlockStorageP__BConfig__default__writeHook(
# 62 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7fa21d8a6020);
# 58 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbBlockConfig.nc"
static at45page_t BlockStorageP__BConfig__remap(
# 62 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7fa21d8a6020, 
# 58 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbBlockConfig.nc"
at45page_t page);
# 30 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbVolume.nc"
static at45page_t BlockStorageP__At45dbVolume__default__volumeSize(
# 60 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7fa21d8bb7e8);
# 24 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbVolume.nc"
static at45page_t BlockStorageP__At45dbVolume__default__remap(
# 60 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7fa21d8bb7e8, 
# 24 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbVolume.nc"
at45page_t volumePage);
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t BlockStorageP__Resource__default__release(
# 61 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7fa21d8a84b0);
# 88 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t BlockStorageP__Resource__default__request(
# 61 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7fa21d8a84b0);
# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static void BlockStorageP__Resource__granted(
# 61 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7fa21d8a84b0);
# 163 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45db.nc"
static void At45dbP__HplAt45db__crcDone(uint16_t computedCrc);
#line 79
static void At45dbP__HplAt45db__flushDone(void );
#line 185
static void At45dbP__HplAt45db__writeDone(void );
#line 35
static void At45dbP__HplAt45db__waitIdleDone(void );
#line 47
static void At45dbP__HplAt45db__waitCompareDone(bool compareOk);
#line 106
static void At45dbP__HplAt45db__eraseDone(void );
#line 93
static void At45dbP__HplAt45db__compareDone(void );
#line 61
static void At45dbP__HplAt45db__fillDone(void );
#line 141
static void At45dbP__HplAt45db__readDone(void );
# 166 "/opt/tinyos-2.1.2/tos/chips/at45db/At45db.nc"
static void At45dbP__At45db__read(at45page_t page, at45pageoffset_t offset, 
void * data, at45pageoffset_t n);
#line 111
static void At45dbP__At45db__erase(at45page_t page, uint8_t eraseKind);
#line 131
static void At45dbP__At45db__syncAll(void );
#line 73
static void At45dbP__At45db__write(at45page_t page, at45pageoffset_t offset, 
void * data, at45pageoffset_t n);
#line 187
static void At45dbP__At45db__computeCrc(at45page_t page, at45pageoffset_t offset, 
at45pageoffset_t n, uint16_t baseCrc);
# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void At45dbP__taskSuccess__runTask(void );
#line 75
static void At45dbP__taskFail__runTask(void );
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t At45dbP__Init__init(void );
# 41 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45db.nc"
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__waitCompare(void );
#line 100
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__erase(uint8_t cmd, at45page_t page);
#line 30
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__waitIdle(void );
#line 73
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__flush(uint8_t cmd, at45page_t page);
#line 178
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__write(uint8_t cmd, at45page_t page, at45pageoffset_t offset, 
uint8_t * data, at45pageoffset_t n);
#line 87
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__compare(uint8_t cmd, at45page_t page);
#line 157
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__crc(uint8_t cmd, at45page_t page, at45pageoffset_t offset, 
at45pageoffset_t n, uint16_t baseCrc);
#line 119
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__readBuffer(uint8_t cmd, at45pageoffset_t offset, 
uint8_t * data, uint16_t n);
#line 55
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__fill(uint8_t cmd, at45page_t page);
# 35 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45dbByte.nc"
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45dbByte__idle(void );
# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__Resource__granted(void );
# 42 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45dbByte.nc"
static bool HplAt45dbIOP__HplAt45dbByte__getCompareStatus(void );
#line 31
static void HplAt45dbIOP__HplAt45dbByte__waitIdle(void );
#line 47
static void HplAt45dbIOP__HplAt45dbByte__select(void );




static void HplAt45dbIOP__HplAt45dbByte__deselect(void );
# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void HplAt45dbIOP__avail__runTask(void );
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t HplAt45dbIOP__Init__init(void );
# 45 "/opt/tinyos-2.1.2/tos/interfaces/SpiByte.nc"
static uint8_t HplAt45dbIOP__FlashSpi__write(uint8_t tx);
# 65 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
static void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__ResourceConfigure__default__unconfigure(void );
#line 59
static void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__ResourceConfigure__default__configure(void );
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__Resource__release(void );
#line 88
static error_t /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__Resource__request(void );
# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__granted__runTask(void );
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__Init__init(void );
# 79 "/opt/tinyos-2.1.2/tos/interfaces/ResourceQueue.nc"
static error_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__enqueue(resource_client_id_t id);
#line 53
static bool /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__isEmpty(void );








static bool /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__dequeue(void );
# 53 "/opt/tinyos-2.1.2/tos/interfaces/ResourceRequested.nc"
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(
# 55 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x7fa21d6c67e8);
# 65 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(
# 60 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x7fa21d6c39b8);
# 59 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(
# 60 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x7fa21d6c39b8);
# 56 "/opt/tinyos-2.1.2/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void );
#line 73
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__requested(void );
#line 46
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__granted(void );
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__release(
# 54 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x7fa21d6c7640);
# 88 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__request(
# 54 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x7fa21d6c7640);
# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__default__granted(
# 54 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x7fa21d6c7640);
# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__grantedTask__runTask(void );
# 30 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbVolume.nc"
static at45page_t At45dbStorageManagerC__At45dbVolume__volumeSize(
# 18 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbStorageManagerC.nc"
volume_id_t arg_0x7fa21d6745d8);
# 24 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbVolume.nc"
static at45page_t At45dbStorageManagerC__At45dbVolume__remap(
# 18 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbStorageManagerC.nc"
volume_id_t arg_0x7fa21d6745d8, 
# 24 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbVolume.nc"
at45page_t volumePage);
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t /*BlockStorageLockC.Arbiter.Queue*/FcfsResourceQueueC__3__Init__init(void );
# 79 "/opt/tinyos-2.1.2/tos/interfaces/ResourceQueue.nc"
static error_t /*BlockStorageLockC.Arbiter.Queue*/FcfsResourceQueueC__3__FcfsQueue__enqueue(resource_client_id_t id);
#line 53
static bool /*BlockStorageLockC.Arbiter.Queue*/FcfsResourceQueueC__3__FcfsQueue__isEmpty(void );








static bool /*BlockStorageLockC.Arbiter.Queue*/FcfsResourceQueueC__3__FcfsQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*BlockStorageLockC.Arbiter.Queue*/FcfsResourceQueueC__3__FcfsQueue__dequeue(void );
# 53 "/opt/tinyos-2.1.2/tos/interfaces/ResourceRequested.nc"
static void /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__ResourceRequested__default__requested(
# 52 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fa21e0aa020);
# 65 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
static void /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__ResourceConfigure__default__unconfigure(
# 56 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fa21e0a8538);
# 59 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
static void /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__ResourceConfigure__default__configure(
# 56 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fa21e0a8538);
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__Resource__release(
# 51 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fa21e0ace30);
# 88 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__Resource__request(
# 51 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fa21e0ace30);
# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static void /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__Resource__default__granted(
# 51 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fa21e0ace30);
# 128 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static bool /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__Resource__isOwner(
# 51 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fa21e0ace30);
# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__grantedTask__runTask(void );
# 39 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/VolumeId.nc"
static volume_id_t /*DelugeC.BlockReaderDeluge2.VolumeIdC*/VolumeIdC__1__VolumeId__get(void );
#line 39
static volume_id_t /*DelugeC.BlockReaderDeluge3.VolumeIdC*/VolumeIdC__2__VolumeId__get(void );
#line 39
static volume_id_t /*DelugeC.BlockWriterDeluge1.VolumeIdC*/VolumeIdC__3__VolumeId__get(void );
#line 39
static volume_id_t /*DelugeC.BlockWriterDeluge2.VolumeIdC*/VolumeIdC__4__VolumeId__get(void );
#line 39
static volume_id_t /*DelugeC.BlockWriterDeluge3.VolumeIdC*/VolumeIdC__5__VolumeId__get(void );
# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void /*DelugeC.DisseminatorC.DisseminatorP*/DisseminatorP__0__changedTask__runTask(void );
# 47 "/opt/tinyos-2.1.2/tos/lib/net/drip/DisseminationCache.nc"
static void */*DelugeC.DisseminatorC.DisseminatorP*/DisseminatorP__0__DisseminationCache__requestData(uint8_t *size);
static void /*DelugeC.DisseminatorC.DisseminatorP*/DisseminatorP__0__DisseminationCache__storeData(void * data, uint8_t size, uint32_t seqno);
static uint32_t /*DelugeC.DisseminatorC.DisseminatorP*/DisseminatorP__0__DisseminationCache__requestSeqno(void );
# 55 "/opt/tinyos-2.1.2/tos/lib/net/DisseminationValue.nc"
static const /*DelugeC.DisseminatorC.DisseminatorP*/DisseminatorP__0__DisseminationValue__t */*DelugeC.DisseminatorC.DisseminatorP*/DisseminatorP__0__DisseminationValue__get(void );
# 95 "/opt/tinyos-2.1.2/tos/interfaces/StdControl.nc"
static error_t /*DelugeC.DisseminatorC.DisseminatorP*/DisseminatorP__0__StdControl__start(void );
# 78 "/opt/tinyos-2.1.2/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



DisseminationEngineImplP__ProbeReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 110 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
static void DisseminationEngineImplP__ProbeAMSend__sendDone(
#line 103
message_t * msg, 






error_t error);
#line 110
static void DisseminationEngineImplP__AMSend__sendDone(
#line 103
message_t * msg, 






error_t error);
# 90 "/opt/tinyos-2.1.2/tos/lib/net/TrickleTimer.nc"
static void DisseminationEngineImplP__TrickleTimer__fired(
# 50 "/opt/tinyos-2.1.2/tos/lib/net/drip/DisseminationEngineImplP.nc"
uint16_t arg_0x7fa21d5d17d0);
# 85 "/opt/tinyos-2.1.2/tos/lib/net/TrickleTimer.nc"
static void DisseminationEngineImplP__TrickleTimer__default__incrementCounter(
# 50 "/opt/tinyos-2.1.2/tos/lib/net/drip/DisseminationEngineImplP.nc"
uint16_t arg_0x7fa21d5d17d0);
# 80 "/opt/tinyos-2.1.2/tos/lib/net/TrickleTimer.nc"
static void DisseminationEngineImplP__TrickleTimer__default__reset(
# 50 "/opt/tinyos-2.1.2/tos/lib/net/drip/DisseminationEngineImplP.nc"
uint16_t arg_0x7fa21d5d17d0);
# 68 "/opt/tinyos-2.1.2/tos/lib/net/TrickleTimer.nc"
static error_t DisseminationEngineImplP__TrickleTimer__default__start(
# 50 "/opt/tinyos-2.1.2/tos/lib/net/drip/DisseminationEngineImplP.nc"
uint16_t arg_0x7fa21d5d17d0);
# 48 "/opt/tinyos-2.1.2/tos/lib/net/drip/DisseminationCache.nc"
static void DisseminationEngineImplP__DisseminationCache__default__storeData(
# 49 "/opt/tinyos-2.1.2/tos/lib/net/drip/DisseminationEngineImplP.nc"
uint16_t arg_0x7fa21d5d2420, 
# 48 "/opt/tinyos-2.1.2/tos/lib/net/drip/DisseminationCache.nc"
void * data, uint8_t size, uint32_t seqno);
#line 45
static error_t DisseminationEngineImplP__DisseminationCache__start(
# 49 "/opt/tinyos-2.1.2/tos/lib/net/drip/DisseminationEngineImplP.nc"
uint16_t arg_0x7fa21d5d2420);
# 49 "/opt/tinyos-2.1.2/tos/lib/net/drip/DisseminationCache.nc"
static uint32_t DisseminationEngineImplP__DisseminationCache__default__requestSeqno(
# 49 "/opt/tinyos-2.1.2/tos/lib/net/drip/DisseminationEngineImplP.nc"
uint16_t arg_0x7fa21d5d2420);
# 47 "/opt/tinyos-2.1.2/tos/lib/net/drip/DisseminationCache.nc"
static void *DisseminationEngineImplP__DisseminationCache__default__requestData(
# 49 "/opt/tinyos-2.1.2/tos/lib/net/drip/DisseminationEngineImplP.nc"
uint16_t arg_0x7fa21d5d2420, 
# 47 "/opt/tinyos-2.1.2/tos/lib/net/drip/DisseminationCache.nc"
uint8_t *size);
# 78 "/opt/tinyos-2.1.2/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



DisseminationEngineImplP__Receive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 95 "/opt/tinyos-2.1.2/tos/interfaces/StdControl.nc"
static error_t DisseminationEngineImplP__StdControl__start(void );
#line 95
static error_t DisseminationEngineImplP__DisseminatorControl__default__start(
# 51 "/opt/tinyos-2.1.2/tos/lib/net/drip/DisseminationEngineImplP.nc"
uint16_t arg_0x7fa21d5d0a38);
# 80 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
static error_t /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__3__AMSend__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 135
static 
#line 133
void * 

/*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__3__AMSend__getPayload(
#line 132
message_t * msg, 


uint8_t len);
#line 123
static uint8_t /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__3__AMSend__maxPayloadLength(void );
# 100 "/opt/tinyos-2.1.2/tos/interfaces/Send.nc"
static void /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__3__Send__sendDone(
#line 96
message_t * msg, 



error_t error);
#line 100
static void /*DisseminationEngineP.DisseminationProbeSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__4__Send__sendDone(
#line 96
message_t * msg, 



error_t error);
# 90 "/opt/tinyos-2.1.2/tos/lib/net/TrickleTimer.nc"
static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__TrickleTimer__default__fired(
# 58 "/opt/tinyos-2.1.2/tos/lib/net/TrickleTimerImplP.nc"
uint8_t arg_0x7fa21d548980);
# 85 "/opt/tinyos-2.1.2/tos/lib/net/TrickleTimer.nc"
static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__TrickleTimer__incrementCounter(
# 58 "/opt/tinyos-2.1.2/tos/lib/net/TrickleTimerImplP.nc"
uint8_t arg_0x7fa21d548980);
# 80 "/opt/tinyos-2.1.2/tos/lib/net/TrickleTimer.nc"
static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__TrickleTimer__reset(
# 58 "/opt/tinyos-2.1.2/tos/lib/net/TrickleTimerImplP.nc"
uint8_t arg_0x7fa21d548980);
# 68 "/opt/tinyos-2.1.2/tos/lib/net/TrickleTimer.nc"
static error_t /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__TrickleTimer__start(
# 58 "/opt/tinyos-2.1.2/tos/lib/net/TrickleTimerImplP.nc"
uint8_t arg_0x7fa21d548980);
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Init__init(void );
# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__timerTask__runTask(void );
# 83 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Timer__fired(void );
# 45 "/opt/tinyos-2.1.2/tos/interfaces/BitVector.nc"
static void /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__BitVector__clearAll(void );
#line 69
static void /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__BitVector__clear(uint16_t bitnum);
#line 57
static bool /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__BitVector__get(uint16_t bitnum);





static void /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__BitVector__set(uint16_t bitnum);
#line 45
static void /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__BitVector__clearAll(void );
#line 69
static void /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__BitVector__clear(uint16_t bitnum);
#line 57
static bool /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__BitVector__get(uint16_t bitnum);





static void /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__BitVector__set(uint16_t bitnum);
# 56 "/opt/tinyos-2.1.2/tos/interfaces/InternalFlash.nc"
static error_t InternalFlashC__InternalFlash__read(void *addr, 
#line 50
void * buf, 





uint16_t size);
#line 68
static error_t InternalFlashC__InternalFlash__write(void *addr, 
#line 63
void * buf, 




uint16_t size);
# 64 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/extra/NetProg.nc"
static error_t NetProgM__NetProg__programImageAndReboot(uint32_t imageAddr);
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t NetProgM__Init__init(void );
# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void DelugeP__taskRequest__runTask(void );
# 113 "/opt/tinyos-2.1.2/tos/interfaces/SplitControl.nc"
static void DelugeP__RadioSplitControl__startDone(error_t error);
#line 138
static void DelugeP__RadioSplitControl__stopDone(error_t error);
# 60 "/opt/tinyos-2.1.2/tos/interfaces/Boot.nc"
static void DelugeP__Boot__booted(void );
# 53 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeP.nc"
static void DelugeP__storageReady(void );
# 13 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeMetadata.nc"
static void DelugeP__DelugeMetadata__readDone(uint8_t imgNum, DelugeIdent *ident, error_t error);
# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static void DelugeP__Resource__granted(void );
# 69 "/opt/tinyos-2.1.2/tos/lib/net/DisseminationValue.nc"
static void DelugeP__DisseminationValue__changed(void );
# 40 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeVolumeManager.nc"
static void DelugeP__DelugeVolumeManager__eraseDone(uint8_t imgNum);
# 43 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/ObjectTransfer.nc"
static void DelugeP__ObjectTransfer__receiveDone(error_t error);
# 54 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeP.nc"
static void DelugeP__stop(void );
# 60 "/opt/tinyos-2.1.2/tos/interfaces/Boot.nc"
static void DelugeMetadataP__Boot__booted(void );
# 56 "/opt/tinyos-2.1.2/tos/interfaces/BlockRead.nc"
static error_t DelugeMetadataP__BlockRead__default__read(
# 44 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeMetadataP.nc"
uint8_t arg_0x7fa21d424b00, 
# 56 "/opt/tinyos-2.1.2/tos/interfaces/BlockRead.nc"
storage_addr_t addr, 
#line 49
void * buf, 






storage_len_t len);
#line 95
static void DelugeMetadataP__BlockRead__computeCrcDone(
# 44 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeMetadataP.nc"
uint8_t arg_0x7fa21d424b00, 
# 95 "/opt/tinyos-2.1.2/tos/interfaces/BlockRead.nc"
storage_addr_t addr, storage_len_t len, 
uint16_t crc, error_t error);
#line 83
static error_t DelugeMetadataP__BlockRead__default__computeCrc(
# 44 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeMetadataP.nc"
uint8_t arg_0x7fa21d424b00, 
# 83 "/opt/tinyos-2.1.2/tos/interfaces/BlockRead.nc"
storage_addr_t addr, storage_len_t len, 
uint16_t crc);
#line 67
static void DelugeMetadataP__BlockRead__readDone(
# 44 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeMetadataP.nc"
uint8_t arg_0x7fa21d424b00, 
# 67 "/opt/tinyos-2.1.2/tos/interfaces/BlockRead.nc"
storage_addr_t addr, 
#line 62
void * buf, 




storage_len_t len, 
error_t error);
# 112 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
static void DelugeMetadataP__BlockWrite__syncDone(
# 45 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeMetadataP.nc"
uint8_t arg_0x7fa21d423c78, 
# 112 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
error_t error);
#line 71
static void DelugeMetadataP__BlockWrite__writeDone(
# 45 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeMetadataP.nc"
uint8_t arg_0x7fa21d423c78, 
# 71 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
storage_addr_t addr, 
#line 66
void * buf, 




storage_len_t len, 
error_t error);










static error_t DelugeMetadataP__BlockWrite__default__erase(
# 45 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeMetadataP.nc"
uint8_t arg_0x7fa21d423c78);
# 91 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
static void DelugeMetadataP__BlockWrite__eraseDone(
# 45 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeMetadataP.nc"
uint8_t arg_0x7fa21d423c78, 
# 91 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
error_t error);
# 12 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeMetadata.nc"
static error_t DelugeMetadataP__DelugeMetadata__read(
# 41 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeMetadataP.nc"
uint8_t arg_0x7fa21d425800, 
# 12 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeMetadata.nc"
uint8_t imgNum);
static void DelugeMetadataP__DelugeMetadata__default__readDone(
# 41 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeMetadataP.nc"
uint8_t arg_0x7fa21d425800, 
# 13 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeMetadata.nc"
uint8_t imgNum, DelugeIdent *ident, error_t error);
# 39 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/VolumeId.nc"
static volume_id_t /*DelugeMetadataC.BlockReaderGoldenImage.VolumeIdC*/VolumeIdC__6__VolumeId__get(void );
#line 39
static volume_id_t /*DelugeMetadataC.BlockReaderDeluge1.VolumeIdC*/VolumeIdC__7__VolumeId__get(void );
#line 39
static volume_id_t /*DelugeMetadataC.BlockReaderDeluge2.VolumeIdC*/VolumeIdC__8__VolumeId__get(void );
#line 39
static volume_id_t /*DelugeMetadataC.BlockReaderDeluge3.VolumeIdC*/VolumeIdC__9__VolumeId__get(void );
#line 39
static volume_id_t /*DelugeMetadataC.BlockWriterGoldenImage.VolumeIdC*/VolumeIdC__10__VolumeId__get(void );
#line 39
static volume_id_t /*DelugeMetadataC.BlockWriterDeluge1.VolumeIdC*/VolumeIdC__11__VolumeId__get(void );
#line 39
static volume_id_t /*DelugeMetadataC.BlockWriterDeluge2.VolumeIdC*/VolumeIdC__12__VolumeId__get(void );
#line 39
static volume_id_t /*DelugeMetadataC.BlockWriterDeluge3.VolumeIdC*/VolumeIdC__13__VolumeId__get(void );
# 112 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
static void DelugeVolumeManagerP__BlockWrite__syncDone(
# 41 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeVolumeManagerP.nc"
uint8_t arg_0x7fa21d3b8840, 
# 112 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
error_t error);
#line 71
static void DelugeVolumeManagerP__BlockWrite__writeDone(
# 41 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeVolumeManagerP.nc"
uint8_t arg_0x7fa21d3b8840, 
# 71 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
storage_addr_t addr, 
#line 66
void * buf, 




storage_len_t len, 
error_t error);










static error_t DelugeVolumeManagerP__BlockWrite__default__erase(
# 41 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeVolumeManagerP.nc"
uint8_t arg_0x7fa21d3b8840);
# 91 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
static void DelugeVolumeManagerP__BlockWrite__eraseDone(
# 41 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeVolumeManagerP.nc"
uint8_t arg_0x7fa21d3b8840, 
# 91 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
error_t error);
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t DelugeVolumeManagerP__Resource__default__release(
# 42 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeVolumeManagerP.nc"
uint8_t arg_0x7fa21d3b7c68);
# 88 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t DelugeVolumeManagerP__Resource__default__request(
# 42 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeVolumeManagerP.nc"
uint8_t arg_0x7fa21d3b7c68);
# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static void DelugeVolumeManagerP__Resource__granted(
# 42 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeVolumeManagerP.nc"
uint8_t arg_0x7fa21d3b7c68);
# 39 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeVolumeManager.nc"
static error_t DelugeVolumeManagerP__DelugeVolumeManager__erase(
# 39 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeVolumeManagerP.nc"
uint8_t arg_0x7fa21d3bba30, 
# 39 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeVolumeManager.nc"
uint8_t imgNum);
static void DelugeVolumeManagerP__DelugeVolumeManager__default__eraseDone(
# 39 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeVolumeManagerP.nc"
uint8_t arg_0x7fa21d3bba30, 
# 40 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeVolumeManager.nc"
uint8_t imgNum);
# 39 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/VolumeId.nc"
static volume_id_t /*DelugeVolumeManagerC.BlockWriterDeluge1.VolumeIdC*/VolumeIdC__14__VolumeId__get(void );
#line 39
static volume_id_t /*DelugeVolumeManagerC.BlockWriterDeluge2.VolumeIdC*/VolumeIdC__15__VolumeId__get(void );
#line 39
static volume_id_t /*DelugeVolumeManagerC.BlockWriterDeluge3.VolumeIdC*/VolumeIdC__16__VolumeId__get(void );
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t PlatformP__MoteInit__init(void );
#line 62
static error_t PlatformP__MeasureClock__init(void );
# 51 "/opt/tinyos-2.1.2/tos/platforms/mica/PlatformP.nc"
static inline error_t PlatformP__Init__init(void );
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t MotePlatformP__SubInit__init(void );
# 44 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
static void MotePlatformP__SerialIdPin__makeInput(void );
#line 41
static void MotePlatformP__SerialIdPin__clr(void );
# 49 "/opt/tinyos-2.1.2/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP__PlatformInit__init(void );
# 55 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__clr(void );
static inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__toggle(void );



static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__clr(void );
static inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__toggle(void );



static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP__3__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP__3__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP__3__IO__makeOutput(void );
#line 56
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void );


static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__makeOutput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput(void );
#line 61
static __inline void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP__9__IO__makeOutput(void );
#line 61
static __inline void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeOutput(void );
#line 59
static __inline void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeInput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__makeOutput(void );
#line 54
static __inline bool /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP__26__IO__get(void );

static __inline void /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP__26__IO__clr(void );


static __inline void /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP__26__IO__makeInput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortD.Bit3*/HplAtm128GeneralIOPinP__27__IO__set(void );





static __inline void /*HplAtm128GeneralIOC.PortD.Bit3*/HplAtm128GeneralIOPinP__27__IO__makeOutput(void );
#line 56
static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__clr(void );


static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__makeInput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP__29__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP__29__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP__29__IO__makeOutput(void );
#line 56
static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__clr(void );


static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__makeInput(void );
# 67 "/opt/tinyos-2.1.2/tos/platforms/iris/MeasureClockC.nc"
enum MeasureClockC____nesc_unnamed4388 {


  MeasureClockC__MAGIC = 488 / (16 / PLATFORM_MHZ)
};

uint16_t MeasureClockC__cycles;

static inline error_t MeasureClockC__Init__init(void );
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t RealMainP__SoftwareInit__init(void );
# 60 "/opt/tinyos-2.1.2/tos/interfaces/Boot.nc"
static void RealMainP__Boot__booted(void );
# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
static error_t RealMainP__PlatformInit__init(void );
# 57 "/opt/tinyos-2.1.2/tos/interfaces/Scheduler.nc"
static void RealMainP__Scheduler__init(void );
#line 72
static void RealMainP__Scheduler__taskLoop(void );
#line 65
static bool RealMainP__Scheduler__runNextTask(void );
# 63 "/opt/tinyos-2.1.2/tos/system/RealMainP.nc"
int main(void )   ;
# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(
# 56 "/opt/tinyos-2.1.2/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x7fa21e9ff7d8);
# 76 "/opt/tinyos-2.1.2/tos/interfaces/McuSleep.nc"
static void SchedulerBasicP__McuSleep__sleep(void );
# 61 "/opt/tinyos-2.1.2/tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP____nesc_unnamed4389 {

  SchedulerBasicP__NUM_TASKS = 22U, 
  SchedulerBasicP__NO_TASK = 255
};

uint8_t SchedulerBasicP__m_head;
uint8_t SchedulerBasicP__m_tail;
uint8_t SchedulerBasicP__m_next[SchedulerBasicP__NUM_TASKS];








static __inline uint8_t SchedulerBasicP__popTask(void );
#line 97
static inline bool SchedulerBasicP__isWaiting(uint8_t id);




static inline bool SchedulerBasicP__pushTask(uint8_t id);
#line 124
static inline void SchedulerBasicP__Scheduler__init(void );









static bool SchedulerBasicP__Scheduler__runNextTask(void );
#line 149
static inline void SchedulerBasicP__Scheduler__taskLoop(void );
#line 170
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id);




static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id);
# 62 "/opt/tinyos-2.1.2/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void );
# 99 "/opt/tinyos-2.1.2/tos/chips/atm1281/McuSleepC.nc"
const_uint8_t McuSleepC__atm128PowerBits[ATM128_POWER_DOWN + 1] = { 
0, 
1 << 1, ((
1 << 3) | (1 << 2)) | (1 << 1), (
1 << 2) | (1 << 1), (
1 << 3) | (1 << 2), 
1 << 2 };

static inline mcu_power_t McuSleepC__getPowerState(void );
#line 147
static inline void McuSleepC__McuSleep__sleep(void );
#line 161
static inline void McuSleepC__McuPowerState__update(void );
# 64 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
static void BlinkC__Timer0__startPeriodic(uint32_t dt);
# 67 "/opt/tinyos-2.1.2/tos/interfaces/Leds.nc"
static void BlinkC__Leds__led0Toggle(void );
# 61 "BlinkC.nc"
static inline void BlinkC__Boot__booted(void );




static inline void BlinkC__Timer0__fired(void );
# 42 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
static void LedsP__Led0__toggle(void );



static void LedsP__Led0__makeOutput(void );
#line 40
static void LedsP__Led0__set(void );
static void LedsP__Led0__clr(void );
static void LedsP__Led1__toggle(void );



static void LedsP__Led1__makeOutput(void );
#line 40
static void LedsP__Led1__set(void );
static void LedsP__Led1__clr(void );




static void LedsP__Led2__makeOutput(void );
#line 40
static void LedsP__Led2__set(void );
static void LedsP__Led2__clr(void );
# 56 "/opt/tinyos-2.1.2/tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void );
#line 74
static inline void LedsP__Leds__led0On(void );




static inline void LedsP__Leds__led0Off(void );




static inline void LedsP__Leds__led0Toggle(void );




static inline void LedsP__Leds__led1On(void );




static inline void LedsP__Leds__led1Off(void );




static inline void LedsP__Leds__led1Toggle(void );




static inline void LedsP__Leds__led2On(void );




static inline void LedsP__Leds__led2Off(void );
#line 136
static inline void LedsP__Leds__set(uint8_t val);
# 89 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/HplAtm128TimerCtrl8.nc"
static uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__getInterruptFlag(void );
#line 82
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__setControlB(uint8_t control);
#line 81
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__setControlA(uint8_t control);
# 78 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__fired(void );
# 82 "/opt/tinyos-2.1.2/tos/lib/timer/Counter.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__overflow(void );
# 68 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/HplAtm128TimerAsync.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerAsync__setTimer2Asynchronous(void );
#line 86
static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerAsync__compareABusy(void );
# 48 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__get(void );





static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__size_type t);










static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__start(void );
# 61 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__get(void );
# 73 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__set;
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__t0;
#line 74
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__dt;
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__base;



enum /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0____nesc_unnamed4390 {
  Atm1281AlarmAsyncP__0__MINDT = 2, 
  Atm1281AlarmAsyncP__0__MAXT = 230
};



static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__setInterrupt(void );


static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Init__init(void );
#line 112
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__setOcr2A(uint8_t n);
#line 128
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__setInterrupt(void );
#line 187
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__fired(void );
#line 199
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__get(void );
#line 242
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__stop(void );







static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__startAt(uint32_t nt0, uint32_t ndt);









static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__getNow(void );



static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__getAlarm(void );



static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__overflow(void );
# 58 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm1281Timer2AsyncP__Compare__fired(void );
# 70 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm1281Timer2AsyncP__Timer__overflow(void );
# 99 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline uint8_t HplAtm1281Timer2AsyncP__Timer__get(void );
#line 131
static inline void HplAtm1281Timer2AsyncP__TimerCtrl__setControlA(uint8_t x);





static inline void HplAtm1281Timer2AsyncP__TimerCtrl__setControlB(uint8_t x);
#line 154
static inline uint8_t HplAtm1281Timer2AsyncP__TimerCtrl__getInterruptFlag(void );
#line 181
static inline void HplAtm1281Timer2AsyncP__Compare__start(void );









static inline uint8_t HplAtm1281Timer2AsyncP__Compare__get(void );


static inline void HplAtm1281Timer2AsyncP__Compare__set(uint8_t t);









static __inline void HplAtm1281Timer2AsyncP__stabiliseTimer2(void );
#line 219
static inline mcu_power_t HplAtm1281Timer2AsyncP__McuPowerOverride__lowestState(void );
#line 242
void __vector_13(void ) __attribute((signal))   ;







void __vector_15(void ) __attribute((signal))   ;
#line 266
static inline void HplAtm1281Timer2AsyncP__TimerAsync__setTimer2Asynchronous(void );
#line 278
static inline int HplAtm1281Timer2AsyncP__TimerAsync__compareABusy(void );
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void );
# 109 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void );
#line 103
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt);
#line 116
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void );
#line 73
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void );
# 83 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void );
# 74 "/opt/tinyos-2.1.2/tos/lib/timer/AlarmToTimerC.nc"
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_unnamed4391 {
#line 74
  AlarmToTimerC__0__fired = 0U
};
#line 74
typedef int /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_sillytask_fired[/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired];
#line 55
uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt;
bool /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot;

static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot);
#line 71
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );


static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );






static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
#line 93
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);


static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void );
# 136 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void );
#line 129
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(
# 48 "/opt/tinyos-2.1.2/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7fa21e652da0);
#line 71
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4392 {
#line 71
  VirtualizeTimerC__0__updateFromTimer = 1U
};
#line 71
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer];
#line 53
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4393 {

  VirtualizeTimerC__0__NUM_TIMERS = 5, 
  VirtualizeTimerC__0__END_OF_LIST = 255
};








#line 59
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4394 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t;

/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS];




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now);
#line 100
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
#line 139
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);









static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt);




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt);




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num);
#line 189
static inline uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(uint8_t num);




static inline uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__gett0(uint8_t num);




static inline uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getdt(uint8_t num);




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num);
# 58 "/opt/tinyos-2.1.2/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 73 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
static void ObjectTransferP__Timer__startOneShot(uint32_t dt);




static void ObjectTransferP__Timer__stop(void );
# 80 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
static error_t ObjectTransferP__SendAdvMsg__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 135
static 
#line 133
void * 

ObjectTransferP__SendAdvMsg__getPayload(
#line 132
message_t * msg, 


uint8_t len);
# 52 "/opt/tinyos-2.1.2/tos/interfaces/Random.nc"
static uint16_t ObjectTransferP__Random__rand16(void );
# 83 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
static error_t ObjectTransferP__BlockWrite__erase(
# 57 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/ObjectTransferP.nc"
uint8_t arg_0x7fa21e522288);
# 103 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
static error_t ObjectTransferP__BlockWrite__sync(
# 57 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/ObjectTransferP.nc"
uint8_t arg_0x7fa21e522288);
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static error_t ObjectTransferP__signalObjRecvDone__postTask(void );
# 45 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugePageTransfer.nc"
static error_t ObjectTransferP__DelugePageTransfer__setWorkingPage(object_id_t new_objid, page_num_t new_pgNum);
static error_t ObjectTransferP__DelugePageTransfer__dataAvailable(uint16_t sourceAddr);



static void ObjectTransferP__DelugePageTransfer__setImgNum(uint8_t new_img_num);
#line 47
static bool ObjectTransferP__DelugePageTransfer__isTransferring(void );



static error_t ObjectTransferP__DelugePageTransfer__stop(void );
# 50 "/opt/tinyos-2.1.2/tos/interfaces/Crc.nc"
static uint16_t ObjectTransferP__Crc__crc16(
#line 46
void * buf, 



uint8_t len);
# 43 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/ObjectTransfer.nc"
static void ObjectTransferP__ObjectTransfer__receiveDone(error_t error);
# 110 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/ObjectTransferP.nc"
enum ObjectTransferP____nesc_unnamed4395 {
#line 110
  ObjectTransferP__signalObjRecvDone = 2U
};
#line 110
typedef int ObjectTransferP____nesc_sillytask_signalObjRecvDone[ObjectTransferP__signalObjRecvDone];
#line 67
enum ObjectTransferP____nesc_unnamed4396 {
  ObjectTransferP__S_ERASE, 
  ObjectTransferP__S_SYNC, 
  ObjectTransferP__S_INITIALIZING_PUB, 
  ObjectTransferP__S_INITIALIZING_RECV, 
  ObjectTransferP__S_STARTED, 
  ObjectTransferP__S_STOPPED
};

DelugeAdvTimer ObjectTransferP__advTimers;
uint8_t ObjectTransferP__state = ObjectTransferP__S_STOPPED;

object_id_t ObjectTransferP__cont_receive_new_objid;
object_size_t ObjectTransferP__cont_receive_new_size;
uint8_t ObjectTransferP__cont_receive_img_num;

message_t ObjectTransferP__pMsgBuf;
bool ObjectTransferP__isBusy_pMsgBuf = FALSE;
DelugeObjDesc ObjectTransferP__curObjDesc;

static inline void ObjectTransferP__updateTimers(void );




static void ObjectTransferP__setupAdvTimer(void );









static void ObjectTransferP__resetTimer(void );







static inline void ObjectTransferP__signalObjRecvDone__runTask(void );




static void ObjectTransferP__setNextPage(void );
#line 130
static inline bool ObjectTransferP__isObjDescValid(DelugeObjDesc *tmpObjDesc);





static inline void ObjectTransferP__sendAdvMsg(uint16_t addr);
#line 159
static inline error_t ObjectTransferP__ObjectTransfer__publish(object_id_t new_objid, object_size_t new_size, uint8_t img_num);
#line 184
static void ObjectTransferP__cont_receive(void );
#line 203
static inline error_t ObjectTransferP__ObjectTransfer__receive(object_id_t new_objid, object_size_t new_size, uint8_t img_num);
#line 222
static error_t ObjectTransferP__ObjectTransfer__stop(void );
#line 237
static inline void ObjectTransferP__DelugePageTransfer__receivedPage(object_id_t new_objid, page_num_t new_pgNum);
#line 255
static inline void ObjectTransferP__BlockWrite__syncDone(uint8_t img_num, error_t error);






static inline void ObjectTransferP__DelugePageTransfer__suppressMsgs(object_id_t new_objid);






static inline void ObjectTransferP__SendAdvMsg__sendDone(message_t *msg, error_t error);




static inline message_t *ObjectTransferP__ReceiveAdvMsg__receive(message_t *msg, void *payload, uint8_t len);
#line 313
static inline void ObjectTransferP__Timer__fired(void );
#line 334
static inline error_t ObjectTransferP__BlockWrite__default__erase(uint8_t img_num);
static inline error_t ObjectTransferP__BlockWrite__default__sync(uint8_t img_num);

static inline void ObjectTransferP__BlockWrite__writeDone(uint8_t img_num, storage_addr_t addr, void *buf, storage_len_t len, error_t error);
static inline void ObjectTransferP__BlockWrite__eraseDone(uint8_t img_num, error_t error);
# 46 "/opt/tinyos-2.1.2/tos/interfaces/Random.nc"
static uint32_t DelugePageTransferP__Random__rand32(void );
# 80 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
static error_t DelugePageTransferP__SendReqMsg__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 135
static 
#line 133
void * 

DelugePageTransferP__SendReqMsg__getPayload(
#line 132
message_t * msg, 


uint8_t len);
# 56 "/opt/tinyos-2.1.2/tos/interfaces/BlockRead.nc"
static error_t DelugePageTransferP__BlockRead__read(
# 50 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugePageTransferP.nc"
uint8_t arg_0x7fa21e48f320, 
# 56 "/opt/tinyos-2.1.2/tos/interfaces/BlockRead.nc"
storage_addr_t addr, 
#line 49
void * buf, 






storage_len_t len);
# 50 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BitVecUtils.nc"
static error_t DelugePageTransferP__BitVecUtils__indexOf(uint16_t *pResult, uint16_t fromIndex, 
uint8_t *bitVec, uint16_t length);
# 58 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
static error_t DelugePageTransferP__BlockWrite__write(
# 51 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugePageTransferP.nc"
uint8_t arg_0x7fa21e48e4a0, 
# 58 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
storage_addr_t addr, 
#line 51
void * buf, 






storage_len_t len);
# 80 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
static error_t DelugePageTransferP__SendDataMsg__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 135
static 
#line 133
void * 

DelugePageTransferP__SendDataMsg__getPayload(
#line 132
message_t * msg, 


uint8_t len);
# 83 "/opt/tinyos-2.1.2/tos/interfaces/Leds.nc"
static void DelugePageTransferP__Leds__led1Toggle(void );
#line 77
static void DelugePageTransferP__Leds__led1Off(void );
# 48 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugePageTransfer.nc"
static void DelugePageTransferP__DelugePageTransfer__suppressMsgs(object_id_t new_objid);
static void DelugePageTransferP__DelugePageTransfer__receivedPage(object_id_t new_objid, page_num_t new_pgNum);
# 88 "/opt/tinyos-2.1.2/tos/interfaces/AMPacket.nc"
static am_addr_t DelugePageTransferP__AMPacket__source(
#line 84
message_t * amsg);
# 73 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
static void DelugePageTransferP__Timer__startOneShot(uint32_t dt);




static void DelugePageTransferP__Timer__stop(void );
# 70 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugePageTransferP.nc"
uint8_t DelugePageTransferP__pktsToSend[DELUGET2_PKT_BITVEC_SIZE];
uint8_t DelugePageTransferP__pktsToReceive[DELUGET2_PKT_BITVEC_SIZE];

DelugeDataMsg DelugePageTransferP__rxQueue[DELUGE_QSIZE];
uint8_t DelugePageTransferP__head;
#line 74
uint8_t DelugePageTransferP__size;

enum DelugePageTransferP____nesc_unnamed4397 {
  DelugePageTransferP__S_DISABLED, 
  DelugePageTransferP__S_IDLE, 
  DelugePageTransferP__S_TX_LOCKING, 
  DelugePageTransferP__S_SENDING, 
  DelugePageTransferP__S_RX_LOCKING, 
  DelugePageTransferP__S_RECEIVING
};


uint8_t DelugePageTransferP__state = DelugePageTransferP__S_DISABLED;
uint16_t DelugePageTransferP__nodeAddr;
uint8_t DelugePageTransferP__remainingAttempts;
bool DelugePageTransferP__suppressReq;
object_id_t DelugePageTransferP__objToSend = DELUGE_INVALID_OBJID;
page_num_t DelugePageTransferP__pageToSend = DELUGE_INVALID_PGNUM;
object_id_t DelugePageTransferP__workingObjid = DELUGE_INVALID_OBJID;
page_num_t DelugePageTransferP__workingPgNum = DELUGE_INVALID_PGNUM;
uint8_t DelugePageTransferP__imgNum = 0;

message_t DelugePageTransferP__pMsgBuf;
bool DelugePageTransferP__isBusy_pMsgBuf = FALSE;
uint8_t DelugePageTransferP__publisher_addr;

static void DelugePageTransferP__changeState(uint8_t newState);

static void DelugePageTransferP__startReqTimer(bool first);










static void DelugePageTransferP__setupReqMsg(void );
#line 158
static inline storage_addr_t DelugePageTransferP__calcOffset(page_num_t pgNum, uint8_t pktNum);





static void DelugePageTransferP__setupDataMsg(void );
#line 197
static inline void DelugePageTransferP__unlockPMsgBuf(void );
#line 211
static void DelugePageTransferP__changeState(uint8_t newState);









static void DelugePageTransferP__suppressMsgs(object_id_t objid, page_num_t pgNum);
#line 240
static void DelugePageTransferP__writeData(void );







static inline error_t DelugePageTransferP__DelugePageTransfer__stop(void );
#line 269
static error_t DelugePageTransferP__DelugePageTransfer__setWorkingPage(object_id_t new_objid, page_num_t new_pgNum);
#line 288
static inline bool DelugePageTransferP__DelugePageTransfer__isTransferring(void );




static inline error_t DelugePageTransferP__DelugePageTransfer__dataAvailable(uint16_t sourceAddr);
#line 309
static inline void DelugePageTransferP__Timer__fired(void );





static inline void DelugePageTransferP__SendReqMsg__sendDone(message_t *msg, error_t error);










static inline message_t *DelugePageTransferP__ReceiveReqMsg__receive(message_t *msg, void *payload, uint8_t len);
#line 372
static inline void DelugePageTransferP__SendDataMsg__sendDone(message_t *msg, error_t error);
#line 387
static inline message_t *DelugePageTransferP__ReceiveDataMsg__receive(message_t *msg, void *payload, uint8_t len);
#line 422
static void DelugePageTransferP__BlockRead__readDone(uint8_t img_num, storage_addr_t addr, void *buf, storage_len_t len, error_t error);
#line 448
static inline void DelugePageTransferP__BlockRead__computeCrcDone(uint8_t img_num, storage_addr_t addr, storage_len_t len, uint16_t crc, error_t error);

static void DelugePageTransferP__BlockWrite__writeDone(uint8_t img_num, storage_addr_t addr, void *buf, storage_len_t len, error_t error);
#line 487
static inline void DelugePageTransferP__BlockWrite__eraseDone(uint8_t img_num, error_t error);
static inline void DelugePageTransferP__BlockWrite__syncDone(uint8_t img_num, error_t error);

static inline void DelugePageTransferP__DelugePageTransfer__setImgNum(uint8_t new_img_num);




static inline error_t DelugePageTransferP__BlockRead__default__read(uint8_t img_num, storage_addr_t addr, void *buf, storage_len_t len);
static inline error_t DelugePageTransferP__BlockWrite__default__write(uint8_t img_num, storage_addr_t addr, void *buf, storage_len_t len);
# 52 "/opt/tinyos-2.1.2/tos/system/RandomMlcgC.nc"
uint32_t RandomMlcgC__seed;


static inline error_t RandomMlcgC__Init__init(void );
#line 69
static uint32_t RandomMlcgC__Random__rand32(void );
#line 89
static inline uint16_t RandomMlcgC__Random__rand16(void );
# 46 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BitVecUtilsC.nc"
static error_t BitVecUtilsC__BitVecUtils__indexOf(uint16_t *pResult, uint16_t fromIndex, 
uint8_t *bitVec, uint16_t length);
# 58 "/opt/tinyos-2.1.2/tos/system/CrcC.nc"
static inline uint16_t CrcC__Crc__crc16(void *buf, uint8_t len);
#line 71
static uint16_t CrcC__Crc__seededCrc16(uint16_t startCrc, void *buf, uint8_t len);
# 110 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
static void /*ObjectTransferC.SendAdvMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(
#line 103
message_t * msg, 






error_t error);
# 75 "/opt/tinyos-2.1.2/tos/interfaces/Send.nc"
static error_t /*ObjectTransferC.SendAdvMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__send(
#line 67
message_t * msg, 







uint8_t len);
#line 125
static 
#line 123
void * 

/*ObjectTransferC.SendAdvMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__getPayload(
#line 122
message_t * msg, 


uint8_t len);
# 103 "/opt/tinyos-2.1.2/tos/interfaces/AMPacket.nc"
static void /*ObjectTransferC.SendAdvMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 162
static void /*ObjectTransferC.SendAdvMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setType(
#line 158
message_t * amsg, 



am_id_t t);
# 53 "/opt/tinyos-2.1.2/tos/system/AMQueueEntryP.nc"
static inline error_t /*ObjectTransferC.SendAdvMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*ObjectTransferC.SendAdvMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(message_t *m, error_t err);







static inline void */*ObjectTransferC.SendAdvMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__getPayload(message_t *m, uint8_t len);
# 80 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(
# 48 "/opt/tinyos-2.1.2/tos/system/AMQueueImplP.nc"
am_id_t arg_0x7fa21e360488, 
# 80 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 135
static 
#line 133
void * 

/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__getPayload(
# 48 "/opt/tinyos-2.1.2/tos/system/AMQueueImplP.nc"
am_id_t arg_0x7fa21e360488, 
# 132 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
message_t * msg, 


uint8_t len);
#line 123
static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__maxPayloadLength(
# 48 "/opt/tinyos-2.1.2/tos/system/AMQueueImplP.nc"
am_id_t arg_0x7fa21e360488);
# 100 "/opt/tinyos-2.1.2/tos/interfaces/Send.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(
# 46 "/opt/tinyos-2.1.2/tos/system/AMQueueImplP.nc"
uint8_t arg_0x7fa21e361318, 
# 96 "/opt/tinyos-2.1.2/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 78 "/opt/tinyos-2.1.2/tos/interfaces/Packet.nc"
static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__payloadLength(
#line 74
message_t * msg);
#line 94
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__postTask(void );
# 78 "/opt/tinyos-2.1.2/tos/interfaces/AMPacket.nc"
static am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(
#line 74
message_t * amsg);
#line 147
static am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(
#line 143
message_t * amsg);
# 126 "/opt/tinyos-2.1.2/tos/system/AMQueueImplP.nc"
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4398 {
#line 126
  AMQueueImplP__0__CancelTask = 3U
};
#line 126
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_sillytask_CancelTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask];
#line 169
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4399 {
#line 169
  AMQueueImplP__0__errorTask = 4U
};
#line 169
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_sillytask_errorTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask];
#line 57
#line 55
typedef struct /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4400 {
  message_t * msg;
} /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue_entry_t;

uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current = 5;
/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue_entry_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[5];
uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[5 / 8 + 1];

static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend(void );

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__nextPacket(void );
#line 90
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(uint8_t clientId, message_t *msg, 
uint8_t len);
#line 126
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask(void );
#line 163
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(uint8_t last, message_t * msg, error_t err);





static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask(void );




static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend(void );
#line 189
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(am_id_t id, message_t *msg, error_t err);
#line 207
static inline uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__maxPayloadLength(uint8_t id);



static inline void */*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__getPayload(uint8_t id, message_t *m, uint8_t len);



static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(uint8_t id, message_t *msg, error_t err);
# 65 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioAlarm.nc"
static tradio_size RF230RadioP__RadioAlarm__getNow(void );
# 120 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
static uint8_t RF230RadioP__Ieee154PacketLayer__getDSN(message_t *msg);
#line 75
static bool RF230RadioP__Ieee154PacketLayer__isAckFrame(message_t *msg);
#line 156
static void RF230RadioP__Ieee154PacketLayer__setSrcAddr(message_t *msg, uint16_t addr);
#line 69
static void RF230RadioP__Ieee154PacketLayer__createDataFrame(message_t *msg);
#line 125
static void RF230RadioP__Ieee154PacketLayer__setDSN(message_t *msg, uint8_t dsn);
#line 88
static void RF230RadioP__Ieee154PacketLayer__createAckReply(message_t *data, message_t *ack);
#line 151
static uint16_t RF230RadioP__Ieee154PacketLayer__getSrcAddr(message_t *msg);
#line 63
static bool RF230RadioP__Ieee154PacketLayer__isDataFrame(message_t *msg);
#line 94
static bool RF230RadioP__Ieee154PacketLayer__verifyAckReply(message_t *data, message_t *ack);
#line 162
static bool RF230RadioP__Ieee154PacketLayer__requiresAckWait(message_t *msg);
#line 146
static void RF230RadioP__Ieee154PacketLayer__setDestAddr(message_t *msg, uint16_t addr);
#line 136
static void RF230RadioP__Ieee154PacketLayer__setDestPan(message_t *msg, uint16_t pan);
#line 168
static bool RF230RadioP__Ieee154PacketLayer__requiresAckReply(message_t *msg);
#line 141
static uint16_t RF230RadioP__Ieee154PacketLayer__getDestAddr(message_t *msg);
# 73 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230RadioP.nc"
static inline uint8_t RF230RadioP__RF230DriverConfig__headerLength(message_t *msg);




static inline uint8_t RF230RadioP__RF230DriverConfig__maxPayloadLength(void );




static inline uint8_t RF230RadioP__RF230DriverConfig__metadataLength(message_t *msg);




static inline uint8_t RF230RadioP__RF230DriverConfig__headerPreloadLength(void );





static inline bool RF230RadioP__RF230DriverConfig__requiresRssiCca(message_t *msg);






static inline bool RF230RadioP__SoftwareAckConfig__requiresAckWait(message_t *msg);




static inline bool RF230RadioP__SoftwareAckConfig__isAckPacket(message_t *msg);




static inline bool RF230RadioP__SoftwareAckConfig__verifyAckPacket(message_t *data, message_t *ack);









static inline bool RF230RadioP__SoftwareAckConfig__requiresAckReply(message_t *msg);




static inline void RF230RadioP__SoftwareAckConfig__createAckPacket(message_t *data, message_t *ack);








static inline uint16_t RF230RadioP__SoftwareAckConfig__getAckTimeout(void );




static inline void RF230RadioP__SoftwareAckConfig__reportChannelError(void );








static inline uint8_t RF230RadioP__UniqueConfig__getSequenceNumber(message_t *msg);




static inline void RF230RadioP__UniqueConfig__setSequenceNumber(message_t *msg, uint8_t dsn);




static inline am_addr_t RF230RadioP__UniqueConfig__getSender(message_t *msg);




static inline void RF230RadioP__UniqueConfig__reportChannelError(void );








static inline am_addr_t RF230RadioP__ActiveMessageConfig__destination(message_t *msg);




static inline void RF230RadioP__ActiveMessageConfig__setDestination(message_t *msg, am_addr_t addr);




static inline am_addr_t RF230RadioP__ActiveMessageConfig__source(message_t *msg);




static inline void RF230RadioP__ActiveMessageConfig__setSource(message_t *msg, am_addr_t addr);









static inline void RF230RadioP__ActiveMessageConfig__setGroup(message_t *msg, am_group_t grp);




static inline error_t RF230RadioP__ActiveMessageConfig__checkFrame(message_t *msg);
#line 244
static inline uint16_t RF230RadioP__RandomCollisionConfig__getMinimumBackoff(void );








static inline uint16_t RF230RadioP__RandomCollisionConfig__getInitialBackoff(message_t *msg);








static inline uint16_t RF230RadioP__RandomCollisionConfig__getCongestionBackoff(message_t *msg);






static inline uint16_t RF230RadioP__RandomCollisionConfig__getTransmitBarrier(message_t *msg);
#line 285
static inline void RF230RadioP__RadioAlarm__fired(void );
# 60 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__fired(
# 43 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t arg_0x7fa21e1d3220);
# 109 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
static /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__size_type /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__getNow(void );
#line 66
static void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__start(/*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__size_type dt);






static void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__stop(void );
# 59 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/Tasklet.nc"
static void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__schedule(void );
# 55 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioAlarmP.nc"
uint8_t /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state;
enum /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0____nesc_unnamed4401 {

  RadioAlarmP__0__STATE_READY = 0, 
  RadioAlarmP__0__STATE_WAIT = 1, 
  RadioAlarmP__0__STATE_FIRED = 2
};

uint8_t /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__alarm;

static inline void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__fired(void );










static __inline tradio_size /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__getNow(uint8_t id);




static inline void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__run(void );








static inline void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__default__fired(uint8_t id);



static __inline bool /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__isFree(uint8_t id);




static inline void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__wait(uint8_t id, tradio_size timeout);








static inline void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__cancel(uint8_t id);
# 48 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/Tasklet.nc"
static void TaskletC__Tasklet__run(void );
# 72 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/TaskletC.nc"
uint8_t TaskletC__state;

static void TaskletC__doit(void );
#line 94
static __inline void TaskletC__Tasklet__suspend(void );




static void TaskletC__Tasklet__resume(void );
#line 112
static void TaskletC__Tasklet__schedule(void );
# 46 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__send(message_t *msg);
# 59 "/opt/tinyos-2.1.2/tos/interfaces/SendNotifier.nc"
static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SendNotifier__aboutToSend(
# 48 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x7fa21e184020, 
# 59 "/opt/tinyos-2.1.2/tos/interfaces/SendNotifier.nc"
am_addr_t dest, 
#line 57
message_t * msg);
# 110 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__sendDone(
# 45 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x7fa21e188778, 
# 103 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 78 "/opt/tinyos-2.1.2/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__receive(
# 47 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x7fa21e186480, 
# 71 "/opt/tinyos-2.1.2/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 63 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
static error_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__checkFrame(message_t *msg);
#line 46
static am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__source(message_t *msg);
#line 40
static am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__destination(message_t *msg);








static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setSource(message_t *msg, am_addr_t addr);
#line 43
static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setDestination(message_t *msg, am_addr_t addr);
#line 55
static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setGroup(message_t *msg, am_group_t grp);
# 50 "/opt/tinyos-2.1.2/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ActiveMessageAddress__amAddress(void );




static am_group_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ActiveMessageAddress__amGroup(void );
# 49 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__payloadLength(message_t *msg);









static uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__maxPayloadLength(void );
#line 54
static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__headerLength(message_t *msg);
# 78 "/opt/tinyos-2.1.2/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__receive(
# 46 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x7fa21e187908, 
# 71 "/opt/tinyos-2.1.2/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
#line 78
static 
#line 74
message_t * 



/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ReceiveDefault__receive(
# 51 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x7fa21e184be0, 
# 71 "/opt/tinyos-2.1.2/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
#line 78
static 
#line 74
message_t * 



/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SnoopDefault__receive(
# 52 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
am_id_t arg_0x7fa21e183808, 
# 71 "/opt/tinyos-2.1.2/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 67 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static activemessage_header_t */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getHeader(message_t *msg);




static inline void */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getPayload(message_t *msg);






static error_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__send(am_id_t id, am_addr_t addr, message_t *msg, uint8_t len);
#line 98
static __inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__sendDone(message_t *msg, error_t error);
#line 112
static __inline uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__maxPayloadLength(am_id_t id);




static __inline void */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__getPayload(am_id_t id, message_t *msg, uint8_t len);




static inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SendNotifier__default__aboutToSend(am_id_t id, am_addr_t addr, message_t *msg);





static inline message_t */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubReceive__receive(message_t *msg);
#line 141
static inline message_t */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);




static inline message_t */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ReceiveDefault__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);




static inline message_t */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);




static inline message_t */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SnoopDefault__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);






static __inline am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__address(void );




static __inline am_group_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__localGroup(void );




static __inline bool /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__isForMe(message_t *msg);





static __inline am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__destination(message_t *msg);




static __inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setDestination(message_t *msg, am_addr_t addr);




static __inline am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__source(message_t *msg);




static __inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setSource(message_t *msg, am_addr_t addr);




static __inline am_id_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__type(message_t *msg);




static __inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setType(message_t *msg, am_id_t type);









static __inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setGroup(message_t *msg, am_group_t grp);










static inline uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__headerLength(message_t *msg);




static inline uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__payloadLength(message_t *msg);




static inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);




static inline uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__maxPayloadLength(void );
#line 262
static inline uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__payloadLength(message_t *msg);




static inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__setPayloadLength(message_t *msg, uint8_t len);




static uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__maxPayloadLength(void );




static inline void */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__getPayload(message_t *msg, uint8_t len);
# 63 "/opt/tinyos-2.1.2/tos/system/ActiveMessageAddressC.nc"
am_addr_t ActiveMessageAddressC__addr = TOS_AM_ADDRESS;


am_group_t ActiveMessageAddressC__group = TOS_AM_GROUP;






static inline am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void );
#line 94
static am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void );
#line 107
static inline void ActiveMessageAddressC__initAmAddress(am_group_t myGroup, am_addr_t myAddr);
#line 120
static am_addr_t ActiveMessageAddressC__amAddress(void );
# 46 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__send(message_t *msg);
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__release(void );
#line 97
static error_t /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__immediateRequest(void );
#line 88
static error_t /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__request(void );
# 54 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/BareSend.nc"
static void /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__sendDone(message_t *msg, error_t error);
# 51 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/AutoResourceAcquireLayerC.nc"
message_t */*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__pending;

static inline error_t /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__send(message_t *msg);
#line 68
static inline void /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__granted(void );









static inline void /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__sendDone(message_t *msg, error_t result);
# 49 "/opt/tinyos-2.1.2/tos/system/FcfsResourceQueueC.nc"
enum /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0____nesc_unnamed4402 {
#line 49
  FcfsResourceQueueC__0__NO_ENTRY = 0xFF
};
uint8_t /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ[1U];
uint8_t /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead = /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
uint8_t /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qTail = /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

static inline error_t /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__Init__init(void );




static inline bool /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );



static inline bool /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
#line 82
static inline error_t /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id);
# 53 "/opt/tinyos-2.1.2/tos/interfaces/ResourceRequested.nc"
static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__requested(
# 52 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fa21e0aa020);
# 61 "/opt/tinyos-2.1.2/tos/interfaces/ResourceRequested.nc"
static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__immediateRequested(
# 52 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fa21e0aa020);
# 65 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(
# 56 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fa21e0a8538);
# 59 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(
# 56 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fa21e0a8538);
# 79 "/opt/tinyos-2.1.2/tos/interfaces/ResourceQueue.nc"
static error_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__enqueue(resource_client_id_t id);
#line 53
static bool /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__dequeue(void );
# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__granted(
# 51 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fa21e0ace30);
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static error_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__postTask(void );
# 68 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
enum /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0____nesc_unnamed4403 {
#line 68
  SimpleArbiterP__0__grantedTask = 5U
};
#line 68
typedef int /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0____nesc_sillytask_grantedTask[/*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask];
#line 62
enum /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0____nesc_unnamed4404 {
#line 62
  SimpleArbiterP__0__RES_IDLE = 0, SimpleArbiterP__0__RES_GRANTING = 1, SimpleArbiterP__0__RES_BUSY = 2
};
#line 63
enum /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0____nesc_unnamed4405 {
#line 63
  SimpleArbiterP__0__NO_RES = 0xFF
};
uint8_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state = /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_IDLE;
uint8_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId = /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__NO_RES;



static inline error_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__request(uint8_t id);
#line 83
static inline error_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__immediateRequest(uint8_t id);
#line 96
static error_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__release(uint8_t id);
#line 149
static inline void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void );








static inline void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__default__granted(uint8_t id);

static inline void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(uint8_t id);

static inline void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__immediateRequested(uint8_t id);

static inline void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(uint8_t id);

static inline void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id);
# 49 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__payloadLength(message_t *msg);
#line 43
static uint8_t /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__headerLength(message_t *msg);
# 185 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
static bool /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154PacketLayer__isForMe(message_t *msg);
# 97 "/opt/tinyos-2.1.2/tos/interfaces/Ieee154Send.nc"
static void /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__sendDone(message_t *msg, error_t error);
# 78 "/opt/tinyos-2.1.2/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 56 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline void */*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__getPayload(message_t *msg);
#line 68
static inline uint8_t /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Packet__payloadLength(message_t *msg);
#line 127
static inline void /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubSend__sendDone(message_t *msg, error_t error);




static inline void /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__default__sendDone(message_t *msg, error_t error);









static inline message_t */*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubReceive__receive(message_t *msg);








static inline message_t */*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__default__receive(message_t *msg, void *payload, uint8_t len);
# 46 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__send(message_t *msg);
# 42 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosReceive__receive(message_t *msg);
# 49 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__payloadLength(message_t *msg);









static uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__maxPayloadLength(void );
#line 54
static void /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__headerLength(message_t *msg);
# 54 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/BareSend.nc"
static void /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__sendDone(message_t *msg, error_t error);
#line 54
static void /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Send__sendDone(message_t *msg, error_t error);
# 42 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Receive__receive(message_t *msg);
# 91 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__headerLength(message_t *msg);




static inline uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__payloadLength(message_t *msg);
#line 127
static network_header_t */*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__getHeader(message_t *msg);




static error_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__send(message_t *msg);
#line 145
enum /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0____nesc_unnamed4406 {


  TinyosNetworkLayerC__0__PAYLOAD_OFFSET = sizeof(network_header_t )
};




static inline uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__headerLength(message_t *msg);




static inline uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__payloadLength(message_t *msg);




static inline void /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__setPayloadLength(message_t *msg, uint8_t length);




static inline uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__maxPayloadLength(void );
#line 214
static inline void /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__sendDone(message_t *msg, error_t result);







static inline message_t */*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubReceive__receive(message_t *msg);
# 50 "/opt/tinyos-2.1.2/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amAddress(void );




static am_group_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amGroup(void );
# 49 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__payloadLength(message_t *msg);









static uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__maxPayloadLength(void );
#line 54
static void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__headerLength(message_t *msg);
# 57 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
enum /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0____nesc_unnamed4407 {

  Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_MASK = (((IEEE154_TYPE_MASK << IEEE154_FCF_FRAME_TYPE)
   | (1 << IEEE154_FCF_INTRAPAN))
   | (IEEE154_ADDR_MASK << IEEE154_FCF_DEST_ADDR_MODE))
   | (IEEE154_ADDR_MASK << IEEE154_FCF_SRC_ADDR_MODE), 

  Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_VALUE = (((IEEE154_TYPE_DATA << IEEE154_FCF_FRAME_TYPE)
   | (1 << IEEE154_FCF_INTRAPAN))
   | (IEEE154_ADDR_SHORT << IEEE154_FCF_DEST_ADDR_MODE))
   | (IEEE154_ADDR_SHORT << IEEE154_FCF_SRC_ADDR_MODE), 

  Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_PRESERVE = (1 << IEEE154_FCF_ACK_REQ)
   | (1 << IEEE154_FCF_FRAME_PENDING), 

  Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_LENGTH = 3, 
  Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_MASK = IEEE154_TYPE_MASK << IEEE154_FCF_FRAME_TYPE, 
  Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_VALUE = IEEE154_TYPE_ACK << IEEE154_FCF_FRAME_TYPE
};

static ieee154_simple_header_t */*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(message_t *msg);
#line 92
static inline bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isDataFrame(message_t *msg);




static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createDataFrame(message_t *msg);






static inline bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isAckFrame(message_t *msg);










static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createAckReply(message_t *data, message_t *ack);








static inline bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__verifyAckReply(message_t *data, message_t *ack);







static bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getAckRequired(message_t *msg);
#line 158
static inline uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDSN(message_t *msg);




static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDSN(message_t *msg, uint8_t dsn);




static inline uint16_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestPan(message_t *msg);




static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestPan(message_t *msg, uint16_t pan);




static inline uint16_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(message_t *msg);




static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestAddr(message_t *msg, uint16_t addr);




static inline uint16_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getSrcAddr(message_t *msg);




static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setSrcAddr(message_t *msg, uint16_t addr);




static inline bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckWait(message_t *msg);






static bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckReply(message_t *msg);






static inline ieee154_saddr_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localAddr(void );




static inline ieee154_panid_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localPan(void );




static inline bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isForMe(message_t *msg);
#line 282
static inline uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__headerLength(message_t *msg);




static inline uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__payloadLength(message_t *msg);




static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);




static inline uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__maxPayloadLength(void );
# 46 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/BareSend.nc"
static error_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__send(message_t *msg);
# 46 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/NeighborhoodFlag.nc"
static bool /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__NeighborhoodFlag__get(uint8_t idx);




static void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__NeighborhoodFlag__set(uint8_t idx);
# 54 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/BareSend.nc"
static void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__sendDone(message_t *msg, error_t error);
# 71 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/Neighborhood.nc"
static uint8_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__insertNode(am_addr_t id);
# 53 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__RadioReceive__receive(message_t *msg);
#line 46
static bool /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__RadioReceive__header(message_t *msg);
# 52 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/UniqueConfig.nc"
static void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__setSequenceNumber(message_t *msg, uint8_t number);





static void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__reportChannelError(void );
#line 42
static uint8_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__getSequenceNumber(message_t *msg);




static am_addr_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__getSender(message_t *msg);
# 61 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/UniqueLayerP.nc"
uint8_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__sequenceNumber;

static inline error_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Init__init(void );





static inline error_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__send(message_t *msg);










static inline void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__sendDone(message_t *msg, error_t error);




static inline bool /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__header(message_t *msg);





uint8_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__receivedNumbers[5];

static inline message_t */*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__receive(message_t *msg);
#line 116
static inline void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__evicted(uint8_t idx);
# 80 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/Neighborhood.nc"
static void NeighborhoodP__Neighborhood__evicted(uint8_t idx);
# 49 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/NeighborhoodP.nc"
am_addr_t NeighborhoodP__nodes[5];
uint8_t NeighborhoodP__ages[5];
uint8_t NeighborhoodP__flags[5];
uint8_t NeighborhoodP__time;
uint8_t NeighborhoodP__last;

static inline error_t NeighborhoodP__Init__init(void );
#line 94
static inline uint8_t NeighborhoodP__Neighborhood__insertNode(am_addr_t node);
#line 158
static __inline bool NeighborhoodP__NeighborhoodFlag__get(uint8_t bit, uint8_t idx);




static __inline void NeighborhoodP__NeighborhoodFlag__set(uint8_t bit, uint8_t idx);
# 113 "/opt/tinyos-2.1.2/tos/interfaces/SplitControl.nc"
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__startDone(error_t error);
#line 138
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__stopDone(error_t error);
# 56 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioState.nc"
static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__turnOn(void );
# 54 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/BareSend.nc"
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__sendDone(message_t *msg, error_t error);
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__postTask(void );
#line 67
static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__postTask(void );
# 42 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/BareReceive.nc"
static message_t */*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Receive__receive(message_t *msg);
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__postTask(void );
# 48 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioSend.nc"
static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__send(message_t *msg);
# 48 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioChannel.nc"
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__setChannelDone(void );
# 72 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/Tasklet.nc"
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__suspend(void );






static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__resume(void );
# 144 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
enum /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_unnamed4408 {
#line 144
  MessageBufferLayerP__0__stateDoneTask = 6U
};
#line 144
typedef int /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_sillytask_stateDoneTask[/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask];
#line 189
enum /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_unnamed4409 {
#line 189
  MessageBufferLayerP__0__sendTask = 7U
};
#line 189
typedef int /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_sillytask_sendTask[/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask];
#line 322
enum /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_unnamed4410 {
#line 322
  MessageBufferLayerP__0__deliverTask = 8U
};
#line 322
typedef int /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_sillytask_deliverTask[/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask];
#line 63
uint8_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state;
enum /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_unnamed4411 {

  MessageBufferLayerP__0__STATE_READY = 0, 
  MessageBufferLayerP__0__STATE_TX_PENDING = 1, 
  MessageBufferLayerP__0__STATE_TX_RETRY = 2, 
  MessageBufferLayerP__0__STATE_TX_SEND = 3, 
  MessageBufferLayerP__0__STATE_TX_DONE = 4, 
  MessageBufferLayerP__0__STATE_TURN_ON = 5, 
  MessageBufferLayerP__0__STATE_TURN_OFF = 6, 
  MessageBufferLayerP__0__STATE_CHANNEL = 7
};

static inline error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__start(void );
#line 144
static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__runTask(void );
#line 163
static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__done(void );
#line 176
static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__default__setChannelDone(void );





message_t */*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txMsg;
error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txError;
uint8_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__retries;


enum /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_unnamed4412 {
#line 187
  MessageBufferLayerP__0__MAX_RETRIES = 5
};
static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__runTask(void );
#line 217
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__sendDone(error_t error);
#line 230
static inline error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__send(message_t *msg);
#line 252
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__ready(void );








static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__run(void );
#line 291
enum /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0____nesc_unnamed4413 {

  MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE = 3
};

message_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueData[/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE];
message_t */*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE];

uint8_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead;
uint8_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize;

static inline error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SoftwareInit__init(void );









static inline bool /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__header(message_t *msg);









static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__runTask(void );
#line 351
static inline message_t */*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__receive(message_t *msg);
# 48 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioSend.nc"
static error_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__send(message_t *msg);
# 50 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__wait(tradio_size timeout);
#line 45
static bool /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__isFree(void );
#line 65
static tradio_size /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__getNow(void );
# 52 "/opt/tinyos-2.1.2/tos/interfaces/Random.nc"
static uint16_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Random__rand16(void );
# 46 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/RandomCollisionConfig.nc"
static uint16_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getCongestionBackoff(message_t *msg);
#line 40
static uint16_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getInitialBackoff(message_t *msg);










static uint16_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getMinimumBackoff(void );





static uint16_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getTransmitBarrier(message_t *msg);
# 53 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioReceive__receive(message_t *msg);
#line 46
static bool /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioReceive__header(message_t *msg);
# 63 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioSend.nc"
static void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__ready(void );
#line 56
static void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__sendDone(error_t error);
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static error_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__postTask(void );
# 78 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
enum /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0____nesc_unnamed4414 {
#line 78
  RandomCollisionLayerP__0__calcNextRandom = 9U
};
#line 78
typedef int /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0____nesc_sillytask_calcNextRandom[/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom];
#line 57
uint8_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state;
enum /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0____nesc_unnamed4415 {

  RandomCollisionLayerP__0__STATE_READY = 0, 
  RandomCollisionLayerP__0__STATE_TX_PENDING_FIRST = 1, 
  RandomCollisionLayerP__0__STATE_TX_PENDING_SECOND = 2, 
  RandomCollisionLayerP__0__STATE_TX_SENDING = 3, 

  RandomCollisionLayerP__0__STATE_BARRIER = 0x80
};

message_t */*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txMsg;
uint16_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txBarrier;

static inline void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__ready(void );





uint16_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__nextRandom;
static inline void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__runTask(void );





static uint16_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__getBackoff(uint16_t maxBackoff);
#line 98
static inline error_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__send(message_t *msg);
#line 110
static inline void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__fired(void );
#line 155
static inline void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__sendDone(error_t error);







static inline bool /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__header(message_t *msg);




static inline message_t */*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__receive(message_t *msg);
# 48 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioSend.nc"
static error_t /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__send(message_t *msg);
# 50 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__wait(tradio_size timeout);




static void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__cancel(void );
#line 45
static bool /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__isFree(void );
# 55 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/PacketFlag.nc"
static void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__clear(message_t *msg);
#line 50
static void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__set(message_t *msg);
# 86 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
static void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__reportChannelError(void );
#line 80
static void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__createAckPacket(message_t *data, message_t *ack);
#line 55
static bool /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__requiresAckWait(message_t *msg);






static bool /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__isAckPacket(message_t *msg);






static bool /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__verifyAckPacket(message_t *data, message_t *ack);
#line 43
static uint16_t /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__getAckTimeout(void );
#line 75
static bool /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__requiresAckReply(message_t *msg);
# 53 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t */*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioReceive__receive(message_t *msg);
#line 46
static bool /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioReceive__header(message_t *msg);
# 63 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioSend.nc"
static void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__ready(void );
#line 56
static void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__sendDone(error_t error);
# 60 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/SoftwareAckLayerC.nc"
uint8_t /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state;
enum /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0____nesc_unnamed4416 {

  SoftwareAckLayerC__0__STATE_READY = 0, 
  SoftwareAckLayerC__0__STATE_DATA_SEND = 1, 
  SoftwareAckLayerC__0__STATE_ACK_WAIT = 2, 
  SoftwareAckLayerC__0__STATE_ACK_SEND = 3
};

message_t */*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__txMsg;
message_t /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__ackMsg;

static inline void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__ready(void );





static inline error_t /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__send(message_t *msg);
#line 97
static inline void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__sendDone(error_t error);
#line 124
static inline void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__fired(void );









static inline bool /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__header(message_t *msg);
#line 147
static inline message_t */*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__receive(message_t *msg);
# 55 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/PacketFlag.nc"
static void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__clear(message_t *msg);
#line 50
static void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__set(message_t *msg);
# 49 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__payloadLength(message_t *msg);









static uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__maxPayloadLength(void );
#line 54
static void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__headerLength(message_t *msg);
#line 65
static uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__metadataLength(message_t *msg);
# 60 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline timestamp_metadata_t */*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__getMeta(message_t *msg);
#line 77
static inline void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__clear(message_t *msg);




static inline void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__set(message_t *msg, uint32_t value);
#line 116
static inline uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__headerLength(message_t *msg);




static inline uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__payloadLength(message_t *msg);




static inline void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);




static inline uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__maxPayloadLength(void );




static inline uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__metadataLength(message_t *msg);
# 49 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__payloadLength(message_t *msg);









static uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__maxPayloadLength(void );
#line 54
static void /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length);
#line 43
static uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__headerLength(message_t *msg);
#line 65
static uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__metadataLength(message_t *msg);
# 54 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline flags_metadata_t */*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__getMeta(message_t *msg);






static bool /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__get(uint8_t bit, message_t *msg);




static void /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(uint8_t bit, message_t *msg);






static inline void /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(uint8_t bit, message_t *msg);
#line 90
static inline uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__headerLength(message_t *msg);




static inline uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__payloadLength(message_t *msg);




static inline void /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);




static inline uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__maxPayloadLength(void );




static inline uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__metadataLength(message_t *msg);
# 52 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioCCA.nc"
static void RF230DriverLayerP__RadioCCA__done(error_t error);
# 66 "/opt/tinyos-2.1.2/tos/lib/timer/BusyWait.nc"
static void RF230DriverLayerP__BusyWait__wait(RF230DriverLayerP__BusyWait__size_type dt);
# 55 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/PacketFlag.nc"
static void RF230DriverLayerP__RSSIFlag__clear(message_t *msg);
#line 50
static void RF230DriverLayerP__RSSIFlag__set(message_t *msg);
# 70 "/opt/tinyos-2.1.2/tos/interfaces/PacketTimeStamp.nc"
static void RF230DriverLayerP__PacketTimeStamp__clear(
#line 66
message_t * msg);
#line 78
static void RF230DriverLayerP__PacketTimeStamp__set(
#line 73
message_t * msg, 




RF230DriverLayerP__PacketTimeStamp__size_type value);
# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
static void RF230DriverLayerP__RSTN__makeOutput(void );
#line 40
static void RF230DriverLayerP__RSTN__set(void );
static void RF230DriverLayerP__RSTN__clr(void );
# 50 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioAlarm.nc"
static void RF230DriverLayerP__RadioAlarm__wait(tradio_size timeout);
#line 45
static bool RF230DriverLayerP__RadioAlarm__isFree(void );
#line 65
static tradio_size RF230DriverLayerP__RadioAlarm__getNow(void );
# 69 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioState.nc"
static void RF230DriverLayerP__RadioState__done(void );
# 61 "/opt/tinyos-2.1.2/tos/lib/timer/LocalTime.nc"
static uint32_t RF230DriverLayerP__LocalTime__get(void );
# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
static void RF230DriverLayerP__SLP_TR__makeOutput(void );
#line 40
static void RF230DriverLayerP__SLP_TR__set(void );
static void RF230DriverLayerP__SLP_TR__clr(void );
# 46 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230DriverConfig.nc"
static uint8_t RF230DriverLayerP__Config__maxPayloadLength(void );
#line 40
static uint8_t RF230DriverLayerP__Config__headerLength(message_t *msg);
#line 52
static uint8_t RF230DriverLayerP__Config__metadataLength(message_t *msg);






static uint8_t RF230DriverLayerP__Config__headerPreloadLength(void );





static bool RF230DriverLayerP__Config__requiresRssiCca(message_t *msg);
# 53 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioReceive.nc"
static message_t *RF230DriverLayerP__RadioReceive__receive(message_t *msg);
#line 46
static bool RF230DriverLayerP__RadioReceive__header(message_t *msg);
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static error_t RF230DriverLayerP__releaseSpi__postTask(void );
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t RF230DriverLayerP__SpiResource__release(void );
#line 97
static error_t RF230DriverLayerP__SpiResource__immediateRequest(void );
#line 88
static error_t RF230DriverLayerP__SpiResource__request(void );
#line 128
static bool RF230DriverLayerP__SpiResource__isOwner(void );
# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
static void RF230DriverLayerP__SELN__makeOutput(void );
#line 40
static void RF230DriverLayerP__SELN__set(void );
static void RF230DriverLayerP__SELN__clr(void );
# 63 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioSend.nc"
static void RF230DriverLayerP__RadioSend__ready(void );
#line 56
static void RF230DriverLayerP__RadioSend__sendDone(error_t error);
# 66 "/opt/tinyos-2.1.2/tos/interfaces/GpioCapture.nc"
static void RF230DriverLayerP__IRQ__disable(void );
#line 53
static error_t RF230DriverLayerP__IRQ__captureRisingEdge(void );
# 62 "/opt/tinyos-2.1.2/tos/interfaces/FastSpiByte.nc"
static void RF230DriverLayerP__FastSpiByte__splitWrite(uint8_t data);
#line 74
static uint8_t RF230DriverLayerP__FastSpiByte__splitReadWrite(uint8_t data);
#line 68
static uint8_t RF230DriverLayerP__FastSpiByte__splitRead(void );
#line 81
static uint8_t RF230DriverLayerP__FastSpiByte__write(uint8_t data);
# 40 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/PacketFlag.nc"
static bool RF230DriverLayerP__TimeSyncFlag__get(message_t *msg);
#line 55
static void RF230DriverLayerP__TransmitPowerFlag__clear(message_t *msg);
#line 40
static bool RF230DriverLayerP__TransmitPowerFlag__get(message_t *msg);
# 59 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/Tasklet.nc"
static void RF230DriverLayerP__Tasklet__schedule(void );
# 861 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230DriverLayerP.nc"
enum RF230DriverLayerP____nesc_unnamed4417 {
#line 861
  RF230DriverLayerP__releaseSpi = 10U
};
#line 861
typedef int RF230DriverLayerP____nesc_sillytask_releaseSpi[RF230DriverLayerP__releaseSpi];
#line 96
static inline rf230_header_t *RF230DriverLayerP__getHeader(message_t *msg);




static void *RF230DriverLayerP__getPayload(message_t *msg);




static rf230_metadata_t *RF230DriverLayerP__getMeta(message_t *msg);






uint8_t RF230DriverLayerP__state;
enum RF230DriverLayerP____nesc_unnamed4418 {

  RF230DriverLayerP__STATE_P_ON = 0, 
  RF230DriverLayerP__STATE_SLEEP = 1, 
  RF230DriverLayerP__STATE_SLEEP_2_TRX_OFF = 2, 
  RF230DriverLayerP__STATE_TRX_OFF = 3, 
  RF230DriverLayerP__STATE_TRX_OFF_2_RX_ON = 4, 
  RF230DriverLayerP__STATE_RX_ON = 5, 
  RF230DriverLayerP__STATE_BUSY_TX_2_RX_ON = 6
};

uint8_t RF230DriverLayerP__cmd;
enum RF230DriverLayerP____nesc_unnamed4419 {

  RF230DriverLayerP__CMD_NONE = 0, 
  RF230DriverLayerP__CMD_TURNOFF = 1, 
  RF230DriverLayerP__CMD_STANDBY = 2, 
  RF230DriverLayerP__CMD_TURNON = 3, 
  RF230DriverLayerP__CMD_TRANSMIT = 4, 
  RF230DriverLayerP__CMD_RECEIVE = 5, 
  RF230DriverLayerP__CMD_CCA = 6, 
  RF230DriverLayerP__CMD_CHANNEL = 7, 
  RF230DriverLayerP__CMD_SIGNAL_DONE = 8, 
  RF230DriverLayerP__CMD_DOWNLOAD = 9
};

bool RF230DriverLayerP__radioIrq;

uint8_t RF230DriverLayerP__txPower;
uint8_t RF230DriverLayerP__channel;

message_t *RF230DriverLayerP__rxMsg;
message_t RF230DriverLayerP__rxMsgBuffer;

uint16_t RF230DriverLayerP__capturedTime;

uint8_t RF230DriverLayerP__rssiClear;
uint8_t RF230DriverLayerP__rssiBusy;



static __inline void RF230DriverLayerP__writeRegister(uint8_t reg, uint8_t value);
#line 167
static __inline uint8_t RF230DriverLayerP__readRegister(uint8_t reg);
#line 183
enum RF230DriverLayerP____nesc_unnamed4420 {

  RF230DriverLayerP__SLEEP_WAKEUP_TIME = (uint16_t )(880 * (73728UL / 8 / 32) * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 10000UL), 
  RF230DriverLayerP__CCA_REQUEST_TIME = (uint16_t )(140 * (73728UL / 8 / 32) * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 10000UL), 

  RF230DriverLayerP__TX_SFD_DELAY = (uint16_t )(176 * (73728UL / 8 / 32) * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 10000UL), 
  RF230DriverLayerP__RX_SFD_DELAY = (uint16_t )(8 * (73728UL / 8 / 32) * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 10000UL)
};

static inline void RF230DriverLayerP__RadioAlarm__fired(void );
#line 218
static inline error_t RF230DriverLayerP__PlatformInit__init(void );
#line 236
static inline error_t RF230DriverLayerP__SoftwareInit__init(void );





static inline void RF230DriverLayerP__initRadio(void );
#line 270
static inline void RF230DriverLayerP__SpiResource__granted(void );
#line 284
static bool RF230DriverLayerP__isSpiAcquired(void );
#line 324
static __inline void RF230DriverLayerP__changeChannel(void );
#line 342
static __inline void RF230DriverLayerP__changeState(void );
#line 424
static inline error_t RF230DriverLayerP__RadioState__turnOn(void );
#line 441
static error_t RF230DriverLayerP__RadioSend__send(message_t *msg);
#line 613
static inline void RF230DriverLayerP__RadioCCA__default__done(error_t error);



static __inline void RF230DriverLayerP__downloadMessage(void );
#line 702
static inline void RF230DriverLayerP__IRQ__captured(uint16_t time);
#line 715
static inline void RF230DriverLayerP__serviceRadio(void );
#line 861
static inline void RF230DriverLayerP__releaseSpi__runTask(void );




static inline void RF230DriverLayerP__Tasklet__run(void );
#line 896
static inline uint8_t RF230DriverLayerP__RadioPacket__headerLength(message_t *msg);




static uint8_t RF230DriverLayerP__RadioPacket__payloadLength(message_t *msg);




static void RF230DriverLayerP__RadioPacket__setPayloadLength(message_t *msg, uint8_t length);








static inline uint8_t RF230DriverLayerP__RadioPacket__maxPayloadLength(void );






static inline uint8_t RF230DriverLayerP__RadioPacket__metadataLength(message_t *msg);
#line 934
static inline bool RF230DriverLayerP__PacketTransmitPower__isSet(message_t *msg);




static inline uint8_t RF230DriverLayerP__PacketTransmitPower__get(message_t *msg);
#line 967
static inline void RF230DriverLayerP__PacketRSSI__clear(message_t *msg);




static inline void RF230DriverLayerP__PacketRSSI__set(message_t *msg, uint8_t value);










static inline bool RF230DriverLayerP__PacketTimeSyncOffset__isSet(message_t *msg);




static inline uint8_t RF230DriverLayerP__PacketTimeSyncOffset__get(message_t *msg);
#line 1022
static inline void RF230DriverLayerP__PacketLinkQuality__set(message_t *msg, uint8_t value);
# 44 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
static void HplRF230P__PortCLKM__makeInput(void );
#line 41
static void HplRF230P__PortCLKM__clr(void );
# 88 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplRF230P__Capture__setEdge(bool up);
#line 47
static HplRF230P__Capture__size_type HplRF230P__Capture__get(void );
#line 64
static void HplRF230P__Capture__reset(void );


static void HplRF230P__Capture__start(void );


static void HplRF230P__Capture__stop(void );
# 44 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
static void HplRF230P__PortIRQ__makeInput(void );
#line 41
static void HplRF230P__PortIRQ__clr(void );
# 61 "/opt/tinyos-2.1.2/tos/interfaces/GpioCapture.nc"
static void HplRF230P__IRQ__captured(uint16_t time);
# 53 "/opt/tinyos-2.1.2/tos/platforms/iris/chips/rf230/HplRF230P.nc"
static inline error_t HplRF230P__PlatformInit__init(void );










static inline void HplRF230P__Capture__captured(uint16_t time);









static inline error_t HplRF230P__IRQ__captureRisingEdge(void );
#line 89
static inline void HplRF230P__IRQ__disable(void );
# 82 "/opt/tinyos-2.1.2/tos/interfaces/SpiPacket.nc"
static void Atm128SpiP__SpiPacket__sendDone(
#line 75
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 89 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128Spi.nc"
static void Atm128SpiP__Spi__sleep(void );
#line 83
static void Atm128SpiP__Spi__initMaster(void );
#line 113
static void Atm128SpiP__Spi__enableInterrupt(bool enabled);
#line 97
static uint8_t Atm128SpiP__Spi__read(void );
#line 141
static void Atm128SpiP__Spi__setMasterDoubleSpeed(bool on);
#line 131
static void Atm128SpiP__Spi__setClock(uint8_t speed);




static bool Atm128SpiP__Spi__isInterruptPending(void );
#line 125
static void Atm128SpiP__Spi__setClockPolarity(bool highWhenIdle);
#line 103
static void Atm128SpiP__Spi__write(uint8_t data);
#line 116
static void Atm128SpiP__Spi__enableSpi(bool busOn);
#line 128
static void Atm128SpiP__Spi__setClockPhase(bool sampleOnTrailing);
# 52 "/opt/tinyos-2.1.2/tos/interfaces/McuPowerState.nc"
static void Atm128SpiP__McuPowerState__update(void );
# 294 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128SpiP.nc"
enum Atm128SpiP____nesc_unnamed4421 {
#line 294
  Atm128SpiP__zeroTask = 11U
};
#line 294
typedef int Atm128SpiP____nesc_sillytask_zeroTask[Atm128SpiP__zeroTask];
#line 103
uint16_t Atm128SpiP__len;
uint8_t * Atm128SpiP__txBuffer;
uint8_t * Atm128SpiP__rxBuffer;
uint16_t Atm128SpiP__pos;

enum Atm128SpiP____nesc_unnamed4422 {
  Atm128SpiP__SPI_IDLE, 
  Atm128SpiP__SPI_BUSY, 
  Atm128SpiP__SPI_ATOMIC_SIZE = 10
};
#line 124
enum Atm128SpiP____nesc_unnamed4423 {
  Atm128SpiP__PLATFORM_MHZ = 8
};


static void Atm128SpiP__startSpi(void );
#line 165
static inline void Atm128SpiP__stopSpi(void );







static uint8_t Atm128SpiP__SpiByte__write(uint8_t tx);
#line 192
static __inline void Atm128SpiP__FastSpiByte__splitWrite(uint8_t data);



static __inline uint8_t Atm128SpiP__FastSpiByte__splitRead(void );





static __inline uint8_t Atm128SpiP__FastSpiByte__splitReadWrite(uint8_t data);
#line 214
static __inline uint8_t Atm128SpiP__FastSpiByte__write(uint8_t data);
#line 249
static inline error_t Atm128SpiP__sendNextPart(void );
#line 294
static inline void Atm128SpiP__zeroTask__runTask(void );
#line 349
static inline 
#line 348
void Atm128SpiP__SpiPacket__default__sendDone(
uint8_t *_txbuffer, uint8_t *_rxbuffer, 
uint16_t _length, error_t _success);

static inline void Atm128SpiP__Spi__dataReady(uint8_t data);
#line 392
static inline void Atm128SpiP__ResourceConfigure__configure(uint8_t id);



static inline void Atm128SpiP__ResourceConfigure__unconfigure(uint8_t id);
# 44 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
static void HplAtm128SpiP__MISO__makeInput(void );

static void HplAtm128SpiP__SCK__makeOutput(void );
#line 46
static void HplAtm128SpiP__SS__makeOutput(void );
# 52 "/opt/tinyos-2.1.2/tos/interfaces/McuPowerState.nc"
static void HplAtm128SpiP__Mcu__update(void );
# 109 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128Spi.nc"
static void HplAtm128SpiP__SPI__dataReady(uint8_t data);
# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
static void HplAtm128SpiP__MOSI__makeOutput(void );
# 96 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__initMaster(void );
#line 112
static inline void HplAtm128SpiP__SPI__sleep(void );


static inline uint8_t HplAtm128SpiP__SPI__read(void );
static inline void HplAtm128SpiP__SPI__write(uint8_t d);


void __vector_24(void ) __attribute((signal))   ;




static inline bool HplAtm128SpiP__SPI__isInterruptPending(void );







static void HplAtm128SpiP__SPI__enableInterrupt(bool enabled);
#line 147
static void HplAtm128SpiP__SPI__enableSpi(bool enabled);
#line 173
static inline void HplAtm128SpiP__SPI__setMasterBit(bool isMaster);
#line 186
static inline void HplAtm128SpiP__SPI__setClockPolarity(bool highWhenIdle);
#line 200
static inline void HplAtm128SpiP__SPI__setClockPhase(bool sampleOnTrailing);
#line 217
static inline void HplAtm128SpiP__SPI__setClock(uint8_t v);
#line 230
static inline void HplAtm128SpiP__SPI__setMasterDoubleSpeed(bool on);
# 49 "/opt/tinyos-2.1.2/tos/system/FcfsResourceQueueC.nc"
enum /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1____nesc_unnamed4424 {
#line 49
  FcfsResourceQueueC__1__NO_ENTRY = 0xFF
};
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ[1U];
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY;
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qTail = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY;

static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__Init__init(void );




static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty(void );



static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue(void );
#line 82
static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__enqueue(resource_client_id_t id);
# 53 "/opt/tinyos-2.1.2/tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__requested(
# 52 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fa21e0aa020);
# 61 "/opt/tinyos-2.1.2/tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__immediateRequested(
# 52 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fa21e0aa020);
# 65 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceConfigure__unconfigure(
# 56 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fa21e0a8538);
# 59 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceConfigure__configure(
# 56 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fa21e0a8538);
# 79 "/opt/tinyos-2.1.2/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Queue__enqueue(resource_client_id_t id);
#line 53
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Queue__dequeue(void );
# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__granted(
# 51 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fa21e0ace30);
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__grantedTask__postTask(void );
# 68 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1____nesc_unnamed4425 {
#line 68
  SimpleArbiterP__1__grantedTask = 12U
};
#line 68
typedef int /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1____nesc_sillytask_grantedTask[/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__grantedTask];
#line 62
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1____nesc_unnamed4426 {
#line 62
  SimpleArbiterP__1__RES_IDLE = 0, SimpleArbiterP__1__RES_GRANTING = 1, SimpleArbiterP__1__RES_BUSY = 2
};
#line 63
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1____nesc_unnamed4427 {
#line 63
  SimpleArbiterP__1__NO_RES = 0xFF
};
uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__RES_IDLE;
uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__NO_RES;



static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__request(uint8_t id);
#line 83
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__immediateRequest(uint8_t id);
#line 96
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__release(uint8_t id);
#line 142
static inline bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__isOwner(uint8_t id);






static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__grantedTask__runTask(void );








static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__default__granted(uint8_t id);

static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__default__requested(uint8_t id);

static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__default__immediateRequested(uint8_t id);
# 58 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm1281Timer1P__CompareA__fired(void );
# 60 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplAtm1281Timer1P__Capture__captured(HplAtm1281Timer1P__Capture__size_type t);
# 58 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm1281Timer1P__CompareB__fired(void );
#line 58
static void HplAtm1281Timer1P__CompareC__fired(void );
# 70 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm1281Timer1P__Timer__overflow(void );
# 90 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline uint16_t HplAtm1281Timer1P__Timer__get(void );


static inline void HplAtm1281Timer1P__Timer__set(uint16_t t);








static inline void HplAtm1281Timer1P__Timer__setScale(uint8_t s);










static inline uint8_t HplAtm1281Timer1P__TimerCtrl__getControlB(void );
#line 126
static inline void HplAtm1281Timer1P__TimerCtrl__setControlB(uint8_t x);
#line 145
static inline uint8_t HplAtm1281Timer1P__TimerCtrl__getInterruptFlag(void );









static inline void HplAtm1281Timer1P__Capture__setEdge(bool up);



static inline void HplAtm1281Timer1P__Capture__reset(void );
static inline void HplAtm1281Timer1P__CompareA__reset(void );



static inline void HplAtm1281Timer1P__Timer__start(void );
static inline void HplAtm1281Timer1P__Capture__start(void );
static inline void HplAtm1281Timer1P__CompareA__start(void );




static inline void HplAtm1281Timer1P__Capture__stop(void );
static inline void HplAtm1281Timer1P__CompareA__stop(void );



static inline bool HplAtm1281Timer1P__Timer__test(void );
#line 214
static inline void HplAtm1281Timer1P__CompareA__set(uint16_t t);




static inline uint16_t HplAtm1281Timer1P__Capture__get(void );






void __vector_17(void ) __attribute((interrupt))   ;


static inline void HplAtm1281Timer1P__CompareB__default__fired(void );
void __vector_18(void ) __attribute((interrupt))   ;


static inline void HplAtm1281Timer1P__CompareC__default__fired(void );
void __vector_19(void ) __attribute((interrupt))   ;



void __vector_16(void ) __attribute((interrupt))   ;



void __vector_20(void ) __attribute((interrupt))   ;
# 104 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__setScale(uint8_t scale);
#line 67
static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__set(/*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__timer_size t);










static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__start(void );
# 51 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline error_t /*InitOneP.InitOne*/Atm128TimerInitC__0__Init__init(void );








static inline void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__overflow(void );
# 78 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__fired(void );
# 62 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__reset(void );
#line 54
static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__set(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__size_type t);










static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__start(void );


static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__stop(void );
# 61 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer.nc"
static /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__timer_size /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__get(void );
# 62 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__getNow(void );
#line 74
static inline void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__stop(void );



static inline void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__start(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size dt);




static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__startAt(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size t0, /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size dt);
#line 119
static inline void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__fired(void );






static inline void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__overflow(void );
# 82 "/opt/tinyos-2.1.2/tos/lib/timer/Counter.nc"
static void /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__overflow(void );
# 87 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer.nc"
static bool /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__test(void );
#line 61
static /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__get(void );
# 50 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline /*CounterOne16C.NCounter*/Atm128CounterC__0__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__get(void );




static inline bool /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__isOverflowPending(void );









static inline void /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__overflow(void );
# 64 "/opt/tinyos-2.1.2/tos/lib/timer/Counter.nc"
static /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__size_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__get(void );






static bool /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__isOverflowPending(void );










static void /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__Counter__overflow(void );
# 67 "/opt/tinyos-2.1.2/tos/lib/timer/TransformCounterC.nc"
/*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__upper_count_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__m_upper;

enum /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0____nesc_unnamed4428 {

  TransformCounterC__0__LOW_SHIFT_RIGHT = 0, 
  TransformCounterC__0__HIGH_SHIFT_LEFT = 8 * sizeof(/*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__from_size_type ) - /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__LOW_SHIFT_RIGHT, 
  TransformCounterC__0__NUM_UPPER_BITS = 8 * sizeof(/*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__to_size_type ) - 8 * sizeof(/*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__from_size_type ) + 0, 



  TransformCounterC__0__OVERFLOW_MASK = /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__NUM_UPPER_BITS ? ((/*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__upper_count_type )2 << (/*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__NUM_UPPER_BITS - 1)) - 1 : 0
};

static /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__to_size_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__Counter__get(void );
#line 133
static inline void /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__overflow(void );
# 64 "/opt/tinyos-2.1.2/tos/lib/timer/Counter.nc"
static /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__size_type /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__get(void );
# 53 "/opt/tinyos-2.1.2/tos/lib/timer/CounterToLocalTimeC.nc"
static inline uint32_t /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__LocalTime__get(void );




static inline void /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void );
# 40 "/opt/tinyos-2.1.2/tos/platforms/micaz/BusyWaitMicroC.nc"
static __inline void BusyWaitMicroC__BusyWait__wait(uint16_t dt);
# 110 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
static void /*ObjectTransferC.SendReqMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__sendDone(
#line 103
message_t * msg, 






error_t error);
# 75 "/opt/tinyos-2.1.2/tos/interfaces/Send.nc"
static error_t /*ObjectTransferC.SendReqMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__send(
#line 67
message_t * msg, 







uint8_t len);
#line 125
static 
#line 123
void * 

/*ObjectTransferC.SendReqMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__getPayload(
#line 122
message_t * msg, 


uint8_t len);
# 103 "/opt/tinyos-2.1.2/tos/interfaces/AMPacket.nc"
static void /*ObjectTransferC.SendReqMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMPacket__setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 162
static void /*ObjectTransferC.SendReqMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMPacket__setType(
#line 158
message_t * amsg, 



am_id_t t);
# 53 "/opt/tinyos-2.1.2/tos/system/AMQueueEntryP.nc"
static inline error_t /*ObjectTransferC.SendReqMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*ObjectTransferC.SendReqMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__sendDone(message_t *m, error_t err);







static inline void */*ObjectTransferC.SendReqMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__getPayload(message_t *m, uint8_t len);
# 110 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
static void /*ObjectTransferC.SendDataMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMSend__sendDone(
#line 103
message_t * msg, 






error_t error);
# 75 "/opt/tinyos-2.1.2/tos/interfaces/Send.nc"
static error_t /*ObjectTransferC.SendDataMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__2__Send__send(
#line 67
message_t * msg, 







uint8_t len);
#line 125
static 
#line 123
void * 

/*ObjectTransferC.SendDataMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__2__Send__getPayload(
#line 122
message_t * msg, 


uint8_t len);
# 103 "/opt/tinyos-2.1.2/tos/interfaces/AMPacket.nc"
static void /*ObjectTransferC.SendDataMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMPacket__setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 162
static void /*ObjectTransferC.SendDataMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMPacket__setType(
#line 158
message_t * amsg, 



am_id_t t);
# 53 "/opt/tinyos-2.1.2/tos/system/AMQueueEntryP.nc"
static inline error_t /*ObjectTransferC.SendDataMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*ObjectTransferC.SendDataMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__2__Send__sendDone(message_t *m, error_t err);







static inline void */*ObjectTransferC.SendDataMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMSend__getPayload(message_t *m, uint8_t len);
# 44 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/VolumeIdC.nc"
static inline volume_id_t /*DelugeC.BlockReaderDeluge1.VolumeIdC*/VolumeIdC__0__VolumeId__get(void );
# 95 "/opt/tinyos-2.1.2/tos/interfaces/BlockRead.nc"
static void /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockRead__computeCrcDone(
# 40 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/BlockStorageManagerP.nc"
uint8_t arg_0x7fa21d928840, 
# 95 "/opt/tinyos-2.1.2/tos/interfaces/BlockRead.nc"
storage_addr_t addr, storage_len_t len, 
uint16_t crc, error_t error);
#line 67
static void /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockRead__readDone(
# 40 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/BlockStorageManagerP.nc"
uint8_t arg_0x7fa21d928840, 
# 67 "/opt/tinyos-2.1.2/tos/interfaces/BlockRead.nc"
storage_addr_t addr, 
#line 62
void * buf, 




storage_len_t len, 
error_t error);
# 112 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
static void /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockWrite__syncDone(
# 41 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/BlockStorageManagerP.nc"
uint8_t arg_0x7fa21d927ad8, 
# 112 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
error_t error);
#line 71
static void /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockWrite__writeDone(
# 41 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/BlockStorageManagerP.nc"
uint8_t arg_0x7fa21d927ad8, 
# 71 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
storage_addr_t addr, 
#line 66
void * buf, 




storage_len_t len, 
error_t error);
#line 91
static void /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockWrite__eraseDone(
# 41 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/BlockStorageManagerP.nc"
uint8_t arg_0x7fa21d927ad8, 
# 91 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
error_t error);
# 39 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/VolumeId.nc"
static volume_id_t /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__VolumeId__get(
# 47 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/BlockStorageManagerP.nc"
uint8_t arg_0x7fa21d921180);
# 56 "/opt/tinyos-2.1.2/tos/interfaces/BlockRead.nc"
static error_t /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockRead__read(
# 45 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/BlockStorageManagerP.nc"
volume_id_t arg_0x7fa21d925b10, 
# 56 "/opt/tinyos-2.1.2/tos/interfaces/BlockRead.nc"
storage_addr_t addr, 
#line 49
void * buf, 






storage_len_t len);
#line 83
static error_t /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockRead__computeCrc(
# 45 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/BlockStorageManagerP.nc"
volume_id_t arg_0x7fa21d925b10, 
# 83 "/opt/tinyos-2.1.2/tos/interfaces/BlockRead.nc"
storage_addr_t addr, storage_len_t len, 
uint16_t crc);
# 83 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
static error_t /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockWrite__erase(
# 46 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/BlockStorageManagerP.nc"
volume_id_t arg_0x7fa21d923df0);
# 58 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
static error_t /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockWrite__write(
# 46 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/BlockStorageManagerP.nc"
volume_id_t arg_0x7fa21d923df0, 
# 58 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
storage_addr_t addr, 
#line 51
void * buf, 






storage_len_t len);
#line 103
static error_t /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockWrite__sync(
# 46 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/BlockStorageManagerP.nc"
volume_id_t arg_0x7fa21d923df0);
# 24 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbVolume.nc"
static at45page_t /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__At45dbVolume__remap(
# 51 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/BlockStorageManagerP.nc"
volume_id_t arg_0x7fa21d91c4c8, 
# 24 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbVolume.nc"
at45page_t volumePage);
# 58 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/BlockStorageManagerP.nc"
enum /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0____nesc_unnamed4429 {
  BlockStorageManagerP__0__S_READY, 
  BlockStorageManagerP__0__S_BUSY
};

uint8_t /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__state = /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__S_READY;
uint8_t /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__current_client;


static error_t /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockRead__read(uint8_t client, storage_addr_t addr, void *buf, storage_len_t len);
#line 83
static error_t /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockRead__computeCrc(uint8_t client, storage_addr_t addr, storage_len_t len, uint16_t crc);
#line 104
static inline void /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockRead__readDone(volume_id_t volume_id, storage_addr_t addr, void *buf, storage_len_t len, error_t error);





static inline void /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockRead__computeCrcDone(volume_id_t volume_id, storage_addr_t addr, storage_len_t len, uint16_t crc, error_t error);





static inline error_t /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockRead__default__read(uint8_t client, storage_addr_t addr, void *buf, storage_len_t len);
static inline error_t /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockRead__default__computeCrc(uint8_t client, storage_addr_t addr, storage_len_t len, uint16_t crc);
static void /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockRead__default__readDone(volume_id_t volume_id, storage_addr_t addr, void *buf, storage_len_t len, error_t error);
static void /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockRead__default__computeCrcDone(volume_id_t volume_id, storage_addr_t addr, storage_len_t len, uint16_t crc, error_t error);



static error_t /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockWrite__write(uint8_t client, storage_addr_t addr, void *buf, storage_len_t len);
#line 139
static error_t /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockWrite__erase(uint8_t client);
#line 155
static error_t /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockWrite__sync(uint8_t client);
#line 170
static inline void /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockWrite__writeDone(volume_id_t volume_id, storage_addr_t addr, void *buf, storage_len_t len, error_t error);





static inline void /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockWrite__eraseDone(volume_id_t volume_id, error_t error);





static inline void /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockWrite__syncDone(volume_id_t volume_id, error_t error);





static storage_addr_t /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__StorageMap__getPhysicalAddress(uint8_t volume_id, storage_addr_t addr);
#line 210
static inline error_t /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockWrite__default__write(uint8_t client, storage_addr_t addr, void *buf, storage_len_t len);
static inline error_t /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockWrite__default__erase(uint8_t client);
static inline error_t /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockWrite__default__sync(uint8_t client);
static void /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockWrite__default__writeDone(volume_id_t volume_id, storage_addr_t addr, void *buf, storage_len_t len, error_t error);
static void /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockWrite__default__eraseDone(volume_id_t volume_id, error_t error);
static void /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockWrite__default__syncDone(volume_id_t volume_id, error_t error);


static volume_id_t /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__VolumeId__default__get(uint8_t client);
# 166 "/opt/tinyos-2.1.2/tos/chips/at45db/At45db.nc"
static void BlockStorageP__At45db__read(at45page_t page, at45pageoffset_t offset, 
void * data, at45pageoffset_t n);
#line 111
static void BlockStorageP__At45db__erase(at45page_t page, uint8_t eraseKind);
#line 131
static void BlockStorageP__At45db__syncAll(void );
#line 73
static void BlockStorageP__At45db__write(at45page_t page, at45pageoffset_t offset, 
void * data, at45pageoffset_t n);
#line 187
static void BlockStorageP__At45db__computeCrc(at45page_t page, at45pageoffset_t offset, 
at45pageoffset_t n, uint16_t baseCrc);
# 112 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
static void BlockStorageP__BlockWrite__syncDone(
# 55 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7fa21d8bf1d0, 
# 112 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
error_t error);
#line 71
static void BlockStorageP__BlockWrite__writeDone(
# 55 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7fa21d8bf1d0, 
# 71 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
storage_addr_t addr, 
#line 66
void * buf, 




storage_len_t len, 
error_t error);
#line 91
static void BlockStorageP__BlockWrite__eraseDone(
# 55 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7fa21d8bf1d0, 
# 91 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
error_t error);
# 95 "/opt/tinyos-2.1.2/tos/interfaces/BlockRead.nc"
static void BlockStorageP__BlockRead__computeCrcDone(
# 56 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7fa21d8be4b8, 
# 95 "/opt/tinyos-2.1.2/tos/interfaces/BlockRead.nc"
storage_addr_t addr, storage_len_t len, 
uint16_t crc, error_t error);
#line 67
static void BlockStorageP__BlockRead__readDone(
# 56 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7fa21d8be4b8, 
# 67 "/opt/tinyos-2.1.2/tos/interfaces/BlockRead.nc"
storage_addr_t addr, 
#line 62
void * buf, 




storage_len_t len, 
error_t error);
# 30 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbBlockConfig.nc"
static int BlockStorageP__BConfig__flipped(
# 62 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7fa21d8a6020);
# 24 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbBlockConfig.nc"
static int BlockStorageP__BConfig__isConfig(
# 62 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7fa21d8a6020);
# 37 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbBlockConfig.nc"
static int BlockStorageP__BConfig__writeHook(
# 62 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7fa21d8a6020);
# 30 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbVolume.nc"
static at45page_t BlockStorageP__At45dbVolume__volumeSize(
# 60 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7fa21d8bb7e8);
# 24 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbVolume.nc"
static at45page_t BlockStorageP__At45dbVolume__remap(
# 60 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7fa21d8bb7e8, 
# 24 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbVolume.nc"
at45page_t volumePage);
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t BlockStorageP__Resource__release(
# 61 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7fa21d8a84b0);
# 88 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t BlockStorageP__Resource__request(
# 61 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
uint8_t arg_0x7fa21d8a84b0);
#line 87
enum BlockStorageP____nesc_unnamed4430 {
  BlockStorageP__R_IDLE, 
  BlockStorageP__R_WRITE, 
  BlockStorageP__R_ERASE, 
  BlockStorageP__R_SYNC, 
  BlockStorageP__R_READ, 
  BlockStorageP__R_CRC
};

enum BlockStorageP____nesc_unnamed4431 {
  BlockStorageP__N = 4U + 0U, 
  BlockStorageP__NO_CLIENT = 0xff
};

uint8_t BlockStorageP__client = BlockStorageP__NO_CLIENT;
storage_addr_t BlockStorageP__currentOffset;







#line 104
struct BlockStorageP____nesc_unnamed4432 {

  uint8_t request;
  uint8_t * buf;
  storage_addr_t addr;
  storage_len_t len;
} BlockStorageP__s[BlockStorageP__N];






static inline at45page_t BlockStorageP__pageRemap(at45page_t p);



static inline at45page_t BlockStorageP__BConfig__npages(uint8_t id);



static at45page_t BlockStorageP__BConfig__remap(uint8_t id, at45page_t page);





static inline int BlockStorageP__BConfig__default__isConfig(uint8_t blockId);



static inline int BlockStorageP__BConfig__default__flipped(uint8_t blockId);







static inline void BlockStorageP__eraseStart(void );
static inline void BlockStorageP__syncStart(void );
static inline void BlockStorageP__multipageStart(uint16_t crc);

static inline void BlockStorageP__startRequest(void );
#line 161
static void BlockStorageP__endRequest(error_t result, uint16_t crc);
#line 189
static error_t BlockStorageP__newRequest(uint8_t newState, uint8_t id, 
storage_addr_t addr, uint8_t * buf, storage_len_t len);
#line 215
static void BlockStorageP__Resource__granted(uint8_t blockId);
#line 229
static inline int BlockStorageP__BConfig__default__writeHook(uint8_t blockId);
#line 246
static void BlockStorageP__multipageContinue(uint16_t crc);
#line 280
static inline void BlockStorageP__multipageStart(uint16_t crc);




static inline void BlockStorageP__multipageOpDone(error_t result, uint16_t crc);










static inline error_t BlockStorageP__BlockWrite__erase(uint8_t id);



static inline void BlockStorageP__eraseStart(void );



static inline void BlockStorageP__eraseEraseDone(error_t error);







static inline error_t BlockStorageP__BlockWrite__write(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len);







static inline error_t BlockStorageP__BlockWrite__sync(uint8_t id);



static inline void BlockStorageP__syncStart(void );



static inline void BlockStorageP__syncSyncDone(error_t error);







static inline error_t BlockStorageP__BlockRead__read(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len);







static inline error_t BlockStorageP__BlockRead__computeCrc(uint8_t id, storage_addr_t addr, storage_len_t len, uint16_t basecrc);







static inline storage_len_t BlockStorageP__BlockRead__getSize(uint8_t blockId);
#line 367
static inline void BlockStorageP__At45db__writeDone(error_t result);




static inline void BlockStorageP__At45db__readDone(error_t result);




static inline void BlockStorageP__At45db__computeCrcDone(error_t result, uint16_t newCrc);




static inline void BlockStorageP__At45db__eraseDone(error_t result);




static inline void BlockStorageP__At45db__syncDone(error_t result);




static inline void BlockStorageP__At45db__flushDone(error_t result);
static inline void BlockStorageP__At45db__copyPageDone(error_t error);
static inline void BlockStorageP__BlockWrite__default__writeDone(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len, error_t result);
static inline void BlockStorageP__BlockWrite__default__eraseDone(uint8_t id, error_t result);
static inline void BlockStorageP__BlockWrite__default__syncDone(uint8_t id, error_t result);
static inline void BlockStorageP__BlockRead__default__readDone(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len, error_t result);
static inline void BlockStorageP__BlockRead__default__computeCrcDone(uint8_t id, storage_addr_t addr, storage_len_t len, uint16_t x, error_t result);

static inline at45page_t BlockStorageP__At45dbVolume__default__remap(uint8_t id, at45page_t volumePage);
static inline at45page_t BlockStorageP__At45dbVolume__default__volumeSize(uint8_t id);
static inline error_t BlockStorageP__Resource__default__request(uint8_t id);
static inline error_t BlockStorageP__Resource__default__release(uint8_t id);
# 55 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45db.nc"
static void At45dbP__HplAt45db__fill(uint8_t cmd, at45page_t page);
#line 41
static void At45dbP__HplAt45db__waitCompare(void );
#line 100
static void At45dbP__HplAt45db__erase(uint8_t cmd, at45page_t page);
#line 30
static void At45dbP__HplAt45db__waitIdle(void );
#line 73
static void At45dbP__HplAt45db__flush(uint8_t cmd, at45page_t page);
#line 178
static void At45dbP__HplAt45db__write(uint8_t cmd, at45page_t page, at45pageoffset_t offset, 
uint8_t * data, at45pageoffset_t n);
#line 87
static void At45dbP__HplAt45db__compare(uint8_t cmd, at45page_t page);
#line 157
static void At45dbP__HplAt45db__crc(uint8_t cmd, at45page_t page, at45pageoffset_t offset, 
at45pageoffset_t n, uint16_t baseCrc);
#line 119
static void At45dbP__HplAt45db__readBuffer(uint8_t cmd, at45pageoffset_t offset, 
uint8_t * data, uint16_t n);
# 96 "/opt/tinyos-2.1.2/tos/chips/at45db/At45db.nc"
static void At45dbP__At45db__copyPageDone(error_t error);
#line 136
static void At45dbP__At45db__syncDone(error_t error);
#line 154
static void At45dbP__At45db__flushDone(error_t error);
#line 80
static void At45dbP__At45db__writeDone(error_t error);
#line 116
static void At45dbP__At45db__eraseDone(error_t error);
#line 194
static void At45dbP__At45db__computeCrcDone(error_t error, uint16_t crc);
#line 173
static void At45dbP__At45db__readDone(error_t error);
# 66 "/opt/tinyos-2.1.2/tos/lib/timer/BusyWait.nc"
static void At45dbP__BusyWait__wait(At45dbP__BusyWait__size_type dt);
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static error_t At45dbP__taskSuccess__postTask(void );
#line 67
static error_t At45dbP__taskFail__postTask(void );
# 145 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbP.nc"
enum At45dbP____nesc_unnamed4433 {
#line 145
  At45dbP__taskSuccess = 13U
};
#line 145
typedef int At45dbP____nesc_sillytask_taskSuccess[At45dbP__taskSuccess];


enum At45dbP____nesc_unnamed4434 {
#line 148
  At45dbP__taskFail = 14U
};
#line 148
typedef int At45dbP____nesc_sillytask_taskFail[At45dbP__taskFail];
#line 80
enum At45dbP____nesc_unnamed4435 {
  At45dbP__IDLE, 
  At45dbP__R_READ, 
  At45dbP__R_READCRC, 
  At45dbP__R_WRITE, 
  At45dbP__R_ERASE, 
  At45dbP__R_COPY, 
  At45dbP__R_SYNC, 
  At45dbP__R_SYNCALL, 
  At45dbP__R_FLUSH, 
  At45dbP__R_FLUSHALL, 
  At45dbP__BROKEN
};
uint8_t At45dbP__request;
at45pageoffset_t At45dbP__reqOffset;
#line 94
at45pageoffset_t At45dbP__reqBytes;
uint8_t * At45dbP__reqBuf;
at45page_t At45dbP__reqPage;

enum At45dbP____nesc_unnamed4436 {
  At45dbP__P_READ, 
  At45dbP__P_READCRC, 
  At45dbP__P_WRITE, 
  At45dbP__P_FLUSH, 
  At45dbP__P_FILL, 
  At45dbP__P_ERASE, 
  At45dbP__P_COMPARE, 
  At45dbP__P_COMPARE_CHECK
};







#line 109
struct At45dbP____nesc_unnamed4437 {
  at45page_t page;
  bool busy : 1;
  bool clean : 1;
  bool erased : 1;
  uint8_t unchecked : 2;
} At45dbP__buffer[2];
uint8_t At45dbP__selected;
uint8_t At45dbP__checking;
bool At45dbP__flashBusy;





static inline error_t At45dbP__Init__init(void );
#line 138
static void At45dbP__flashIdle(void );



static void At45dbP__requestDone(error_t result, uint16_t computedCrc, uint8_t newState);
static void At45dbP__handleRWRequest(void );

static inline void At45dbP__taskSuccess__runTask(void );


static inline void At45dbP__taskFail__runTask(void );



static void At45dbP__checkBuffer(uint8_t buf);









static void At45dbP__flushBuffer(void );
#line 174
static inline void At45dbP__HplAt45db__waitIdleDone(void );
#line 186
static inline void At45dbP__HplAt45db__waitCompareDone(bool ok);
#line 201
static inline void At45dbP__HplAt45db__readDone(void );



static inline void At45dbP__HplAt45db__writeDone(void );





static inline void At45dbP__HplAt45db__crcDone(uint16_t crc);



static inline void At45dbP__HplAt45db__flushDone(void );







static inline void At45dbP__HplAt45db__compareDone(void );










static inline void At45dbP__HplAt45db__fillDone(void );







static inline void At45dbP__HplAt45db__eraseDone(void );










static void At45dbP__syncOrFlushAll(uint8_t newReq);

static void At45dbP__handleRWRequest(void );
#line 361
static void At45dbP__requestDone(error_t result, uint16_t computedCrc, uint8_t newState);
#line 377
static void At45dbP__newRequest(uint8_t req, at45page_t page, at45pageoffset_t offset, 
void * reqdata, at45pageoffset_t n);
#line 407
static inline void At45dbP__At45db__read(at45page_t page, at45pageoffset_t offset, 
void *reqdata, at45pageoffset_t n);



static inline void At45dbP__At45db__computeCrc(at45page_t page, 
at45pageoffset_t offset, 
at45pageoffset_t n, 
uint16_t baseCrc);




static inline void At45dbP__At45db__write(at45page_t page, at45pageoffset_t offset, 
void *reqdata, at45pageoffset_t n);




static inline void At45dbP__At45db__erase(at45page_t page, uint8_t eraseKind);
#line 460
static void At45dbP__syncOrFlushAll(uint8_t newReq);
#line 477
static inline void At45dbP__At45db__syncAll(void );
# 141 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45db.nc"
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__readDone(void );
#line 163
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__crcDone(uint16_t computedCrc);
#line 79
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__flushDone(void );
#line 185
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__writeDone(void );
#line 35
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__waitIdleDone(void );
#line 47
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__waitCompareDone(bool compareOk);
#line 106
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__eraseDone(void );
#line 93
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__compareDone(void );
#line 61
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__fillDone(void );
# 42 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45dbByte.nc"
static bool /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45dbByte__getCompareStatus(void );
#line 31
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45dbByte__waitIdle(void );
#line 47
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45dbByte__select(void );




static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45dbByte__deselect(void );
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__Resource__release(void );
#line 88
static error_t /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__Resource__request(void );
# 45 "/opt/tinyos-2.1.2/tos/interfaces/SpiByte.nc"
static uint8_t /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__FlashSpi__write(uint8_t tx);
# 35 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45dbByteC.nc"
enum /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0____nesc_unnamed4438 {
  HplAt45dbByteC__0__P_IDLE, 
  HplAt45dbByteC__0__P_SEND_CMD, 
  HplAt45dbByteC__0__P_READ, 
  HplAt45dbByteC__0__P_READ_CRC, 
  HplAt45dbByteC__0__P_WRITE, 
  HplAt45dbByteC__0__P_WAIT_IDLE, 
  HplAt45dbByteC__0__P_WAIT_COMPARE, 
  HplAt45dbByteC__0__P_WAIT_COMPARE_OK, 
  HplAt45dbByteC__0__P_FILL, 
  HplAt45dbByteC__0__P_FLUSH, 
  HplAt45dbByteC__0__P_COMPARE, 
  HplAt45dbByteC__0__P_ERASE
};
uint8_t /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__status = /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_IDLE;
uint8_t /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__flashCmd[9];
at45pageoffset_t /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__dataCount;
uint8_t * /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__data;
uint8_t /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__dontCare;

static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__complete(uint16_t crc);
#line 86
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__requestFlashStatus(void );





static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__doCommand(void );
#line 161
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__Resource__granted(void );
#line 173
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__execCommand(uint8_t op, uint8_t reqCmd, uint8_t reqDontCare, 
at45page_t reqPage, at45pageoffset_t reqOffset, 
uint8_t * reqData, at45pageoffset_t reqCount);
#line 191
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__waitIdle(void );




static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__waitCompare(void );




static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45dbByte__idle(void );
#line 217
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__fill(uint8_t cmd, at45page_t page);



static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__flush(uint8_t cmd, at45page_t page);



static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__compare(uint8_t cmd, at45page_t page);



static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__erase(uint8_t cmd, at45page_t page);









static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__readBuffer(uint8_t cmd, at45pageoffset_t offset, 
uint8_t *pdata, at45pageoffset_t count);



static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__crc(uint8_t cmd, 
at45page_t page, at45pageoffset_t offset, 
at45pageoffset_t count, 
uint16_t baseCrc);



static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__write(uint8_t cmd, 
at45page_t page, at45pageoffset_t offset, 
uint8_t *pdata, at45pageoffset_t count);
# 44 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
static void HplAt45dbIOP__In__makeInput(void );
#line 43
static bool HplAt45dbIOP__In__get(void );
#line 41
static void HplAt45dbIOP__In__clr(void );
# 66 "/opt/tinyos-2.1.2/tos/lib/timer/BusyWait.nc"
static void HplAt45dbIOP__BusyWait__wait(HplAt45dbIOP__BusyWait__size_type dt);
# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
static void HplAt45dbIOP__Out__makeOutput(void );
#line 40
static void HplAt45dbIOP__Out__set(void );





static void HplAt45dbIOP__Select__makeOutput(void );
#line 40
static void HplAt45dbIOP__Select__set(void );
static void HplAt45dbIOP__Select__clr(void );
# 35 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45dbByte.nc"
static void HplAt45dbIOP__HplAt45dbByte__idle(void );
# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
static void HplAt45dbIOP__Clk__makeOutput(void );
#line 40
static void HplAt45dbIOP__Clk__set(void );
static void HplAt45dbIOP__Clk__clr(void );
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static error_t HplAt45dbIOP__avail__postTask(void );
# 163 "/opt/tinyos-2.1.2/tos/platforms/iris/chips/at45db/HplAt45dbIOP.nc"
enum HplAt45dbIOP____nesc_unnamed4439 {
#line 163
  HplAt45dbIOP__avail = 15U
};
#line 163
typedef int HplAt45dbIOP____nesc_sillytask_avail[HplAt45dbIOP__avail];
#line 108
static inline error_t HplAt45dbIOP__Init__init(void );
#line 120
static inline void HplAt45dbIOP__HplAt45dbByte__select(void );




static inline void HplAt45dbIOP__HplAt45dbByte__deselect(void );
#line 142
static uint8_t HplAt45dbIOP__FlashSpi__write(uint8_t spiOut);
#line 163
static inline void HplAt45dbIOP__avail__runTask(void );



static inline void HplAt45dbIOP__HplAt45dbByte__waitIdle(void );
#line 183
static inline bool HplAt45dbIOP__HplAt45dbByte__getCompareStatus(void );
# 65 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
static void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__ResourceConfigure__unconfigure(void );
#line 59
static void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__ResourceConfigure__configure(void );
# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__Resource__granted(void );
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static error_t /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__granted__postTask(void );
# 25 "/opt/tinyos-2.1.2/tos/system/NoArbiterC.nc"
enum /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0____nesc_unnamed4440 {
#line 25
  NoArbiterC__0__granted = 16U
};
#line 25
typedef int /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0____nesc_sillytask_granted[/*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__granted];
#line 25
static inline void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__granted__runTask(void );




static inline error_t /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__Resource__request(void );









static inline error_t /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__Resource__release(void );








static inline void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__ResourceConfigure__default__configure(void );
static inline void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__ResourceConfigure__default__unconfigure(void );
# 49 "/opt/tinyos-2.1.2/tos/system/FcfsResourceQueueC.nc"
enum /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2____nesc_unnamed4441 {
#line 49
  FcfsResourceQueueC__2__NO_ENTRY = 0xFF
};
uint8_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__resQ[4U];
uint8_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__qHead = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__NO_ENTRY;
uint8_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__qTail = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__NO_ENTRY;

static inline error_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__Init__init(void );




static inline bool /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__isEmpty(void );



static inline bool /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__dequeue(void );
#line 82
static inline error_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__enqueue(resource_client_id_t id);
# 53 "/opt/tinyos-2.1.2/tos/interfaces/ResourceRequested.nc"
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__requested(
# 55 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x7fa21d6c67e8);
# 65 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(
# 60 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x7fa21d6c39b8);
# 59 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__configure(
# 60 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x7fa21d6c39b8);
# 79 "/opt/tinyos-2.1.2/tos/interfaces/ResourceQueue.nc"
static error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Queue__enqueue(resource_client_id_t id);
#line 53
static bool /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Queue__dequeue(void );
# 73 "/opt/tinyos-2.1.2/tos/interfaces/ResourceDefaultOwner.nc"
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested(void );
#line 46
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted(void );
# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__granted(
# 54 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
uint8_t arg_0x7fa21d6c7640);
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__grantedTask__postTask(void );
# 75 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
enum /*At45dbC.Arbiter.Arbiter*/ArbiterP__0____nesc_unnamed4442 {
#line 75
  ArbiterP__0__grantedTask = 17U
};
#line 75
typedef int /*At45dbC.Arbiter.Arbiter*/ArbiterP__0____nesc_sillytask_grantedTask[/*At45dbC.Arbiter.Arbiter*/ArbiterP__0__grantedTask];
#line 67
enum /*At45dbC.Arbiter.Arbiter*/ArbiterP__0____nesc_unnamed4443 {
#line 67
  ArbiterP__0__RES_CONTROLLED, ArbiterP__0__RES_GRANTING, ArbiterP__0__RES_IMM_GRANTING, ArbiterP__0__RES_BUSY
};
#line 68
enum /*At45dbC.Arbiter.Arbiter*/ArbiterP__0____nesc_unnamed4444 {
#line 68
  ArbiterP__0__default_owner_id = 4U
};
#line 69
enum /*At45dbC.Arbiter.Arbiter*/ArbiterP__0____nesc_unnamed4445 {
#line 69
  ArbiterP__0__NO_RES = 0xFF
};
uint8_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__state = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__RES_CONTROLLED;
uint8_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__resId = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__default_owner_id;
uint8_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__reqResId;



static error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__request(uint8_t id);
#line 111
static error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__release(uint8_t id);
#line 133
static inline error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void );
#line 190
static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__grantedTask__runTask(void );
#line 202
static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__default__granted(uint8_t id);

static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(uint8_t id);



static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__granted(void );

static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__requested(void );





static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(uint8_t id);

static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id);
# 21 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbStorageManagerC.nc"
static at45page_t At45dbStorageManagerC__At45dbVolume__remap(volume_id_t volid, at45page_t volumePage);








static at45page_t At45dbStorageManagerC__At45dbVolume__volumeSize(volume_id_t volid);
# 49 "/opt/tinyos-2.1.2/tos/system/FcfsResourceQueueC.nc"
enum /*BlockStorageLockC.Arbiter.Queue*/FcfsResourceQueueC__3____nesc_unnamed4446 {
#line 49
  FcfsResourceQueueC__3__NO_ENTRY = 0xFF
};
uint8_t /*BlockStorageLockC.Arbiter.Queue*/FcfsResourceQueueC__3__resQ[18U];
uint8_t /*BlockStorageLockC.Arbiter.Queue*/FcfsResourceQueueC__3__qHead = /*BlockStorageLockC.Arbiter.Queue*/FcfsResourceQueueC__3__NO_ENTRY;
uint8_t /*BlockStorageLockC.Arbiter.Queue*/FcfsResourceQueueC__3__qTail = /*BlockStorageLockC.Arbiter.Queue*/FcfsResourceQueueC__3__NO_ENTRY;

static inline error_t /*BlockStorageLockC.Arbiter.Queue*/FcfsResourceQueueC__3__Init__init(void );




static inline bool /*BlockStorageLockC.Arbiter.Queue*/FcfsResourceQueueC__3__FcfsQueue__isEmpty(void );



static inline bool /*BlockStorageLockC.Arbiter.Queue*/FcfsResourceQueueC__3__FcfsQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*BlockStorageLockC.Arbiter.Queue*/FcfsResourceQueueC__3__FcfsQueue__dequeue(void );
#line 82
static inline error_t /*BlockStorageLockC.Arbiter.Queue*/FcfsResourceQueueC__3__FcfsQueue__enqueue(resource_client_id_t id);
# 53 "/opt/tinyos-2.1.2/tos/interfaces/ResourceRequested.nc"
static void /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__ResourceRequested__requested(
# 52 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fa21e0aa020);
# 65 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
static void /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__ResourceConfigure__unconfigure(
# 56 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fa21e0a8538);
# 59 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
static void /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__ResourceConfigure__configure(
# 56 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fa21e0a8538);
# 79 "/opt/tinyos-2.1.2/tos/interfaces/ResourceQueue.nc"
static error_t /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__Queue__enqueue(resource_client_id_t id);
#line 53
static bool /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__Queue__dequeue(void );
# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static void /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__Resource__granted(
# 51 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7fa21e0ace30);
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static error_t /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__grantedTask__postTask(void );
# 68 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
enum /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2____nesc_unnamed4447 {
#line 68
  SimpleArbiterP__2__grantedTask = 18U
};
#line 68
typedef int /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2____nesc_sillytask_grantedTask[/*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__grantedTask];
#line 62
enum /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2____nesc_unnamed4448 {
#line 62
  SimpleArbiterP__2__RES_IDLE = 0, SimpleArbiterP__2__RES_GRANTING = 1, SimpleArbiterP__2__RES_BUSY = 2
};
#line 63
enum /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2____nesc_unnamed4449 {
#line 63
  SimpleArbiterP__2__NO_RES = 0xFF
};
uint8_t /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__state = /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__RES_IDLE;
uint8_t /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__resId = /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__NO_RES;



static error_t /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__Resource__request(uint8_t id);
#line 96
static error_t /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__Resource__release(uint8_t id);
#line 142
static inline bool /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__Resource__isOwner(uint8_t id);






static inline void /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__grantedTask__runTask(void );








static inline void /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__Resource__default__granted(uint8_t id);

static inline void /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__ResourceRequested__default__requested(uint8_t id);



static inline void /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__ResourceConfigure__default__configure(uint8_t id);

static inline void /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__ResourceConfigure__default__unconfigure(uint8_t id);
# 44 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/VolumeIdC.nc"
static inline volume_id_t /*DelugeC.BlockReaderDeluge2.VolumeIdC*/VolumeIdC__1__VolumeId__get(void );
#line 44
static inline volume_id_t /*DelugeC.BlockReaderDeluge3.VolumeIdC*/VolumeIdC__2__VolumeId__get(void );
#line 44
static inline volume_id_t /*DelugeC.BlockWriterDeluge1.VolumeIdC*/VolumeIdC__3__VolumeId__get(void );
#line 44
static inline volume_id_t /*DelugeC.BlockWriterDeluge2.VolumeIdC*/VolumeIdC__4__VolumeId__get(void );
#line 44
static inline volume_id_t /*DelugeC.BlockWriterDeluge3.VolumeIdC*/VolumeIdC__5__VolumeId__get(void );
# 45 "/opt/tinyos-2.1.2/tos/lib/net/drip/DisseminationCache.nc"
static error_t /*DelugeC.DisseminatorC.DisseminatorP*/DisseminatorP__0__DisseminationCache__start(void );
# 69 "/opt/tinyos-2.1.2/tos/lib/net/DisseminationValue.nc"
static void /*DelugeC.DisseminatorC.DisseminatorP*/DisseminatorP__0__DisseminationValue__changed(void );
# 62 "/opt/tinyos-2.1.2/tos/lib/net/drip/DisseminatorP.nc"
enum /*DelugeC.DisseminatorC.DisseminatorP*/DisseminatorP__0____nesc_unnamed4450 {
#line 62
  DisseminatorP__0__changedTask = 19U
};
#line 62
typedef int /*DelugeC.DisseminatorC.DisseminatorP*/DisseminatorP__0____nesc_sillytask_changedTask[/*DelugeC.DisseminatorC.DisseminatorP*/DisseminatorP__0__changedTask];
#line 55
/*DelugeC.DisseminatorC.DisseminatorP*/DisseminatorP__0__t /*DelugeC.DisseminatorC.DisseminatorP*/DisseminatorP__0__valueCache;
bool /*DelugeC.DisseminatorC.DisseminatorP*/DisseminatorP__0__m_running;



uint32_t /*DelugeC.DisseminatorC.DisseminatorP*/DisseminatorP__0__seqno = DISSEMINATION_SEQNO_UNKNOWN;

static inline void /*DelugeC.DisseminatorC.DisseminatorP*/DisseminatorP__0__changedTask__runTask(void );



static inline error_t /*DelugeC.DisseminatorC.DisseminatorP*/DisseminatorP__0__StdControl__start(void );
#line 78
static inline const /*DelugeC.DisseminatorC.DisseminatorP*/DisseminatorP__0__t */*DelugeC.DisseminatorC.DisseminatorP*/DisseminatorP__0__DisseminationValue__get(void );
#line 101
static inline void */*DelugeC.DisseminatorC.DisseminatorP*/DisseminatorP__0__DisseminationCache__requestData(uint8_t *size);




static void /*DelugeC.DisseminatorC.DisseminatorP*/DisseminatorP__0__DisseminationCache__storeData(void *data, uint8_t size, 
uint32_t newSeqno);









static inline uint32_t /*DelugeC.DisseminatorC.DisseminatorP*/DisseminatorP__0__DisseminationCache__requestSeqno(void );
# 80 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
static error_t DisseminationEngineImplP__AMSend__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 135
static 
#line 133
void * 

DisseminationEngineImplP__AMSend__getPayload(
#line 132
message_t * msg, 


uint8_t len);
#line 123
static uint8_t DisseminationEngineImplP__AMSend__maxPayloadLength(void );
# 85 "/opt/tinyos-2.1.2/tos/lib/net/TrickleTimer.nc"
static void DisseminationEngineImplP__TrickleTimer__incrementCounter(
# 50 "/opt/tinyos-2.1.2/tos/lib/net/drip/DisseminationEngineImplP.nc"
uint16_t arg_0x7fa21d5d17d0);
# 80 "/opt/tinyos-2.1.2/tos/lib/net/TrickleTimer.nc"
static void DisseminationEngineImplP__TrickleTimer__reset(
# 50 "/opt/tinyos-2.1.2/tos/lib/net/drip/DisseminationEngineImplP.nc"
uint16_t arg_0x7fa21d5d17d0);
# 68 "/opt/tinyos-2.1.2/tos/lib/net/TrickleTimer.nc"
static error_t DisseminationEngineImplP__TrickleTimer__start(
# 50 "/opt/tinyos-2.1.2/tos/lib/net/drip/DisseminationEngineImplP.nc"
uint16_t arg_0x7fa21d5d17d0);
# 48 "/opt/tinyos-2.1.2/tos/lib/net/drip/DisseminationCache.nc"
static void DisseminationEngineImplP__DisseminationCache__storeData(
# 49 "/opt/tinyos-2.1.2/tos/lib/net/drip/DisseminationEngineImplP.nc"
uint16_t arg_0x7fa21d5d2420, 
# 48 "/opt/tinyos-2.1.2/tos/lib/net/drip/DisseminationCache.nc"
void * data, uint8_t size, uint32_t seqno);
static uint32_t DisseminationEngineImplP__DisseminationCache__requestSeqno(
# 49 "/opt/tinyos-2.1.2/tos/lib/net/drip/DisseminationEngineImplP.nc"
uint16_t arg_0x7fa21d5d2420);
# 47 "/opt/tinyos-2.1.2/tos/lib/net/drip/DisseminationCache.nc"
static void *DisseminationEngineImplP__DisseminationCache__requestData(
# 49 "/opt/tinyos-2.1.2/tos/lib/net/drip/DisseminationEngineImplP.nc"
uint16_t arg_0x7fa21d5d2420, 
# 47 "/opt/tinyos-2.1.2/tos/lib/net/drip/DisseminationCache.nc"
uint8_t *size);
# 95 "/opt/tinyos-2.1.2/tos/interfaces/StdControl.nc"
static error_t DisseminationEngineImplP__DisseminatorControl__start(
# 51 "/opt/tinyos-2.1.2/tos/lib/net/drip/DisseminationEngineImplP.nc"
uint16_t arg_0x7fa21d5d0a38);
#line 64
enum DisseminationEngineImplP____nesc_unnamed4451 {
#line 64
  DisseminationEngineImplP__NUM_DISSEMINATORS = 1U
};
message_t DisseminationEngineImplP__m_buf;
bool DisseminationEngineImplP__m_running;
bool DisseminationEngineImplP__m_bufBusy;


static void DisseminationEngineImplP__sendObject(uint16_t key);

static inline error_t DisseminationEngineImplP__StdControl__start(void );
#line 91
static inline error_t DisseminationEngineImplP__DisseminationCache__start(uint16_t key);
#line 113
static inline void DisseminationEngineImplP__TrickleTimer__fired(uint16_t key);
#line 131
static void DisseminationEngineImplP__sendObject(uint16_t key);
#line 162
static inline void DisseminationEngineImplP__ProbeAMSend__sendDone(message_t *msg, error_t error);



static inline void DisseminationEngineImplP__AMSend__sendDone(message_t *msg, error_t error);



static inline message_t *DisseminationEngineImplP__Receive__receive(message_t *msg, 
void *payload, 
uint8_t len);
#line 226
static inline message_t *DisseminationEngineImplP__ProbeReceive__receive(message_t *msg, 
void *payload, 
uint8_t len);
#line 243
static inline void *
DisseminationEngineImplP__DisseminationCache__default__requestData(uint16_t key, uint8_t *size);


static inline 
#line 246
void 
DisseminationEngineImplP__DisseminationCache__default__storeData(uint16_t key, void *data, 
uint8_t size, 
uint32_t seqno);


static inline 
#line 251
uint32_t 
DisseminationEngineImplP__DisseminationCache__default__requestSeqno(uint16_t key);

static inline error_t DisseminationEngineImplP__TrickleTimer__default__start(uint16_t key);



static inline void DisseminationEngineImplP__TrickleTimer__default__reset(uint16_t key);

static inline void DisseminationEngineImplP__TrickleTimer__default__incrementCounter(uint16_t key);

static inline error_t DisseminationEngineImplP__DisseminatorControl__default__start(uint16_t id);
# 110 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
static void /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__3__AMSend__sendDone(
#line 103
message_t * msg, 






error_t error);
# 75 "/opt/tinyos-2.1.2/tos/interfaces/Send.nc"
static error_t /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__3__Send__send(
#line 67
message_t * msg, 







uint8_t len);
#line 125
static 
#line 123
void * 

/*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__3__Send__getPayload(
#line 122
message_t * msg, 


uint8_t len);
#line 112
static uint8_t /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__3__Send__maxPayloadLength(void );
# 103 "/opt/tinyos-2.1.2/tos/interfaces/AMPacket.nc"
static void /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__3__AMPacket__setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 162
static void /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__3__AMPacket__setType(
#line 158
message_t * amsg, 



am_id_t t);
# 53 "/opt/tinyos-2.1.2/tos/system/AMQueueEntryP.nc"
static inline error_t /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__3__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__3__Send__sendDone(message_t *m, error_t err);



static inline uint8_t /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__3__AMSend__maxPayloadLength(void );



static inline void */*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__3__AMSend__getPayload(message_t *m, uint8_t len);
# 110 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
static void /*DisseminationEngineP.DisseminationProbeSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__4__AMSend__sendDone(
#line 103
message_t * msg, 






error_t error);
# 65 "/opt/tinyos-2.1.2/tos/system/AMQueueEntryP.nc"
static inline void /*DisseminationEngineP.DisseminationProbeSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__4__Send__sendDone(message_t *m, error_t err);
# 45 "/opt/tinyos-2.1.2/tos/interfaces/BitVector.nc"
static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Pending__clearAll(void );
#line 69
static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Pending__clear(uint16_t bitnum);
#line 57
static bool /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Pending__get(uint16_t bitnum);





static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Pending__set(uint16_t bitnum);
#line 45
static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Changed__clearAll(void );
#line 69
static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Changed__clear(uint16_t bitnum);
#line 57
static bool /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Changed__get(uint16_t bitnum);





static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Changed__set(uint16_t bitnum);
# 52 "/opt/tinyos-2.1.2/tos/interfaces/Random.nc"
static uint16_t /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Random__rand16(void );
# 90 "/opt/tinyos-2.1.2/tos/lib/net/TrickleTimer.nc"
static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__TrickleTimer__fired(
# 58 "/opt/tinyos-2.1.2/tos/lib/net/TrickleTimerImplP.nc"
uint8_t arg_0x7fa21d548980);
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static error_t /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__timerTask__postTask(void );
# 136 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
static uint32_t /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Timer__getNow(void );
#line 151
static uint32_t /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Timer__getdt(void );
#line 144
static uint32_t /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Timer__gett0(void );
#line 73
static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Timer__startOneShot(uint32_t dt);




static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Timer__stop(void );
# 154 "/opt/tinyos-2.1.2/tos/lib/net/TrickleTimerImplP.nc"
enum /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0____nesc_unnamed4452 {
#line 154
  TrickleTimerImplP__0__timerTask = 20U
};
#line 154
typedef int /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0____nesc_sillytask_timerTask[/*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__timerTask];
#line 75
#line 70
typedef struct /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0____nesc_unnamed4453 {
  uint16_t period;
  uint32_t time;
  uint32_t remainder;
  uint8_t count;
} /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickle_t;

/*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickle_t /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[1U];

static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__adjustTimer(void );
static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__generateTime(uint8_t id);

static inline error_t /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Init__init(void );
#line 100
static inline error_t /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__TrickleTimer__start(uint8_t id);
#line 130
static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__TrickleTimer__reset(uint8_t id);
#line 150
static inline void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__TrickleTimer__incrementCounter(uint8_t id);



static inline void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__timerTask__runTask(void );
#line 176
static inline void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Timer__fired(void );
#line 209
static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__adjustTimer(void );
#line 268
static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__generateTime(uint8_t id);
#line 292
static inline void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__TrickleTimer__default__fired(uint8_t id);
# 51 "/opt/tinyos-2.1.2/tos/system/BitVectorC.nc"
typedef uint8_t /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__int_type;

enum /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0____nesc_unnamed4454 {

  BitVectorC__0__ELEMENT_SIZE = 8 * sizeof(/*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__int_type ), 
  BitVectorC__0__ARRAY_SIZE = (1U + /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__ELEMENT_SIZE - 1) / /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__ELEMENT_SIZE
};

/*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__int_type /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__m_bits[/*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__ARRAY_SIZE];

static inline uint16_t /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__getIndex(uint16_t bitnum);




static inline uint16_t /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__getMask(uint16_t bitnum);










static inline void /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__BitVector__clearAll(void );









static inline bool /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__BitVector__get(uint16_t bitnum);




static inline void /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__BitVector__set(uint16_t bitnum);




static inline void /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__BitVector__clear(uint16_t bitnum);
#line 51
typedef uint8_t /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__int_type;

enum /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1____nesc_unnamed4455 {

  BitVectorC__1__ELEMENT_SIZE = 8 * sizeof(/*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__int_type ), 
  BitVectorC__1__ARRAY_SIZE = (1U + /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__ELEMENT_SIZE - 1) / /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__ELEMENT_SIZE
};

/*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__int_type /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__m_bits[/*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__ARRAY_SIZE];

static inline uint16_t /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__getIndex(uint16_t bitnum);




static inline uint16_t /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__getMask(uint16_t bitnum);










static inline void /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__BitVector__clearAll(void );









static inline bool /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__BitVector__get(uint16_t bitnum);




static void /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__BitVector__set(uint16_t bitnum);




static inline void /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__BitVector__clear(uint16_t bitnum);
# 50 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/extra/avr/InternalFlashC.nc"
static inline error_t InternalFlashC__InternalFlash__write(void *addr, void *buf, uint16_t size);
#line 64
static error_t InternalFlashC__InternalFlash__read(void *addr, void *buf, uint16_t size);
# 56 "/opt/tinyos-2.1.2/tos/interfaces/InternalFlash.nc"
static error_t NetProgM__IFlash__read(void *addr, 
#line 50
void * buf, 





uint16_t size);
#line 68
static error_t NetProgM__IFlash__write(void *addr, 
#line 63
void * buf, 




uint16_t size);
# 54 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/extra/iris/NetProgM.nc"
static void NetProgM__initAmAddress(am_group_t myGroup, am_addr_t myAddr);





static inline error_t NetProgM__Init__init(void );
#line 91
static error_t NetProgM__NetProg__programImageAndReboot(uint32_t imgAddr);
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static error_t DelugeP__taskRequest__postTask(void );
# 64 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/extra/NetProg.nc"
static error_t DelugeP__NetProg__programImageAndReboot(uint32_t imageAddr);
# 104 "/opt/tinyos-2.1.2/tos/interfaces/SplitControl.nc"
static error_t DelugeP__RadioSplitControl__start(void );
# 95 "/opt/tinyos-2.1.2/tos/interfaces/StdControl.nc"
static error_t DelugeP__DisseminationStdControl__start(void );
# 47 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/StorageMap.nc"
static storage_addr_t DelugeP__StorageMap__getPhysicalAddress(
# 47 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeP.nc"
uint8_t arg_0x7fa21d4667e0, 
# 47 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/StorageMap.nc"
storage_addr_t addr);
# 12 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeMetadata.nc"
static error_t DelugeP__DelugeMetadata__read(uint8_t imgNum);
# 134 "/opt/tinyos-2.1.2/tos/interfaces/Leds.nc"
static void DelugeP__Leds__set(uint8_t val);
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t DelugeP__Resource__release(void );
#line 88
static error_t DelugeP__Resource__request(void );
#line 128
static bool DelugeP__Resource__isOwner(void );
# 55 "/opt/tinyos-2.1.2/tos/lib/net/DisseminationValue.nc"
static const DelugeP__DisseminationValue__t *DelugeP__DisseminationValue__get(void );
# 39 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeVolumeManager.nc"
static error_t DelugeP__DelugeVolumeManager__erase(uint8_t imgNum);
# 42 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/ObjectTransfer.nc"
static error_t DelugeP__ObjectTransfer__receive(object_id_t new_objid, object_size_t new_size, uint8_t img_num);
#line 41
static error_t DelugeP__ObjectTransfer__publish(object_id_t new_objid, object_size_t new_size, uint8_t img_num);



static error_t DelugeP__ObjectTransfer__stop(void );
# 97 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeP.nc"
enum DelugeP____nesc_unnamed4456 {
#line 97
  DelugeP__taskRequest = 21U
};
#line 97
typedef int DelugeP____nesc_sillytask_taskRequest[DelugeP__taskRequest];
#line 60
enum DelugeP____nesc_unnamed4457 {
  DelugeP__S_IDLE, 
  DelugeP__S_PUB, 
  DelugeP__S_RECV
};

DelugeCmd DelugeP__lastCmd;
uint8_t DelugeP__state = DelugeP__S_IDLE;

static inline void DelugeP__storageReady(void );




static inline void DelugeP__Boot__booted(void );




static inline void DelugeP__RadioSplitControl__startDone(error_t error);






static void DelugeP__stop(void );










static inline void DelugeP__taskRequest__runTask(void );




static void DelugeP__request(void );








static void DelugeP__DisseminationValue__changed(void );
#line 144
static inline void DelugeP__ObjectTransfer__receiveDone(error_t error);
#line 164
static inline void DelugeP__DelugeMetadata__readDone(uint8_t imgNum, DelugeIdent *ident, error_t error);
#line 181
static void DelugeP__Resource__granted(void );
#line 194
static inline void DelugeP__DelugeVolumeManager__eraseDone(uint8_t imgNum);
static inline void DelugeP__RadioSplitControl__stopDone(error_t error);
# 47 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeMetadataP.nc"
static void DelugeMetadataP__storageReady(void );
# 56 "/opt/tinyos-2.1.2/tos/interfaces/BlockRead.nc"
static error_t DelugeMetadataP__BlockRead__read(
# 44 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeMetadataP.nc"
uint8_t arg_0x7fa21d424b00, 
# 56 "/opt/tinyos-2.1.2/tos/interfaces/BlockRead.nc"
storage_addr_t addr, 
#line 49
void * buf, 






storage_len_t len);
#line 83
static error_t DelugeMetadataP__BlockRead__computeCrc(
# 44 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeMetadataP.nc"
uint8_t arg_0x7fa21d424b00, 
# 83 "/opt/tinyos-2.1.2/tos/interfaces/BlockRead.nc"
storage_addr_t addr, storage_len_t len, 
uint16_t crc);
# 83 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
static error_t DelugeMetadataP__BlockWrite__erase(
# 45 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeMetadataP.nc"
uint8_t arg_0x7fa21d423c78);
# 13 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeMetadata.nc"
static void DelugeMetadataP__DelugeMetadata__readDone(
# 41 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeMetadataP.nc"
uint8_t arg_0x7fa21d425800, 
# 13 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeMetadata.nc"
uint8_t imgNum, DelugeIdent *ident, error_t error);
# 53 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeMetadataP.nc"
enum DelugeMetadataP____nesc_unnamed4458 {
  DelugeMetadataP__S_READ_IDENT, 
  DelugeMetadataP__S_READ_CRC, 
  DelugeMetadataP__S_CRC, 
  DelugeMetadataP__S_READY, 
  DelugeMetadataP__S_BUSY
};

DelugeIdent DelugeMetadataP__ident;
uint8_t DelugeMetadataP__state;
uint8_t DelugeMetadataP__currentVolume;
uint8_t DelugeMetadataP__currentImageIdx;
uint8_t DelugeMetadataP__currentPage;
nx_uint16_t DelugeMetadataP__currentCrc;
uint8_t DelugeMetadataP__currentClient;

static void DelugeMetadataP__nextImage(void );










static inline uint32_t DelugeMetadataP__calcCrcAddr(void );




static inline uint32_t DelugeMetadataP__calcPageAddr(void );




static inline void DelugeMetadataP__Boot__booted(void );
#line 103
static inline error_t DelugeMetadataP__DelugeMetadata__read(uint8_t client, uint8_t imgNum);
#line 115
static void DelugeMetadataP__BlockRead__readDone(uint8_t imgNum, storage_addr_t addr, void *buf, storage_len_t len, error_t error);
#line 142
static void DelugeMetadataP__BlockRead__computeCrcDone(uint8_t imgNum, storage_addr_t addr, storage_len_t len, uint16_t crc, error_t error);
#line 165
static error_t DelugeMetadataP__BlockRead__default__read(uint8_t imgNum, storage_addr_t addr, void *buf, storage_len_t len);
static inline error_t DelugeMetadataP__BlockRead__default__computeCrc(uint8_t imgNum, storage_addr_t addr, storage_len_t len, uint16_t crc);

static inline void DelugeMetadataP__BlockWrite__writeDone(uint8_t imgNum, storage_addr_t addr, void *buf, storage_len_t len, error_t error);
static void DelugeMetadataP__BlockWrite__eraseDone(uint8_t imgNum, error_t error);
#line 183
static inline void DelugeMetadataP__BlockWrite__syncDone(uint8_t imgNum, error_t error);
static inline error_t DelugeMetadataP__BlockWrite__default__erase(uint8_t imgNum);

static inline void DelugeMetadataP__DelugeMetadata__default__readDone(uint8_t client, uint8_t imgNum, DelugeIdent *i, error_t error);
# 44 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/VolumeIdC.nc"
static inline volume_id_t /*DelugeMetadataC.BlockReaderGoldenImage.VolumeIdC*/VolumeIdC__6__VolumeId__get(void );
#line 44
static inline volume_id_t /*DelugeMetadataC.BlockReaderDeluge1.VolumeIdC*/VolumeIdC__7__VolumeId__get(void );
#line 44
static inline volume_id_t /*DelugeMetadataC.BlockReaderDeluge2.VolumeIdC*/VolumeIdC__8__VolumeId__get(void );
#line 44
static inline volume_id_t /*DelugeMetadataC.BlockReaderDeluge3.VolumeIdC*/VolumeIdC__9__VolumeId__get(void );
#line 44
static inline volume_id_t /*DelugeMetadataC.BlockWriterGoldenImage.VolumeIdC*/VolumeIdC__10__VolumeId__get(void );
#line 44
static inline volume_id_t /*DelugeMetadataC.BlockWriterDeluge1.VolumeIdC*/VolumeIdC__11__VolumeId__get(void );
#line 44
static inline volume_id_t /*DelugeMetadataC.BlockWriterDeluge2.VolumeIdC*/VolumeIdC__12__VolumeId__get(void );
#line 44
static inline volume_id_t /*DelugeMetadataC.BlockWriterDeluge3.VolumeIdC*/VolumeIdC__13__VolumeId__get(void );
# 83 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
static error_t DelugeVolumeManagerP__BlockWrite__erase(
# 41 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeVolumeManagerP.nc"
uint8_t arg_0x7fa21d3b8840);
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t DelugeVolumeManagerP__Resource__release(
# 42 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeVolumeManagerP.nc"
uint8_t arg_0x7fa21d3b7c68);
# 88 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
static error_t DelugeVolumeManagerP__Resource__request(
# 42 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeVolumeManagerP.nc"
uint8_t arg_0x7fa21d3b7c68);
# 40 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeVolumeManager.nc"
static void DelugeVolumeManagerP__DelugeVolumeManager__eraseDone(
# 39 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeVolumeManagerP.nc"
uint8_t arg_0x7fa21d3bba30, 
# 40 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeVolumeManager.nc"
uint8_t imgNum);
# 48 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeVolumeManagerP.nc"
uint8_t DelugeVolumeManagerP__currentClient;
bool DelugeVolumeManagerP__busy = FALSE;

static error_t DelugeVolumeManagerP__DelugeVolumeManager__erase(uint8_t client, uint8_t imgNum);
#line 63
static inline void DelugeVolumeManagerP__Resource__granted(uint8_t imgNum);




static void DelugeVolumeManagerP__BlockWrite__eraseDone(uint8_t imgNum, error_t error);






static inline void DelugeVolumeManagerP__BlockWrite__writeDone(uint8_t imgNum, storage_addr_t addr, void *buf, storage_len_t len, error_t error);
static inline void DelugeVolumeManagerP__BlockWrite__syncDone(uint8_t imgNum, error_t error);
static inline error_t DelugeVolumeManagerP__BlockWrite__default__erase(uint8_t imgNum);
static inline void DelugeVolumeManagerP__DelugeVolumeManager__default__eraseDone(uint8_t client, uint8_t imgNum);
static inline error_t DelugeVolumeManagerP__Resource__default__request(uint8_t imgNum);
static inline error_t DelugeVolumeManagerP__Resource__default__release(uint8_t imgNum);
# 44 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/VolumeIdC.nc"
static inline volume_id_t /*DelugeVolumeManagerC.BlockWriterDeluge1.VolumeIdC*/VolumeIdC__14__VolumeId__get(void );
#line 44
static inline volume_id_t /*DelugeVolumeManagerC.BlockWriterDeluge2.VolumeIdC*/VolumeIdC__15__VolumeId__get(void );
#line 44
static inline volume_id_t /*DelugeVolumeManagerC.BlockWriterDeluge3.VolumeIdC*/VolumeIdC__16__VolumeId__get(void );
# 94 "/opt/tinyos-2.1.2/tos/chips/atm1281/atm128hardware.h"
static __inline  void __nesc_disable_interrupt()
#line 94
{
   __asm volatile ("cli" :  :  : "memory");}

#line 111
#line 110
__inline   __nesc_atomic_t 
__nesc_atomic_start(void )
{
  __nesc_atomic_t result = * (volatile uint8_t *)(0x3F + 0x20);

#line 114
  __nesc_disable_interrupt();
   __asm volatile ("" :  :  : "memory");
  return result;
}



#line 120
__inline   void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)
{
   __asm volatile ("" :  :  : "memory");
  * (volatile uint8_t *)(0x3F + 0x20) = original_SREG;
}

# 124 "/opt/tinyos-2.1.2/tos/system/SchedulerBasicP.nc"
static inline void SchedulerBasicP__Scheduler__init(void )
{
  /* atomic removed: atomic calls only */
  {
    memset((void *)SchedulerBasicP__m_next, SchedulerBasicP__NO_TASK, sizeof SchedulerBasicP__m_next);
    SchedulerBasicP__m_head = SchedulerBasicP__NO_TASK;
    SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
  }
}

# 57 "/opt/tinyos-2.1.2/tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__init(void ){
#line 57
  SchedulerBasicP__Scheduler__init();
#line 57
}
#line 57
# 69 "/opt/tinyos-2.1.2/tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 126 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__TimerCtrl__setControlB(uint8_t x)
#line 126
{
  * (volatile uint8_t *)0x81 = x;
}

#line 113
static inline uint8_t HplAtm1281Timer1P__TimerCtrl__getControlB(void )
#line 113
{
  return * (volatile uint8_t *)0x81;
}

#line 102
static inline void HplAtm1281Timer1P__Timer__setScale(uint8_t s)
#line 102
{
  Atm128_TCCRB_t x = (Atm128_TCCRB_t )HplAtm1281Timer1P__TimerCtrl__getControlB();

#line 104
  x.bits.cs = s;
  HplAtm1281Timer1P__TimerCtrl__setControlB(x.flat);
}

# 104 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__setScale(uint8_t scale){
#line 104
  HplAtm1281Timer1P__Timer__setScale(scale);
#line 104
}
#line 104
# 164 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__Timer__start(void )
#line 164
{
#line 164
  * (volatile uint8_t *)0x6F |= 1 << 0;
}

# 78 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__start(void ){
#line 78
  HplAtm1281Timer1P__Timer__start();
#line 78
}
#line 78
# 93 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__Timer__set(uint16_t t)
#line 93
{
#line 93
  * (volatile uint16_t *)0x84 = t;
}

# 67 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__set(/*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__timer_size t){
#line 67
  HplAtm1281Timer1P__Timer__set(t);
#line 67
}
#line 67
# 51 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline error_t /*InitOneP.InitOne*/Atm128TimerInitC__0__Init__init(void )
#line 51
{
  /* atomic removed: atomic calls only */
#line 52
  {
    /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__set(0);
    /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__start();
    /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__setScale(2);
  }
  return SUCCESS;
}

# 59 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP__26__IO__makeInput(void )
#line 59
{
#line 59
  * (volatile uint8_t * )42U &= ~(1 << 2);
}

# 44 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void HplAt45dbIOP__In__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP__26__IO__makeInput();
#line 44
}
#line 44
# 56 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP__26__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )43U &= ~(1 << 2);
}

# 41 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void HplAt45dbIOP__In__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP__26__IO__clr();
#line 41
}
#line 41
# 61 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit3*/HplAtm128GeneralIOPinP__27__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )42U |= 1 << 3;
}

# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void HplAt45dbIOP__Out__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortD.Bit3*/HplAtm128GeneralIOPinP__27__IO__makeOutput();
#line 46
}
#line 46
# 55 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit3*/HplAtm128GeneralIOPinP__27__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )43U |= 1 << 3;
}

# 40 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void HplAt45dbIOP__Out__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortD.Bit3*/HplAtm128GeneralIOPinP__27__IO__set();
#line 40
}
#line 40
# 61 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP__29__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )42U |= 1 << 5;
}

# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void HplAt45dbIOP__Clk__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP__29__IO__makeOutput();
#line 46
}
#line 46
# 56 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP__29__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )43U &= ~(1 << 5);
}

# 41 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void HplAt45dbIOP__Clk__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP__29__IO__clr();
#line 41
}
#line 41
# 55 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP__3__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )34U |= 1 << 3;
}

# 40 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void HplAt45dbIOP__Select__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP__3__IO__set();
#line 40
}
#line 40
# 61 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP__3__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )33U |= 1 << 3;
}

# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void HplAt45dbIOP__Select__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP__3__IO__makeOutput();
#line 46
}
#line 46
# 108 "/opt/tinyos-2.1.2/tos/platforms/iris/chips/at45db/HplAt45dbIOP.nc"
static inline error_t HplAt45dbIOP__Init__init(void )
#line 108
{
  HplAt45dbIOP__Select__makeOutput();
  HplAt45dbIOP__Select__set();
  HplAt45dbIOP__Clk__clr();
  HplAt45dbIOP__Clk__makeOutput();
  HplAt45dbIOP__Out__set();
  HplAt45dbIOP__Out__makeOutput();
  HplAt45dbIOP__In__clr();
  HplAt45dbIOP__In__makeInput();
  return SUCCESS;
}

# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
inline static error_t MotePlatformP__SubInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = HplAt45dbIOP__Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, /*InitOneP.InitOne*/Atm128TimerInitC__0__Init__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 56 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )34U &= ~(1 << 4);
}

# 41 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP__SerialIdPin__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr();
#line 41
}
#line 41
# 59 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void )
#line 59
{
#line 59
  * (volatile uint8_t * )33U &= ~(1 << 4);
}

# 44 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP__SerialIdPin__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput();
#line 44
}
#line 44
# 49 "/opt/tinyos-2.1.2/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP__PlatformInit__init(void )
#line 49
{

  * (volatile uint8_t *)(0x08 + 0x20) = 0;
  * (volatile uint8_t *)(0x07 + 0x20) = 0xff;


  MotePlatformP__SerialIdPin__makeInput();
  MotePlatformP__SerialIdPin__clr();

  return MotePlatformP__SubInit__init();
}

# 55 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )34U |= 1 << 0;
}

# 40 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set();
#line 40
}
#line 40
# 55 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )34U |= 1 << 1;
}

# 40 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set();
#line 40
}
#line 40
# 55 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )34U |= 1 << 2;
}

# 40 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set();
#line 40
}
#line 40
# 61 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )33U |= 1 << 0;
}

# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput();
#line 46
}
#line 46
# 61 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )33U |= 1 << 1;
}

# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput();
#line 46
}
#line 46
# 61 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )33U |= 1 << 2;
}

# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput();
#line 46
}
#line 46
# 56 "/opt/tinyos-2.1.2/tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 57
  {
    ;
    LedsP__Led0__makeOutput();
    LedsP__Led1__makeOutput();
    LedsP__Led2__makeOutput();
    LedsP__Led0__set();
    LedsP__Led1__set();
    LedsP__Led2__set();
  }
  return SUCCESS;
}

# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
inline static error_t PlatformP__MoteInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = LedsP__Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, MotePlatformP__PlatformInit__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 75 "/opt/tinyos-2.1.2/tos/platforms/iris/MeasureClockC.nc"
static inline error_t MeasureClockC__Init__init(void )
#line 75
{
  /* atomic removed: atomic calls only */



  {
    uint8_t now;
#line 81
    uint8_t wraps;
    uint16_t start;


    * (volatile uint8_t *)0x81 = 1 << 0;
    * (volatile uint8_t *)0xB6 = 1 << 5;
    * (volatile uint8_t *)0xB1 = (1 << 1) | (1 << 0);




    start = * (volatile uint16_t *)0x84;
    for (wraps = MeasureClockC__MAGIC / 2; wraps; ) 
      {
        uint16_t next = * (volatile uint16_t *)0x84;

        if (next < start) {
          wraps--;
          }
#line 99
        start = next;
      }


    now = * (volatile uint8_t *)0xB2;
    while (* (volatile uint8_t *)0xB2 == now) ;


    start = * (volatile uint16_t *)0x84;
    now = * (volatile uint8_t *)0xB2;
    while (* (volatile uint8_t *)0xB2 == now) ;
    MeasureClockC__cycles = * (volatile uint16_t *)0x84;

    MeasureClockC__cycles = (MeasureClockC__cycles - start + 16) >> 5;


    * (volatile uint8_t *)0xB6 = * (volatile uint8_t *)0x81 = * (volatile uint8_t *)0xB1 = 0;
    * (volatile uint8_t *)0xB2 = 0;
    * (volatile uint16_t *)0x84 = 0;
    * (volatile uint8_t *)(0x16 + 0x20) = * (volatile uint8_t *)(0x17 + 0x20) = 0xff;
    while (* (volatile uint8_t *)0xB6 & (((1 << 4) | (1 << 2)) | (1 << 0))) 
      ;
  }
  return SUCCESS;
}

# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
inline static error_t PlatformP__MeasureClock__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = MeasureClockC__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 51 "/opt/tinyos-2.1.2/tos/platforms/mica/PlatformP.nc"
static inline error_t PlatformP__Init__init(void )
{
  error_t ok;


  ok = PlatformP__MeasureClock__init();
  ok = ecombine(ok, PlatformP__MoteInit__init());

  return ok;
}

# 55 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )34U |= 1 << 6;
}

# 40 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void RF230DriverLayerP__RSTN__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__set();
#line 40
}
#line 40
# 61 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )33U |= 1 << 6;
}

# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void RF230DriverLayerP__RSTN__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__makeOutput();
#line 46
}
#line 46
# 56 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )37U &= ~(1 << 7);
}

# 41 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void RF230DriverLayerP__SLP_TR__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__clr();
#line 41
}
#line 41
# 61 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )36U |= 1 << 7;
}

# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void RF230DriverLayerP__SLP_TR__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__makeOutput();
#line 46
}
#line 46
# 55 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )37U |= 1 << 0;
}

# 40 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void RF230DriverLayerP__SELN__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set();
#line 40
}
#line 40
# 61 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )36U |= 1 << 0;
}

# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void RF230DriverLayerP__SELN__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput();
#line 46
}
#line 46
# 218 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230DriverLayerP.nc"
static inline error_t RF230DriverLayerP__PlatformInit__init(void )
{
  RF230DriverLayerP__SELN__makeOutput();
  RF230DriverLayerP__SELN__set();
  RF230DriverLayerP__SLP_TR__makeOutput();
  RF230DriverLayerP__SLP_TR__clr();
  RF230DriverLayerP__RSTN__makeOutput();
  RF230DriverLayerP__RSTN__set();

  RF230DriverLayerP__rxMsg = &RF230DriverLayerP__rxMsgBuffer;


  RF230DriverLayerP__rssiClear = 0;
  RF230DriverLayerP__rssiBusy = 90;

  return SUCCESS;
}

# 171 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__Capture__stop(void )
#line 171
{
#line 171
  * (volatile uint8_t *)0x6F &= ~(1 << 5);
}

# 70 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void HplRF230P__Capture__stop(void ){
#line 70
  HplAtm1281Timer1P__Capture__stop();
#line 70
}
#line 70
# 56 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )43U &= ~(1 << 4);
}

# 41 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void HplRF230P__PortIRQ__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__clr();
#line 41
}
#line 41
# 59 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__makeInput(void )
#line 59
{
#line 59
  * (volatile uint8_t * )42U &= ~(1 << 4);
}

# 44 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void HplRF230P__PortIRQ__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__makeInput();
#line 44
}
#line 44
# 56 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )43U &= ~(1 << 6);
}

# 41 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void HplRF230P__PortCLKM__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__clr();
#line 41
}
#line 41
# 59 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__makeInput(void )
#line 59
{
#line 59
  * (volatile uint8_t * )42U &= ~(1 << 6);
}

# 44 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void HplRF230P__PortCLKM__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__makeInput();
#line 44
}
#line 44
# 53 "/opt/tinyos-2.1.2/tos/platforms/iris/chips/rf230/HplRF230P.nc"
static inline error_t HplRF230P__PlatformInit__init(void )
{
  HplRF230P__PortCLKM__makeInput();
  HplRF230P__PortCLKM__clr();
  HplRF230P__PortIRQ__makeInput();
  HplRF230P__PortIRQ__clr();
  HplRF230P__Capture__stop();

  return SUCCESS;
}

# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
inline static error_t RealMainP__PlatformInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = HplRF230P__PlatformInit__init();
#line 62
  __nesc_result = ecombine(__nesc_result, RF230DriverLayerP__PlatformInit__init());
#line 62
  __nesc_result = ecombine(__nesc_result, PlatformP__Init__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 65 "/opt/tinyos-2.1.2/tos/interfaces/Scheduler.nc"
inline static bool RealMainP__Scheduler__runNextTask(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = SchedulerBasicP__Scheduler__runNextTask();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 97 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeP.nc"
static inline void DelugeP__taskRequest__runTask(void )
{
  DelugeP__Resource__granted();
}

# 281 "/usr/lib/x86_64-linux-gnu/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_uint8(const void * source)
#line 281
{
  const uint8_t *base = source;

#line 283
  return base[0];
}

#line 340
static __inline  uint32_t __nesc_ntoh_uint32(const void * source)
#line 340
{
  const uint8_t *base = source;

#line 342
  return ((((uint32_t )base[0] << 24) | (
  (uint32_t )base[1] << 16)) | (
  (uint32_t )base[2] << 8)) | base[3];
}

#line 372
static __inline  int32_t __nesc_ntoh_int32(const void * source)
#line 372
{
#line 372
  return __nesc_ntoh_uint32(source);
}

#line 315
static __inline  uint16_t __nesc_hton_uint16(void * target, uint16_t value)
#line 315
{
  uint8_t *base = target;

#line 317
  base[1] = value;
  base[0] = value >> 8;
  return value;
}

#line 286
static __inline  uint8_t __nesc_hton_uint8(void * target, uint8_t value)
#line 286
{
  uint8_t *base = target;

#line 288
  base[0] = value;
  return value;
}

#line 347
static __inline  uint32_t __nesc_hton_uint32(void * target, uint32_t value)
#line 347
{
  uint8_t *base = target;

#line 349
  base[3] = value;
  base[2] = value >> 8;
  base[1] = value >> 16;
  base[0] = value >> 24;
  return value;
}

#line 372
static __inline  int32_t __nesc_hton_int32(void * target, int32_t value)
#line 372
{
#line 372
  __nesc_hton_uint32(target, value);
#line 372
  return value;
}

# 45 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugePageTransfer.nc"
inline static error_t ObjectTransferP__DelugePageTransfer__setWorkingPage(object_id_t new_objid, page_num_t new_pgNum){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = DelugePageTransferP__DelugePageTransfer__setWorkingPage(new_objid, new_pgNum);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 490 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugePageTransferP.nc"
static inline void DelugePageTransferP__DelugePageTransfer__setImgNum(uint8_t new_img_num)
{
  DelugePageTransferP__imgNum = new_img_num;
}

# 50 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugePageTransfer.nc"
inline static void ObjectTransferP__DelugePageTransfer__setImgNum(uint8_t new_img_num){
#line 50
  DelugePageTransferP__DelugePageTransfer__setImgNum(new_img_num);
#line 50
}
#line 50
# 58 "/opt/tinyos-2.1.2/tos/system/CrcC.nc"
static inline uint16_t CrcC__Crc__crc16(void *buf, uint8_t len)
#line 58
{
  return CrcC__Crc__seededCrc16(0, buf, len);
}

# 50 "/opt/tinyos-2.1.2/tos/interfaces/Crc.nc"
inline static uint16_t ObjectTransferP__Crc__crc16(void * buf, uint8_t len){
#line 50
  unsigned short __nesc_result;
#line 50

#line 50
  __nesc_result = CrcC__Crc__crc16(buf, len);
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 159 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/ObjectTransferP.nc"
static inline error_t ObjectTransferP__ObjectTransfer__publish(object_id_t new_objid, object_size_t new_size, uint8_t img_num)
{
  ObjectTransferP__ObjectTransfer__stop();


  ObjectTransferP__state = ObjectTransferP__S_INITIALIZING_PUB;
  __nesc_hton_int32(ObjectTransferP__curObjDesc.objid.nxdata, new_objid);
  __nesc_hton_uint8(ObjectTransferP__curObjDesc.numPgs.nxdata, (new_size - 1) / DELUGET2_BYTES_PER_PAGE + 1);
  __nesc_hton_uint8(ObjectTransferP__curObjDesc.numPgsComplete.nxdata, __nesc_ntoh_uint8(ObjectTransferP__curObjDesc.numPgs.nxdata));
  __nesc_hton_uint16(ObjectTransferP__curObjDesc.crc.nxdata, ObjectTransferP__Crc__crc16(&ObjectTransferP__curObjDesc, sizeof(object_id_t ) + sizeof(page_num_t )));

  if (ObjectTransferP__state == ObjectTransferP__S_INITIALIZING_PUB) {
      ObjectTransferP__resetTimer();
    }
  ObjectTransferP__state = ObjectTransferP__S_STARTED;

  ObjectTransferP__DelugePageTransfer__setImgNum(img_num);
  ObjectTransferP__DelugePageTransfer__setWorkingPage(__nesc_ntoh_int32(ObjectTransferP__curObjDesc.objid.nxdata), __nesc_ntoh_uint8(ObjectTransferP__curObjDesc.numPgs.nxdata));

  return SUCCESS;
}

# 41 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/ObjectTransfer.nc"
inline static error_t DelugeP__ObjectTransfer__publish(object_id_t new_objid, object_size_t new_size, uint8_t img_num){
#line 41
  unsigned char __nesc_result;
#line 41

#line 41
  __nesc_result = ObjectTransferP__ObjectTransfer__publish(new_objid, new_size, img_num);
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 164 "/opt/tinyos-2.1.2/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num].isrunning = FALSE;
}

# 78 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
inline static void ObjectTransferP__Timer__stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(2U);
#line 78
}
#line 78
inline static void DelugePageTransferP__Timer__stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(1U);
#line 78
}
#line 78
# 248 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugePageTransferP.nc"
static inline error_t DelugePageTransferP__DelugePageTransfer__stop(void )
{
  uint32_t i;

  DelugePageTransferP__Timer__stop();
  DelugePageTransferP__changeState(DelugePageTransferP__S_DISABLED);
  DelugePageTransferP__workingObjid = DELUGE_INVALID_OBJID;
  DelugePageTransferP__workingPgNum = DELUGE_INVALID_PGNUM;

  for (i = 0; i < DELUGET2_PKT_BITVEC_SIZE; i++) {
      DelugePageTransferP__pktsToReceive[i] = 0x00;
    }
  for (i = 0; i < DELUGET2_PKT_BITVEC_SIZE; i++) {
      DelugePageTransferP__pktsToSend[i] = 0x00;
    }



  return SUCCESS;
}

# 51 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugePageTransfer.nc"
inline static error_t ObjectTransferP__DelugePageTransfer__stop(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = DelugePageTransferP__DelugePageTransfer__stop();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 197 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugePageTransferP.nc"
static inline void DelugePageTransferP__unlockPMsgBuf(void )
{
  DelugePageTransferP__isBusy_pMsgBuf = FALSE;

  switch (DelugePageTransferP__state) {
      case DelugePageTransferP__S_TX_LOCKING: 
        DelugePageTransferP__setupDataMsg();
      break;
      case DelugePageTransferP__S_RX_LOCKING: 
        DelugePageTransferP__setupReqMsg();
      break;
    }
}

# 262 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/ObjectTransferP.nc"
static inline void ObjectTransferP__DelugePageTransfer__suppressMsgs(object_id_t new_objid)
{
  if (new_objid == __nesc_ntoh_int32(ObjectTransferP__curObjDesc.objid.nxdata)) {
      ObjectTransferP__advTimers.overheard = 1;
    }
}

# 48 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugePageTransfer.nc"
inline static void DelugePageTransferP__DelugePageTransfer__suppressMsgs(object_id_t new_objid){
#line 48
  ObjectTransferP__DelugePageTransfer__suppressMsgs(new_objid);
#line 48
}
#line 48
# 50 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BitVecUtils.nc"
inline static error_t DelugePageTransferP__BitVecUtils__indexOf(uint16_t *pResult, uint16_t fromIndex, uint8_t *bitVec, uint16_t length){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = BitVecUtilsC__BitVecUtils__indexOf(pResult, fromIndex, bitVec, length);
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 495 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugePageTransferP.nc"
static inline error_t DelugePageTransferP__BlockRead__default__read(uint8_t img_num, storage_addr_t addr, void *buf, storage_len_t len)
#line 495
{
#line 495
  return FAIL;
}

# 56 "/opt/tinyos-2.1.2/tos/interfaces/BlockRead.nc"
inline static error_t DelugePageTransferP__BlockRead__read(uint8_t arg_0x7fa21e48f320, storage_addr_t addr, void * buf, storage_len_t len){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  switch (arg_0x7fa21e48f320) {
#line 56
    case VOLUME_DELUGE3:
#line 56
      __nesc_result = /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockRead__read(/*DelugeC.BlockReaderDeluge3*/BlockReaderC__2__CLIENT_ID, addr, buf, len);
#line 56
      break;
#line 56
    case VOLUME_DELUGE1:
#line 56
      __nesc_result = /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockRead__read(/*DelugeC.BlockReaderDeluge1*/BlockReaderC__0__CLIENT_ID, addr, buf, len);
#line 56
      break;
#line 56
    case VOLUME_DELUGE2:
#line 56
      __nesc_result = /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockRead__read(/*DelugeC.BlockReaderDeluge2*/BlockReaderC__1__CLIENT_ID, addr, buf, len);
#line 56
      break;
#line 56
    default:
#line 56
      __nesc_result = DelugePageTransferP__BlockRead__default__read(arg_0x7fa21e48f320, addr, buf, len);
#line 56
      break;
#line 56
    }
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 336 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
static inline error_t BlockStorageP__BlockRead__read(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len)
#line 336
{
  return BlockStorageP__newRequest(BlockStorageP__R_READ, id, addr, buf, len);
}

# 116 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/BlockStorageManagerP.nc"
static inline error_t /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockRead__default__read(uint8_t client, storage_addr_t addr, void *buf, storage_len_t len)
#line 116
{
#line 116
  return FAIL;
}

# 56 "/opt/tinyos-2.1.2/tos/interfaces/BlockRead.nc"
inline static error_t /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockRead__read(volume_id_t arg_0x7fa21d925b10, storage_addr_t addr, void * buf, storage_len_t len){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  switch (arg_0x7fa21d925b10) {
#line 56
    case VOLUME_GOLDENIMAGE:
#line 56
      __nesc_result = BlockStorageP__BlockRead__read(/*BlockStorageManagerC.BlockStorageC_Golden*/BlockStorageC__0__BLOCK_ID, addr, buf, len);
#line 56
      break;
#line 56
    case VOLUME_DELUGE3:
#line 56
      __nesc_result = BlockStorageP__BlockRead__read(/*BlockStorageManagerC.BlockStorageC_3*/BlockStorageC__3__BLOCK_ID, addr, buf, len);
#line 56
      break;
#line 56
    case VOLUME_DELUGE1:
#line 56
      __nesc_result = BlockStorageP__BlockRead__read(/*BlockStorageManagerC.BlockStorageC_1*/BlockStorageC__1__BLOCK_ID, addr, buf, len);
#line 56
      break;
#line 56
    case VOLUME_DELUGE2:
#line 56
      __nesc_result = BlockStorageP__BlockRead__read(/*BlockStorageManagerC.BlockStorageC_2*/BlockStorageC__2__BLOCK_ID, addr, buf, len);
#line 56
      break;
#line 56
    default:
#line 56
      __nesc_result = /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockRead__default__read(arg_0x7fa21d925b10, addr, buf, len);
#line 56
      break;
#line 56
    }
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 401 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
static inline at45page_t BlockStorageP__At45dbVolume__default__volumeSize(uint8_t id)
#line 401
{
#line 401
  return 0;
}

# 30 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbVolume.nc"
inline static at45page_t BlockStorageP__At45dbVolume__volumeSize(uint8_t arg_0x7fa21d8bb7e8){
#line 30
  unsigned short __nesc_result;
#line 30

#line 30
  switch (arg_0x7fa21d8bb7e8) {
#line 30
    case /*BlockStorageManagerC.BlockStorageC_Golden*/BlockStorageC__0__BLOCK_ID:
#line 30
      __nesc_result = At45dbStorageManagerC__At45dbVolume__volumeSize(0);
#line 30
      break;
#line 30
    case /*BlockStorageManagerC.BlockStorageC_1*/BlockStorageC__1__BLOCK_ID:
#line 30
      __nesc_result = At45dbStorageManagerC__At45dbVolume__volumeSize(2);
#line 30
      break;
#line 30
    case /*BlockStorageManagerC.BlockStorageC_2*/BlockStorageC__2__BLOCK_ID:
#line 30
      __nesc_result = At45dbStorageManagerC__At45dbVolume__volumeSize(3);
#line 30
      break;
#line 30
    case /*BlockStorageManagerC.BlockStorageC_3*/BlockStorageC__3__BLOCK_ID:
#line 30
      __nesc_result = At45dbStorageManagerC__At45dbVolume__volumeSize(1);
#line 30
      break;
#line 30
    default:
#line 30
      __nesc_result = BlockStorageP__At45dbVolume__default__volumeSize(arg_0x7fa21d8bb7e8);
#line 30
      break;
#line 30
    }
#line 30

#line 30
  return __nesc_result;
#line 30
}
#line 30
# 121 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
static inline at45page_t BlockStorageP__BConfig__npages(uint8_t id)
#line 121
{
  return BlockStorageP__At45dbVolume__volumeSize(id) >> 1;
}







static inline int BlockStorageP__BConfig__default__isConfig(uint8_t blockId)
#line 131
{
  return FALSE;
}

# 24 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbBlockConfig.nc"
inline static int BlockStorageP__BConfig__isConfig(uint8_t arg_0x7fa21d8a6020){
#line 24
  int __nesc_result;
#line 24

#line 24
    __nesc_result = BlockStorageP__BConfig__default__isConfig(arg_0x7fa21d8a6020);
#line 24

#line 24
  return __nesc_result;
#line 24
}
#line 24
# 352 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
static inline storage_len_t BlockStorageP__BlockRead__getSize(uint8_t blockId)
#line 352
{
  storage_len_t vsize;

  if (BlockStorageP__BConfig__isConfig(blockId)) {
    vsize = BlockStorageP__BConfig__npages(blockId);
    }
  else {
#line 358
    vsize = BlockStorageP__At45dbVolume__volumeSize(blockId);
    }
  return vsize << AT45_PAGE_SIZE_LOG2;
}

#line 402
static inline error_t BlockStorageP__Resource__default__request(uint8_t id)
#line 402
{
#line 402
  return FAIL;
}

# 88 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t BlockStorageP__Resource__request(uint8_t arg_0x7fa21d8a84b0){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  switch (arg_0x7fa21d8a84b0) {
#line 88
    case /*BlockStorageManagerC.BlockStorageC_Golden*/BlockStorageC__0__BLOCK_ID:
#line 88
      __nesc_result = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__request(/*BlockStorageManagerC.BlockStorageC_Golden*/BlockStorageC__0__RESOURCE_ID);
#line 88
      break;
#line 88
    case /*BlockStorageManagerC.BlockStorageC_1*/BlockStorageC__1__BLOCK_ID:
#line 88
      __nesc_result = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__request(/*BlockStorageManagerC.BlockStorageC_1*/BlockStorageC__1__RESOURCE_ID);
#line 88
      break;
#line 88
    case /*BlockStorageManagerC.BlockStorageC_2*/BlockStorageC__2__BLOCK_ID:
#line 88
      __nesc_result = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__request(/*BlockStorageManagerC.BlockStorageC_2*/BlockStorageC__2__RESOURCE_ID);
#line 88
      break;
#line 88
    case /*BlockStorageManagerC.BlockStorageC_3*/BlockStorageC__3__BLOCK_ID:
#line 88
      __nesc_result = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__request(/*BlockStorageManagerC.BlockStorageC_3*/BlockStorageC__3__RESOURCE_ID);
#line 88
      break;
#line 88
    default:
#line 88
      __nesc_result = BlockStorageP__Resource__default__request(arg_0x7fa21d8a84b0);
#line 88
      break;
#line 88
    }
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 204 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(uint8_t id)
#line 204
{
}

# 53 "/opt/tinyos-2.1.2/tos/interfaces/ResourceRequested.nc"
inline static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__requested(uint8_t arg_0x7fa21d6c67e8){
#line 53
    /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(arg_0x7fa21d6c67e8);
#line 53
}
#line 53
# 64 "/opt/tinyos-2.1.2/tos/system/FcfsResourceQueueC.nc"
static inline bool /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__isEnqueued(resource_client_id_t id)
#line 64
{
  /* atomic removed: atomic calls only */
#line 65
  {
    unsigned char __nesc_temp = 
#line 65
    /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__resQ[id] != /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__NO_ENTRY || /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__qTail == id;

#line 65
    return __nesc_temp;
  }
}

#line 82
static inline error_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__enqueue(resource_client_id_t id)
#line 82
{
  /* atomic removed: atomic calls only */
#line 83
  {
    if (!/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__isEnqueued(id)) {
        if (/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__qHead == /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__NO_ENTRY) {
          /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__qHead = id;
          }
        else {
#line 88
          /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__resQ[/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__qTail] = id;
          }
#line 89
        /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__qTail = id;
        {
          unsigned char __nesc_temp = 
#line 90
          SUCCESS;

#line 90
          return __nesc_temp;
        }
      }
#line 92
    {
      unsigned char __nesc_temp = 
#line 92
      EBUSY;

#line 92
      return __nesc_temp;
    }
  }
}

# 79 "/opt/tinyos-2.1.2/tos/interfaces/ResourceQueue.nc"
inline static error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Queue__enqueue(resource_client_id_t id){
#line 79
  unsigned char __nesc_result;
#line 79

#line 79
  __nesc_result = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__enqueue(id);
#line 79

#line 79
  return __nesc_result;
#line 79
}
#line 79
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
inline static error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__grantedTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*At45dbC.Arbiter.Arbiter*/ArbiterP__0__grantedTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 133 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
static inline error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void )
#line 133
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 134
    {
      if (/*At45dbC.Arbiter.Arbiter*/ArbiterP__0__resId == /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__default_owner_id) {
          if (/*At45dbC.Arbiter.Arbiter*/ArbiterP__0__state == /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__RES_GRANTING) {
              /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__grantedTask__postTask();
              {
                unsigned char __nesc_temp = 
#line 138
                SUCCESS;

                {
#line 138
                  __nesc_atomic_end(__nesc_atomic); 
#line 138
                  return __nesc_temp;
                }
              }
            }
          else {
#line 140
            if (/*At45dbC.Arbiter.Arbiter*/ArbiterP__0__state == /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__RES_IMM_GRANTING) {
                /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__resId = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__reqResId;
                /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__state = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__RES_BUSY;
                {
                  unsigned char __nesc_temp = 
#line 143
                  SUCCESS;

                  {
#line 143
                    __nesc_atomic_end(__nesc_atomic); 
#line 143
                    return __nesc_temp;
                  }
                }
              }
            }
        }
    }
#line 149
    __nesc_atomic_end(__nesc_atomic); }
#line 147
  return FAIL;
}

#line 210
static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__requested(void )
#line 210
{
  /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release();
}

# 73 "/opt/tinyos-2.1.2/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested(void ){
#line 73
  /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__requested();
#line 73
}
#line 73
# 97 "/opt/tinyos-2.1.2/tos/system/SchedulerBasicP.nc"
static inline bool SchedulerBasicP__isWaiting(uint8_t id)
{
  return SchedulerBasicP__m_next[id] != SchedulerBasicP__NO_TASK || SchedulerBasicP__m_tail == id;
}

static inline bool SchedulerBasicP__pushTask(uint8_t id)
{
  if (!SchedulerBasicP__isWaiting(id)) 
    {
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_head = id;
          SchedulerBasicP__m_tail = id;
        }
      else 
        {
          SchedulerBasicP__m_next[SchedulerBasicP__m_tail] = id;
          SchedulerBasicP__m_tail = id;
        }
      return TRUE;
    }
  else 
    {
      return FALSE;
    }
}

# 44 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/VolumeIdC.nc"
static inline volume_id_t /*DelugeVolumeManagerC.BlockWriterDeluge3.VolumeIdC*/VolumeIdC__16__VolumeId__get(void )
{
  return 1;
}

#line 44
static inline volume_id_t /*DelugeVolumeManagerC.BlockWriterDeluge2.VolumeIdC*/VolumeIdC__15__VolumeId__get(void )
{
  return 3;
}

#line 44
static inline volume_id_t /*DelugeVolumeManagerC.BlockWriterDeluge1.VolumeIdC*/VolumeIdC__14__VolumeId__get(void )
{
  return 2;
}

#line 44
static inline volume_id_t /*DelugeMetadataC.BlockWriterDeluge3.VolumeIdC*/VolumeIdC__13__VolumeId__get(void )
{
  return 1;
}

#line 44
static inline volume_id_t /*DelugeMetadataC.BlockWriterDeluge2.VolumeIdC*/VolumeIdC__12__VolumeId__get(void )
{
  return 3;
}

#line 44
static inline volume_id_t /*DelugeMetadataC.BlockWriterDeluge1.VolumeIdC*/VolumeIdC__11__VolumeId__get(void )
{
  return 2;
}

#line 44
static inline volume_id_t /*DelugeMetadataC.BlockWriterGoldenImage.VolumeIdC*/VolumeIdC__10__VolumeId__get(void )
{
  return 0;
}

#line 44
static inline volume_id_t /*DelugeMetadataC.BlockReaderDeluge3.VolumeIdC*/VolumeIdC__9__VolumeId__get(void )
{
  return 1;
}

#line 44
static inline volume_id_t /*DelugeMetadataC.BlockReaderDeluge2.VolumeIdC*/VolumeIdC__8__VolumeId__get(void )
{
  return 3;
}

#line 44
static inline volume_id_t /*DelugeMetadataC.BlockReaderDeluge1.VolumeIdC*/VolumeIdC__7__VolumeId__get(void )
{
  return 2;
}

#line 44
static inline volume_id_t /*DelugeMetadataC.BlockReaderGoldenImage.VolumeIdC*/VolumeIdC__6__VolumeId__get(void )
{
  return 0;
}

#line 44
static inline volume_id_t /*DelugeC.BlockWriterDeluge3.VolumeIdC*/VolumeIdC__5__VolumeId__get(void )
{
  return 1;
}

#line 44
static inline volume_id_t /*DelugeC.BlockWriterDeluge2.VolumeIdC*/VolumeIdC__4__VolumeId__get(void )
{
  return 3;
}

#line 44
static inline volume_id_t /*DelugeC.BlockWriterDeluge1.VolumeIdC*/VolumeIdC__3__VolumeId__get(void )
{
  return 2;
}

#line 44
static inline volume_id_t /*DelugeC.BlockReaderDeluge3.VolumeIdC*/VolumeIdC__2__VolumeId__get(void )
{
  return 1;
}

#line 44
static inline volume_id_t /*DelugeC.BlockReaderDeluge2.VolumeIdC*/VolumeIdC__1__VolumeId__get(void )
{
  return 3;
}

#line 44
static inline volume_id_t /*DelugeC.BlockReaderDeluge1.VolumeIdC*/VolumeIdC__0__VolumeId__get(void )
{
  return 2;
}

# 158 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugePageTransferP.nc"
static inline storage_addr_t DelugePageTransferP__calcOffset(page_num_t pgNum, uint8_t pktNum)
{
  return (storage_addr_t )pgNum * (storage_addr_t )DELUGET2_BYTES_PER_PAGE
   + (uint16_t )pktNum * (uint16_t )DELUGET2_PKT_PAYLOAD_SIZE;
}

# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 154 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline uint8_t HplAtm1281Timer2AsyncP__TimerCtrl__getInterruptFlag(void )
#line 154
{
  return * (volatile uint8_t *)(0x17 + 0x20);
}

# 89 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/HplAtm128TimerCtrl8.nc"
inline static uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__getInterruptFlag(void ){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = HplAtm1281Timer2AsyncP__TimerCtrl__getInterruptFlag();
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
# 73 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230RadioP.nc"
static inline uint8_t RF230RadioP__RF230DriverConfig__headerLength(message_t *msg)
{
  return (unsigned short )& ((message_t *)0)->data - sizeof(rf230packet_header_t );
}

# 40 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230DriverConfig.nc"
inline static uint8_t RF230DriverLayerP__Config__headerLength(message_t *msg){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = RF230RadioP__RF230DriverConfig__headerLength(msg);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 896 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230DriverLayerP.nc"
static inline uint8_t RF230DriverLayerP__RadioPacket__headerLength(message_t *msg)
{
  return RF230DriverLayerP__Config__headerLength(msg) + sizeof(rf230_header_t );
}

# 43 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = RF230DriverLayerP__RadioPacket__headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 90 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__headerLength(message_t *msg)
{
  return /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__headerLength(msg);
}

# 43 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 116 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__headerLength(message_t *msg)
{
  return /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__headerLength(msg);
}

# 43 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 282 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__headerLength(message_t *msg)
{
  return /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__headerLength(msg) + sizeof(ieee154_simple_header_t );
}

# 43 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 154 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__headerLength(message_t *msg)
{
  return /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__headerLength(msg) + /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__PAYLOAD_OFFSET;
}

# 43 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 225 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__headerLength(message_t *msg)
{
  return /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__headerLength(msg) + sizeof(activemessage_header_t );
}

# 78 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230RadioP.nc"
static inline uint8_t RF230RadioP__RF230DriverConfig__maxPayloadLength(void )
{
  return sizeof(rf230packet_header_t ) + 28;
}

# 46 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230DriverConfig.nc"
inline static uint8_t RF230DriverLayerP__Config__maxPayloadLength(void ){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = RF230RadioP__RF230DriverConfig__maxPayloadLength();
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 915 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230DriverLayerP.nc"
static inline uint8_t RF230DriverLayerP__RadioPacket__maxPayloadLength(void )
{
  for (; 0; ) ;

  return RF230DriverLayerP__Config__maxPayloadLength() - sizeof(rf230_header_t );
}

# 59 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__maxPayloadLength(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = RF230DriverLayerP__RadioPacket__maxPayloadLength();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 105 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__maxPayloadLength(void )
{
  return /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__maxPayloadLength();
}

# 59 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__maxPayloadLength(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__maxPayloadLength();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 131 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__maxPayloadLength(void )
{
  return /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__maxPayloadLength();
}

# 59 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__maxPayloadLength(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__maxPayloadLength();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 297 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__maxPayloadLength(void )
{
  return /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__maxPayloadLength() - sizeof(ieee154_simple_header_t );
}

# 59 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__maxPayloadLength(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__maxPayloadLength();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 169 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__maxPayloadLength(void )
{
  return /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__maxPayloadLength() - /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__PAYLOAD_OFFSET;
}

# 59 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__maxPayloadLength(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__maxPayloadLength();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 240 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__maxPayloadLength(void )
{
  return /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__maxPayloadLength() - sizeof(activemessage_header_t );
}

#line 277
static inline void */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__getPayload(message_t *msg, uint8_t len)
{
  if (len > /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__maxPayloadLength()) {
    return (void *)0;
    }
  return (void *)msg + /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__headerLength(msg);
}

#line 117
static __inline void */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__getPayload(am_id_t id, message_t *msg, uint8_t len)
{
  return /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__getPayload(msg, len);
}

# 135 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
inline static void * /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__getPayload(am_id_t arg_0x7fa21e360488, message_t * msg, uint8_t len){
#line 135
  void *__nesc_result;
#line 135

#line 135
  __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__getPayload(arg_0x7fa21e360488, msg, len);
#line 135

#line 135
  return __nesc_result;
#line 135
}
#line 135
# 211 "/opt/tinyos-2.1.2/tos/system/AMQueueImplP.nc"
static inline void */*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__getPayload(uint8_t id, message_t *m, uint8_t len)
#line 211
{
  return /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__getPayload(0, m, len);
}

# 125 "/opt/tinyos-2.1.2/tos/interfaces/Send.nc"
inline static void * /*ObjectTransferC.SendReqMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__getPayload(message_t * msg, uint8_t len){
#line 125
  void *__nesc_result;
#line 125

#line 125
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__getPayload(1U, msg, len);
#line 125

#line 125
  return __nesc_result;
#line 125
}
#line 125
# 73 "/opt/tinyos-2.1.2/tos/system/AMQueueEntryP.nc"
static inline void */*ObjectTransferC.SendReqMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__getPayload(message_t *m, uint8_t len)
#line 73
{
  return /*ObjectTransferC.SendReqMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__getPayload(m, len);
}

# 135 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
inline static void * DelugePageTransferP__SendReqMsg__getPayload(message_t * msg, uint8_t len){
#line 135
  void *__nesc_result;
#line 135

#line 135
  __nesc_result = /*ObjectTransferC.SendReqMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__getPayload(msg, len);
#line 135

#line 135
  return __nesc_result;
#line 135
}
#line 135
# 46 "/opt/tinyos-2.1.2/tos/interfaces/Random.nc"
inline static uint32_t DelugePageTransferP__Random__rand32(void ){
#line 46
  unsigned long __nesc_result;
#line 46

#line 46
  __nesc_result = RandomMlcgC__Random__rand32();
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 75 "/opt/tinyos-2.1.2/tos/interfaces/Send.nc"
inline static error_t /*ObjectTransferC.SendReqMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(1U, msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 204 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setType(message_t *msg, am_id_t type)
{
  __nesc_hton_uint8(/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getHeader(msg)->type.nxdata, type);
}

# 162 "/opt/tinyos-2.1.2/tos/interfaces/AMPacket.nc"
inline static void /*ObjectTransferC.SendReqMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMPacket__setType(message_t * amsg, am_id_t t){
#line 162
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setType(amsg, t);
#line 162
}
#line 162
# 327 "/usr/lib/x86_64-linux-gnu/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_hton_leuint16(void * target, uint16_t value)
#line 327
{
  uint8_t *base = target;

#line 329
  base[0] = value;
  base[1] = value >> 8;
  return value;
}

# 183 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestAddr(message_t *msg, uint16_t addr)
{
  __nesc_hton_leuint16(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->dest.nxdata, addr);
}

# 146 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void RF230RadioP__Ieee154PacketLayer__setDestAddr(message_t *msg, uint16_t addr){
#line 146
  /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestAddr(msg, addr);
#line 146
}
#line 146
# 178 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230RadioP.nc"
static inline void RF230RadioP__ActiveMessageConfig__setDestination(message_t *msg, am_addr_t addr)
{
  RF230RadioP__Ieee154PacketLayer__setDestAddr(msg, addr);
}

# 43 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
inline static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setDestination(message_t *msg, am_addr_t addr){
#line 43
  RF230RadioP__ActiveMessageConfig__setDestination(msg, addr);
#line 43
}
#line 43
# 184 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setDestination(message_t *msg, am_addr_t addr)
{
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setDestination(msg, addr);
}

# 103 "/opt/tinyos-2.1.2/tos/interfaces/AMPacket.nc"
inline static void /*ObjectTransferC.SendReqMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMPacket__setDestination(message_t * amsg, am_addr_t addr){
#line 103
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setDestination(amsg, addr);
#line 103
}
#line 103
# 53 "/opt/tinyos-2.1.2/tos/system/AMQueueEntryP.nc"
static inline error_t /*ObjectTransferC.SendReqMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 55
{
  /*ObjectTransferC.SendReqMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMPacket__setDestination(msg, dest);
  /*ObjectTransferC.SendReqMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMPacket__setType(msg, 81U);
  return /*ObjectTransferC.SendReqMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__send(msg, len);
}

# 80 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
inline static error_t DelugePageTransferP__SendReqMsg__send(am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*ObjectTransferC.SendReqMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__send(addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 54 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length){
#line 54
  RF230DriverLayerP__RadioPacket__setPayloadLength(msg, length);
#line 54
}
#line 54
# 100 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline void /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length)
{
  /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__setPayloadLength(msg, length);
}

# 54 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length){
#line 54
  /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__setPayloadLength(msg, length);
#line 54
}
#line 54
# 126 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length)
{
  /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__setPayloadLength(msg, length);
}

# 54 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length){
#line 54
  /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__setPayloadLength(msg, length);
#line 54
}
#line 54
# 292 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length)
{
  /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__setPayloadLength(msg, length + sizeof(ieee154_simple_header_t ));
}

# 54 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length){
#line 54
  /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__setPayloadLength(msg, length);
#line 54
}
#line 54
# 164 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline void /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__setPayloadLength(message_t *msg, uint8_t length)
{
  /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__setPayloadLength(msg, length + /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__PAYLOAD_OFFSET);
}

# 54 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioPacket.nc"
inline static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__setPayloadLength(message_t *msg, uint8_t length){
#line 54
  /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__setPayloadLength(msg, length);
#line 54
}
#line 54
# 235 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__setPayloadLength(message_t *msg, uint8_t length)
{
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__setPayloadLength(msg, length + sizeof(activemessage_header_t ));
}

#line 267
static inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__setPayloadLength(message_t *msg, uint8_t len)
{
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__setPayloadLength(msg, len);
}

# 94 "/opt/tinyos-2.1.2/tos/interfaces/Packet.nc"
inline static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__setPayloadLength(message_t * msg, uint8_t len){
#line 94
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__setPayloadLength(msg, len);
#line 94
}
#line 94
# 199 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline am_id_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__type(message_t *msg)
{
  return __nesc_ntoh_uint8(/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getHeader(msg)->type.nxdata);
}

# 147 "/opt/tinyos-2.1.2/tos/interfaces/AMPacket.nc"
inline static am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(message_t * amsg){
#line 147
  unsigned char __nesc_result;
#line 147

#line 147
  __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__type(amsg);
#line 147

#line 147
  return __nesc_result;
#line 147
}
#line 147
# 322 "/usr/lib/x86_64-linux-gnu/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_ntoh_leuint16(const void * source)
#line 322
{
  const uint8_t *base = source;

#line 324
  return ((uint16_t )base[1] << 8) | base[0];
}

# 178 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline uint16_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(message_t *msg)
{
  return __nesc_ntoh_leuint16(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->dest.nxdata);
}

# 141 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static uint16_t RF230RadioP__Ieee154PacketLayer__getDestAddr(message_t *msg){
#line 141
  unsigned short __nesc_result;
#line 141

#line 141
  __nesc_result = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(msg);
#line 141

#line 141
  return __nesc_result;
#line 141
}
#line 141
# 173 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230RadioP.nc"
static inline am_addr_t RF230RadioP__ActiveMessageConfig__destination(message_t *msg)
{
  return RF230RadioP__Ieee154PacketLayer__getDestAddr(msg);
}

# 40 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
inline static am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__destination(message_t *msg){
#line 40
  unsigned short __nesc_result;
#line 40

#line 40
  __nesc_result = RF230RadioP__ActiveMessageConfig__destination(msg);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 179 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__destination(message_t *msg)
{
  return /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__destination(msg);
}

# 78 "/opt/tinyos-2.1.2/tos/interfaces/AMPacket.nc"
inline static am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(message_t * amsg){
#line 78
  unsigned short __nesc_result;
#line 78

#line 78
  __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__destination(amsg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 80 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(am_id_t arg_0x7fa21e360488, am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__send(arg_0x7fa21e360488, addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 97 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createDataFrame(message_t *msg)
{

  __nesc_hton_leuint16(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->fcf.nxdata, (__nesc_ntoh_leuint16(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->fcf.nxdata) & /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_PRESERVE)
   | /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_VALUE);
}

# 69 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void RF230RadioP__Ieee154PacketLayer__createDataFrame(message_t *msg){
#line 69
  /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createDataFrame(msg);
#line 69
}
#line 69
# 92 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isDataFrame(message_t *msg)
{
  return (__nesc_ntoh_leuint16(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->fcf.nxdata) & /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_MASK) == /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_DATA_FRAME_VALUE;
}

# 63 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool RF230RadioP__Ieee154PacketLayer__isDataFrame(message_t *msg){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isDataFrame(msg);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 203 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230RadioP.nc"
static inline error_t RF230RadioP__ActiveMessageConfig__checkFrame(message_t *msg)
{
  if (!RF230RadioP__Ieee154PacketLayer__isDataFrame(msg)) {
    RF230RadioP__Ieee154PacketLayer__createDataFrame(msg);
    }
  return SUCCESS;
}

# 63 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
inline static error_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__checkFrame(message_t *msg){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = RF230RadioP__ActiveMessageConfig__checkFrame(msg);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 193 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setSrcAddr(message_t *msg, uint16_t addr)
{
  __nesc_hton_leuint16(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->src.nxdata, addr);
}

# 156 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void RF230RadioP__Ieee154PacketLayer__setSrcAddr(message_t *msg, uint16_t addr){
#line 156
  /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setSrcAddr(msg, addr);
#line 156
}
#line 156
# 188 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230RadioP.nc"
static inline void RF230RadioP__ActiveMessageConfig__setSource(message_t *msg, am_addr_t addr)
{
  RF230RadioP__Ieee154PacketLayer__setSrcAddr(msg, addr);
}

# 49 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
inline static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setSource(message_t *msg, am_addr_t addr){
#line 49
  RF230RadioP__ActiveMessageConfig__setSource(msg, addr);
#line 49
}
#line 49
# 194 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setSource(message_t *msg, am_addr_t addr)
{
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setSource(msg, addr);
}

# 173 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestPan(message_t *msg, uint16_t pan)
{
  __nesc_hton_leuint16(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->destpan.nxdata, pan);
}

# 136 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void RF230RadioP__Ieee154PacketLayer__setDestPan(message_t *msg, uint16_t pan){
#line 136
  /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDestPan(msg, pan);
#line 136
}
#line 136
# 198 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230RadioP.nc"
static inline void RF230RadioP__ActiveMessageConfig__setGroup(message_t *msg, am_group_t grp)
{
  RF230RadioP__Ieee154PacketLayer__setDestPan(msg, grp);
}

# 55 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
inline static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setGroup(message_t *msg, am_group_t grp){
#line 55
  RF230RadioP__ActiveMessageConfig__setGroup(msg, grp);
#line 55
}
#line 55
# 214 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setGroup(message_t *msg, am_group_t grp)
{
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__setGroup(msg, grp);
}

# 55 "/opt/tinyos-2.1.2/tos/interfaces/ActiveMessageAddress.nc"
inline static am_group_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ActiveMessageAddress__amGroup(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = ActiveMessageAddressC__ActiveMessageAddress__amGroup();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 168 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline am_group_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__localGroup(void )
{
  return /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ActiveMessageAddress__amGroup();
}

#line 122
static inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SendNotifier__default__aboutToSend(am_id_t id, am_addr_t addr, message_t *msg)
{
}

# 59 "/opt/tinyos-2.1.2/tos/interfaces/SendNotifier.nc"
inline static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SendNotifier__aboutToSend(am_id_t arg_0x7fa21e184020, am_addr_t dest, message_t * msg){
#line 59
    /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SendNotifier__default__aboutToSend(arg_0x7fa21e184020, dest, msg);
#line 59
}
#line 59
# 64 "/opt/tinyos-2.1.2/tos/system/FcfsResourceQueueC.nc"
static inline bool /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id)
#line 64
{
  /* atomic removed: atomic calls only */
#line 65
  {
    unsigned char __nesc_temp = 
#line 65
    /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ[id] != /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY || /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qTail == id;

#line 65
    return __nesc_temp;
  }
}

#line 82
static inline error_t /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id)
#line 82
{
  /* atomic removed: atomic calls only */
#line 83
  {
    if (!/*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(id)) {
        if (/*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead == /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
          /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead = id;
          }
        else {
#line 88
          /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ[/*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qTail] = id;
          }
#line 89
        /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qTail = id;
        {
          unsigned char __nesc_temp = 
#line 90
          SUCCESS;

#line 90
          return __nesc_temp;
        }
      }
#line 92
    {
      unsigned char __nesc_temp = 
#line 92
      EBUSY;

#line 92
      return __nesc_temp;
    }
  }
}

# 79 "/opt/tinyos-2.1.2/tos/interfaces/ResourceQueue.nc"
inline static error_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__enqueue(resource_client_id_t id){
#line 79
  unsigned char __nesc_result;
#line 79

#line 79
  __nesc_result = /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(id);
#line 79

#line 79
  return __nesc_result;
#line 79
}
#line 79
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
inline static error_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 160 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
static inline void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(uint8_t id)
#line 160
{
}

# 53 "/opt/tinyos-2.1.2/tos/interfaces/ResourceRequested.nc"
inline static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__requested(uint8_t arg_0x7fa21e0aa020){
#line 53
    /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(arg_0x7fa21e0aa020);
#line 53
}
#line 53
# 70 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
static inline error_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__request(uint8_t id)
#line 70
{
  /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__requested(/*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 72
    {
      if (/*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state == /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_IDLE) {
          /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state = /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_GRANTING;
          /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId = id;
          /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__postTask();
          {
            unsigned char __nesc_temp = 
#line 77
            SUCCESS;

            {
#line 77
              __nesc_atomic_end(__nesc_atomic); 
#line 77
              return __nesc_temp;
            }
          }
        }
#line 79
      {
        unsigned char __nesc_temp = 
#line 79
        /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__enqueue(id);

        {
#line 79
          __nesc_atomic_end(__nesc_atomic); 
#line 79
          return __nesc_temp;
        }
      }
    }
#line 82
    __nesc_atomic_end(__nesc_atomic); }
}

# 88 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__request(0U);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
#line 120
inline static error_t /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__release(0U);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 46 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/BareSend.nc"
inline static error_t /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__send(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__send(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 164 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
static inline void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(uint8_t id)
#line 164
{
}

# 59 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
inline static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(uint8_t arg_0x7fa21e0a8538){
#line 59
    /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(arg_0x7fa21e0a8538);
#line 59
}
#line 59
# 162 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
static inline void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__immediateRequested(uint8_t id)
#line 162
{
}

# 61 "/opt/tinyos-2.1.2/tos/interfaces/ResourceRequested.nc"
inline static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__immediateRequested(uint8_t arg_0x7fa21e0aa020){
#line 61
    /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__immediateRequested(arg_0x7fa21e0aa020);
#line 61
}
#line 61
# 83 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
static inline error_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__immediateRequest(uint8_t id)
#line 83
{
  /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceRequested__immediateRequested(/*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 85
    {
      if (/*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state == /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_IDLE) {
          /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state = /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_BUSY;
          /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId = id;
          /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(/*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId);
          {
            unsigned char __nesc_temp = 
#line 90
            SUCCESS;

            {
#line 90
              __nesc_atomic_end(__nesc_atomic); 
#line 90
              return __nesc_temp;
            }
          }
        }
#line 92
      {
        unsigned char __nesc_temp = 
#line 92
        FAIL;

        {
#line 92
          __nesc_atomic_end(__nesc_atomic); 
#line 92
          return __nesc_temp;
        }
      }
    }
#line 95
    __nesc_atomic_end(__nesc_atomic); }
}

# 97 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__immediateRequest(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__immediateRequest(0U);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 53 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/AutoResourceAcquireLayerC.nc"
static inline error_t /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__send(message_t *msg)
{
  if (/*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__immediateRequest() == SUCCESS) 
    {
      error_t result = /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__send(msg);

#line 58
      if (result != SUCCESS) {
        /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__release();
        }
      return result;
    }

  /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__pending = msg;
  return /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__request();
}

# 46 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/BareSend.nc"
inline static error_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__send(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__send(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 79 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/Tasklet.nc"
inline static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__resume(void ){
#line 79
  TaskletC__Tasklet__resume();
#line 79
}
#line 79
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
inline static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 94 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/TaskletC.nc"
static __inline void TaskletC__Tasklet__suspend(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 96
    ++TaskletC__state;
#line 96
    __nesc_atomic_end(__nesc_atomic); }
}

# 72 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/Tasklet.nc"
inline static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__suspend(void ){
#line 72
  TaskletC__Tasklet__suspend();
#line 72
}
#line 72
# 230 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__send(message_t *msg)
{
  error_t result;

  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__suspend();

  if (/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state != /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_READY) {
    result = EBUSY;
    }
  else {
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txMsg = msg;
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_PENDING;
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__retries = 0;
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__postTask();
      result = SUCCESS;
    }

  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__resume();

  return result;
}

# 46 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/BareSend.nc"
inline static error_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__send(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__send(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 297 "/usr/lib/x86_64-linux-gnu/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_hton_leuint8(void * target, uint8_t value)
#line 297
{
  uint8_t *base = target;

#line 299
  base[0] = value;
  return value;
}

# 163 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDSN(message_t *msg, uint8_t dsn)
{
  __nesc_hton_leuint8(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->dsn.nxdata, dsn);
}

# 125 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void RF230RadioP__Ieee154PacketLayer__setDSN(message_t *msg, uint8_t dsn){
#line 125
  /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__setDSN(msg, dsn);
#line 125
}
#line 125
# 154 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230RadioP.nc"
static inline void RF230RadioP__UniqueConfig__setSequenceNumber(message_t *msg, uint8_t dsn)
{
  RF230RadioP__Ieee154PacketLayer__setDSN(msg, dsn);
}

# 52 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/UniqueConfig.nc"
inline static void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__setSequenceNumber(message_t *msg, uint8_t number){
#line 52
  RF230RadioP__UniqueConfig__setSequenceNumber(msg, number);
#line 52
}
#line 52
# 69 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline error_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__send(message_t *msg)
{
  /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__setSequenceNumber(msg, ++/*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__sequenceNumber);
  return /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__send(msg);
}

# 46 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/BareSend.nc"
inline static error_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__send(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__send(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 59 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/Tasklet.nc"
inline static void RF230DriverLayerP__Tasklet__schedule(void ){
#line 59
  TaskletC__Tasklet__schedule();
#line 59
}
#line 59
# 613 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230DriverLayerP.nc"
static inline void RF230DriverLayerP__RadioCCA__default__done(error_t error)
#line 613
{
}

# 52 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioCCA.nc"
inline static void RF230DriverLayerP__RadioCCA__done(error_t error){
#line 52
  RF230DriverLayerP__RadioCCA__default__done(error);
#line 52
}
#line 52
# 115 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline uint8_t HplAtm128SpiP__SPI__read(void )
#line 115
{
#line 115
  return * (volatile uint8_t *)(0X2E + 0x20);
}

# 97 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128Spi.nc"
inline static uint8_t Atm128SpiP__Spi__read(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = HplAtm128SpiP__SPI__read();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 124 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline bool HplAtm128SpiP__SPI__isInterruptPending(void )
#line 124
{
  return (* (volatile uint8_t *)(0x2D + 0x20) & (1 << 7)) != 0;
}

# 136 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128Spi.nc"
inline static bool Atm128SpiP__Spi__isInterruptPending(void ){
#line 136
  unsigned char __nesc_result;
#line 136

#line 136
  __nesc_result = HplAtm128SpiP__SPI__isInterruptPending();
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 196 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128SpiP.nc"
static __inline uint8_t Atm128SpiP__FastSpiByte__splitRead(void )
#line 196
{
  while (!Atm128SpiP__Spi__isInterruptPending()) 
    ;
  return Atm128SpiP__Spi__read();
}

# 68 "/opt/tinyos-2.1.2/tos/interfaces/FastSpiByte.nc"
inline static uint8_t RF230DriverLayerP__FastSpiByte__splitRead(void ){
#line 68
  unsigned char __nesc_result;
#line 68

#line 68
  __nesc_result = Atm128SpiP__FastSpiByte__splitRead();
#line 68

#line 68
  return __nesc_result;
#line 68
}
#line 68
# 116 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__write(uint8_t d)
#line 116
{
#line 116
  * (volatile uint8_t *)(0X2E + 0x20) = d;
}

# 103 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__write(uint8_t data){
#line 103
  HplAtm128SpiP__SPI__write(data);
#line 103
}
#line 103
# 202 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128SpiP.nc"
static __inline uint8_t Atm128SpiP__FastSpiByte__splitReadWrite(uint8_t data)
#line 202
{
  uint8_t b;

  while (!Atm128SpiP__Spi__isInterruptPending()) 
    ;

  b = Atm128SpiP__Spi__read();
  Atm128SpiP__Spi__write(data);

  return b;
}

# 74 "/opt/tinyos-2.1.2/tos/interfaces/FastSpiByte.nc"
inline static uint8_t RF230DriverLayerP__FastSpiByte__splitReadWrite(uint8_t data){
#line 74
  unsigned char __nesc_result;
#line 74

#line 74
  __nesc_result = Atm128SpiP__FastSpiByte__splitReadWrite(data);
#line 74

#line 74
  return __nesc_result;
#line 74
}
#line 74
# 192 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128SpiP.nc"
static __inline void Atm128SpiP__FastSpiByte__splitWrite(uint8_t data)
#line 192
{
  Atm128SpiP__Spi__write(data);
}

# 62 "/opt/tinyos-2.1.2/tos/interfaces/FastSpiByte.nc"
inline static void RF230DriverLayerP__FastSpiByte__splitWrite(uint8_t data){
#line 62
  Atm128SpiP__FastSpiByte__splitWrite(data);
#line 62
}
#line 62
# 56 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )37U &= ~(1 << 0);
}

# 41 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void RF230DriverLayerP__SELN__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr();
#line 41
}
#line 41
# 167 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230DriverLayerP.nc"
static __inline uint8_t RF230DriverLayerP__readRegister(uint8_t reg)
{
  for (; 0; ) ;
  for (; 0; ) ;

  RF230DriverLayerP__SELN__clr();
  RF230DriverLayerP__FastSpiByte__splitWrite(RF230_CMD_REGISTER_READ | reg);
  RF230DriverLayerP__FastSpiByte__splitReadWrite(0);
  reg = RF230DriverLayerP__FastSpiByte__splitRead();
  RF230DriverLayerP__SELN__set();

  return reg;
}

#line 192
static inline void RF230DriverLayerP__RadioAlarm__fired(void )
{
  if (RF230DriverLayerP__state == RF230DriverLayerP__STATE_SLEEP_2_TRX_OFF) {
    RF230DriverLayerP__state = RF230DriverLayerP__STATE_TRX_OFF;
    }
  else {
#line 196
    if (RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_CCA) 
      {
        uint8_t cca;

        for (; 0; ) ;

        RF230DriverLayerP__cmd = RF230DriverLayerP__CMD_NONE;
        cca = RF230DriverLayerP__readRegister(RF230_TRX_STATUS);

        for (; 0; ) ;

        RF230DriverLayerP__RadioCCA__done(cca & RF230_CCA_DONE ? cca & RF230_CCA_STATUS ? SUCCESS : EBUSY : FAIL);
      }
    else {
      for (; 0; ) ;
      }
    }
  RF230DriverLayerP__Tasklet__schedule();
}

# 56 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioSend.nc"
inline static void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__sendDone(error_t error){
#line 56
  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__sendDone(error);
#line 56
}
#line 56
# 155 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__sendDone(error_t error)
{
  for (; 0; ) ;

  /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_READY;
  /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__sendDone(error);
}

# 56 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioSend.nc"
inline static void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__sendDone(error_t error){
#line 56
  /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__sendDone(error);
#line 56
}
#line 56
# 140 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230RadioP.nc"
static inline void RF230RadioP__SoftwareAckConfig__reportChannelError(void )
{
}

# 86 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__reportChannelError(void ){
#line 86
  RF230RadioP__SoftwareAckConfig__reportChannelError();
#line 86
}
#line 86
# 124 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/SoftwareAckLayerC.nc"
static inline void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__fired(void )
{
  for (; 0; ) ;

  /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__reportChannelError();

  /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state = /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_READY;
  /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__sendDone(SUCCESS);
}

# 262 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230RadioP.nc"
static inline uint16_t RF230RadioP__RandomCollisionConfig__getCongestionBackoff(message_t *msg)
{
  return (uint16_t )(2240 * (73728UL / 8 / 32) * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 10000UL);
}

# 46 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/RandomCollisionConfig.nc"
inline static uint16_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getCongestionBackoff(message_t *msg){
#line 46
  unsigned short __nesc_result;
#line 46

#line 46
  __nesc_result = RF230RadioP__RandomCollisionConfig__getCongestionBackoff(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 83 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230RadioP.nc"
static inline uint8_t RF230RadioP__RF230DriverConfig__metadataLength(message_t *msg)
{
  return 0;
}

# 52 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230DriverConfig.nc"
inline static uint8_t RF230DriverLayerP__Config__metadataLength(message_t *msg){
#line 52
  unsigned char __nesc_result;
#line 52

#line 52
  __nesc_result = RF230RadioP__RF230DriverConfig__metadataLength(msg);
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 922 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230DriverLayerP.nc"
static inline uint8_t RF230DriverLayerP__RadioPacket__metadataLength(message_t *msg)
{
  return RF230DriverLayerP__Config__metadataLength(msg) + sizeof(rf230_metadata_t );
}

# 65 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__metadataLength(message_t *msg){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = RF230DriverLayerP__RadioPacket__metadataLength(msg);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 110 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__metadataLength(message_t *msg)
{
  return /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__metadataLength(msg) + sizeof(flags_metadata_t );
}

#line 54
static inline flags_metadata_t */*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__getMeta(message_t *msg)
{
  return (void *)msg + sizeof(message_t ) - /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__metadataLength(msg);
}

#line 73
static inline void /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(uint8_t bit, message_t *msg)
{
  for (; 0; ) ;

  /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__getMeta(msg)->flags &= ~(1 << bit);
}

# 55 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/PacketFlag.nc"
inline static void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__clear(message_t *msg){
#line 55
  /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(0U, msg);
#line 55
}
#line 55
# 48 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioSend.nc"
inline static error_t /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__send(message_t *msg){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = RF230DriverLayerP__RadioSend__send(msg);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 78 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/SoftwareAckLayerC.nc"
static inline error_t /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__send(message_t *msg)
{
  error_t error;

  if (/*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state == /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_READY) 
    {
      if ((error = /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__send(msg)) == SUCCESS) 
        {
          /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__clear(msg);
          /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state = /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_DATA_SEND;
          /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__txMsg = msg;
        }
    }
  else {
    error = EBUSY;
    }
  return error;
}

# 48 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioSend.nc"
inline static error_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__send(message_t *msg){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__send(msg);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
#line 63
inline static void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__ready(void ){
#line 63
  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__ready();
#line 63
}
#line 63
# 90 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline uint16_t HplAtm1281Timer1P__Timer__get(void )
#line 90
{
#line 90
  return * (volatile uint16_t *)0x84;
}

# 61 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__timer_size /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__get(void ){
#line 61
  unsigned short __nesc_result;
#line 61

#line 61
  __nesc_result = HplAtm1281Timer1P__Timer__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 62 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__getNow(void )
#line 62
{
  return /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__get();
}

# 109 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
inline static /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__size_type /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__getNow(void ){
#line 109
  unsigned short __nesc_result;
#line 109

#line 109
  __nesc_result = /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 76 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioAlarmP.nc"
static __inline tradio_size /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__getNow(uint8_t id)
{
  return /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__getNow();
}

# 65 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioAlarm.nc"
inline static tradio_size /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__getNow(void ){
#line 65
  unsigned short __nesc_result;
#line 65

#line 65
  __nesc_result = /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__getNow(1U);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 110 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__fired(void )
{
  error_t error;
  int16_t delay;

  for (; 0; ) ;

  delay = (int16_t )/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txBarrier - /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__getNow();

  if (/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state == /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER) 
    {
      /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_READY;

      /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__ready();
      return;
    }
  else {
#line 126
    if (/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state & /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER && delay > 0) {
      error = EBUSY;
      }
    else {
#line 129
      error = /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__send(/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txMsg);
      }
    }
#line 131
  if (error != SUCCESS) 
    {
      if ((/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state & ~/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER) == /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_TX_PENDING_FIRST) 
        {
          /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = (/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state & /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER) | /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_TX_PENDING_SECOND;
          /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__wait(/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__getBackoff(/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getCongestionBackoff(/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txMsg)));
        }
      else 
        {
          if (/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state & /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER && delay > 0) 
            {
              /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER;
              /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__wait(delay);
            }
          else {
            /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_READY;
            }
          /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__sendDone(error);
        }
    }
  else {
    /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_TX_SENDING;
    }
}

# 285 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230RadioP.nc"
static inline void RF230RadioP__RadioAlarm__fired(void )
{
}

# 90 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioAlarmP.nc"
static inline void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__default__fired(uint8_t id)
{
}

# 60 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioAlarm.nc"
inline static void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__fired(uint8_t arg_0x7fa21e1d3220){
#line 60
  switch (arg_0x7fa21e1d3220) {
#line 60
    case 0U:
#line 60
      RF230RadioP__RadioAlarm__fired();
#line 60
      break;
#line 60
    case 1U:
#line 60
      /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__fired();
#line 60
      break;
#line 60
    case 2U:
#line 60
      /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__fired();
#line 60
      break;
#line 60
    case 3U:
#line 60
      RF230DriverLayerP__RadioAlarm__fired();
#line 60
      break;
#line 60
    default:
#line 60
      /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__default__fired(arg_0x7fa21e1d3220);
#line 60
      break;
#line 60
    }
#line 60
}
#line 60
# 81 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioAlarmP.nc"
static inline void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__run(void )
{
  if (/*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state == /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__STATE_FIRED) 
    {
      /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state = /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__STATE_READY;
      /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__fired(/*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__alarm);
    }
}

# 261 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__run(void )
{
}

# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
inline static error_t RF230DriverLayerP__releaseSpi__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(RF230DriverLayerP__releaseSpi);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 94 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioAlarmP.nc"
static __inline bool /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__isFree(uint8_t id)
{
  return /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state == /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__STATE_READY;
}

# 45 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioAlarm.nc"
inline static bool /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__isFree(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__isFree(1U);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 71 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__ready(void )
{
  if (/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state == /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_READY && /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__isFree()) {
    /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__ready();
    }
}

# 63 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioSend.nc"
inline static void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__ready(void ){
#line 63
  /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubSend__ready();
#line 63
}
#line 63
# 72 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/SoftwareAckLayerC.nc"
static inline void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__ready(void )
{
  if (/*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state == /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_READY) {
    /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__ready();
    }
}

# 63 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioSend.nc"
inline static void RF230DriverLayerP__RadioSend__ready(void ){
#line 63
  /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__ready();
#line 63
}
#line 63
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
inline static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 163 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__done(void )
{
  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__postTask();
}

# 69 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioState.nc"
inline static void RF230DriverLayerP__RadioState__done(void ){
#line 69
  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__done();
#line 69
}
#line 69
# 155 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230DriverLayerP.nc"
static __inline void RF230DriverLayerP__writeRegister(uint8_t reg, uint8_t value)
{
  for (; 0; ) ;
  for (; 0; ) ;

  RF230DriverLayerP__SELN__clr();
  RF230DriverLayerP__FastSpiByte__splitWrite(RF230_CMD_REGISTER_WRITE | reg);
  RF230DriverLayerP__FastSpiByte__splitReadWrite(value);
  RF230DriverLayerP__FastSpiByte__splitRead();
  RF230DriverLayerP__SELN__set();
}

#line 324
static __inline void RF230DriverLayerP__changeChannel(void )
{
  for (; 0; ) ;
  for (; 0; ) ;

  if (RF230DriverLayerP__isSpiAcquired()) 
    {
      RF230DriverLayerP__writeRegister(RF230_PHY_CC_CCA, RF230_CCA_MODE_VALUE | RF230DriverLayerP__channel);

      if (RF230DriverLayerP__state == RF230DriverLayerP__STATE_RX_ON) {
        RF230DriverLayerP__state = RF230DriverLayerP__STATE_TRX_OFF_2_RX_ON;
        }
      else {
#line 336
        RF230DriverLayerP__cmd = RF230DriverLayerP__CMD_SIGNAL_DONE;
        }
    }
}

# 55 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )37U |= 1 << 7;
}

# 40 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void RF230DriverLayerP__SLP_TR__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__set();
#line 40
}
#line 40
# 89 "/opt/tinyos-2.1.2/tos/platforms/iris/chips/rf230/HplRF230P.nc"
static inline void HplRF230P__IRQ__disable(void )
{
  HplRF230P__Capture__stop();
}

# 66 "/opt/tinyos-2.1.2/tos/interfaces/GpioCapture.nc"
inline static void RF230DriverLayerP__IRQ__disable(void ){
#line 66
  HplRF230P__IRQ__disable();
#line 66
}
#line 66
# 165 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__Capture__start(void )
#line 165
{
#line 165
  * (volatile uint8_t *)0x6F |= 1 << 5;
}

# 67 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void HplRF230P__Capture__start(void ){
#line 67
  HplAtm1281Timer1P__Capture__start();
#line 67
}
#line 67
# 159 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__Capture__reset(void )
#line 159
{
#line 159
  * (volatile uint8_t *)(0x16 + 0x20) = 1 << 5;
}

# 64 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void HplRF230P__Capture__reset(void ){
#line 64
  HplAtm1281Timer1P__Capture__reset();
#line 64
}
#line 64
# 155 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__Capture__setEdge(bool up)
#line 155
{
#line 155
  if (up) {
#line 155
    * (volatile uint8_t *)0x81 |= 1 << 6;
    }
  else {
#line 155
    * (volatile uint8_t *)0x81 &= ~(1 << 6);
    }
}

# 88 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void HplRF230P__Capture__setEdge(bool up){
#line 88
  HplAtm1281Timer1P__Capture__setEdge(up);
#line 88
}
#line 88
# 74 "/opt/tinyos-2.1.2/tos/platforms/iris/chips/rf230/HplRF230P.nc"
static inline error_t HplRF230P__IRQ__captureRisingEdge(void )
{
  HplRF230P__Capture__setEdge(TRUE);
  HplRF230P__Capture__reset();
  HplRF230P__Capture__start();

  return SUCCESS;
}

# 53 "/opt/tinyos-2.1.2/tos/interfaces/GpioCapture.nc"
inline static error_t RF230DriverLayerP__IRQ__captureRisingEdge(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = HplRF230P__IRQ__captureRisingEdge();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 78 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__start(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size dt)
{
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__startAt(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__get(), dt);
}

# 66 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
inline static void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__start(/*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__size_type dt){
#line 66
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__start(dt);
#line 66
}
#line 66
# 99 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioAlarmP.nc"
static inline void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__wait(uint8_t id, tradio_size timeout)
{
  for (; 0; ) ;

  /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__alarm = id;
  /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state = /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__STATE_WAIT;
  /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__start(timeout);
}

# 50 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioAlarm.nc"
inline static void RF230DriverLayerP__RadioAlarm__wait(tradio_size timeout){
#line 50
  /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__wait(3U, timeout);
#line 50
}
#line 50
#line 45
inline static bool RF230DriverLayerP__RadioAlarm__isFree(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__isFree(3U);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 342 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230DriverLayerP.nc"
static __inline void RF230DriverLayerP__changeState(void )
{

  if ((
#line 344
  RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_STANDBY || RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_TURNON)
   && RF230DriverLayerP__state == RF230DriverLayerP__STATE_SLEEP && RF230DriverLayerP__RadioAlarm__isFree()) 
    {
      RF230DriverLayerP__SLP_TR__clr();

      RF230DriverLayerP__RadioAlarm__wait(RF230DriverLayerP__SLEEP_WAKEUP_TIME);
      RF230DriverLayerP__state = RF230DriverLayerP__STATE_SLEEP_2_TRX_OFF;
    }
  else {
#line 352
    if (RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_TURNON && RF230DriverLayerP__state == RF230DriverLayerP__STATE_TRX_OFF && RF230DriverLayerP__isSpiAcquired()) 
      {
        for (; 0; ) ;

        RF230DriverLayerP__readRegister(RF230_IRQ_STATUS);
        RF230DriverLayerP__IRQ__captureRisingEdge();


        RF230DriverLayerP__writeRegister(RF230_PHY_CC_CCA, RF230_CCA_MODE_VALUE | RF230DriverLayerP__channel);

        RF230DriverLayerP__writeRegister(RF230_TRX_STATE, RF230_RX_ON);
        RF230DriverLayerP__state = RF230DriverLayerP__STATE_TRX_OFF_2_RX_ON;
      }
    else {
#line 378
      if ((
#line 377
      RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_TURNOFF || RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_STANDBY)
       && RF230DriverLayerP__state == RF230DriverLayerP__STATE_RX_ON && RF230DriverLayerP__isSpiAcquired()) 
        {
          RF230DriverLayerP__writeRegister(RF230_TRX_STATE, RF230_FORCE_TRX_OFF);

          RF230DriverLayerP__IRQ__disable();
          RF230DriverLayerP__radioIrq = FALSE;

          RF230DriverLayerP__state = RF230DriverLayerP__STATE_TRX_OFF;
        }
      }
    }
#line 388
  if (RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_TURNOFF && RF230DriverLayerP__state == RF230DriverLayerP__STATE_TRX_OFF) 
    {
      RF230DriverLayerP__SLP_TR__set();
      RF230DriverLayerP__state = RF230DriverLayerP__STATE_SLEEP;
      RF230DriverLayerP__cmd = RF230DriverLayerP__CMD_SIGNAL_DONE;
    }
  else {
#line 394
    if (RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_STANDBY && RF230DriverLayerP__state == RF230DriverLayerP__STATE_TRX_OFF) {
      RF230DriverLayerP__cmd = RF230DriverLayerP__CMD_SIGNAL_DONE;
      }
    }
}

# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
inline static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 351 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline message_t */*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__receive(message_t *msg)
{
  message_t *m;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize >= /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE) {
        m = msg;
        }
      else {
          uint8_t idx = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead + /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize;

#line 362
          if (idx >= /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE) {
            idx -= /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE;
            }
          m = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[idx];
          /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[idx] = msg;

          ++/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize;
          /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__postTask();
        }
    }
#line 371
    __nesc_atomic_end(__nesc_atomic); }

  return m;
}

# 53 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioReceive.nc"
inline static message_t */*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__RadioReceive__receive(message_t *msg){
#line 53
  nx_struct message_t *__nesc_result;
#line 53

#line 53
  __nesc_result = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__receive(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 163 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/NeighborhoodP.nc"
static __inline void NeighborhoodP__NeighborhoodFlag__set(uint8_t bit, uint8_t idx)
{
  NeighborhoodP__flags[idx] |= 1 << bit;
}

# 51 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/NeighborhoodFlag.nc"
inline static void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__NeighborhoodFlag__set(uint8_t idx){
#line 51
  NeighborhoodP__NeighborhoodFlag__set(0U, idx);
#line 51
}
#line 51
# 164 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230RadioP.nc"
static inline void RF230RadioP__UniqueConfig__reportChannelError(void )
{
}

# 58 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/UniqueConfig.nc"
inline static void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__reportChannelError(void ){
#line 58
  RF230RadioP__UniqueConfig__reportChannelError();
#line 58
}
#line 58
# 158 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/NeighborhoodP.nc"
static __inline bool NeighborhoodP__NeighborhoodFlag__get(uint8_t bit, uint8_t idx)
{
  return NeighborhoodP__flags[idx] & (1 << bit);
}

# 46 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/NeighborhoodFlag.nc"
inline static bool /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__NeighborhoodFlag__get(uint8_t idx){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = NeighborhoodP__NeighborhoodFlag__get(0U, idx);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 292 "/usr/lib/x86_64-linux-gnu/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_leuint8(const void * source)
#line 292
{
  const uint8_t *base = source;

#line 294
  return base[0];
}

# 158 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDSN(message_t *msg)
{
  return __nesc_ntoh_leuint8(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->dsn.nxdata);
}

# 120 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static uint8_t RF230RadioP__Ieee154PacketLayer__getDSN(message_t *msg){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDSN(msg);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 149 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230RadioP.nc"
static inline uint8_t RF230RadioP__UniqueConfig__getSequenceNumber(message_t *msg)
{
  return RF230RadioP__Ieee154PacketLayer__getDSN(msg);
}

# 42 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/UniqueConfig.nc"
inline static uint8_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__getSequenceNumber(message_t *msg){
#line 42
  unsigned char __nesc_result;
#line 42

#line 42
  __nesc_result = RF230RadioP__UniqueConfig__getSequenceNumber(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 188 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline uint16_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getSrcAddr(message_t *msg)
{
  return __nesc_ntoh_leuint16(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->src.nxdata);
}

# 151 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static uint16_t RF230RadioP__Ieee154PacketLayer__getSrcAddr(message_t *msg){
#line 151
  unsigned short __nesc_result;
#line 151

#line 151
  __nesc_result = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getSrcAddr(msg);
#line 151

#line 151
  return __nesc_result;
#line 151
}
#line 151
# 159 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230RadioP.nc"
static inline am_addr_t RF230RadioP__UniqueConfig__getSender(message_t *msg)
{
  return RF230RadioP__Ieee154PacketLayer__getSrcAddr(msg);
}

# 47 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/UniqueConfig.nc"
inline static am_addr_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__getSender(message_t *msg){
#line 47
  unsigned short __nesc_result;
#line 47

#line 47
  __nesc_result = RF230RadioP__UniqueConfig__getSender(msg);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 116 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__evicted(uint8_t idx)
#line 116
{
}

# 80 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/Neighborhood.nc"
inline static void NeighborhoodP__Neighborhood__evicted(uint8_t idx){
#line 80
  /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__evicted(idx);
#line 80
}
#line 80
# 94 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/NeighborhoodP.nc"
static inline uint8_t NeighborhoodP__Neighborhood__insertNode(am_addr_t node)
{
  uint8_t i;
  uint8_t maxAge;

  if (NeighborhoodP__nodes[NeighborhoodP__last] == node) 
    {
      if (NeighborhoodP__ages[NeighborhoodP__last] == NeighborhoodP__time) {
        return NeighborhoodP__last;
        }
      NeighborhoodP__ages[NeighborhoodP__last] = ++NeighborhoodP__time;
      maxAge = 0x80;
    }
  else 
    {
      uint8_t oldest = 0;

#line 110
      maxAge = 0;

      for (i = 0; i < 5; ++i) 
        {
          uint8_t age;

          if (NeighborhoodP__nodes[i] == node) 
            {
              NeighborhoodP__last = i;
              if (NeighborhoodP__ages[i] == NeighborhoodP__time) {
                return i;
                }
              NeighborhoodP__ages[i] = ++NeighborhoodP__time;
              maxAge = 0x80;
              break;
            }

          age = NeighborhoodP__time - NeighborhoodP__ages[i];
          if (age > maxAge) 
            {
              maxAge = age;
              oldest = i;
            }
        }

      if (i == 5) 
        {
          NeighborhoodP__Neighborhood__evicted(oldest);

          NeighborhoodP__last = oldest;
          NeighborhoodP__nodes[oldest] = node;
          NeighborhoodP__ages[oldest] = ++NeighborhoodP__time;
          NeighborhoodP__flags[oldest] = 0;
        }
    }

  if ((NeighborhoodP__time & 0x7F) == 0x7F && maxAge >= 0x7F) 
    {
      for (i = 0; i < 5; ++i) 
        {
          if ((NeighborhoodP__ages[i] | 0x7F) != NeighborhoodP__time) {
            NeighborhoodP__ages[i] = NeighborhoodP__time & 0x80;
            }
        }
    }
  return NeighborhoodP__last;
}

# 71 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/Neighborhood.nc"
inline static uint8_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__insertNode(am_addr_t id){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = NeighborhoodP__Neighborhood__insertNode(id);
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 93 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline message_t */*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__receive(message_t *msg)
{
  uint8_t idx = /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Neighborhood__insertNode(/*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__getSender(msg));
  uint8_t dsn = /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__getSequenceNumber(msg);

  if (/*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__NeighborhoodFlag__get(idx)) 
    {
      uint8_t diff = dsn - /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__receivedNumbers[idx];

      if (diff == 0) 
        {
          /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__UniqueConfig__reportChannelError();
          return msg;
        }
    }
  else {
    /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__NeighborhoodFlag__set(idx);
    }
  /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__receivedNumbers[idx] = dsn;

  return /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__RadioReceive__receive(msg);
}

# 53 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioReceive.nc"
inline static message_t */*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioReceive__receive(message_t *msg){
#line 53
  nx_struct message_t *__nesc_result;
#line 53

#line 53
  __nesc_result = /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__receive(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 168 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool RF230RadioP__Ieee154PacketLayer__requiresAckReply(message_t *msg){
#line 168
  unsigned char __nesc_result;
#line 168

#line 168
  __nesc_result = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckReply(msg);
#line 168

#line 168
  return __nesc_result;
#line 168
}
#line 168
# 65 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioAlarm.nc"
inline static tradio_size RF230RadioP__RadioAlarm__getNow(void ){
#line 65
  unsigned short __nesc_result;
#line 65

#line 65
  __nesc_result = /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__getNow(0U);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 269 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230RadioP.nc"
static inline uint16_t RF230RadioP__RandomCollisionConfig__getTransmitBarrier(message_t *msg)
{
  uint16_t time;


  time = RF230RadioP__RadioAlarm__getNow();


  if (RF230RadioP__Ieee154PacketLayer__requiresAckReply(msg)) {
    time += (uint16_t )(32 * (-5 + 16 + 11 + 5) * (73728UL / 8 / 32) * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 10000UL);
    }
  else {
#line 280
    time += (uint16_t )(32 * (-5 + 5) * (73728UL / 8 / 32) * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 10000UL);
    }
  return time;
}

# 57 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/RandomCollisionConfig.nc"
inline static uint16_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getTransmitBarrier(message_t *msg){
#line 57
  unsigned short __nesc_result;
#line 57

#line 57
  __nesc_result = RF230RadioP__RandomCollisionConfig__getTransmitBarrier(msg);
#line 57

#line 57
  return __nesc_result;
#line 57
}
#line 57
# 168 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline message_t */*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__receive(message_t *msg)
{
  int16_t delay;

  /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txBarrier = /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getTransmitBarrier(msg);
  delay = /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txBarrier - /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__getNow();

  if (delay > 0) 
    {
      if (/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state == /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_READY) 
        {

          if (/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__isFree()) 
            {
              /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__wait(delay);
              /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER;
            }
        }
      else {
        /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state |= /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_BARRIER;
        }
    }
  return /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioReceive__receive(msg);
}

# 53 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioReceive.nc"
inline static message_t */*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioReceive__receive(message_t *msg){
#line 53
  nx_struct message_t *__nesc_result;
#line 53

#line 53
  __nesc_result = /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__receive(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 115 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline void /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createAckReply(message_t *data, message_t *ack)
{
  ieee154_simple_header_t *header = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(ack);

#line 118
  /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__setPayloadLength(ack, /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_LENGTH);

  __nesc_hton_leuint16(header->fcf.nxdata, /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_VALUE);
  __nesc_hton_leuint8(header->dsn.nxdata, __nesc_ntoh_leuint8(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(data)->dsn.nxdata));
}

# 88 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static void RF230RadioP__Ieee154PacketLayer__createAckReply(message_t *data, message_t *ack){
#line 88
  /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__createAckReply(data, ack);
#line 88
}
#line 88
# 126 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230RadioP.nc"
static inline void RF230RadioP__SoftwareAckConfig__createAckPacket(message_t *data, message_t *ack)
{
  RF230RadioP__Ieee154PacketLayer__createAckReply(data, ack);
}

# 80 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__createAckPacket(message_t *data, message_t *ack){
#line 80
  RF230RadioP__SoftwareAckConfig__createAckPacket(data, ack);
#line 80
}
#line 80
# 121 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230RadioP.nc"
static inline bool RF230RadioP__SoftwareAckConfig__requiresAckReply(message_t *msg)
{
  return RF230RadioP__Ieee154PacketLayer__requiresAckReply(msg);
}

# 75 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static bool /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__requiresAckReply(message_t *msg){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = RF230RadioP__SoftwareAckConfig__requiresAckReply(msg);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 50 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/PacketFlag.nc"
inline static void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__set(message_t *msg){
#line 50
  /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(0U, msg);
#line 50
}
#line 50
# 172 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__CompareA__stop(void )
#line 172
{
#line 172
  * (volatile uint8_t *)0x6F &= ~(1 << 1);
}

# 68 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__stop(void ){
#line 68
  HplAtm1281Timer1P__CompareA__stop();
#line 68
}
#line 68
# 74 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__stop(void )
#line 74
{
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__stop();
}

# 73 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
inline static void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__stop(void ){
#line 73
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__stop();
#line 73
}
#line 73
# 108 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioAlarmP.nc"
static inline void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__cancel(uint8_t id)
{
  for (; 0; ) ;
  for (; 0; ) ;

  /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__stop();
  /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state = /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__STATE_READY;
}

# 55 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioAlarm.nc"
inline static void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__cancel(void ){
#line 55
  /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__cancel(2U);
#line 55
}
#line 55
# 124 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__verifyAckReply(message_t *data, message_t *ack)
{
  ieee154_simple_header_t *header = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(ack);

  return __nesc_ntoh_leuint8(header->dsn.nxdata) == __nesc_ntoh_leuint8(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(data)->dsn.nxdata)
   && (__nesc_ntoh_leuint16(header->fcf.nxdata) & /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_MASK) == /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_VALUE;
}

# 94 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool RF230RadioP__Ieee154PacketLayer__verifyAckReply(message_t *data, message_t *ack){
#line 94
  unsigned char __nesc_result;
#line 94

#line 94
  __nesc_result = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__verifyAckReply(data, ack);
#line 94

#line 94
  return __nesc_result;
#line 94
}
#line 94
# 111 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230RadioP.nc"
static inline bool RF230RadioP__SoftwareAckConfig__verifyAckPacket(message_t *data, message_t *ack)
{
  return RF230RadioP__Ieee154PacketLayer__verifyAckReply(data, ack);
}

# 69 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static bool /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__verifyAckPacket(message_t *data, message_t *ack){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = RF230RadioP__SoftwareAckConfig__verifyAckPacket(data, ack);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 104 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isAckFrame(message_t *msg)
{
  return (__nesc_ntoh_leuint16(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->fcf.nxdata) & /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_MASK) == /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__IEEE154_ACK_FRAME_VALUE;
}

# 75 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool RF230RadioP__Ieee154PacketLayer__isAckFrame(message_t *msg){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isAckFrame(msg);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 106 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230RadioP.nc"
static inline bool RF230RadioP__SoftwareAckConfig__isAckPacket(message_t *msg)
{
  return RF230RadioP__Ieee154PacketLayer__isAckFrame(msg);
}

# 62 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static bool /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__isAckPacket(message_t *msg){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = RF230RadioP__SoftwareAckConfig__isAckPacket(msg);
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 147 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/SoftwareAckLayerC.nc"
static inline message_t */*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__receive(message_t *msg)
{
  for (; 0; ) ;

  if (/*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__isAckPacket(msg)) 
    {
      if (/*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state == /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_ACK_WAIT && /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__verifyAckPacket(/*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__txMsg, msg)) 
        {
          /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__cancel();
          /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__AckReceivedFlag__set(/*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__txMsg);

          /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state = /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_READY;
          /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__sendDone(SUCCESS);
        }

      return msg;
    }

  if (/*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state == /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_READY && /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__requiresAckReply(msg)) 
    {
      /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__createAckPacket(msg, &/*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__ackMsg);


      if (/*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__send(&/*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__ackMsg) == SUCCESS) {
        /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state = /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_ACK_SEND;
        }
      else {
#line 173
        for (; 0; ) ;
        }
    }
  return /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioReceive__receive(msg);
}

# 53 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioReceive.nc"
inline static message_t *RF230DriverLayerP__RadioReceive__receive(message_t *msg){
#line 53
  nx_struct message_t *__nesc_result;
#line 53

#line 53
  __nesc_result = /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__receive(msg);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 1022 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230DriverLayerP.nc"
static inline void RF230DriverLayerP__PacketLinkQuality__set(message_t *msg, uint8_t value)
{
  RF230DriverLayerP__getMeta(msg)->lqi = value;
}

# 253 "/usr/lib/gcc/avr/4.8.1/../../../avr/include/util/crc16.h" 3
#line 252
static __inline uint16_t 
_crc_ccitt_update(uint16_t __crc, uint8_t __data)
{
  uint16_t __ret;

   __asm volatile (
  "eor    %A0,%1""\n\t"

  "mov    __tmp_reg__,%A0""\n\t"
  "swap   %A0""\n\t"
  "andi   %A0,0xf0""\n\t"
  "eor    %A0,__tmp_reg__""\n\t"

  "mov    __tmp_reg__,%B0""\n\t"

  "mov    %B0,%A0""\n\t"

  "swap   %A0""\n\t"
  "andi   %A0,0x0f""\n\t"
  "eor    __tmp_reg__,%A0""\n\t"

  "lsr    %A0""\n\t"
  "eor    %B0,%A0""\n\t"

  "eor    %A0,%B0""\n\t"
  "lsl    %A0""\n\t"
  "lsl    %A0""\n\t"
  "lsl    %A0""\n\t"
  "eor    %A0,__tmp_reg__" : 

  "=d"(__ret) : 
  "r"(__data), "0"(__crc) : 
  "r0");

  return __ret;
}

# 82 "/opt/tinyos-2.1.2/tos/platforms/iris/chips/rf230/RadioConfig.h"
static __inline uint16_t RF230_CRCBYTE_COMMAND(uint16_t crc, uint8_t data)
{
  return _crc_ccitt_update(crc, data);
}

# 312 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline bool /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__header(message_t *msg)
{
  bool notFull;


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 317
    notFull = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize < /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE;
#line 317
    __nesc_atomic_end(__nesc_atomic); }

  return notFull;
}

# 46 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioReceive.nc"
inline static bool /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__RadioReceive__header(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioReceive__header(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 85 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline bool /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__header(message_t *msg)
{

  return /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__RadioReceive__header(msg);
}

# 46 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioReceive.nc"
inline static bool /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioReceive__header(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubReceive__header(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 163 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline bool /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__header(message_t *msg)
{
  return /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioReceive__header(msg);
}

# 46 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioReceive.nc"
inline static bool /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioReceive__header(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__SubReceive__header(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 134 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/SoftwareAckLayerC.nc"
static inline bool /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__header(message_t *msg)
{

  if (/*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__isAckPacket(msg)) {
    return /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state == /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_ACK_WAIT;
    }




  return /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioReceive__header(msg);
}

# 46 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioReceive.nc"
inline static bool RF230DriverLayerP__RadioReceive__header(message_t *msg){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubReceive__header(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 88 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230RadioP.nc"
static inline uint8_t RF230RadioP__RF230DriverConfig__headerPreloadLength(void )
{

  return 7;
}

# 59 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230DriverConfig.nc"
inline static uint8_t RF230DriverLayerP__Config__headerPreloadLength(void ){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = RF230RadioP__RF230DriverConfig__headerPreloadLength();
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 96 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230DriverLayerP.nc"
static inline rf230_header_t *RF230DriverLayerP__getHeader(message_t *msg)
{
  return (void *)msg + RF230DriverLayerP__Config__headerLength(msg);
}

# 214 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128SpiP.nc"
static __inline uint8_t Atm128SpiP__FastSpiByte__write(uint8_t data)
#line 214
{
  Atm128SpiP__Spi__write(data);

  while (!Atm128SpiP__Spi__isInterruptPending()) 
    ;

  return Atm128SpiP__Spi__read();
}

# 81 "/opt/tinyos-2.1.2/tos/interfaces/FastSpiByte.nc"
inline static uint8_t RF230DriverLayerP__FastSpiByte__write(uint8_t data){
#line 81
  unsigned char __nesc_result;
#line 81

#line 81
  __nesc_result = Atm128SpiP__FastSpiByte__write(data);
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 617 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230DriverLayerP.nc"
static __inline void RF230DriverLayerP__downloadMessage(void )
{
  uint8_t length;
  uint16_t crc;

  RF230DriverLayerP__SELN__clr();
  RF230DriverLayerP__FastSpiByte__write(RF230_CMD_FRAME_READ);


  length = RF230DriverLayerP__FastSpiByte__write(0);


  if (length >= 3 && length <= RF230DriverLayerP__RadioPacket__maxPayloadLength() + 2) 
    {
      uint8_t read;
      uint8_t *data;


      RF230DriverLayerP__FastSpiByte__splitWrite(0);

      data = RF230DriverLayerP__getPayload(RF230DriverLayerP__rxMsg);
      __nesc_hton_leuint8(RF230DriverLayerP__getHeader(RF230DriverLayerP__rxMsg)->length.nxdata, length);
      crc = 0;


      length -= 2;

      read = RF230DriverLayerP__Config__headerPreloadLength();
      if (length < read) {
        read = length;
        }
      length -= read;

      do {
          crc = RF230_CRCBYTE_COMMAND(crc, * data++ = RF230DriverLayerP__FastSpiByte__splitReadWrite(0));
        }
      while (--read != 0);

      if (RF230DriverLayerP__RadioReceive__header(RF230DriverLayerP__rxMsg)) 
        {
          while (length-- != 0) 
            crc = RF230_CRCBYTE_COMMAND(crc, * data++ = RF230DriverLayerP__FastSpiByte__splitReadWrite(0));

          crc = RF230_CRCBYTE_COMMAND(crc, RF230DriverLayerP__FastSpiByte__splitReadWrite(0));
          crc = RF230_CRCBYTE_COMMAND(crc, RF230DriverLayerP__FastSpiByte__splitReadWrite(0));

          RF230DriverLayerP__PacketLinkQuality__set(RF230DriverLayerP__rxMsg, RF230DriverLayerP__FastSpiByte__splitRead());
        }
      else 
        {
          RF230DriverLayerP__FastSpiByte__splitRead();
          crc = 1;
        }
    }
  else {
    crc = 1;
    }
  RF230DriverLayerP__SELN__set();
  RF230DriverLayerP__state = RF230DriverLayerP__STATE_RX_ON;
#line 693
  RF230DriverLayerP__cmd = RF230DriverLayerP__CMD_NONE;


  if (crc == 0) {
    RF230DriverLayerP__rxMsg = RF230DriverLayerP__RadioReceive__receive(RF230DriverLayerP__rxMsg);
    }
}

# 135 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230RadioP.nc"
static inline uint16_t RF230RadioP__SoftwareAckConfig__getAckTimeout(void )
{
  return (uint16_t )(1000 * (73728UL / 8 / 32) * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 10000UL);
}

# 43 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static uint16_t /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__getAckTimeout(void ){
#line 43
  unsigned short __nesc_result;
#line 43

#line 43
  __nesc_result = RF230RadioP__SoftwareAckConfig__getAckTimeout();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 50 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioAlarm.nc"
inline static void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__wait(tradio_size timeout){
#line 50
  /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__wait(2U, timeout);
#line 50
}
#line 50
#line 45
inline static bool /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__isFree(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__isFree(2U);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 198 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckWait(message_t *msg)
{
  return /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getAckRequired(msg)
   && /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isDataFrame(msg)
   && /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(msg) != 0xFFFF;
}

# 162 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool RF230RadioP__Ieee154PacketLayer__requiresAckWait(message_t *msg){
#line 162
  unsigned char __nesc_result;
#line 162

#line 162
  __nesc_result = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckWait(msg);
#line 162

#line 162
  return __nesc_result;
#line 162
}
#line 162
# 101 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230RadioP.nc"
static inline bool RF230RadioP__SoftwareAckConfig__requiresAckWait(message_t *msg)
{
  return RF230RadioP__Ieee154PacketLayer__requiresAckWait(msg);
}

# 55 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/SoftwareAckConfig.nc"
inline static bool /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__requiresAckWait(message_t *msg){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = RF230RadioP__SoftwareAckConfig__requiresAckWait(msg);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 97 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/SoftwareAckLayerC.nc"
static inline void /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__sendDone(error_t error)
{
  if (/*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state == /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_ACK_SEND) 
    {

      for (; 0; ) ;

      /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state = /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_READY;
    }
  else 
    {
      for (; 0; ) ;
      for (; 0; ) ;

      if (error == SUCCESS && /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__requiresAckWait(/*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__txMsg) && /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__isFree()) 
        {
          /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioAlarm__wait(/*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__Config__getAckTimeout());
          /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state = /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_ACK_WAIT;
        }
      else 
        {
          /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__state = /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__STATE_READY;
          /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__RadioSend__sendDone(error);
        }
    }
}

# 56 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioSend.nc"
inline static void RF230DriverLayerP__RadioSend__sendDone(error_t error){
#line 56
  /*RF230RadioC.SoftwareAckLayerC*/SoftwareAckLayerC__0__SubSend__sendDone(error);
#line 56
}
#line 56
# 55 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/PacketFlag.nc"
inline static void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__clear(message_t *msg){
#line 55
  /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(1U, msg);
#line 55
}
#line 55
# 77 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__clear(message_t *msg)
{
  /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__clear(msg);
}

# 70 "/opt/tinyos-2.1.2/tos/interfaces/PacketTimeStamp.nc"
inline static void RF230DriverLayerP__PacketTimeStamp__clear(message_t * msg){
#line 70
  /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__clear(msg);
#line 70
}
#line 70
# 136 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__metadataLength(message_t *msg)
{
  return /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__metadataLength(msg) + sizeof(timestamp_metadata_t );
}

#line 60
static inline timestamp_metadata_t */*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__getMeta(message_t *msg)
{
  return (void *)msg + sizeof(message_t ) - /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__metadataLength(msg);
}

# 50 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/PacketFlag.nc"
inline static void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__set(message_t *msg){
#line 50
  /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(1U, msg);
#line 50
}
#line 50
# 82 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline void /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__set(message_t *msg, uint32_t value)
{
  /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__TimeStampFlag__set(msg);
  /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__getMeta(msg)->timestamp = value;
}

# 78 "/opt/tinyos-2.1.2/tos/interfaces/PacketTimeStamp.nc"
inline static void RF230DriverLayerP__PacketTimeStamp__set(message_t * msg, RF230DriverLayerP__PacketTimeStamp__size_type value){
#line 78
  /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__PacketTimeStampRadio__set(msg, value);
#line 78
}
#line 78
# 64 "/opt/tinyos-2.1.2/tos/lib/timer/Counter.nc"
inline static /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__size_type /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__get(void ){
#line 64
  unsigned long __nesc_result;
#line 64

#line 64
  __nesc_result = /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 53 "/opt/tinyos-2.1.2/tos/lib/timer/CounterToLocalTimeC.nc"
static inline uint32_t /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__LocalTime__get(void )
{
  return /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__get();
}

# 61 "/opt/tinyos-2.1.2/tos/lib/timer/LocalTime.nc"
inline static uint32_t RF230DriverLayerP__LocalTime__get(void ){
#line 61
  unsigned long __nesc_result;
#line 61

#line 61
  __nesc_result = /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__LocalTime__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 55 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/PacketFlag.nc"
inline static void RF230DriverLayerP__RSSIFlag__clear(message_t *msg){
#line 55
  /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(3U, msg);
#line 55
}
#line 55
# 967 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230DriverLayerP.nc"
static inline void RF230DriverLayerP__PacketRSSI__clear(message_t *msg)
{
  RF230DriverLayerP__RSSIFlag__clear(msg);
}

# 50 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/PacketFlag.nc"
inline static void RF230DriverLayerP__RSSIFlag__set(message_t *msg){
#line 50
  /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(3U, msg);
#line 50
}
#line 50





inline static void RF230DriverLayerP__TransmitPowerFlag__clear(message_t *msg){
#line 55
  /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__clear(2U, msg);
#line 55
}
#line 55
# 972 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230DriverLayerP.nc"
static inline void RF230DriverLayerP__PacketRSSI__set(message_t *msg, uint8_t value)
{

  RF230DriverLayerP__TransmitPowerFlag__clear(msg);

  RF230DriverLayerP__RSSIFlag__set(msg);
  RF230DriverLayerP__getMeta(msg)->rssi = value;
}

#line 715
static inline void RF230DriverLayerP__serviceRadio(void )
{
  if (RF230DriverLayerP__state != RF230DriverLayerP__STATE_SLEEP && RF230DriverLayerP__isSpiAcquired()) 
    {
      uint16_t time;
      uint32_t time32;
      uint8_t irq;
      uint8_t temp;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 724
        time = RF230DriverLayerP__capturedTime;
#line 724
        __nesc_atomic_end(__nesc_atomic); }
      RF230DriverLayerP__radioIrq = FALSE;
      irq = RF230DriverLayerP__readRegister(RF230_IRQ_STATUS);
#line 758
      if (RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_TURNON || RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_CHANNEL) 
        {
          for (; 0; ) ;
          for (; 0; ) ;

          RF230DriverLayerP__state = RF230DriverLayerP__STATE_RX_ON;
          RF230DriverLayerP__cmd = RF230DriverLayerP__CMD_SIGNAL_DONE;
        }
      else {
#line 766
        if (irq & RF230_IRQ_PLL_LOCK) 
          {
            for (; 0; ) ;
            for (; 0; ) ;
          }
        }
      if (irq & RF230_IRQ_RX_START) 
        {
          if (RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_CCA) 
            {
              RF230DriverLayerP__RadioCCA__done(FAIL);
              RF230DriverLayerP__cmd = RF230DriverLayerP__CMD_NONE;
            }

          if (RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_NONE) 
            {
              for (; 0; ) ;


              if (irq == RF230_IRQ_RX_START) 
                {
                  temp = RF230DriverLayerP__readRegister(RF230_PHY_RSSI) & RF230_RSSI_MASK;
                  RF230DriverLayerP__rssiBusy += temp - (RF230DriverLayerP__rssiBusy >> 2);

                  RF230DriverLayerP__PacketRSSI__set(RF230DriverLayerP__rxMsg, temp);
                }
              else 
                {
                  RF230DriverLayerP__PacketRSSI__clear(RF230DriverLayerP__rxMsg);
                }










              if (irq == RF230_IRQ_RX_START) 
                {
                  time32 = RF230DriverLayerP__LocalTime__get();
                  time32 += (int16_t )(time - RF230DriverLayerP__RX_SFD_DELAY) - (int16_t )time32;
                  RF230DriverLayerP__PacketTimeStamp__set(RF230DriverLayerP__rxMsg, time32);
                }
              else {
                RF230DriverLayerP__PacketTimeStamp__clear(RF230DriverLayerP__rxMsg);
                }
              RF230DriverLayerP__cmd = RF230DriverLayerP__CMD_RECEIVE;
            }
          else {
            for (; 0; ) ;
            }
        }
      if (irq & RF230_IRQ_TRX_END) 
        {
          if (RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_TRANSMIT) 
            {
              for (; 0; ) ;

              RF230DriverLayerP__state = RF230DriverLayerP__STATE_RX_ON;
              RF230DriverLayerP__cmd = RF230DriverLayerP__CMD_NONE;
              RF230DriverLayerP__RadioSend__sendDone(SUCCESS);


              for (; 0; ) ;
            }
          else {
#line 834
            if (RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_RECEIVE) 
              {
                for (; 0; ) ;


                RF230DriverLayerP__rssiClear += (RF230DriverLayerP__readRegister(RF230_PHY_RSSI) & RF230_RSSI_MASK) - (RF230DriverLayerP__rssiClear >> 2);

                RF230DriverLayerP__cmd = RF230DriverLayerP__CMD_DOWNLOAD;
              }
            else {
              for (; 0; ) ;
              }
            }
        }
    }
}

#line 866
static inline void RF230DriverLayerP__Tasklet__run(void )
{
  if (RF230DriverLayerP__radioIrq) {
    RF230DriverLayerP__serviceRadio();
    }
  if (RF230DriverLayerP__cmd != RF230DriverLayerP__CMD_NONE) 
    {
      if (RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_DOWNLOAD) {
        RF230DriverLayerP__downloadMessage();
        }
      else {
#line 875
        if (RF230DriverLayerP__CMD_TURNOFF <= RF230DriverLayerP__cmd && RF230DriverLayerP__cmd <= RF230DriverLayerP__CMD_TURNON) {
          RF230DriverLayerP__changeState();
          }
        else {
#line 877
          if (RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_CHANNEL) {
            RF230DriverLayerP__changeChannel();
            }
          }
        }
#line 880
      if (RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_SIGNAL_DONE) 
        {
          RF230DriverLayerP__cmd = RF230DriverLayerP__CMD_NONE;
          RF230DriverLayerP__RadioState__done();
        }
    }

  if (RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_NONE && RF230DriverLayerP__state == RF230DriverLayerP__STATE_RX_ON && !RF230DriverLayerP__radioIrq) {
    RF230DriverLayerP__RadioSend__ready();
    }
  if (RF230DriverLayerP__cmd == RF230DriverLayerP__CMD_NONE) {
    RF230DriverLayerP__releaseSpi__postTask();
    }
}

# 48 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/Tasklet.nc"
inline static void TaskletC__Tasklet__run(void ){
#line 48
  RF230DriverLayerP__Tasklet__run();
#line 48
  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__run();
#line 48
  /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__run();
#line 48
}
#line 48
# 142 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
static inline bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__isOwner(uint8_t id)
#line 142
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 143
    {
      if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__resId == id && /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__RES_BUSY) {
          unsigned char __nesc_temp = 
#line 144
          TRUE;

          {
#line 144
            __nesc_atomic_end(__nesc_atomic); 
#line 144
            return __nesc_temp;
          }
        }
      else 
#line 145
        {
          unsigned char __nesc_temp = 
#line 145
          FALSE;

          {
#line 145
            __nesc_atomic_end(__nesc_atomic); 
#line 145
            return __nesc_temp;
          }
        }
    }
#line 148
    __nesc_atomic_end(__nesc_atomic); }
}

# 128 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static bool RF230DriverLayerP__SpiResource__isOwner(void ){
#line 128
  unsigned char __nesc_result;
#line 128

#line 128
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__isOwner(0U);
#line 128

#line 128
  return __nesc_result;
#line 128
}
#line 128
# 392 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP__ResourceConfigure__configure(uint8_t id)
#line 392
{
  Atm128SpiP__startSpi();
}

# 59 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceConfigure__configure(uint8_t arg_0x7fa21e0a8538){
#line 59
  Atm128SpiP__ResourceConfigure__configure(arg_0x7fa21e0a8538);
#line 59
}
#line 59
# 162 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__default__immediateRequested(uint8_t id)
#line 162
{
}

# 61 "/opt/tinyos-2.1.2/tos/interfaces/ResourceRequested.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__immediateRequested(uint8_t arg_0x7fa21e0aa020){
#line 61
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__default__immediateRequested(arg_0x7fa21e0aa020);
#line 61
}
#line 61
# 83 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__immediateRequest(uint8_t id)
#line 83
{
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__immediateRequested(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 85
    {
      if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__RES_IDLE) {
          /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__RES_BUSY;
          /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__resId = id;
          /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceConfigure__configure(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__resId);
          {
            unsigned char __nesc_temp = 
#line 90
            SUCCESS;

            {
#line 90
              __nesc_atomic_end(__nesc_atomic); 
#line 90
              return __nesc_temp;
            }
          }
        }
#line 92
      {
        unsigned char __nesc_temp = 
#line 92
        FAIL;

        {
#line 92
          __nesc_atomic_end(__nesc_atomic); 
#line 92
          return __nesc_temp;
        }
      }
    }
#line 95
    __nesc_atomic_end(__nesc_atomic); }
}

# 97 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t RF230DriverLayerP__SpiResource__immediateRequest(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__immediateRequest(0U);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 161 "/opt/tinyos-2.1.2/tos/chips/atm1281/McuSleepC.nc"
static inline void McuSleepC__McuPowerState__update(void )
#line 161
{
}

# 52 "/opt/tinyos-2.1.2/tos/interfaces/McuPowerState.nc"
inline static void HplAtm128SpiP__Mcu__update(void ){
#line 52
  McuSleepC__McuPowerState__update();
#line 52
}
#line 52
# 173 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setMasterBit(bool isMaster)
#line 173
{
  if (isMaster) {
      * (volatile uint8_t *)(0x2C + 0x20) |= 1 << 4;
    }
  else {
      * (volatile uint8_t *)(0x2C + 0x20) &= ~(1 << 4);
    }
}

# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128SpiP__SS__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput();
#line 46
}
#line 46
# 61 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP__9__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )36U |= 1 << 1;
}

# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128SpiP__SCK__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP__9__IO__makeOutput();
#line 46
}
#line 46
# 59 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeInput(void )
#line 59
{
#line 59
  * (volatile uint8_t * )36U &= ~(1 << 3);
}

# 44 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128SpiP__MISO__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeInput();
#line 44
}
#line 44
# 61 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )36U |= 1 << 2;
}

# 46 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128SpiP__MOSI__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeOutput();
#line 46
}
#line 46
# 96 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__initMaster(void )
#line 96
{
  HplAtm128SpiP__MOSI__makeOutput();
  HplAtm128SpiP__MISO__makeInput();
  HplAtm128SpiP__SCK__makeOutput();
  HplAtm128SpiP__SS__makeOutput();
  HplAtm128SpiP__SPI__setMasterBit(TRUE);
}

# 83 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__initMaster(void ){
#line 83
  HplAtm128SpiP__SPI__initMaster();
#line 83
}
#line 83
# 186 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setClockPolarity(bool highWhenIdle)
#line 186
{
  if (highWhenIdle) {
      * (volatile uint8_t *)(0x2C + 0x20) |= 1 << 3;
    }
  else {
      * (volatile uint8_t *)(0x2C + 0x20) &= ~(1 << 3);
    }
}

# 125 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__setClockPolarity(bool highWhenIdle){
#line 125
  HplAtm128SpiP__SPI__setClockPolarity(highWhenIdle);
#line 125
}
#line 125
# 200 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setClockPhase(bool sampleOnTrailing)
#line 200
{
  if (sampleOnTrailing) {
      * (volatile uint8_t *)(0x2C + 0x20) |= 1 << 2;
    }
  else {
      * (volatile uint8_t *)(0x2C + 0x20) &= ~(1 << 2);
    }
}

# 128 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__setClockPhase(bool sampleOnTrailing){
#line 128
  HplAtm128SpiP__SPI__setClockPhase(sampleOnTrailing);
#line 128
}
#line 128
# 230 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setMasterDoubleSpeed(bool on)
#line 230
{
  if (on) {
      * (volatile uint8_t *)(0x2D + 0x20) |= 1 << 0;
    }
  else {
      * (volatile uint8_t *)(0x2D + 0x20) &= ~(1 << 0);
    }
}

# 141 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__setMasterDoubleSpeed(bool on){
#line 141
  HplAtm128SpiP__SPI__setMasterDoubleSpeed(on);
#line 141
}
#line 141
# 217 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setClock(uint8_t v)
#line 217
{
  v &= (1 << 1) | (1 << 0);
  * (volatile uint8_t *)(0x2C + 0x20) = (* (volatile uint8_t *)(0x2C + 0x20) & ~((1 << 1) | (1 << 0))) | v;
}

# 131 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__setClock(uint8_t speed){
#line 131
  HplAtm128SpiP__SPI__setClock(speed);
#line 131
}
#line 131
# 160 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__default__requested(uint8_t id)
#line 160
{
}

# 53 "/opt/tinyos-2.1.2/tos/interfaces/ResourceRequested.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__requested(uint8_t arg_0x7fa21e0aa020){
#line 53
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__default__requested(arg_0x7fa21e0aa020);
#line 53
}
#line 53
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
inline static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__grantedTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__grantedTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 64 "/opt/tinyos-2.1.2/tos/system/FcfsResourceQueueC.nc"
static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEnqueued(resource_client_id_t id)
#line 64
{
  /* atomic removed: atomic calls only */
#line 65
  {
    unsigned char __nesc_temp = 
#line 65
    /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ[id] != /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY || /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qTail == id;

#line 65
    return __nesc_temp;
  }
}

#line 82
static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__enqueue(resource_client_id_t id)
#line 82
{
  /* atomic removed: atomic calls only */
#line 83
  {
    if (!/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEnqueued(id)) {
        if (/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY) {
          /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead = id;
          }
        else {
#line 88
          /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ[/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qTail] = id;
          }
#line 89
        /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qTail = id;
        {
          unsigned char __nesc_temp = 
#line 90
          SUCCESS;

#line 90
          return __nesc_temp;
        }
      }
#line 92
    {
      unsigned char __nesc_temp = 
#line 92
      EBUSY;

#line 92
      return __nesc_temp;
    }
  }
}

# 79 "/opt/tinyos-2.1.2/tos/interfaces/ResourceQueue.nc"
inline static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Queue__enqueue(resource_client_id_t id){
#line 79
  unsigned char __nesc_result;
#line 79

#line 79
  __nesc_result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__enqueue(id);
#line 79

#line 79
  return __nesc_result;
#line 79
}
#line 79
# 61 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__get(void ){
#line 61
  unsigned short __nesc_result;
#line 61

#line 61
  __nesc_result = HplAtm1281Timer1P__Timer__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 50 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline /*CounterOne16C.NCounter*/Atm128CounterC__0__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__get(void )
{
  return /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__get();
}

# 64 "/opt/tinyos-2.1.2/tos/lib/timer/Counter.nc"
inline static /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__size_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__get(void ){
#line 64
  unsigned short __nesc_result;
#line 64

#line 64
  __nesc_result = /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 145 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline uint8_t HplAtm1281Timer1P__TimerCtrl__getInterruptFlag(void )
#line 145
{
  return * (volatile uint8_t *)(0x16 + 0x20);
}

#line 176
static inline bool HplAtm1281Timer1P__Timer__test(void )
#line 176
{
  return ((Atm128_TIFR_t )HplAtm1281Timer1P__TimerCtrl__getInterruptFlag()).bits.tov;
}

# 87 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static bool /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__test(void ){
#line 87
  unsigned char __nesc_result;
#line 87

#line 87
  __nesc_result = HplAtm1281Timer1P__Timer__test();
#line 87

#line 87
  return __nesc_result;
#line 87
}
#line 87
# 55 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline bool /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__isOverflowPending(void )
{
  return /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__test();
}

# 71 "/opt/tinyos-2.1.2/tos/lib/timer/Counter.nc"
inline static bool /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__isOverflowPending(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__isOverflowPending();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 214 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__CompareA__set(uint16_t t)
#line 214
{
#line 214
  * (volatile uint16_t *)0x88 = t;
}

# 54 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__set(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__size_type t){
#line 54
  HplAtm1281Timer1P__CompareA__set(t);
#line 54
}
#line 54
# 160 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__CompareA__reset(void )
#line 160
{
#line 160
  * (volatile uint8_t *)(0x16 + 0x20) = 1 << 1;
}

# 62 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__reset(void ){
#line 62
  HplAtm1281Timer1P__CompareA__reset();
#line 62
}
#line 62
# 166 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__CompareA__start(void )
#line 166
{
#line 166
  * (volatile uint8_t *)0x6F |= 1 << 1;
}

# 65 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__start(void ){
#line 65
  HplAtm1281Timer1P__CompareA__start();
#line 65
}
#line 65
# 40 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/PacketFlag.nc"
inline static bool RF230DriverLayerP__TransmitPowerFlag__get(message_t *msg){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__get(2U, msg);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 934 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230DriverLayerP.nc"
static inline bool RF230DriverLayerP__PacketTransmitPower__isSet(message_t *msg)
{
  return RF230DriverLayerP__TransmitPowerFlag__get(msg);
}

static inline uint8_t RF230DriverLayerP__PacketTransmitPower__get(message_t *msg)
{
  return RF230DriverLayerP__getMeta(msg)->power;
}

# 94 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230RadioP.nc"
static inline bool RF230RadioP__RF230DriverConfig__requiresRssiCca(message_t *msg)
{
  return RF230RadioP__Ieee154PacketLayer__isDataFrame(msg);
}

# 65 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230DriverConfig.nc"
inline static bool RF230DriverLayerP__Config__requiresRssiCca(message_t *msg){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = RF230RadioP__RF230DriverConfig__requiresRssiCca(msg);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 60 "/opt/tinyos-2.1.2/tos/system/FcfsResourceQueueC.nc"
static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty(void )
#line 60
{
  /* atomic removed: atomic calls only */
#line 61
  {
    unsigned char __nesc_temp = 
#line 61
    /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY;

#line 61
    return __nesc_temp;
  }
}

# 53 "/opt/tinyos-2.1.2/tos/interfaces/ResourceQueue.nc"
inline static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Queue__isEmpty(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 68 "/opt/tinyos-2.1.2/tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue(void )
#line 68
{
  /* atomic removed: atomic calls only */
#line 69
  {
    if (/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead != /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY) {
        uint8_t id = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead;

#line 72
        /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ[/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead];
        if (/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY) {
          /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qTail = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY;
          }
#line 75
        /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ[id] = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY;
        {
          unsigned char __nesc_temp = 
#line 76
          id;

#line 76
          return __nesc_temp;
        }
      }
#line 78
    {
      unsigned char __nesc_temp = 
#line 78
      /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY;

#line 78
      return __nesc_temp;
    }
  }
}

# 70 "/opt/tinyos-2.1.2/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Queue__dequeue(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 52 "/opt/tinyos-2.1.2/tos/interfaces/McuPowerState.nc"
inline static void Atm128SpiP__McuPowerState__update(void ){
#line 52
  McuSleepC__McuPowerState__update();
#line 52
}
#line 52
# 112 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__sleep(void )
#line 112
{
}

# 89 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__sleep(void ){
#line 89
  HplAtm128SpiP__SPI__sleep();
#line 89
}
#line 89
#line 116
inline static void Atm128SpiP__Spi__enableSpi(bool busOn){
#line 116
  HplAtm128SpiP__SPI__enableSpi(busOn);
#line 116
}
#line 116
# 165 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP__stopSpi(void )
#line 165
{
  Atm128SpiP__Spi__enableSpi(FALSE);
  /* atomic removed: atomic calls only */
#line 167
  {
    Atm128SpiP__Spi__sleep();
  }
  Atm128SpiP__McuPowerState__update();
}

#line 396
static inline void Atm128SpiP__ResourceConfigure__unconfigure(uint8_t id)
#line 396
{
  Atm128SpiP__stopSpi();
}

# 65 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceConfigure__unconfigure(uint8_t arg_0x7fa21e0a8538){
#line 65
  Atm128SpiP__ResourceConfigure__unconfigure(arg_0x7fa21e0a8538);
#line 65
}
#line 65
# 40 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/PacketFlag.nc"
inline static bool RF230DriverLayerP__TimeSyncFlag__get(message_t *msg){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__get(4U, msg);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 983 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230DriverLayerP.nc"
static inline bool RF230DriverLayerP__PacketTimeSyncOffset__isSet(message_t *msg)
{
  return RF230DriverLayerP__TimeSyncFlag__get(msg);
}

static inline uint8_t RF230DriverLayerP__PacketTimeSyncOffset__get(message_t *msg)
{
  return RF230DriverLayerP__RadioPacket__headerLength(msg) + RF230DriverLayerP__RadioPacket__payloadLength(msg) - sizeof(timesync_absolute_t );
}

# 65 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioAlarm.nc"
inline static tradio_size RF230DriverLayerP__RadioAlarm__getNow(void ){
#line 65
  unsigned short __nesc_result;
#line 65

#line 65
  __nesc_result = /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__getNow(3U);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
inline static error_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 244 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230RadioP.nc"
static inline uint16_t RF230RadioP__RandomCollisionConfig__getMinimumBackoff(void )
{
  return (uint16_t )(320 * (73728UL / 8 / 32) * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 10000UL);
}

# 51 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/RandomCollisionConfig.nc"
inline static uint16_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getMinimumBackoff(void ){
#line 51
  unsigned short __nesc_result;
#line 51

#line 51
  __nesc_result = RF230RadioP__RandomCollisionConfig__getMinimumBackoff();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 60 "/opt/tinyos-2.1.2/tos/system/FcfsResourceQueueC.nc"
static inline bool /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void )
#line 60
{
  /* atomic removed: atomic calls only */
#line 61
  {
    unsigned char __nesc_temp = 
#line 61
    /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead == /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

#line 61
    return __nesc_temp;
  }
}

# 53 "/opt/tinyos-2.1.2/tos/interfaces/ResourceQueue.nc"
inline static bool /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__isEmpty(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 68 "/opt/tinyos-2.1.2/tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void )
#line 68
{
  /* atomic removed: atomic calls only */
#line 69
  {
    if (/*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead != /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
        uint8_t id = /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead;

#line 72
        /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead = /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ[/*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead];
        if (/*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qHead == /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
          /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__qTail = /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
          }
#line 75
        /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ[id] = /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
        {
          unsigned char __nesc_temp = 
#line 76
          id;

#line 76
          return __nesc_temp;
        }
      }
#line 78
    {
      unsigned char __nesc_temp = 
#line 78
      /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

#line 78
      return __nesc_temp;
    }
  }
}

# 70 "/opt/tinyos-2.1.2/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__dequeue(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 166 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
static inline void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id)
#line 166
{
}

# 65 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
inline static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(uint8_t arg_0x7fa21e0a8538){
#line 65
    /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(arg_0x7fa21e0a8538);
#line 65
}
#line 65
# 89 "/opt/tinyos-2.1.2/tos/system/RandomMlcgC.nc"
static inline uint16_t RandomMlcgC__Random__rand16(void )
#line 89
{
  return (uint16_t )RandomMlcgC__Random__rand32();
}

# 52 "/opt/tinyos-2.1.2/tos/interfaces/Random.nc"
inline static uint16_t ObjectTransferP__Random__rand16(void ){
#line 52
  unsigned short __nesc_result;
#line 52

#line 52
  __nesc_result = RandomMlcgC__Random__rand16();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 260 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__getNow(void )
#line 260
{
  return /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__get();
}

# 109 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void ){
#line 109
  unsigned long __nesc_result;
#line 109

#line 109
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 96 "/opt/tinyos-2.1.2/tos/lib/timer/AlarmToTimerC.nc"
static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void )
{
#line 97
  return /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow();
}

# 136 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
inline static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void ){
#line 136
  unsigned long __nesc_result;
#line 136

#line 136
  __nesc_result = /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow();
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 159 "/opt/tinyos-2.1.2/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, TRUE);
}

# 73 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
inline static void ObjectTransferP__Timer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(2U, dt);
#line 73
}
#line 73
# 334 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/ObjectTransferP.nc"
static inline error_t ObjectTransferP__BlockWrite__default__erase(uint8_t img_num)
#line 334
{
#line 334
  return FAIL;
}

# 83 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
inline static error_t ObjectTransferP__BlockWrite__erase(uint8_t arg_0x7fa21e522288){
#line 83
  unsigned char __nesc_result;
#line 83

#line 83
  switch (arg_0x7fa21e522288) {
#line 83
    case VOLUME_DELUGE3:
#line 83
      __nesc_result = /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockWrite__erase(/*DelugeC.BlockWriterDeluge3*/BlockWriterC__2__CLIENT_ID);
#line 83
      break;
#line 83
    case VOLUME_DELUGE1:
#line 83
      __nesc_result = /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockWrite__erase(/*DelugeC.BlockWriterDeluge1*/BlockWriterC__0__CLIENT_ID);
#line 83
      break;
#line 83
    case VOLUME_DELUGE2:
#line 83
      __nesc_result = /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockWrite__erase(/*DelugeC.BlockWriterDeluge2*/BlockWriterC__1__CLIENT_ID);
#line 83
      break;
#line 83
    default:
#line 83
      __nesc_result = ObjectTransferP__BlockWrite__default__erase(arg_0x7fa21e522288);
#line 83
      break;
#line 83
    }
#line 83

#line 83
  return __nesc_result;
#line 83
}
#line 83
# 203 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/ObjectTransferP.nc"
static inline error_t ObjectTransferP__ObjectTransfer__receive(object_id_t new_objid, object_size_t new_size, uint8_t img_num)
{
  error_t error;

  ObjectTransferP__ObjectTransfer__stop();


  ObjectTransferP__cont_receive_new_objid = new_objid;
  ObjectTransferP__cont_receive_new_size = new_size;
  ObjectTransferP__cont_receive_img_num = img_num;

  error = ObjectTransferP__BlockWrite__erase(ObjectTransferP__cont_receive_img_num);
  if (error == SUCCESS) {
      ObjectTransferP__state = ObjectTransferP__S_ERASE;
    }

  return error;
}

# 42 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/ObjectTransfer.nc"
inline static error_t DelugeP__ObjectTransfer__receive(object_id_t new_objid, object_size_t new_size, uint8_t img_num){
#line 42
  unsigned char __nesc_result;
#line 42

#line 42
  __nesc_result = ObjectTransferP__ObjectTransfer__receive(new_objid, new_size, img_num);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 296 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
static inline error_t BlockStorageP__BlockWrite__erase(uint8_t id)
#line 296
{
  return BlockStorageP__newRequest(BlockStorageP__R_ERASE, id, 0, (void *)0, 0);
}

# 211 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/BlockStorageManagerP.nc"
static inline error_t /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockWrite__default__erase(uint8_t client)
#line 211
{
#line 211
  return FAIL;
}

# 83 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
inline static error_t /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockWrite__erase(volume_id_t arg_0x7fa21d923df0){
#line 83
  unsigned char __nesc_result;
#line 83

#line 83
  switch (arg_0x7fa21d923df0) {
#line 83
    case VOLUME_GOLDENIMAGE:
#line 83
      __nesc_result = BlockStorageP__BlockWrite__erase(/*BlockStorageManagerC.BlockStorageC_Golden*/BlockStorageC__0__BLOCK_ID);
#line 83
      break;
#line 83
    case VOLUME_DELUGE3:
#line 83
      __nesc_result = BlockStorageP__BlockWrite__erase(/*BlockStorageManagerC.BlockStorageC_3*/BlockStorageC__3__BLOCK_ID);
#line 83
      break;
#line 83
    case VOLUME_DELUGE1:
#line 83
      __nesc_result = BlockStorageP__BlockWrite__erase(/*BlockStorageManagerC.BlockStorageC_1*/BlockStorageC__1__BLOCK_ID);
#line 83
      break;
#line 83
    case VOLUME_DELUGE2:
#line 83
      __nesc_result = BlockStorageP__BlockWrite__erase(/*BlockStorageManagerC.BlockStorageC_2*/BlockStorageC__2__BLOCK_ID);
#line 83
      break;
#line 83
    default:
#line 83
      __nesc_result = /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockWrite__default__erase(arg_0x7fa21d923df0);
#line 83
      break;
#line 83
    }
#line 83

#line 83
  return __nesc_result;
#line 83
}
#line 83
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
inline static error_t /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__timerTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__timerTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 113 "/opt/tinyos-2.1.2/tos/lib/net/drip/DisseminationEngineImplP.nc"
static inline void DisseminationEngineImplP__TrickleTimer__fired(uint16_t key)
#line 113
{

  DisseminationEngineImplP__sendObject(key);
}

# 292 "/opt/tinyos-2.1.2/tos/lib/net/TrickleTimerImplP.nc"
static inline void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__TrickleTimer__default__fired(uint8_t id)
#line 292
{
  return;
}

# 90 "/opt/tinyos-2.1.2/tos/lib/net/TrickleTimer.nc"
inline static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__TrickleTimer__fired(uint8_t arg_0x7fa21d548980){
#line 90
  switch (arg_0x7fa21d548980) {
#line 90
    case /*DelugeC.DisseminatorC*/DisseminatorC__0__TIMER_ID:
#line 90
      DisseminationEngineImplP__TrickleTimer__fired(56832UL);
#line 90
      break;
#line 90
    default:
#line 90
      /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__TrickleTimer__default__fired(arg_0x7fa21d548980);
#line 90
      break;
#line 90
    }
#line 90
}
#line 90
# 66 "/opt/tinyos-2.1.2/tos/system/BitVectorC.nc"
static inline uint16_t /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__getMask(uint16_t bitnum)
{
  return 1 << bitnum % /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__ELEMENT_SIZE;
}

#line 61
static inline uint16_t /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__getIndex(uint16_t bitnum)
{
  return bitnum / /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__ELEMENT_SIZE;
}

#line 97
static inline void /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__BitVector__clear(uint16_t bitnum)
{
  /* atomic removed: atomic calls only */
#line 99
  {
#line 99
    /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__m_bits[/*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__getIndex(bitnum)] &= ~/*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__getMask(bitnum);
  }
}

# 69 "/opt/tinyos-2.1.2/tos/interfaces/BitVector.nc"
inline static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Pending__clear(uint16_t bitnum){
#line 69
  /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__BitVector__clear(bitnum);
#line 69
}
#line 69
# 87 "/opt/tinyos-2.1.2/tos/system/BitVectorC.nc"
static inline bool /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__BitVector__get(uint16_t bitnum)
{
  /* atomic removed: atomic calls only */
#line 89
  {
#line 89
    {
      unsigned char __nesc_temp = 
#line 89
      /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__m_bits[/*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__getIndex(bitnum)] & /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__getMask(bitnum) ? TRUE : FALSE;

#line 89
      return __nesc_temp;
    }
  }
}

# 57 "/opt/tinyos-2.1.2/tos/interfaces/BitVector.nc"
inline static bool /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Pending__get(uint16_t bitnum){
#line 57
  unsigned char __nesc_result;
#line 57

#line 57
  __nesc_result = /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__BitVector__get(bitnum);
#line 57

#line 57
  return __nesc_result;
#line 57
}
#line 57
# 154 "/opt/tinyos-2.1.2/tos/lib/net/TrickleTimerImplP.nc"
static inline void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__timerTask__runTask(void )
#line 154
{
  uint8_t i;

#line 156
  for (i = 0; i < 1U; i++) {
      bool fire = FALSE;

#line 158
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 158
        {
          if (/*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Pending__get(i)) {
              /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Pending__clear(i);
              fire = TRUE;
            }
        }
#line 163
        __nesc_atomic_end(__nesc_atomic); }
      if (fire) {
          ;
          /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__TrickleTimer__fired(i);
          /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__timerTask__postTask();
          return;
        }
    }
}

# 125 "/opt/tinyos-2.1.2/tos/interfaces/Send.nc"
inline static void * /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__3__Send__getPayload(message_t * msg, uint8_t len){
#line 125
  void *__nesc_result;
#line 125

#line 125
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__getPayload(3U, msg, len);
#line 125

#line 125
  return __nesc_result;
#line 125
}
#line 125
# 73 "/opt/tinyos-2.1.2/tos/system/AMQueueEntryP.nc"
static inline void */*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__3__AMSend__getPayload(message_t *m, uint8_t len)
#line 73
{
  return /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__3__Send__getPayload(m, len);
}

# 135 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
inline static void * DisseminationEngineImplP__AMSend__getPayload(message_t * msg, uint8_t len){
#line 135
  void *__nesc_result;
#line 135

#line 135
  __nesc_result = /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__3__AMSend__getPayload(msg, len);
#line 135

#line 135
  return __nesc_result;
#line 135
}
#line 135
# 101 "/opt/tinyos-2.1.2/tos/lib/net/drip/DisseminatorP.nc"
static inline void */*DelugeC.DisseminatorC.DisseminatorP*/DisseminatorP__0__DisseminationCache__requestData(uint8_t *size)
#line 101
{
  *size = sizeof(/*DelugeC.DisseminatorC.DisseminatorP*/DisseminatorP__0__t );
  return &/*DelugeC.DisseminatorC.DisseminatorP*/DisseminatorP__0__valueCache;
}

# 243 "/opt/tinyos-2.1.2/tos/lib/net/drip/DisseminationEngineImplP.nc"
static inline void *
DisseminationEngineImplP__DisseminationCache__default__requestData(uint16_t key, uint8_t *size)
#line 244
{
#line 244
  return (void *)0;
}

# 47 "/opt/tinyos-2.1.2/tos/lib/net/drip/DisseminationCache.nc"
inline static void *DisseminationEngineImplP__DisseminationCache__requestData(uint16_t arg_0x7fa21d5d2420, uint8_t *size){
#line 47
  void *__nesc_result;
#line 47

#line 47
  switch (arg_0x7fa21d5d2420) {
#line 47
    case 56832UL:
#line 47
      __nesc_result = /*DelugeC.DisseminatorC.DisseminatorP*/DisseminatorP__0__DisseminationCache__requestData(size);
#line 47
      break;
#line 47
    default:
#line 47
      __nesc_result = DisseminationEngineImplP__DisseminationCache__default__requestData(arg_0x7fa21d5d2420, size);
#line 47
      break;
#line 47
    }
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 112 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__maxPayloadLength(am_id_t id)
{
  return /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__maxPayloadLength();
}

# 123 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
inline static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__maxPayloadLength(am_id_t arg_0x7fa21e360488){
#line 123
  unsigned char __nesc_result;
#line 123

#line 123
  __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__maxPayloadLength(arg_0x7fa21e360488);
#line 123

#line 123
  return __nesc_result;
#line 123
}
#line 123
# 207 "/opt/tinyos-2.1.2/tos/system/AMQueueImplP.nc"
static inline uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__maxPayloadLength(uint8_t id)
#line 207
{
  return /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__maxPayloadLength(0);
}

# 112 "/opt/tinyos-2.1.2/tos/interfaces/Send.nc"
inline static uint8_t /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__3__Send__maxPayloadLength(void ){
#line 112
  unsigned char __nesc_result;
#line 112

#line 112
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__maxPayloadLength(3U);
#line 112

#line 112
  return __nesc_result;
#line 112
}
#line 112
# 69 "/opt/tinyos-2.1.2/tos/system/AMQueueEntryP.nc"
static inline uint8_t /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__3__AMSend__maxPayloadLength(void )
#line 69
{
  return /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__3__Send__maxPayloadLength();
}

# 123 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
inline static uint8_t DisseminationEngineImplP__AMSend__maxPayloadLength(void ){
#line 123
  unsigned char __nesc_result;
#line 123

#line 123
  __nesc_result = /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__3__AMSend__maxPayloadLength();
#line 123

#line 123
  return __nesc_result;
#line 123
}
#line 123
# 75 "/opt/tinyos-2.1.2/tos/interfaces/Send.nc"
inline static error_t /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__3__Send__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(3U, msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 162 "/opt/tinyos-2.1.2/tos/interfaces/AMPacket.nc"
inline static void /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__3__AMPacket__setType(message_t * amsg, am_id_t t){
#line 162
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setType(amsg, t);
#line 162
}
#line 162
#line 103
inline static void /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__3__AMPacket__setDestination(message_t * amsg, am_addr_t addr){
#line 103
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setDestination(amsg, addr);
#line 103
}
#line 103
# 53 "/opt/tinyos-2.1.2/tos/system/AMQueueEntryP.nc"
static inline error_t /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__3__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 55
{
  /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__3__AMPacket__setDestination(msg, dest);
  /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__3__AMPacket__setType(msg, 96);
  return /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__3__Send__send(msg, len);
}

# 80 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
inline static error_t DisseminationEngineImplP__AMSend__send(am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__3__AMSend__send(addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 69 "/opt/tinyos-2.1.2/tos/lib/net/DisseminationValue.nc"
inline static void /*DelugeC.DisseminatorC.DisseminatorP*/DisseminatorP__0__DisseminationValue__changed(void ){
#line 69
  DelugeP__DisseminationValue__changed();
#line 69
}
#line 69
# 62 "/opt/tinyos-2.1.2/tos/lib/net/drip/DisseminatorP.nc"
static inline void /*DelugeC.DisseminatorC.DisseminatorP*/DisseminatorP__0__changedTask__runTask(void )
#line 62
{
  /*DelugeC.DisseminatorC.DisseminatorP*/DisseminatorP__0__DisseminationValue__changed();
}

#line 78
static inline const /*DelugeC.DisseminatorC.DisseminatorP*/DisseminatorP__0__t */*DelugeC.DisseminatorC.DisseminatorP*/DisseminatorP__0__DisseminationValue__get(void )
#line 78
{
  return &/*DelugeC.DisseminatorC.DisseminatorP*/DisseminatorP__0__valueCache;
}

# 55 "/opt/tinyos-2.1.2/tos/lib/net/DisseminationValue.nc"
inline static const DelugeP__DisseminationValue__t *DelugeP__DisseminationValue__get(void ){
#line 55
  nx_struct DelugeCmd const *__nesc_result;
#line 55

#line 55
  __nesc_result = /*DelugeC.DisseminatorC.DisseminatorP*/DisseminatorP__0__DisseminationValue__get();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t DelugeP__Resource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__Resource__release(/*DelugeC.BlockStorageLockClientC*/BlockStorageLockClientC__0__CLIENT_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 60 "/opt/tinyos-2.1.2/tos/system/FcfsResourceQueueC.nc"
static inline bool /*BlockStorageLockC.Arbiter.Queue*/FcfsResourceQueueC__3__FcfsQueue__isEmpty(void )
#line 60
{
  /* atomic removed: atomic calls only */
#line 61
  {
    unsigned char __nesc_temp = 
#line 61
    /*BlockStorageLockC.Arbiter.Queue*/FcfsResourceQueueC__3__qHead == /*BlockStorageLockC.Arbiter.Queue*/FcfsResourceQueueC__3__NO_ENTRY;

#line 61
    return __nesc_temp;
  }
}

# 53 "/opt/tinyos-2.1.2/tos/interfaces/ResourceQueue.nc"
inline static bool /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__Queue__isEmpty(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*BlockStorageLockC.Arbiter.Queue*/FcfsResourceQueueC__3__FcfsQueue__isEmpty();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 68 "/opt/tinyos-2.1.2/tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*BlockStorageLockC.Arbiter.Queue*/FcfsResourceQueueC__3__FcfsQueue__dequeue(void )
#line 68
{
  /* atomic removed: atomic calls only */
#line 69
  {
    if (/*BlockStorageLockC.Arbiter.Queue*/FcfsResourceQueueC__3__qHead != /*BlockStorageLockC.Arbiter.Queue*/FcfsResourceQueueC__3__NO_ENTRY) {
        uint8_t id = /*BlockStorageLockC.Arbiter.Queue*/FcfsResourceQueueC__3__qHead;

#line 72
        /*BlockStorageLockC.Arbiter.Queue*/FcfsResourceQueueC__3__qHead = /*BlockStorageLockC.Arbiter.Queue*/FcfsResourceQueueC__3__resQ[/*BlockStorageLockC.Arbiter.Queue*/FcfsResourceQueueC__3__qHead];
        if (/*BlockStorageLockC.Arbiter.Queue*/FcfsResourceQueueC__3__qHead == /*BlockStorageLockC.Arbiter.Queue*/FcfsResourceQueueC__3__NO_ENTRY) {
          /*BlockStorageLockC.Arbiter.Queue*/FcfsResourceQueueC__3__qTail = /*BlockStorageLockC.Arbiter.Queue*/FcfsResourceQueueC__3__NO_ENTRY;
          }
#line 75
        /*BlockStorageLockC.Arbiter.Queue*/FcfsResourceQueueC__3__resQ[id] = /*BlockStorageLockC.Arbiter.Queue*/FcfsResourceQueueC__3__NO_ENTRY;
        {
          unsigned char __nesc_temp = 
#line 76
          id;

#line 76
          return __nesc_temp;
        }
      }
#line 78
    {
      unsigned char __nesc_temp = 
#line 78
      /*BlockStorageLockC.Arbiter.Queue*/FcfsResourceQueueC__3__NO_ENTRY;

#line 78
      return __nesc_temp;
    }
  }
}

# 70 "/opt/tinyos-2.1.2/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__Queue__dequeue(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*BlockStorageLockC.Arbiter.Queue*/FcfsResourceQueueC__3__FcfsQueue__dequeue();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
inline static error_t /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__grantedTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__grantedTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 166 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
static inline void /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__ResourceConfigure__default__unconfigure(uint8_t id)
#line 166
{
}

# 65 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
inline static void /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__ResourceConfigure__unconfigure(uint8_t arg_0x7fa21e0a8538){
#line 65
    /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__ResourceConfigure__default__unconfigure(arg_0x7fa21e0a8538);
#line 65
}
#line 65
# 79 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeVolumeManagerP.nc"
static inline error_t DelugeVolumeManagerP__Resource__default__request(uint8_t imgNum)
#line 79
{
#line 79
  return FAIL;
}

# 88 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t DelugeVolumeManagerP__Resource__request(uint8_t arg_0x7fa21d3b7c68){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  switch (arg_0x7fa21d3b7c68) {
#line 88
    case VOLUME_DELUGE3:
#line 88
      __nesc_result = /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__Resource__request(/*DelugeVolumeManagerC.BlockWriterDeluge3.BlockStorageLockClientC*/BlockStorageLockClientC__17__CLIENT_ID);
#line 88
      break;
#line 88
    case VOLUME_DELUGE1:
#line 88
      __nesc_result = /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__Resource__request(/*DelugeVolumeManagerC.BlockWriterDeluge1.BlockStorageLockClientC*/BlockStorageLockClientC__15__CLIENT_ID);
#line 88
      break;
#line 88
    case VOLUME_DELUGE2:
#line 88
      __nesc_result = /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__Resource__request(/*DelugeVolumeManagerC.BlockWriterDeluge2.BlockStorageLockClientC*/BlockStorageLockClientC__16__CLIENT_ID);
#line 88
      break;
#line 88
    default:
#line 88
      __nesc_result = DelugeVolumeManagerP__Resource__default__request(arg_0x7fa21d3b7c68);
#line 88
      break;
#line 88
    }
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 160 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
static inline void /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__ResourceRequested__default__requested(uint8_t id)
#line 160
{
}

# 53 "/opt/tinyos-2.1.2/tos/interfaces/ResourceRequested.nc"
inline static void /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__ResourceRequested__requested(uint8_t arg_0x7fa21e0aa020){
#line 53
    /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__ResourceRequested__default__requested(arg_0x7fa21e0aa020);
#line 53
}
#line 53
# 64 "/opt/tinyos-2.1.2/tos/system/FcfsResourceQueueC.nc"
static inline bool /*BlockStorageLockC.Arbiter.Queue*/FcfsResourceQueueC__3__FcfsQueue__isEnqueued(resource_client_id_t id)
#line 64
{
  /* atomic removed: atomic calls only */
#line 65
  {
    unsigned char __nesc_temp = 
#line 65
    /*BlockStorageLockC.Arbiter.Queue*/FcfsResourceQueueC__3__resQ[id] != /*BlockStorageLockC.Arbiter.Queue*/FcfsResourceQueueC__3__NO_ENTRY || /*BlockStorageLockC.Arbiter.Queue*/FcfsResourceQueueC__3__qTail == id;

#line 65
    return __nesc_temp;
  }
}

#line 82
static inline error_t /*BlockStorageLockC.Arbiter.Queue*/FcfsResourceQueueC__3__FcfsQueue__enqueue(resource_client_id_t id)
#line 82
{
  /* atomic removed: atomic calls only */
#line 83
  {
    if (!/*BlockStorageLockC.Arbiter.Queue*/FcfsResourceQueueC__3__FcfsQueue__isEnqueued(id)) {
        if (/*BlockStorageLockC.Arbiter.Queue*/FcfsResourceQueueC__3__qHead == /*BlockStorageLockC.Arbiter.Queue*/FcfsResourceQueueC__3__NO_ENTRY) {
          /*BlockStorageLockC.Arbiter.Queue*/FcfsResourceQueueC__3__qHead = id;
          }
        else {
#line 88
          /*BlockStorageLockC.Arbiter.Queue*/FcfsResourceQueueC__3__resQ[/*BlockStorageLockC.Arbiter.Queue*/FcfsResourceQueueC__3__qTail] = id;
          }
#line 89
        /*BlockStorageLockC.Arbiter.Queue*/FcfsResourceQueueC__3__qTail = id;
        {
          unsigned char __nesc_temp = 
#line 90
          SUCCESS;

#line 90
          return __nesc_temp;
        }
      }
#line 92
    {
      unsigned char __nesc_temp = 
#line 92
      EBUSY;

#line 92
      return __nesc_temp;
    }
  }
}

# 79 "/opt/tinyos-2.1.2/tos/interfaces/ResourceQueue.nc"
inline static error_t /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__Queue__enqueue(resource_client_id_t id){
#line 79
  unsigned char __nesc_result;
#line 79

#line 79
  __nesc_result = /*BlockStorageLockC.Arbiter.Queue*/FcfsResourceQueueC__3__FcfsQueue__enqueue(id);
#line 79

#line 79
  return __nesc_result;
#line 79
}
#line 79
# 45 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/ObjectTransfer.nc"
inline static error_t DelugeP__ObjectTransfer__stop(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = ObjectTransferP__ObjectTransfer__stop();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 103 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeMetadataP.nc"
static inline error_t DelugeMetadataP__DelugeMetadata__read(uint8_t client, uint8_t imgNum)
{
  error_t error;

#line 106
  if (DelugeMetadataP__state != DelugeMetadataP__S_READY) {
      return FAIL;
    }
  DelugeMetadataP__currentClient = client;
  error = DelugeMetadataP__BlockRead__read(imgNum, 0, &DelugeMetadataP__ident, sizeof DelugeMetadataP__ident);
  DelugeMetadataP__state = error == SUCCESS ? DelugeMetadataP__S_BUSY : DelugeMetadataP__state;
  return error;
}

# 12 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeMetadata.nc"
inline static error_t DelugeP__DelugeMetadata__read(uint8_t imgNum){
#line 12
  unsigned char __nesc_result;
#line 12

#line 12
  __nesc_result = DelugeMetadataP__DelugeMetadata__read(/*DelugeC.DelugeMetadataClientC*/DelugeMetadataClientC__0__CLIENT_ID, imgNum);
#line 12

#line 12
  return __nesc_result;
#line 12
}
#line 12
# 142 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
static inline bool /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__Resource__isOwner(uint8_t id)
#line 142
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 143
    {
      if (/*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__resId == id && /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__state == /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__RES_BUSY) {
          unsigned char __nesc_temp = 
#line 144
          TRUE;

          {
#line 144
            __nesc_atomic_end(__nesc_atomic); 
#line 144
            return __nesc_temp;
          }
        }
      else 
#line 145
        {
          unsigned char __nesc_temp = 
#line 145
          FALSE;

          {
#line 145
            __nesc_atomic_end(__nesc_atomic); 
#line 145
            return __nesc_temp;
          }
        }
    }
#line 148
    __nesc_atomic_end(__nesc_atomic); }
}

# 128 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static bool DelugeP__Resource__isOwner(void ){
#line 128
  unsigned char __nesc_result;
#line 128

#line 128
  __nesc_result = /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__Resource__isOwner(/*DelugeC.BlockStorageLockClientC*/BlockStorageLockClientC__0__CLIENT_ID);
#line 128

#line 128
  return __nesc_result;
#line 128
}
#line 128
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
inline static error_t DelugeP__taskRequest__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(DelugeP__taskRequest);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 88 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t DelugeP__Resource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__Resource__request(/*DelugeC.BlockStorageLockClientC*/BlockStorageLockClientC__0__CLIENT_ID);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 77 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeVolumeManagerP.nc"
static inline error_t DelugeVolumeManagerP__BlockWrite__default__erase(uint8_t imgNum)
#line 77
{
#line 77
  return FAIL;
}

# 83 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
inline static error_t DelugeVolumeManagerP__BlockWrite__erase(uint8_t arg_0x7fa21d3b8840){
#line 83
  unsigned char __nesc_result;
#line 83

#line 83
  switch (arg_0x7fa21d3b8840) {
#line 83
    case VOLUME_DELUGE3:
#line 83
      __nesc_result = /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockWrite__erase(/*DelugeVolumeManagerC.BlockWriterDeluge3*/BlockWriterC__9__CLIENT_ID);
#line 83
      break;
#line 83
    case VOLUME_DELUGE1:
#line 83
      __nesc_result = /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockWrite__erase(/*DelugeVolumeManagerC.BlockWriterDeluge1*/BlockWriterC__7__CLIENT_ID);
#line 83
      break;
#line 83
    case VOLUME_DELUGE2:
#line 83
      __nesc_result = /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockWrite__erase(/*DelugeVolumeManagerC.BlockWriterDeluge2*/BlockWriterC__8__CLIENT_ID);
#line 83
      break;
#line 83
    default:
#line 83
      __nesc_result = DelugeVolumeManagerP__BlockWrite__default__erase(arg_0x7fa21d3b8840);
#line 83
      break;
#line 83
    }
#line 83

#line 83
  return __nesc_result;
#line 83
}
#line 83
# 63 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeVolumeManagerP.nc"
static inline void DelugeVolumeManagerP__Resource__granted(uint8_t imgNum)
{
  DelugeVolumeManagerP__BlockWrite__erase(imgNum);
}

# 158 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
static inline void /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__Resource__default__granted(uint8_t id)
#line 158
{
}

# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static void /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__Resource__granted(uint8_t arg_0x7fa21e0ace30){
#line 102
  switch (arg_0x7fa21e0ace30) {
#line 102
    case /*DelugeVolumeManagerC.BlockWriterDeluge1.BlockStorageLockClientC*/BlockStorageLockClientC__15__CLIENT_ID:
#line 102
      DelugeVolumeManagerP__Resource__granted(VOLUME_DELUGE1);
#line 102
      break;
#line 102
    case /*DelugeVolumeManagerC.BlockWriterDeluge2.BlockStorageLockClientC*/BlockStorageLockClientC__16__CLIENT_ID:
#line 102
      DelugeVolumeManagerP__Resource__granted(VOLUME_DELUGE2);
#line 102
      break;
#line 102
    case /*DelugeVolumeManagerC.BlockWriterDeluge3.BlockStorageLockClientC*/BlockStorageLockClientC__17__CLIENT_ID:
#line 102
      DelugeVolumeManagerP__Resource__granted(VOLUME_DELUGE3);
#line 102
      break;
#line 102
    case /*DelugeC.BlockStorageLockClientC*/BlockStorageLockClientC__0__CLIENT_ID:
#line 102
      DelugeP__Resource__granted();
#line 102
      break;
#line 102
    default:
#line 102
      /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__Resource__default__granted(arg_0x7fa21e0ace30);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 164 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
static inline void /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__ResourceConfigure__default__configure(uint8_t id)
#line 164
{
}

# 59 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
inline static void /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__ResourceConfigure__configure(uint8_t arg_0x7fa21e0a8538){
#line 59
    /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__ResourceConfigure__default__configure(arg_0x7fa21e0a8538);
#line 59
}
#line 59
# 149 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
static inline void /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__grantedTask__runTask(void )
#line 149
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 150
    {
      /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__state = /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__RES_BUSY;
      /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__ResourceConfigure__configure(/*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__resId);
    }
#line 153
    __nesc_atomic_end(__nesc_atomic); }
  /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__Resource__granted(/*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__resId);
}

# 202 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__default__granted(uint8_t id)
#line 202
{
}

# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__granted(uint8_t arg_0x7fa21d6c7640){
#line 102
  switch (arg_0x7fa21d6c7640) {
#line 102
    case /*BlockStorageManagerC.BlockStorageC_Golden*/BlockStorageC__0__RESOURCE_ID:
#line 102
      BlockStorageP__Resource__granted(/*BlockStorageManagerC.BlockStorageC_Golden*/BlockStorageC__0__BLOCK_ID);
#line 102
      break;
#line 102
    case /*BlockStorageManagerC.BlockStorageC_1*/BlockStorageC__1__RESOURCE_ID:
#line 102
      BlockStorageP__Resource__granted(/*BlockStorageManagerC.BlockStorageC_1*/BlockStorageC__1__BLOCK_ID);
#line 102
      break;
#line 102
    case /*BlockStorageManagerC.BlockStorageC_2*/BlockStorageC__2__RESOURCE_ID:
#line 102
      BlockStorageP__Resource__granted(/*BlockStorageManagerC.BlockStorageC_2*/BlockStorageC__2__BLOCK_ID);
#line 102
      break;
#line 102
    case /*BlockStorageManagerC.BlockStorageC_3*/BlockStorageC__3__RESOURCE_ID:
#line 102
      BlockStorageP__Resource__granted(/*BlockStorageManagerC.BlockStorageC_3*/BlockStorageC__3__BLOCK_ID);
#line 102
      break;
#line 102
    default:
#line 102
      /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__default__granted(arg_0x7fa21d6c7640);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 216 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(uint8_t id)
#line 216
{
}

# 59 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
inline static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__configure(uint8_t arg_0x7fa21d6c39b8){
#line 59
    /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(arg_0x7fa21d6c39b8);
#line 59
}
#line 59
# 190 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__grantedTask__runTask(void )
#line 190
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 191
    {
      /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__resId = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__reqResId;
      /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__state = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__RES_BUSY;
    }
#line 194
    __nesc_atomic_end(__nesc_atomic); }
  /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__configure(/*At45dbC.Arbiter.Arbiter*/ArbiterP__0__resId);
  /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__granted(/*At45dbC.Arbiter.Arbiter*/ArbiterP__0__resId);
}

# 229 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
static inline int BlockStorageP__BConfig__default__writeHook(uint8_t blockId)
#line 229
{
  return FALSE;
}

# 37 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbBlockConfig.nc"
inline static int BlockStorageP__BConfig__writeHook(uint8_t arg_0x7fa21d8a6020){
#line 37
  int __nesc_result;
#line 37

#line 37
    __nesc_result = BlockStorageP__BConfig__default__writeHook(arg_0x7fa21d8a6020);
#line 37

#line 37
  return __nesc_result;
#line 37
}
#line 37
# 280 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP__multipageStart(uint16_t crc)
#line 280
{
  BlockStorageP__currentOffset = 0;
  BlockStorageP__multipageContinue(crc);
}

# 477 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP__At45db__syncAll(void )
#line 477
{
  At45dbP__syncOrFlushAll(At45dbP__R_SYNCALL);
}

# 131 "/opt/tinyos-2.1.2/tos/chips/at45db/At45db.nc"
inline static void BlockStorageP__At45db__syncAll(void ){
#line 131
  At45dbP__At45db__syncAll();
#line 131
}
#line 131
# 324 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP__syncStart(void )
#line 324
{
  BlockStorageP__At45db__syncAll();
}

#line 117
static inline at45page_t BlockStorageP__pageRemap(at45page_t p)
#line 117
{
  return BlockStorageP__BConfig__remap(BlockStorageP__client, p);
}

# 426 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP__At45db__erase(at45page_t page, uint8_t eraseKind)
#line 426
{
  At45dbP__newRequest(At45dbP__R_ERASE, page, eraseKind, (void *)0, 0);
}

# 111 "/opt/tinyos-2.1.2/tos/chips/at45db/At45db.nc"
inline static void BlockStorageP__At45db__erase(at45page_t page, uint8_t eraseKind){
#line 111
  At45dbP__At45db__erase(page, eraseKind);
#line 111
}
#line 111
# 300 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP__eraseStart(void )
#line 300
{
  BlockStorageP__At45db__erase(BlockStorageP__pageRemap(0), AT45_ERASE);
}

#line 147
static inline void BlockStorageP__startRequest(void )
#line 147
{
  switch (BlockStorageP__s[BlockStorageP__client].request) 
    {
      case BlockStorageP__R_ERASE: 
        BlockStorageP__eraseStart();
      break;
      case BlockStorageP__R_SYNC: 
        BlockStorageP__syncStart();
      break;
      default: 
        BlockStorageP__multipageStart((uint16_t )BlockStorageP__s[BlockStorageP__client].buf);
    }
}

# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
inline static error_t At45dbP__taskFail__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(At45dbP__taskFail);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
inline static error_t /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__granted__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__granted);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 30 "/opt/tinyos-2.1.2/tos/system/NoArbiterC.nc"
static inline error_t /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__Resource__request(void )
#line 30
{
  /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__granted__postTask();
  return SUCCESS;
}

# 88 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__Resource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__Resource__request();
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 191 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45dbByteC.nc"
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__waitIdle(void )
#line 191
{
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__status = /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_WAIT_IDLE;
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__Resource__request();
}

# 30 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45db.nc"
inline static void At45dbP__HplAt45db__waitIdle(void ){
#line 30
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__waitIdle();
#line 30
}
#line 30
# 229 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45dbByteC.nc"
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__erase(uint8_t cmd, at45page_t page)
#line 229
{
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__execCommand(/*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_ERASE, cmd, 0, page, 0, (void *)0, 1);
}

# 100 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45db.nc"
inline static void At45dbP__HplAt45db__erase(uint8_t cmd, at45page_t page){
#line 100
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__erase(cmd, page);
#line 100
}
#line 100
# 285 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP__multipageOpDone(error_t result, uint16_t crc)
#line 285
{
  if (result != SUCCESS) {
    BlockStorageP__endRequest(result, 0);
    }
  else {
#line 289
    BlockStorageP__multipageContinue(crc);
    }
}

#line 372
static inline void BlockStorageP__At45db__readDone(error_t result)
#line 372
{
  if (BlockStorageP__client != BlockStorageP__NO_CLIENT) {
    BlockStorageP__multipageOpDone(result, 0);
    }
}

# 173 "/opt/tinyos-2.1.2/tos/chips/at45db/At45db.nc"
inline static void At45dbP__At45db__readDone(error_t error){
#line 173
  BlockStorageP__At45db__readDone(error);
#line 173
}
#line 173
# 403 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
static inline error_t BlockStorageP__Resource__default__release(uint8_t id)
#line 403
{
#line 403
  return FAIL;
}

# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t BlockStorageP__Resource__release(uint8_t arg_0x7fa21d8a84b0){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  switch (arg_0x7fa21d8a84b0) {
#line 120
    case /*BlockStorageManagerC.BlockStorageC_Golden*/BlockStorageC__0__BLOCK_ID:
#line 120
      __nesc_result = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__release(/*BlockStorageManagerC.BlockStorageC_Golden*/BlockStorageC__0__RESOURCE_ID);
#line 120
      break;
#line 120
    case /*BlockStorageManagerC.BlockStorageC_1*/BlockStorageC__1__BLOCK_ID:
#line 120
      __nesc_result = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__release(/*BlockStorageManagerC.BlockStorageC_1*/BlockStorageC__1__RESOURCE_ID);
#line 120
      break;
#line 120
    case /*BlockStorageManagerC.BlockStorageC_2*/BlockStorageC__2__BLOCK_ID:
#line 120
      __nesc_result = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__release(/*BlockStorageManagerC.BlockStorageC_2*/BlockStorageC__2__RESOURCE_ID);
#line 120
      break;
#line 120
    case /*BlockStorageManagerC.BlockStorageC_3*/BlockStorageC__3__BLOCK_ID:
#line 120
      __nesc_result = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__release(/*BlockStorageManagerC.BlockStorageC_3*/BlockStorageC__3__RESOURCE_ID);
#line 120
      break;
#line 120
    default:
#line 120
      __nesc_result = BlockStorageP__Resource__default__release(arg_0x7fa21d8a84b0);
#line 120
      break;
#line 120
    }
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 60 "/opt/tinyos-2.1.2/tos/system/FcfsResourceQueueC.nc"
static inline bool /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__isEmpty(void )
#line 60
{
  /* atomic removed: atomic calls only */
#line 61
  {
    unsigned char __nesc_temp = 
#line 61
    /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__qHead == /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__NO_ENTRY;

#line 61
    return __nesc_temp;
  }
}

# 53 "/opt/tinyos-2.1.2/tos/interfaces/ResourceQueue.nc"
inline static bool /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Queue__isEmpty(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__isEmpty();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 68 "/opt/tinyos-2.1.2/tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__dequeue(void )
#line 68
{
  /* atomic removed: atomic calls only */
#line 69
  {
    if (/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__qHead != /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__NO_ENTRY) {
        uint8_t id = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__qHead;

#line 72
        /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__qHead = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__resQ[/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__qHead];
        if (/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__qHead == /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__NO_ENTRY) {
          /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__qTail = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__NO_ENTRY;
          }
#line 75
        /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__resQ[id] = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__NO_ENTRY;
        {
          unsigned char __nesc_temp = 
#line 76
          id;

#line 76
          return __nesc_temp;
        }
      }
#line 78
    {
      unsigned char __nesc_temp = 
#line 78
      /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__NO_ENTRY;

#line 78
      return __nesc_temp;
    }
  }
}

# 70 "/opt/tinyos-2.1.2/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Queue__dequeue(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__FcfsQueue__dequeue();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 218 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id)
#line 218
{
}

# 65 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
inline static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(uint8_t arg_0x7fa21d6c39b8){
#line 65
    /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(arg_0x7fa21d6c39b8);
#line 65
}
#line 65
# 208 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
static inline void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__granted(void )
#line 208
{
}

# 46 "/opt/tinyos-2.1.2/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted(void ){
#line 46
  /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__granted();
#line 46
}
#line 46
# 104 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/BlockStorageManagerP.nc"
static inline void /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockRead__readDone(volume_id_t volume_id, storage_addr_t addr, void *buf, storage_len_t len, error_t error)
{
  /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__state = /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__S_READY;
  /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockRead__readDone(/*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__current_client, addr, buf, len, error);
}

# 397 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP__BlockRead__default__readDone(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len, error_t result)
#line 397
{
}

# 67 "/opt/tinyos-2.1.2/tos/interfaces/BlockRead.nc"
inline static void BlockStorageP__BlockRead__readDone(uint8_t arg_0x7fa21d8be4b8, storage_addr_t addr, void * buf, storage_len_t len, error_t error){
#line 67
  switch (arg_0x7fa21d8be4b8) {
#line 67
    case /*BlockStorageManagerC.BlockStorageC_Golden*/BlockStorageC__0__BLOCK_ID:
#line 67
      /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockRead__readDone(VOLUME_GOLDENIMAGE, addr, buf, len, error);
#line 67
      break;
#line 67
    case /*BlockStorageManagerC.BlockStorageC_1*/BlockStorageC__1__BLOCK_ID:
#line 67
      /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockRead__readDone(VOLUME_DELUGE1, addr, buf, len, error);
#line 67
      break;
#line 67
    case /*BlockStorageManagerC.BlockStorageC_2*/BlockStorageC__2__BLOCK_ID:
#line 67
      /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockRead__readDone(VOLUME_DELUGE2, addr, buf, len, error);
#line 67
      break;
#line 67
    case /*BlockStorageManagerC.BlockStorageC_3*/BlockStorageC__3__BLOCK_ID:
#line 67
      /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockRead__readDone(VOLUME_DELUGE3, addr, buf, len, error);
#line 67
      break;
#line 67
    default:
#line 67
      BlockStorageP__BlockRead__default__readDone(arg_0x7fa21d8be4b8, addr, buf, len, error);
#line 67
      break;
#line 67
    }
#line 67
}
#line 67
# 47 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/StorageMap.nc"
inline static storage_addr_t DelugeP__StorageMap__getPhysicalAddress(uint8_t arg_0x7fa21d4667e0, storage_addr_t addr){
#line 47
  unsigned long __nesc_result;
#line 47

#line 47
  __nesc_result = /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__StorageMap__getPhysicalAddress(arg_0x7fa21d4667e0, addr);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 64 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/extra/NetProg.nc"
inline static error_t DelugeP__NetProg__programImageAndReboot(uint32_t imageAddr){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = NetProgM__NetProg__programImageAndReboot(imageAddr);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 164 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeP.nc"
static inline void DelugeP__DelugeMetadata__readDone(uint8_t imgNum, DelugeIdent *ident, error_t error)
{

  if (__nesc_ntoh_uint32(ident->uidhash.nxdata) == __nesc_ntoh_uint32(DelugeP__lastCmd.uidhash.nxdata)) {
      if (__nesc_ntoh_uint8(DelugeP__lastCmd.type.nxdata) == DELUGE_CMD_DISSEMINATE_AND_REPROGRAM) {
          DelugeP__NetProg__programImageAndReboot(DelugeP__StorageMap__getPhysicalAddress(imgNum, 0));
        }
      else 
#line 170
        {

          DelugeP__state = DelugeP__S_PUB;
          DelugeP__request();
        }
    }
  else 
#line 175
    {
      DelugeP__state = DelugeP__S_RECV;
      DelugeP__request();
    }
}

# 186 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeMetadataP.nc"
static inline void DelugeMetadataP__DelugeMetadata__default__readDone(uint8_t client, uint8_t imgNum, DelugeIdent *i, error_t error)
#line 186
{
}

# 13 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeMetadata.nc"
inline static void DelugeMetadataP__DelugeMetadata__readDone(uint8_t arg_0x7fa21d425800, uint8_t imgNum, DelugeIdent *ident, error_t error){
#line 13
  switch (arg_0x7fa21d425800) {
#line 13
    case /*DelugeC.DelugeMetadataClientC*/DelugeMetadataClientC__0__CLIENT_ID:
#line 13
      DelugeP__DelugeMetadata__readDone(imgNum, ident, error);
#line 13
      break;
#line 13
    default:
#line 13
      DelugeMetadataP__DelugeMetadata__default__readDone(arg_0x7fa21d425800, imgNum, ident, error);
#line 13
      break;
#line 13
    }
#line 13
}
#line 13
# 50 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/extra/avr/InternalFlashC.nc"
static inline error_t InternalFlashC__InternalFlash__write(void *addr, void *buf, uint16_t size)
#line 50
{

  uint8_t *addrPtr = (uint8_t *)addr;
  uint8_t *bufPtr = (uint8_t *)buf;

  for (; size; size--) 
    __eewr_byte_m1281(addrPtr++, * bufPtr++);

  while (! !(* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)(0x1F + 0x20) & (1 << 1))) ;

  return SUCCESS;
}

# 68 "/opt/tinyos-2.1.2/tos/interfaces/InternalFlash.nc"
inline static error_t NetProgM__IFlash__write(void *addr, void * buf, uint16_t size){
#line 68
  unsigned char __nesc_result;
#line 68

#line 68
  __nesc_result = InternalFlashC__InternalFlash__write(addr, buf, size);
#line 68

#line 68
  return __nesc_result;
#line 68
}
#line 68
# 45 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/extra/mica2/NetProg_platform.h"
static inline void netprog_reboot()
#line 45
{
   __asm volatile ("in __tmp_reg__,__SREG__""\n\t""cli""\n\t""wdr""\n\t""sts %0,%1""\n\t""out __SREG__,__tmp_reg__""\n\t""sts %0,%2""\n\t" :  : "M"((uint16_t )& * (volatile uint8_t *)0x60), "r"((1 << 4) | (1 << 3)), "r"((uint8_t )(((1 & 0x08 ? 1 << 5 : 0x00) | (1 << 3)) | (1 & 0x07))) : "r0");
  while (1) ;
}

# 24 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbVolume.nc"
inline static at45page_t /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__At45dbVolume__remap(volume_id_t arg_0x7fa21d91c4c8, at45page_t volumePage){
#line 24
  unsigned short __nesc_result;
#line 24

#line 24
  __nesc_result = At45dbStorageManagerC__At45dbVolume__remap(arg_0x7fa21d91c4c8, volumePage);
#line 24

#line 24
  return __nesc_result;
#line 24
}
#line 24
# 80 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeMetadataP.nc"
static inline uint32_t DelugeMetadataP__calcCrcAddr(void )
{
  return DELUGE_IDENT_SIZE + DelugeMetadataP__currentPage * sizeof(uint16_t );
}

# 424 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230DriverLayerP.nc"
static inline error_t RF230DriverLayerP__RadioState__turnOn(void )
{
  if (RF230DriverLayerP__cmd != RF230DriverLayerP__CMD_NONE || (RF230DriverLayerP__state == RF230DriverLayerP__STATE_SLEEP && !RF230DriverLayerP__RadioAlarm__isFree())) {
    return EBUSY;
    }
  else {
#line 428
    if (RF230DriverLayerP__state == RF230DriverLayerP__STATE_RX_ON) {
      return EALREADY;
      }
    }
#line 431
  RF230DriverLayerP__cmd = RF230DriverLayerP__CMD_TURNON;
  RF230DriverLayerP__Tasklet__schedule();

  return SUCCESS;
}

# 56 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioState.nc"
inline static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__turnOn(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = RF230DriverLayerP__RadioState__turnOn();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 76 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__start(void )
{
  error_t error;

  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__suspend();

  if (/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state != /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_READY) {
    error = EBUSY;
    }
  else {
      error = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioState__turnOn();

      if (error == SUCCESS) {
        /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TURN_ON;
        }
    }
  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__resume();

  return error;
}

# 104 "/opt/tinyos-2.1.2/tos/interfaces/SplitControl.nc"
inline static error_t DelugeP__RadioSplitControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 69 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeP.nc"
static inline void DelugeP__storageReady(void )
{
  DelugeP__RadioSplitControl__start();
}

# 47 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeMetadataP.nc"
inline static void DelugeMetadataP__storageReady(void ){
#line 47
  DelugeP__storageReady();
#line 47
}
#line 47
#line 166
static inline error_t DelugeMetadataP__BlockRead__default__computeCrc(uint8_t imgNum, storage_addr_t addr, storage_len_t len, uint16_t crc)
#line 166
{
#line 166
  return FAIL;
}

# 83 "/opt/tinyos-2.1.2/tos/interfaces/BlockRead.nc"
inline static error_t DelugeMetadataP__BlockRead__computeCrc(uint8_t arg_0x7fa21d424b00, storage_addr_t addr, storage_len_t len, uint16_t crc){
#line 83
  unsigned char __nesc_result;
#line 83

#line 83
  switch (arg_0x7fa21d424b00) {
#line 83
    case VOLUME_GOLDENIMAGE:
#line 83
      __nesc_result = /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockRead__computeCrc(/*DelugeMetadataC.BlockReaderGoldenImage*/BlockReaderC__3__CLIENT_ID, addr, len, crc);
#line 83
      break;
#line 83
    case VOLUME_DELUGE3:
#line 83
      __nesc_result = /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockRead__computeCrc(/*DelugeMetadataC.BlockReaderDeluge3*/BlockReaderC__6__CLIENT_ID, addr, len, crc);
#line 83
      break;
#line 83
    case VOLUME_DELUGE1:
#line 83
      __nesc_result = /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockRead__computeCrc(/*DelugeMetadataC.BlockReaderDeluge1*/BlockReaderC__4__CLIENT_ID, addr, len, crc);
#line 83
      break;
#line 83
    case VOLUME_DELUGE2:
#line 83
      __nesc_result = /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockRead__computeCrc(/*DelugeMetadataC.BlockReaderDeluge2*/BlockReaderC__5__CLIENT_ID, addr, len, crc);
#line 83
      break;
#line 83
    default:
#line 83
      __nesc_result = DelugeMetadataP__BlockRead__default__computeCrc(arg_0x7fa21d424b00, addr, len, crc);
#line 83
      break;
#line 83
    }
#line 83

#line 83
  return __nesc_result;
#line 83
}
#line 83
# 344 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
static inline error_t BlockStorageP__BlockRead__computeCrc(uint8_t id, storage_addr_t addr, storage_len_t len, uint16_t basecrc)
#line 344
{
  return BlockStorageP__newRequest(BlockStorageP__R_CRC, id, addr, (void * )basecrc, len);
}

# 117 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/BlockStorageManagerP.nc"
static inline error_t /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockRead__default__computeCrc(uint8_t client, storage_addr_t addr, storage_len_t len, uint16_t crc)
#line 117
{
#line 117
  return FAIL;
}

# 83 "/opt/tinyos-2.1.2/tos/interfaces/BlockRead.nc"
inline static error_t /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockRead__computeCrc(volume_id_t arg_0x7fa21d925b10, storage_addr_t addr, storage_len_t len, uint16_t crc){
#line 83
  unsigned char __nesc_result;
#line 83

#line 83
  switch (arg_0x7fa21d925b10) {
#line 83
    case VOLUME_GOLDENIMAGE:
#line 83
      __nesc_result = BlockStorageP__BlockRead__computeCrc(/*BlockStorageManagerC.BlockStorageC_Golden*/BlockStorageC__0__BLOCK_ID, addr, len, crc);
#line 83
      break;
#line 83
    case VOLUME_DELUGE3:
#line 83
      __nesc_result = BlockStorageP__BlockRead__computeCrc(/*BlockStorageManagerC.BlockStorageC_3*/BlockStorageC__3__BLOCK_ID, addr, len, crc);
#line 83
      break;
#line 83
    case VOLUME_DELUGE1:
#line 83
      __nesc_result = BlockStorageP__BlockRead__computeCrc(/*BlockStorageManagerC.BlockStorageC_1*/BlockStorageC__1__BLOCK_ID, addr, len, crc);
#line 83
      break;
#line 83
    case VOLUME_DELUGE2:
#line 83
      __nesc_result = BlockStorageP__BlockRead__computeCrc(/*BlockStorageManagerC.BlockStorageC_2*/BlockStorageC__2__BLOCK_ID, addr, len, crc);
#line 83
      break;
#line 83
    default:
#line 83
      __nesc_result = /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockRead__default__computeCrc(arg_0x7fa21d925b10, addr, len, crc);
#line 83
      break;
#line 83
    }
#line 83

#line 83
  return __nesc_result;
#line 83
}
#line 83
# 85 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeMetadataP.nc"
static inline uint32_t DelugeMetadataP__calcPageAddr(void )
{
  return DELUGE_IDENT_SIZE + DELUGE_CRC_BLOCK_SIZE + DelugeMetadataP__currentPage * (uint32_t )DELUGE_BYTES_PER_PAGE;
}

# 75 "/opt/tinyos-2.1.2/tos/interfaces/Send.nc"
inline static error_t /*ObjectTransferC.SendDataMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__2__Send__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(2U, msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 162 "/opt/tinyos-2.1.2/tos/interfaces/AMPacket.nc"
inline static void /*ObjectTransferC.SendDataMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMPacket__setType(message_t * amsg, am_id_t t){
#line 162
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setType(amsg, t);
#line 162
}
#line 162
#line 103
inline static void /*ObjectTransferC.SendDataMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMPacket__setDestination(message_t * amsg, am_addr_t addr){
#line 103
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setDestination(amsg, addr);
#line 103
}
#line 103
# 53 "/opt/tinyos-2.1.2/tos/system/AMQueueEntryP.nc"
static inline error_t /*ObjectTransferC.SendDataMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 55
{
  /*ObjectTransferC.SendDataMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMPacket__setDestination(msg, dest);
  /*ObjectTransferC.SendDataMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMPacket__setType(msg, 82U);
  return /*ObjectTransferC.SendDataMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__2__Send__send(msg, len);
}

# 80 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
inline static error_t DelugePageTransferP__SendDataMsg__send(am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*ObjectTransferC.SendDataMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMSend__send(addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 170 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/BlockStorageManagerP.nc"
static inline void /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockWrite__writeDone(volume_id_t volume_id, storage_addr_t addr, void *buf, storage_len_t len, error_t error)
{
  /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__state = /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__S_READY;
  /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockWrite__writeDone(/*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__current_client, addr, buf, len, error);
}

# 394 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP__BlockWrite__default__writeDone(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len, error_t result)
#line 394
{
}

# 71 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
inline static void BlockStorageP__BlockWrite__writeDone(uint8_t arg_0x7fa21d8bf1d0, storage_addr_t addr, void * buf, storage_len_t len, error_t error){
#line 71
  switch (arg_0x7fa21d8bf1d0) {
#line 71
    case /*BlockStorageManagerC.BlockStorageC_Golden*/BlockStorageC__0__BLOCK_ID:
#line 71
      /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockWrite__writeDone(VOLUME_GOLDENIMAGE, addr, buf, len, error);
#line 71
      break;
#line 71
    case /*BlockStorageManagerC.BlockStorageC_1*/BlockStorageC__1__BLOCK_ID:
#line 71
      /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockWrite__writeDone(VOLUME_DELUGE1, addr, buf, len, error);
#line 71
      break;
#line 71
    case /*BlockStorageManagerC.BlockStorageC_2*/BlockStorageC__2__BLOCK_ID:
#line 71
      /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockWrite__writeDone(VOLUME_DELUGE2, addr, buf, len, error);
#line 71
      break;
#line 71
    case /*BlockStorageManagerC.BlockStorageC_3*/BlockStorageC__3__BLOCK_ID:
#line 71
      /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockWrite__writeDone(VOLUME_DELUGE3, addr, buf, len, error);
#line 71
      break;
#line 71
    default:
#line 71
      BlockStorageP__BlockWrite__default__writeDone(arg_0x7fa21d8bf1d0, addr, buf, len, error);
#line 71
      break;
#line 71
    }
#line 71
}
#line 71
# 75 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeVolumeManagerP.nc"
static inline void DelugeVolumeManagerP__BlockWrite__writeDone(uint8_t imgNum, storage_addr_t addr, void *buf, storage_len_t len, error_t error)
#line 75
{
}

# 168 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeMetadataP.nc"
static inline void DelugeMetadataP__BlockWrite__writeDone(uint8_t imgNum, storage_addr_t addr, void *buf, storage_len_t len, error_t error)
#line 168
{
}

# 94 "/opt/tinyos-2.1.2/tos/system/LedsP.nc"
static inline void LedsP__Leds__led1Off(void )
#line 94
{
  LedsP__Led1__set();
  ;
#line 96
  ;
}

# 77 "/opt/tinyos-2.1.2/tos/interfaces/Leds.nc"
inline static void DelugePageTransferP__Leds__led1Off(void ){
#line 77
  LedsP__Leds__led1Off();
#line 77
}
#line 77
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
inline static error_t ObjectTransferP__signalObjRecvDone__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(ObjectTransferP__signalObjRecvDone);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 335 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/ObjectTransferP.nc"
static inline error_t ObjectTransferP__BlockWrite__default__sync(uint8_t img_num)
#line 335
{
#line 335
  return FAIL;
}

# 103 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
inline static error_t ObjectTransferP__BlockWrite__sync(uint8_t arg_0x7fa21e522288){
#line 103
  unsigned char __nesc_result;
#line 103

#line 103
  switch (arg_0x7fa21e522288) {
#line 103
    case VOLUME_DELUGE3:
#line 103
      __nesc_result = /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockWrite__sync(/*DelugeC.BlockWriterDeluge3*/BlockWriterC__2__CLIENT_ID);
#line 103
      break;
#line 103
    case VOLUME_DELUGE1:
#line 103
      __nesc_result = /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockWrite__sync(/*DelugeC.BlockWriterDeluge1*/BlockWriterC__0__CLIENT_ID);
#line 103
      break;
#line 103
    case VOLUME_DELUGE2:
#line 103
      __nesc_result = /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockWrite__sync(/*DelugeC.BlockWriterDeluge2*/BlockWriterC__1__CLIENT_ID);
#line 103
      break;
#line 103
    default:
#line 103
      __nesc_result = ObjectTransferP__BlockWrite__default__sync(arg_0x7fa21e522288);
#line 103
      break;
#line 103
    }
#line 103

#line 103
  return __nesc_result;
#line 103
}
#line 103
# 237 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/ObjectTransferP.nc"
static inline void ObjectTransferP__DelugePageTransfer__receivedPage(object_id_t new_objid, page_num_t new_pgNum)
{
  unsigned char __nesc_temp43;
  unsigned char *__nesc_temp42;

#line 240
  if (new_objid == __nesc_ntoh_int32(ObjectTransferP__curObjDesc.objid.nxdata) && new_pgNum == __nesc_ntoh_uint8(ObjectTransferP__curObjDesc.numPgsComplete.nxdata)) {
      (__nesc_temp42 = ObjectTransferP__curObjDesc.numPgsComplete.nxdata, __nesc_hton_uint8(__nesc_temp42, (__nesc_temp43 = __nesc_ntoh_uint8(__nesc_temp42)) + 1), __nesc_temp43);
      __nesc_hton_uint16(ObjectTransferP__curObjDesc.crc.nxdata, ObjectTransferP__Crc__crc16(&ObjectTransferP__curObjDesc, sizeof(object_id_t ) + sizeof(page_num_t )));
      if (__nesc_ntoh_uint8(ObjectTransferP__curObjDesc.numPgsComplete.nxdata) < __nesc_ntoh_uint8(ObjectTransferP__curObjDesc.numPgs.nxdata)) {
          ObjectTransferP__setNextPage();
        }
      else 
#line 245
        {
          ObjectTransferP__DelugePageTransfer__setWorkingPage(__nesc_ntoh_int32(ObjectTransferP__curObjDesc.objid.nxdata), __nesc_ntoh_uint8(ObjectTransferP__curObjDesc.numPgsComplete.nxdata));
          ObjectTransferP__state = ObjectTransferP__S_SYNC;
          if (ObjectTransferP__BlockWrite__sync(ObjectTransferP__cont_receive_img_num) != SUCCESS) {
              ObjectTransferP__signalObjRecvDone__postTask();
            }
        }
    }
}

# 49 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugePageTransfer.nc"
inline static void DelugePageTransferP__DelugePageTransfer__receivedPage(object_id_t new_objid, page_num_t new_pgNum){
#line 49
  ObjectTransferP__DelugePageTransfer__receivedPage(new_objid, new_pgNum);
#line 49
}
#line 49
# 320 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
static inline error_t BlockStorageP__BlockWrite__sync(uint8_t id)
#line 320
{
  return BlockStorageP__newRequest(BlockStorageP__R_SYNC, id, 0, (void *)0, 0);
}

# 212 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/BlockStorageManagerP.nc"
static inline error_t /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockWrite__default__sync(uint8_t client)
#line 212
{
#line 212
  return FAIL;
}

# 103 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
inline static error_t /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockWrite__sync(volume_id_t arg_0x7fa21d923df0){
#line 103
  unsigned char __nesc_result;
#line 103

#line 103
  switch (arg_0x7fa21d923df0) {
#line 103
    case VOLUME_GOLDENIMAGE:
#line 103
      __nesc_result = BlockStorageP__BlockWrite__sync(/*BlockStorageManagerC.BlockStorageC_Golden*/BlockStorageC__0__BLOCK_ID);
#line 103
      break;
#line 103
    case VOLUME_DELUGE3:
#line 103
      __nesc_result = BlockStorageP__BlockWrite__sync(/*BlockStorageManagerC.BlockStorageC_3*/BlockStorageC__3__BLOCK_ID);
#line 103
      break;
#line 103
    case VOLUME_DELUGE1:
#line 103
      __nesc_result = BlockStorageP__BlockWrite__sync(/*BlockStorageManagerC.BlockStorageC_1*/BlockStorageC__1__BLOCK_ID);
#line 103
      break;
#line 103
    case VOLUME_DELUGE2:
#line 103
      __nesc_result = BlockStorageP__BlockWrite__sync(/*BlockStorageManagerC.BlockStorageC_2*/BlockStorageC__2__BLOCK_ID);
#line 103
      break;
#line 103
    default:
#line 103
      __nesc_result = /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockWrite__default__sync(arg_0x7fa21d923df0);
#line 103
      break;
#line 103
    }
#line 103

#line 103
  return __nesc_result;
#line 103
}
#line 103
# 496 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugePageTransferP.nc"
static inline error_t DelugePageTransferP__BlockWrite__default__write(uint8_t img_num, storage_addr_t addr, void *buf, storage_len_t len)
#line 496
{
#line 496
  return FAIL;
}

# 58 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
inline static error_t DelugePageTransferP__BlockWrite__write(uint8_t arg_0x7fa21e48e4a0, storage_addr_t addr, void * buf, storage_len_t len){
#line 58
  unsigned char __nesc_result;
#line 58

#line 58
  switch (arg_0x7fa21e48e4a0) {
#line 58
    case VOLUME_DELUGE3:
#line 58
      __nesc_result = /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockWrite__write(/*DelugeC.BlockWriterDeluge3*/BlockWriterC__2__CLIENT_ID, addr, buf, len);
#line 58
      break;
#line 58
    case VOLUME_DELUGE1:
#line 58
      __nesc_result = /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockWrite__write(/*DelugeC.BlockWriterDeluge1*/BlockWriterC__0__CLIENT_ID, addr, buf, len);
#line 58
      break;
#line 58
    case VOLUME_DELUGE2:
#line 58
      __nesc_result = /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockWrite__write(/*DelugeC.BlockWriterDeluge2*/BlockWriterC__1__CLIENT_ID, addr, buf, len);
#line 58
      break;
#line 58
    default:
#line 58
      __nesc_result = DelugePageTransferP__BlockWrite__default__write(arg_0x7fa21e48e4a0, addr, buf, len);
#line 58
      break;
#line 58
    }
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 312 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
static inline error_t BlockStorageP__BlockWrite__write(uint8_t id, storage_addr_t addr, void *buf, storage_len_t len)
#line 312
{
  return BlockStorageP__newRequest(BlockStorageP__R_WRITE, id, addr, buf, len);
}

# 210 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/BlockStorageManagerP.nc"
static inline error_t /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockWrite__default__write(uint8_t client, storage_addr_t addr, void *buf, storage_len_t len)
#line 210
{
#line 210
  return FAIL;
}

# 58 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
inline static error_t /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockWrite__write(volume_id_t arg_0x7fa21d923df0, storage_addr_t addr, void * buf, storage_len_t len){
#line 58
  unsigned char __nesc_result;
#line 58

#line 58
  switch (arg_0x7fa21d923df0) {
#line 58
    case VOLUME_GOLDENIMAGE:
#line 58
      __nesc_result = BlockStorageP__BlockWrite__write(/*BlockStorageManagerC.BlockStorageC_Golden*/BlockStorageC__0__BLOCK_ID, addr, buf, len);
#line 58
      break;
#line 58
    case VOLUME_DELUGE3:
#line 58
      __nesc_result = BlockStorageP__BlockWrite__write(/*BlockStorageManagerC.BlockStorageC_3*/BlockStorageC__3__BLOCK_ID, addr, buf, len);
#line 58
      break;
#line 58
    case VOLUME_DELUGE1:
#line 58
      __nesc_result = BlockStorageP__BlockWrite__write(/*BlockStorageManagerC.BlockStorageC_1*/BlockStorageC__1__BLOCK_ID, addr, buf, len);
#line 58
      break;
#line 58
    case VOLUME_DELUGE2:
#line 58
      __nesc_result = BlockStorageP__BlockWrite__write(/*BlockStorageManagerC.BlockStorageC_2*/BlockStorageC__2__BLOCK_ID, addr, buf, len);
#line 58
      break;
#line 58
    default:
#line 58
      __nesc_result = /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockWrite__default__write(arg_0x7fa21d923df0, addr, buf, len);
#line 58
      break;
#line 58
    }
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 337 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/ObjectTransferP.nc"
static inline void ObjectTransferP__BlockWrite__writeDone(uint8_t img_num, storage_addr_t addr, void *buf, storage_len_t len, error_t error)
#line 337
{
}

# 176 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/BlockStorageManagerP.nc"
static inline void /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockWrite__eraseDone(volume_id_t volume_id, error_t error)
{
  /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__state = /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__S_READY;
  /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockWrite__eraseDone(/*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__current_client, error);
}

# 395 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP__BlockWrite__default__eraseDone(uint8_t id, error_t result)
#line 395
{
}

# 91 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
inline static void BlockStorageP__BlockWrite__eraseDone(uint8_t arg_0x7fa21d8bf1d0, error_t error){
#line 91
  switch (arg_0x7fa21d8bf1d0) {
#line 91
    case /*BlockStorageManagerC.BlockStorageC_Golden*/BlockStorageC__0__BLOCK_ID:
#line 91
      /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockWrite__eraseDone(VOLUME_GOLDENIMAGE, error);
#line 91
      break;
#line 91
    case /*BlockStorageManagerC.BlockStorageC_1*/BlockStorageC__1__BLOCK_ID:
#line 91
      /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockWrite__eraseDone(VOLUME_DELUGE1, error);
#line 91
      break;
#line 91
    case /*BlockStorageManagerC.BlockStorageC_2*/BlockStorageC__2__BLOCK_ID:
#line 91
      /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockWrite__eraseDone(VOLUME_DELUGE2, error);
#line 91
      break;
#line 91
    case /*BlockStorageManagerC.BlockStorageC_3*/BlockStorageC__3__BLOCK_ID:
#line 91
      /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockWrite__eraseDone(VOLUME_DELUGE3, error);
#line 91
      break;
#line 91
    default:
#line 91
      BlockStorageP__BlockWrite__default__eraseDone(arg_0x7fa21d8bf1d0, error);
#line 91
      break;
#line 91
    }
#line 91
}
#line 91
# 80 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeVolumeManagerP.nc"
static inline error_t DelugeVolumeManagerP__Resource__default__release(uint8_t imgNum)
#line 80
{
#line 80
  return FAIL;
}

# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t DelugeVolumeManagerP__Resource__release(uint8_t arg_0x7fa21d3b7c68){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  switch (arg_0x7fa21d3b7c68) {
#line 120
    case VOLUME_DELUGE3:
#line 120
      __nesc_result = /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__Resource__release(/*DelugeVolumeManagerC.BlockWriterDeluge3.BlockStorageLockClientC*/BlockStorageLockClientC__17__CLIENT_ID);
#line 120
      break;
#line 120
    case VOLUME_DELUGE1:
#line 120
      __nesc_result = /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__Resource__release(/*DelugeVolumeManagerC.BlockWriterDeluge1.BlockStorageLockClientC*/BlockStorageLockClientC__15__CLIENT_ID);
#line 120
      break;
#line 120
    case VOLUME_DELUGE2:
#line 120
      __nesc_result = /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__Resource__release(/*DelugeVolumeManagerC.BlockWriterDeluge2.BlockStorageLockClientC*/BlockStorageLockClientC__16__CLIENT_ID);
#line 120
      break;
#line 120
    default:
#line 120
      __nesc_result = DelugeVolumeManagerP__Resource__default__release(arg_0x7fa21d3b7c68);
#line 120
      break;
#line 120
    }
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 194 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeP.nc"
static inline void DelugeP__DelugeVolumeManager__eraseDone(uint8_t imgNum)
#line 194
{
}

# 78 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeVolumeManagerP.nc"
static inline void DelugeVolumeManagerP__DelugeVolumeManager__default__eraseDone(uint8_t client, uint8_t imgNum)
#line 78
{
}

# 40 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeVolumeManager.nc"
inline static void DelugeVolumeManagerP__DelugeVolumeManager__eraseDone(uint8_t arg_0x7fa21d3bba30, uint8_t imgNum){
#line 40
  switch (arg_0x7fa21d3bba30) {
#line 40
    case /*DelugeC.DelugeVolumeManagerClientC*/DelugeVolumeManagerClientC__0__CLIENT_ID:
#line 40
      DelugeP__DelugeVolumeManager__eraseDone(imgNum);
#line 40
      break;
#line 40
    default:
#line 40
      DelugeVolumeManagerP__DelugeVolumeManager__default__eraseDone(arg_0x7fa21d3bba30, imgNum);
#line 40
      break;
#line 40
    }
#line 40
}
#line 40
# 487 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugePageTransferP.nc"
static inline void DelugePageTransferP__BlockWrite__eraseDone(uint8_t img_num, error_t error)
#line 487
{
}

# 338 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/ObjectTransferP.nc"
static inline void ObjectTransferP__BlockWrite__eraseDone(uint8_t img_num, error_t error)
{
  if (ObjectTransferP__state == ObjectTransferP__S_ERASE) {
      ObjectTransferP__cont_receive();
    }
}

# 110 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/BlockStorageManagerP.nc"
static inline void /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockRead__computeCrcDone(volume_id_t volume_id, storage_addr_t addr, storage_len_t len, uint16_t crc, error_t error)
{
  /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__state = /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__S_READY;
  /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockRead__computeCrcDone(/*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__current_client, addr, len, crc, error);
}

# 398 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP__BlockRead__default__computeCrcDone(uint8_t id, storage_addr_t addr, storage_len_t len, uint16_t x, error_t result)
#line 398
{
}

# 95 "/opt/tinyos-2.1.2/tos/interfaces/BlockRead.nc"
inline static void BlockStorageP__BlockRead__computeCrcDone(uint8_t arg_0x7fa21d8be4b8, storage_addr_t addr, storage_len_t len, uint16_t crc, error_t error){
#line 95
  switch (arg_0x7fa21d8be4b8) {
#line 95
    case /*BlockStorageManagerC.BlockStorageC_Golden*/BlockStorageC__0__BLOCK_ID:
#line 95
      /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockRead__computeCrcDone(VOLUME_GOLDENIMAGE, addr, len, crc, error);
#line 95
      break;
#line 95
    case /*BlockStorageManagerC.BlockStorageC_1*/BlockStorageC__1__BLOCK_ID:
#line 95
      /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockRead__computeCrcDone(VOLUME_DELUGE1, addr, len, crc, error);
#line 95
      break;
#line 95
    case /*BlockStorageManagerC.BlockStorageC_2*/BlockStorageC__2__BLOCK_ID:
#line 95
      /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockRead__computeCrcDone(VOLUME_DELUGE2, addr, len, crc, error);
#line 95
      break;
#line 95
    case /*BlockStorageManagerC.BlockStorageC_3*/BlockStorageC__3__BLOCK_ID:
#line 95
      /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockRead__computeCrcDone(VOLUME_DELUGE3, addr, len, crc, error);
#line 95
      break;
#line 95
    default:
#line 95
      BlockStorageP__BlockRead__default__computeCrcDone(arg_0x7fa21d8be4b8, addr, len, crc, error);
#line 95
      break;
#line 95
    }
#line 95
}
#line 95
# 184 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeMetadataP.nc"
static inline error_t DelugeMetadataP__BlockWrite__default__erase(uint8_t imgNum)
#line 184
{
#line 184
  return FAIL;
}

# 83 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
inline static error_t DelugeMetadataP__BlockWrite__erase(uint8_t arg_0x7fa21d423c78){
#line 83
  unsigned char __nesc_result;
#line 83

#line 83
  switch (arg_0x7fa21d423c78) {
#line 83
    case VOLUME_GOLDENIMAGE:
#line 83
      __nesc_result = /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockWrite__erase(/*DelugeMetadataC.BlockWriterGoldenImage*/BlockWriterC__3__CLIENT_ID);
#line 83
      break;
#line 83
    case VOLUME_DELUGE3:
#line 83
      __nesc_result = /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockWrite__erase(/*DelugeMetadataC.BlockWriterDeluge3*/BlockWriterC__6__CLIENT_ID);
#line 83
      break;
#line 83
    case VOLUME_DELUGE1:
#line 83
      __nesc_result = /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockWrite__erase(/*DelugeMetadataC.BlockWriterDeluge1*/BlockWriterC__4__CLIENT_ID);
#line 83
      break;
#line 83
    case VOLUME_DELUGE2:
#line 83
      __nesc_result = /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockWrite__erase(/*DelugeMetadataC.BlockWriterDeluge2*/BlockWriterC__5__CLIENT_ID);
#line 83
      break;
#line 83
    default:
#line 83
      __nesc_result = DelugeMetadataP__BlockWrite__default__erase(arg_0x7fa21d423c78);
#line 83
      break;
#line 83
    }
#line 83

#line 83
  return __nesc_result;
#line 83
}
#line 83
# 448 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugePageTransferP.nc"
static inline void DelugePageTransferP__BlockRead__computeCrcDone(uint8_t img_num, storage_addr_t addr, storage_len_t len, uint16_t crc, error_t error)
#line 448
{
}

# 182 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/BlockStorageManagerP.nc"
static inline void /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockWrite__syncDone(volume_id_t volume_id, error_t error)
{
  /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__state = /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__S_READY;
  /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockWrite__syncDone(/*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__current_client, error);
}

# 396 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP__BlockWrite__default__syncDone(uint8_t id, error_t result)
#line 396
{
}

# 112 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
inline static void BlockStorageP__BlockWrite__syncDone(uint8_t arg_0x7fa21d8bf1d0, error_t error){
#line 112
  switch (arg_0x7fa21d8bf1d0) {
#line 112
    case /*BlockStorageManagerC.BlockStorageC_Golden*/BlockStorageC__0__BLOCK_ID:
#line 112
      /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockWrite__syncDone(VOLUME_GOLDENIMAGE, error);
#line 112
      break;
#line 112
    case /*BlockStorageManagerC.BlockStorageC_1*/BlockStorageC__1__BLOCK_ID:
#line 112
      /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockWrite__syncDone(VOLUME_DELUGE1, error);
#line 112
      break;
#line 112
    case /*BlockStorageManagerC.BlockStorageC_2*/BlockStorageC__2__BLOCK_ID:
#line 112
      /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockWrite__syncDone(VOLUME_DELUGE2, error);
#line 112
      break;
#line 112
    case /*BlockStorageManagerC.BlockStorageC_3*/BlockStorageC__3__BLOCK_ID:
#line 112
      /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockWrite__syncDone(VOLUME_DELUGE3, error);
#line 112
      break;
#line 112
    default:
#line 112
      BlockStorageP__BlockWrite__default__syncDone(arg_0x7fa21d8bf1d0, error);
#line 112
      break;
#line 112
    }
#line 112
}
#line 112
# 76 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeVolumeManagerP.nc"
static inline void DelugeVolumeManagerP__BlockWrite__syncDone(uint8_t imgNum, error_t error)
#line 76
{
}

# 183 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeMetadataP.nc"
static inline void DelugeMetadataP__BlockWrite__syncDone(uint8_t imgNum, error_t error)
#line 183
{
}

# 488 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugePageTransferP.nc"
static inline void DelugePageTransferP__BlockWrite__syncDone(uint8_t img_num, error_t error)
#line 488
{
}

# 255 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/ObjectTransferP.nc"
static inline void ObjectTransferP__BlockWrite__syncDone(uint8_t img_num, error_t error)
{
  if (ObjectTransferP__state == ObjectTransferP__S_SYNC) {
      ObjectTransferP__signalObjRecvDone__postTask();
    }
}

# 135 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
static inline int BlockStorageP__BConfig__default__flipped(uint8_t blockId)
#line 135
{
  return FALSE;
}

# 30 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbBlockConfig.nc"
inline static int BlockStorageP__BConfig__flipped(uint8_t arg_0x7fa21d8a6020){
#line 30
  int __nesc_result;
#line 30

#line 30
    __nesc_result = BlockStorageP__BConfig__default__flipped(arg_0x7fa21d8a6020);
#line 30

#line 30
  return __nesc_result;
#line 30
}
#line 30
# 400 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
static inline at45page_t BlockStorageP__At45dbVolume__default__remap(uint8_t id, at45page_t volumePage)
#line 400
{
#line 400
  return 0;
}

# 24 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbVolume.nc"
inline static at45page_t BlockStorageP__At45dbVolume__remap(uint8_t arg_0x7fa21d8bb7e8, at45page_t volumePage){
#line 24
  unsigned short __nesc_result;
#line 24

#line 24
  switch (arg_0x7fa21d8bb7e8) {
#line 24
    case /*BlockStorageManagerC.BlockStorageC_Golden*/BlockStorageC__0__BLOCK_ID:
#line 24
      __nesc_result = At45dbStorageManagerC__At45dbVolume__remap(0, volumePage);
#line 24
      break;
#line 24
    case /*BlockStorageManagerC.BlockStorageC_1*/BlockStorageC__1__BLOCK_ID:
#line 24
      __nesc_result = At45dbStorageManagerC__At45dbVolume__remap(2, volumePage);
#line 24
      break;
#line 24
    case /*BlockStorageManagerC.BlockStorageC_2*/BlockStorageC__2__BLOCK_ID:
#line 24
      __nesc_result = At45dbStorageManagerC__At45dbVolume__remap(3, volumePage);
#line 24
      break;
#line 24
    case /*BlockStorageManagerC.BlockStorageC_3*/BlockStorageC__3__BLOCK_ID:
#line 24
      __nesc_result = At45dbStorageManagerC__At45dbVolume__remap(1, volumePage);
#line 24
      break;
#line 24
    default:
#line 24
      __nesc_result = BlockStorageP__At45dbVolume__default__remap(arg_0x7fa21d8bb7e8, volumePage);
#line 24
      break;
#line 24
    }
#line 24

#line 24
  return __nesc_result;
#line 24
}
#line 24
# 420 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP__At45db__write(at45page_t page, at45pageoffset_t offset, 
void *reqdata, at45pageoffset_t n)
#line 421
{
  At45dbP__newRequest(At45dbP__R_WRITE, page, offset, reqdata, n);
}

# 73 "/opt/tinyos-2.1.2/tos/chips/at45db/At45db.nc"
inline static void BlockStorageP__At45db__write(at45page_t page, at45pageoffset_t offset, void * data, at45pageoffset_t n){
#line 73
  At45dbP__At45db__write(page, offset, data, n);
#line 73
}
#line 73
# 407 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP__At45db__read(at45page_t page, at45pageoffset_t offset, 
void *reqdata, at45pageoffset_t n)
#line 408
{
  At45dbP__newRequest(At45dbP__R_READ, page, offset, reqdata, n);
}

# 166 "/opt/tinyos-2.1.2/tos/chips/at45db/At45db.nc"
inline static void BlockStorageP__At45db__read(at45page_t page, at45pageoffset_t offset, void * data, at45pageoffset_t n){
#line 166
  At45dbP__At45db__read(page, offset, data, n);
#line 166
}
#line 166
# 412 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP__At45db__computeCrc(at45page_t page, 
at45pageoffset_t offset, 
at45pageoffset_t n, 
uint16_t baseCrc)
#line 415
{

  At45dbP__newRequest(At45dbP__R_READCRC, page, offset, (uint8_t * )baseCrc, n);
}

# 187 "/opt/tinyos-2.1.2/tos/chips/at45db/At45db.nc"
inline static void BlockStorageP__At45db__computeCrc(at45page_t page, at45pageoffset_t offset, at45pageoffset_t n, uint16_t baseCrc){
#line 187
  At45dbP__At45db__computeCrc(page, offset, n, baseCrc);
#line 187
}
#line 187
# 377 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP__At45db__computeCrcDone(error_t result, uint16_t newCrc)
#line 377
{
  if (BlockStorageP__client != BlockStorageP__NO_CLIENT) {
    BlockStorageP__multipageOpDone(result, newCrc);
    }
}

# 194 "/opt/tinyos-2.1.2/tos/chips/at45db/At45db.nc"
inline static void At45dbP__At45db__computeCrcDone(error_t error, uint16_t crc){
#line 194
  BlockStorageP__At45db__computeCrcDone(error, crc);
#line 194
}
#line 194
# 367 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP__At45db__writeDone(error_t result)
#line 367
{
  if (BlockStorageP__client != BlockStorageP__NO_CLIENT) {
    BlockStorageP__multipageOpDone(result, 0);
    }
}

# 80 "/opt/tinyos-2.1.2/tos/chips/at45db/At45db.nc"
inline static void At45dbP__At45db__writeDone(error_t error){
#line 80
  BlockStorageP__At45db__writeDone(error);
#line 80
}
#line 80
# 328 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP__syncSyncDone(error_t error)
#line 328
{
  BlockStorageP__endRequest(error, 0);
}

#line 387
static inline void BlockStorageP__At45db__syncDone(error_t result)
#line 387
{
  if (BlockStorageP__client != BlockStorageP__NO_CLIENT) {
    BlockStorageP__syncSyncDone(result);
    }
}

# 136 "/opt/tinyos-2.1.2/tos/chips/at45db/At45db.nc"
inline static void At45dbP__At45db__syncDone(error_t error){
#line 136
  BlockStorageP__At45db__syncDone(error);
#line 136
}
#line 136
# 392 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP__At45db__flushDone(error_t result)
#line 392
{
}

# 154 "/opt/tinyos-2.1.2/tos/chips/at45db/At45db.nc"
inline static void At45dbP__At45db__flushDone(error_t error){
#line 154
  BlockStorageP__At45db__flushDone(error);
#line 154
}
#line 154
# 304 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP__eraseEraseDone(error_t error)
#line 304
{
  BlockStorageP__endRequest(error, 0);
}

#line 382
static inline void BlockStorageP__At45db__eraseDone(error_t result)
#line 382
{
  if (BlockStorageP__client != BlockStorageP__NO_CLIENT) {
    BlockStorageP__eraseEraseDone(result);
    }
}

# 116 "/opt/tinyos-2.1.2/tos/chips/at45db/At45db.nc"
inline static void At45dbP__At45db__eraseDone(error_t error){
#line 116
  BlockStorageP__At45db__eraseDone(error);
#line 116
}
#line 116
# 393 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
static inline void BlockStorageP__At45db__copyPageDone(error_t error)
#line 393
{
}

# 96 "/opt/tinyos-2.1.2/tos/chips/at45db/At45db.nc"
inline static void At45dbP__At45db__copyPageDone(error_t error){
#line 96
  BlockStorageP__At45db__copyPageDone(error);
#line 96
}
#line 96
# 221 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45dbByteC.nc"
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__flush(uint8_t cmd, at45page_t page)
#line 221
{
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__execCommand(/*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_FLUSH, cmd, 0, page, 0, (void *)0, 1);
}

# 73 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45db.nc"
inline static void At45dbP__HplAt45db__flush(uint8_t cmd, at45page_t page){
#line 73
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__flush(cmd, page);
#line 73
}
#line 73
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
inline static error_t At45dbP__taskSuccess__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(At45dbP__taskSuccess);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 225 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45dbByteC.nc"
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__compare(uint8_t cmd, at45page_t page)
#line 225
{
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__execCommand(/*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_COMPARE, cmd, 0, page, 0, (void *)0, 1);
}

# 87 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45db.nc"
inline static void At45dbP__HplAt45db__compare(uint8_t cmd, at45page_t page){
#line 87
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__compare(cmd, page);
#line 87
}
#line 87
# 239 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45dbByteC.nc"
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__readBuffer(uint8_t cmd, at45pageoffset_t offset, 
uint8_t *pdata, at45pageoffset_t count)
#line 240
{
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__execCommand(/*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_READ, cmd, 2, 0, offset, pdata, count);
}

# 119 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45db.nc"
inline static void At45dbP__HplAt45db__readBuffer(uint8_t cmd, at45pageoffset_t offset, uint8_t * data, uint16_t n){
#line 119
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__readBuffer(cmd, offset, data, n);
#line 119
}
#line 119
# 244 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45dbByteC.nc"
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__crc(uint8_t cmd, 
at45page_t page, at45pageoffset_t offset, 
at45pageoffset_t count, 
uint16_t baseCrc)
#line 247
{
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__execCommand(/*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_READ_CRC, cmd, 2, page, offset, (uint8_t * )baseCrc, count);
}

# 157 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45db.nc"
inline static void At45dbP__HplAt45db__crc(uint8_t cmd, at45page_t page, at45pageoffset_t offset, at45pageoffset_t n, uint16_t baseCrc){
#line 157
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__crc(cmd, page, offset, n, baseCrc);
#line 157
}
#line 157
# 251 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45dbByteC.nc"
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__write(uint8_t cmd, 
at45page_t page, at45pageoffset_t offset, 
uint8_t *pdata, at45pageoffset_t count)
#line 253
{
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__execCommand(/*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_WRITE, cmd, 0, page, offset, pdata, count);
}

# 178 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45db.nc"
inline static void At45dbP__HplAt45db__write(uint8_t cmd, at45page_t page, at45pageoffset_t offset, uint8_t * data, at45pageoffset_t n){
#line 178
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__write(cmd, page, offset, data, n);
#line 178
}
#line 178
# 217 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45dbByteC.nc"
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__fill(uint8_t cmd, at45page_t page)
#line 217
{
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__execCommand(/*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_FILL, cmd, 0, page, 0, (void *)0, 1);
}

# 55 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45db.nc"
inline static void At45dbP__HplAt45db__fill(uint8_t cmd, at45page_t page){
#line 55
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__fill(cmd, page);
#line 55
}
#line 55
# 205 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP__HplAt45db__writeDone(void )
#line 205
{
  At45dbP__buffer[At45dbP__selected].clean = FALSE;
  At45dbP__buffer[At45dbP__selected].unchecked = 0;
  At45dbP__requestDone(SUCCESS, 0, At45dbP__IDLE);
}

# 185 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45db.nc"
inline static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__writeDone(void ){
#line 185
  At45dbP__HplAt45db__writeDone();
#line 185
}
#line 185
# 201 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP__HplAt45db__readDone(void )
#line 201
{
  At45dbP__requestDone(SUCCESS, 0, At45dbP__IDLE);
}

# 141 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45db.nc"
inline static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__readDone(void ){
#line 141
  At45dbP__HplAt45db__readDone();
#line 141
}
#line 141
# 242 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP__HplAt45db__eraseDone(void )
#line 242
{
  At45dbP__flashBusy = TRUE;



  At45dbP__buffer[At45dbP__selected].page = At45dbP__reqPage;
  At45dbP__buffer[At45dbP__selected].clean = TRUE;
  At45dbP__buffer[At45dbP__selected].erased = TRUE;
  At45dbP__requestDone(SUCCESS, 0, At45dbP__IDLE);
}

# 106 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45db.nc"
inline static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__eraseDone(void ){
#line 106
  At45dbP__HplAt45db__eraseDone();
#line 106
}
#line 106
# 196 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45dbByteC.nc"
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__waitCompare(void )
#line 196
{
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__status = /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_WAIT_COMPARE;
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__Resource__request();
}

# 41 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45db.nc"
inline static void At45dbP__HplAt45db__waitCompare(void ){
#line 41
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__waitCompare();
#line 41
}
#line 41
# 40 "/opt/tinyos-2.1.2/tos/platforms/micaz/BusyWaitMicroC.nc"
static __inline void BusyWaitMicroC__BusyWait__wait(uint16_t dt)
#line 40
{

  if (dt) {


     __asm volatile (
    "1:	sbiw	%0,1\n"
    "	adiw	%0,1\n"
    "	sbiw	%0,1\n"
    "	brne	1b" : "+w"(dt));
    }
}

# 66 "/opt/tinyos-2.1.2/tos/lib/timer/BusyWait.nc"
inline static void At45dbP__BusyWait__wait(At45dbP__BusyWait__size_type dt){
#line 66
  BusyWaitMicroC__BusyWait__wait(dt);
#line 66
}
#line 66
# 223 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP__HplAt45db__compareDone(void )
#line 223
{
  At45dbP__flashBusy = TRUE;
  At45dbP__buffer[At45dbP__checking].busy = TRUE;




  At45dbP__BusyWait__wait(10);
  At45dbP__HplAt45db__waitCompare();
}

# 93 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45db.nc"
inline static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__compareDone(void ){
#line 93
  At45dbP__HplAt45db__compareDone();
#line 93
}
#line 93
# 215 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP__HplAt45db__flushDone(void )
#line 215
{
  At45dbP__flashBusy = TRUE;
  At45dbP__buffer[At45dbP__selected].clean = At45dbP__buffer[At45dbP__selected].busy = TRUE;
  At45dbP__buffer[At45dbP__selected].unchecked++;
  At45dbP__buffer[At45dbP__selected].erased = FALSE;
  At45dbP__handleRWRequest();
}

# 79 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45db.nc"
inline static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__flushDone(void ){
#line 79
  At45dbP__HplAt45db__flushDone();
#line 79
}
#line 79
# 234 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP__HplAt45db__fillDone(void )
#line 234
{
  At45dbP__flashBusy = TRUE;
  At45dbP__buffer[At45dbP__selected].page = At45dbP__reqPage;
  At45dbP__buffer[At45dbP__selected].clean = At45dbP__buffer[At45dbP__selected].busy = TRUE;
  At45dbP__buffer[At45dbP__selected].erased = FALSE;
  At45dbP__handleRWRequest();
}

# 61 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45db.nc"
inline static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__fillDone(void ){
#line 61
  At45dbP__HplAt45db__fillDone();
#line 61
}
#line 61
# 211 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP__HplAt45db__crcDone(uint16_t crc)
#line 211
{
  At45dbP__requestDone(SUCCESS, crc, At45dbP__IDLE);
}

# 163 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45db.nc"
inline static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__crcDone(uint16_t computedCrc){
#line 163
  At45dbP__HplAt45db__crcDone(computedCrc);
#line 163
}
#line 163
# 55 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45dbByteC.nc"
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__complete(uint16_t crc)
#line 55
{
  uint8_t s = /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__status;

  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__status = /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_IDLE;
  switch (s) 
    {
      default: break;
      case /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_READ_CRC: 
        /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__crcDone(crc);
      break;
      case /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_FILL: 
        /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__fillDone();
      break;
      case /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_FLUSH: 
        /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__flushDone();
      break;
      case /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_COMPARE: 
        /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__compareDone();
      break;
      case /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_ERASE: 
        /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__eraseDone();
      break;
      case /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_READ: 
        /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__readDone();
      break;
      case /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_WRITE: 
        /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__writeDone();
      break;
    }
}

# 50 "/opt/tinyos-2.1.2/tos/system/NoArbiterC.nc"
static inline void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__ResourceConfigure__default__unconfigure(void )
#line 50
{
}

# 65 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
inline static void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__ResourceConfigure__unconfigure(void ){
#line 65
  /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__ResourceConfigure__default__unconfigure();
#line 65
}
#line 65
# 40 "/opt/tinyos-2.1.2/tos/system/NoArbiterC.nc"
static inline error_t /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__Resource__release(void )
#line 40
{
  /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__ResourceConfigure__unconfigure();
  return SUCCESS;
}

# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__Resource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__Resource__release();
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 125 "/opt/tinyos-2.1.2/tos/platforms/iris/chips/at45db/HplAt45dbIOP.nc"
static inline void HplAt45dbIOP__HplAt45dbByte__deselect(void )
#line 125
{
  HplAt45dbIOP__Select__set();
}

# 52 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45dbByte.nc"
inline static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45dbByte__deselect(void ){
#line 52
  HplAt45dbIOP__HplAt45dbByte__deselect();
#line 52
}
#line 52
# 45 "/opt/tinyos-2.1.2/tos/interfaces/SpiByte.nc"
inline static uint8_t /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__FlashSpi__write(uint8_t tx){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = HplAt45dbIOP__FlashSpi__write(tx);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 56 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP__3__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )34U &= ~(1 << 3);
}

# 41 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void HplAt45dbIOP__Select__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit3*/HplAtm128GeneralIOPinP__3__IO__clr();
#line 41
}
#line 41
# 120 "/opt/tinyos-2.1.2/tos/platforms/iris/chips/at45db/HplAt45dbIOP.nc"
static inline void HplAt45dbIOP__HplAt45dbByte__select(void )
#line 120
{
  HplAt45dbIOP__Clk__clr();
  HplAt45dbIOP__Select__clr();
}

# 47 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45dbByte.nc"
inline static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45dbByte__select(void ){
#line 47
  HplAt45dbIOP__HplAt45dbByte__select();
#line 47
}
#line 47
# 92 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45dbByteC.nc"
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__doCommand(void )
#line 92
{
  uint8_t in = 0;
#line 93
  uint8_t out = 0;
  uint8_t *ptr;
  at45pageoffset_t count;
  uint8_t lphase;
  uint16_t crc = (uint16_t )/*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__data;

  if (/*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__dataCount) 
    {






      ptr = /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__flashCmd;
      lphase = /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_SEND_CMD;
      count = 4 + /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__dontCare;

      /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45dbByte__select();
      for (; ; ) 
        {
          if (lphase == /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_READ_CRC) 
            {
              crc = crcByte(crc, in);

              --count;
              if (!count) {
                break;
                }
            }
          else {
#line 122
            if (lphase == /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_SEND_CMD) 
              {

                out = * ptr++;
                count--;
                if (!count) 
                  {
                    lphase = /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__status;
                    ptr = /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__data;
                    count = /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__dataCount;
                  }
              }
            else {
#line 134
              if (lphase == /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_READ) 
                {
                  * ptr++ = in;
                  --count;
                  if (!count) {
                    break;
                    }
                }
              else {
#line 141
                if (lphase == /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_WRITE) 
                  {
                    if (!count) {
                      break;
                      }
                    out = * ptr++;
                    --count;
                  }
                else {
                  break;
                  }
                }
              }
            }
#line 152
          in = /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__FlashSpi__write(out);
        }
      /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45dbByte__deselect();
    }

  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__Resource__release();
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__complete(crc);
}

# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
inline static error_t HplAt45dbIOP__avail__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(HplAt45dbIOP__avail);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 66 "/opt/tinyos-2.1.2/tos/lib/timer/BusyWait.nc"
inline static void HplAt45dbIOP__BusyWait__wait(HplAt45dbIOP__BusyWait__size_type dt){
#line 66
  BusyWaitMicroC__BusyWait__wait(dt);
#line 66
}
#line 66
# 55 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP__29__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )43U |= 1 << 5;
}

# 40 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void HplAt45dbIOP__Clk__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP__29__IO__set();
#line 40
}
#line 40
# 54 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP__26__IO__get(void )
#line 54
{
#line 54
  return (* (volatile uint8_t * )41U & (1 << 2)) != 0;
}

# 43 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static bool HplAt45dbIOP__In__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP__26__IO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 167 "/opt/tinyos-2.1.2/tos/platforms/iris/chips/at45db/HplAt45dbIOP.nc"
static inline void HplAt45dbIOP__HplAt45dbByte__waitIdle(void )
#line 167
{


  int i;

#line 171
  HplAt45dbIOP__Clk__clr();
  HplAt45dbIOP__BusyWait__wait(2);
  while (!HplAt45dbIOP__In__get()) {
      for (i = 0; i < 8; i++) {
          HplAt45dbIOP__Clk__set();
          HplAt45dbIOP__Clk__clr();
          HplAt45dbIOP__BusyWait__wait(2);
        }
    }
  HplAt45dbIOP__avail__postTask();
}

# 31 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45dbByte.nc"
inline static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45dbByte__waitIdle(void ){
#line 31
  HplAt45dbIOP__HplAt45dbByte__waitIdle();
#line 31
}
#line 31
# 86 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45dbByteC.nc"
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__requestFlashStatus(void )
#line 86
{
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45dbByte__select();
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__FlashSpi__write(AT45_C_REQ_STATUS);
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45dbByte__waitIdle();
}

#line 161
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__Resource__granted(void )
#line 161
{
  switch (/*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__status) 
    {
      case /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_WAIT_COMPARE: case /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_WAIT_IDLE: 
          /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__requestFlashStatus();
      break;
      default: 
        /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__doCommand();
      break;
    }
}

# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__Resource__granted(void ){
#line 102
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__Resource__granted();
#line 102
}
#line 102
# 49 "/opt/tinyos-2.1.2/tos/system/NoArbiterC.nc"
static inline void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__ResourceConfigure__default__configure(void )
#line 49
{
}

# 59 "/opt/tinyos-2.1.2/tos/interfaces/ResourceConfigure.nc"
inline static void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__ResourceConfigure__configure(void ){
#line 59
  /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__ResourceConfigure__default__configure();
#line 59
}
#line 59
# 25 "/opt/tinyos-2.1.2/tos/system/NoArbiterC.nc"
static inline void /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__granted__runTask(void )
#line 25
{
  /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__ResourceConfigure__configure();
  /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__Resource__granted();
}

# 174 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP__HplAt45db__waitIdleDone(void )
#line 174
{
  At45dbP__flashIdle();







  At45dbP__handleRWRequest();
}

# 35 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45db.nc"
inline static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__waitIdleDone(void ){
#line 35
  At45dbP__HplAt45db__waitIdleDone();
#line 35
}
#line 35
# 186 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP__HplAt45db__waitCompareDone(bool ok)
#line 186
{
  At45dbP__flashIdle();

  if (ok) {
    At45dbP__buffer[At45dbP__checking].unchecked = 0;
    }
  else {
#line 191
    if (At45dbP__buffer[At45dbP__checking].unchecked < 2) {
      At45dbP__buffer[At45dbP__checking].clean = FALSE;
      }
    else {
        At45dbP__requestDone(FAIL, 0, At45dbP__BROKEN);
        return;
      }
    }
#line 198
  At45dbP__handleRWRequest();
}

# 47 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45db.nc"
inline static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__waitCompareDone(bool compareOk){
#line 47
  At45dbP__HplAt45db__waitCompareDone(compareOk);
#line 47
}
#line 47
# 183 "/opt/tinyos-2.1.2/tos/platforms/iris/chips/at45db/HplAt45dbIOP.nc"
static inline bool HplAt45dbIOP__HplAt45dbByte__getCompareStatus(void )
#line 183
{
  HplAt45dbIOP__Clk__set();
  HplAt45dbIOP__Clk__clr();

   __asm volatile ("nop");
   __asm volatile ("nop");
  return !HplAt45dbIOP__In__get();
}

# 42 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45dbByte.nc"
inline static bool /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45dbByte__getCompareStatus(void ){
#line 42
  unsigned char __nesc_result;
#line 42

#line 42
  __nesc_result = HplAt45dbIOP__HplAt45dbByte__getCompareStatus();
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 201 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45dbByteC.nc"
static inline void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45dbByte__idle(void )
#line 201
{
  if (/*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__status == /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__P_WAIT_COMPARE) 
    {
      bool cstatus = /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45dbByte__getCompareStatus();

#line 205
      /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45dbByte__deselect();
      /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__Resource__release();
      /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__waitCompareDone(cstatus);
    }
  else 
    {
      /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45dbByte__deselect();
      /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__Resource__release();
      /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45db__waitIdleDone();
    }
}

# 35 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45dbByte.nc"
inline static void HplAt45dbIOP__HplAt45dbByte__idle(void ){
#line 35
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__HplAt45dbByte__idle();
#line 35
}
#line 35
# 163 "/opt/tinyos-2.1.2/tos/platforms/iris/chips/at45db/HplAt45dbIOP.nc"
static inline void HplAt45dbIOP__avail__runTask(void )
#line 163
{
  HplAt45dbIOP__HplAt45dbByte__idle();
}

# 148 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbP.nc"
static inline void At45dbP__taskFail__runTask(void )
#line 148
{
  At45dbP__requestDone(FAIL, 0, At45dbP__IDLE);
}

#line 145
static inline void At45dbP__taskSuccess__runTask(void )
#line 145
{
  At45dbP__requestDone(SUCCESS, 0, At45dbP__IDLE);
}

# 120 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t RF230DriverLayerP__SpiResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__release(0U);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 66 "/opt/tinyos-2.1.2/tos/lib/timer/BusyWait.nc"
inline static void RF230DriverLayerP__BusyWait__wait(RF230DriverLayerP__BusyWait__size_type dt){
#line 66
  BusyWaitMicroC__BusyWait__wait(dt);
#line 66
}
#line 66
# 56 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )34U &= ~(1 << 6);
}

# 41 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void RF230DriverLayerP__RSTN__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__clr();
#line 41
}
#line 41
# 242 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230DriverLayerP.nc"
static inline void RF230DriverLayerP__initRadio(void )
{
  RF230DriverLayerP__BusyWait__wait(510);

  RF230DriverLayerP__RSTN__clr();
  RF230DriverLayerP__SLP_TR__clr();
  RF230DriverLayerP__BusyWait__wait(6);
  RF230DriverLayerP__RSTN__set();

  RF230DriverLayerP__writeRegister(RF230_TRX_CTRL_0, RF230_TRX_CTRL_0_VALUE);
  RF230DriverLayerP__writeRegister(RF230_TRX_STATE, RF230_TRX_OFF);

  RF230DriverLayerP__BusyWait__wait(510);

  RF230DriverLayerP__writeRegister(RF230_IRQ_MASK, ((RF230_IRQ_TRX_UR | RF230_IRQ_PLL_LOCK) | RF230_IRQ_TRX_END) | RF230_IRQ_RX_START);
  RF230DriverLayerP__writeRegister(RF230_CCA_THRES, RF230_CCA_THRES_VALUE);
  RF230DriverLayerP__writeRegister(RF230_PHY_TX_PWR, RF230_TX_AUTO_CRC_ON | (0 & RF230_TX_PWR_MASK));

  RF230DriverLayerP__txPower = 0 & RF230_TX_PWR_MASK;
  RF230DriverLayerP__channel = 11 & RF230_CHANNEL_MASK;
  RF230DriverLayerP__writeRegister(RF230_PHY_CC_CCA, RF230_CCA_MODE_VALUE | RF230DriverLayerP__channel);

  RF230DriverLayerP__SLP_TR__set();
  RF230DriverLayerP__state = RF230DriverLayerP__STATE_SLEEP;
}



static inline void RF230DriverLayerP__SpiResource__granted(void )
{
  RF230DriverLayerP__SELN__makeOutput();
  RF230DriverLayerP__SELN__set();

  if (RF230DriverLayerP__state == RF230DriverLayerP__STATE_P_ON) 
    {
      RF230DriverLayerP__initRadio();
      RF230DriverLayerP__SpiResource__release();
    }
  else {
    RF230DriverLayerP__Tasklet__schedule();
    }
}

# 158 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__default__granted(uint8_t id)
#line 158
{
}

# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__granted(uint8_t arg_0x7fa21e0ace30){
#line 102
  switch (arg_0x7fa21e0ace30) {
#line 102
    case 0U:
#line 102
      RF230DriverLayerP__SpiResource__granted();
#line 102
      break;
#line 102
    default:
#line 102
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__default__granted(arg_0x7fa21e0ace30);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 149 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__grantedTask__runTask(void )
#line 149
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 150
    {
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__RES_BUSY;
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceConfigure__configure(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__resId);
    }
#line 153
    __nesc_atomic_end(__nesc_atomic); }
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__granted(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__resId);
}

# 349 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline 
#line 348
void Atm128SpiP__SpiPacket__default__sendDone(
uint8_t *_txbuffer, uint8_t *_rxbuffer, 
uint16_t _length, error_t _success)
#line 350
{
}

# 82 "/opt/tinyos-2.1.2/tos/interfaces/SpiPacket.nc"
inline static void Atm128SpiP__SpiPacket__sendDone(uint8_t * txBuf, uint8_t * rxBuf, uint16_t len, error_t error){
#line 82
  Atm128SpiP__SpiPacket__default__sendDone(txBuf, rxBuf, len, error);
#line 82
}
#line 82
# 294 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP__zeroTask__runTask(void )
#line 294
{
  uint16_t myLen;
  uint8_t * rx;
  uint8_t * tx;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 299
    {
      myLen = Atm128SpiP__len;
      rx = Atm128SpiP__rxBuffer;
      tx = Atm128SpiP__txBuffer;
      Atm128SpiP__rxBuffer = (void *)0;
      Atm128SpiP__txBuffer = (void *)0;
      Atm128SpiP__len = 0;
      Atm128SpiP__pos = 0;
      Atm128SpiP__SpiPacket__sendDone(tx, rx, myLen, SUCCESS);
    }
#line 308
    __nesc_atomic_end(__nesc_atomic); }
}

# 861 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230DriverLayerP.nc"
static inline void RF230DriverLayerP__releaseSpi__runTask(void )
{
  RF230DriverLayerP__SpiResource__release();
}

# 52 "/opt/tinyos-2.1.2/tos/interfaces/Random.nc"
inline static uint16_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Random__rand16(void ){
#line 52
  unsigned short __nesc_result;
#line 52

#line 52
  __nesc_result = RandomMlcgC__Random__rand16();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 78 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__runTask(void )
{
  uint16_t a = /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Random__rand16();

#line 81
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 81
    /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__nextRandom = a;
#line 81
    __nesc_atomic_end(__nesc_atomic); }
}

# 176 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__default__setChannelDone(void )
{
}

# 48 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioChannel.nc"
inline static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__setChannelDone(void ){
#line 48
  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__default__setChannelDone();
#line 48
}
#line 48
# 195 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeP.nc"
static inline void DelugeP__RadioSplitControl__stopDone(error_t error)
#line 195
{
}

# 138 "/opt/tinyos-2.1.2/tos/interfaces/SplitControl.nc"
inline static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__stopDone(error_t error){
#line 138
  DelugeP__RadioSplitControl__stopDone(error);
#line 138
}
#line 138
# 258 "/opt/tinyos-2.1.2/tos/lib/net/drip/DisseminationEngineImplP.nc"
static inline void DisseminationEngineImplP__TrickleTimer__default__reset(uint16_t key)
#line 258
{
}

# 80 "/opt/tinyos-2.1.2/tos/lib/net/TrickleTimer.nc"
inline static void DisseminationEngineImplP__TrickleTimer__reset(uint16_t arg_0x7fa21d5d17d0){
#line 80
  switch (arg_0x7fa21d5d17d0) {
#line 80
    case 56832UL:
#line 80
      /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__TrickleTimer__reset(/*DelugeC.DisseminatorC*/DisseminatorC__0__TIMER_ID);
#line 80
      break;
#line 80
    default:
#line 80
      DisseminationEngineImplP__TrickleTimer__default__reset(arg_0x7fa21d5d17d0);
#line 80
      break;
#line 80
    }
#line 80
}
#line 80
# 63 "/opt/tinyos-2.1.2/tos/interfaces/BitVector.nc"
inline static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Changed__set(uint16_t bitnum){
#line 63
  /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__BitVector__set(bitnum);
#line 63
}
#line 63
# 100 "/opt/tinyos-2.1.2/tos/lib/net/TrickleTimerImplP.nc"
static inline error_t /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__TrickleTimer__start(uint8_t id)
#line 100
{
  if (/*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].time != 0) {
      return EBUSY;
    }
  /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].time = 0;
  /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].remainder = 0;
  /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].count = 0;
  /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__generateTime(id);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 108
    {
      /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Changed__set(id);
    }
#line 110
    __nesc_atomic_end(__nesc_atomic); }
  /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__adjustTimer();
  ;
  return SUCCESS;
}

# 254 "/opt/tinyos-2.1.2/tos/lib/net/drip/DisseminationEngineImplP.nc"
static inline error_t DisseminationEngineImplP__TrickleTimer__default__start(uint16_t key)
#line 254
{
#line 254
  return FAIL;
}

# 68 "/opt/tinyos-2.1.2/tos/lib/net/TrickleTimer.nc"
inline static error_t DisseminationEngineImplP__TrickleTimer__start(uint16_t arg_0x7fa21d5d17d0){
#line 68
  unsigned char __nesc_result;
#line 68

#line 68
  switch (arg_0x7fa21d5d17d0) {
#line 68
    case 56832UL:
#line 68
      __nesc_result = /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__TrickleTimer__start(/*DelugeC.DisseminatorC*/DisseminatorC__0__TIMER_ID);
#line 68
      break;
#line 68
    default:
#line 68
      __nesc_result = DisseminationEngineImplP__TrickleTimer__default__start(arg_0x7fa21d5d17d0);
#line 68
      break;
#line 68
    }
#line 68

#line 68
  return __nesc_result;
#line 68
}
#line 68
# 91 "/opt/tinyos-2.1.2/tos/lib/net/drip/DisseminationEngineImplP.nc"
static inline error_t DisseminationEngineImplP__DisseminationCache__start(uint16_t key)
#line 91
{
  error_t result = DisseminationEngineImplP__TrickleTimer__start(key);

#line 93
  DisseminationEngineImplP__TrickleTimer__reset(key);
  return result;
}

# 45 "/opt/tinyos-2.1.2/tos/lib/net/drip/DisseminationCache.nc"
inline static error_t /*DelugeC.DisseminatorC.DisseminatorP*/DisseminatorP__0__DisseminationCache__start(void ){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = DisseminationEngineImplP__DisseminationCache__start(56832UL);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 66 "/opt/tinyos-2.1.2/tos/lib/net/drip/DisseminatorP.nc"
static inline error_t /*DelugeC.DisseminatorC.DisseminatorP*/DisseminatorP__0__StdControl__start(void )
#line 66
{
  error_t result = /*DelugeC.DisseminatorC.DisseminatorP*/DisseminatorP__0__DisseminationCache__start();

#line 68
  if (result == SUCCESS) {
#line 68
      /*DelugeC.DisseminatorC.DisseminatorP*/DisseminatorP__0__m_running = TRUE;
    }
#line 69
  return result;
}

# 262 "/opt/tinyos-2.1.2/tos/lib/net/drip/DisseminationEngineImplP.nc"
static inline error_t DisseminationEngineImplP__DisseminatorControl__default__start(uint16_t id)
#line 262
{
#line 262
  return FAIL;
}

# 95 "/opt/tinyos-2.1.2/tos/interfaces/StdControl.nc"
inline static error_t DisseminationEngineImplP__DisseminatorControl__start(uint16_t arg_0x7fa21d5d0a38){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  switch (arg_0x7fa21d5d0a38) {
#line 95
    case /*DelugeC.DisseminatorC*/DisseminatorC__0__TIMER_ID:
#line 95
      __nesc_result = /*DelugeC.DisseminatorC.DisseminatorP*/DisseminatorP__0__StdControl__start();
#line 95
      break;
#line 95
    default:
#line 95
      __nesc_result = DisseminationEngineImplP__DisseminatorControl__default__start(arg_0x7fa21d5d0a38);
#line 95
      break;
#line 95
    }
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 73 "/opt/tinyos-2.1.2/tos/lib/net/drip/DisseminationEngineImplP.nc"
static inline error_t DisseminationEngineImplP__StdControl__start(void )
#line 73
{
  uint8_t i;

#line 75
  for (i = 0; i < DisseminationEngineImplP__NUM_DISSEMINATORS; i++) {
      DisseminationEngineImplP__DisseminatorControl__start(i);
    }
  DisseminationEngineImplP__m_running = TRUE;
  return SUCCESS;
}

# 95 "/opt/tinyos-2.1.2/tos/interfaces/StdControl.nc"
inline static error_t DelugeP__DisseminationStdControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = DisseminationEngineImplP__StdControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 79 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeP.nc"
static inline void DelugeP__RadioSplitControl__startDone(error_t error)
{
  if (error == SUCCESS) {
      DelugeP__DisseminationStdControl__start();
    }
}

# 113 "/opt/tinyos-2.1.2/tos/interfaces/SplitControl.nc"
inline static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__startDone(error_t error){
#line 113
  DelugeP__RadioSplitControl__startDone(error);
#line 113
}
#line 113
# 144 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__runTask(void )
{
  uint8_t s;

  s = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state;


  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_READY;

  if (s == /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TURN_ON) {
    /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__startDone(SUCCESS);
    }
  else {
#line 155
    if (s == /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TURN_OFF) {
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SplitControl__stopDone(SUCCESS);
      }
    else {
#line 157
      if (s == /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_CHANNEL) {
        /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioChannel__setChannelDone();
        }
      else {
#line 160
        /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = s;
        }
      }
    }
}

# 52 "/opt/tinyos-2.1.2/tos/interfaces/Random.nc"
inline static uint16_t /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Random__rand16(void ){
#line 52
  unsigned short __nesc_result;
#line 52

#line 52
  __nesc_result = RandomMlcgC__Random__rand16();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 189 "/opt/tinyos-2.1.2/tos/lib/timer/VirtualizeTimerC.nc"
static inline uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(uint8_t num)
{
  return /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow();
}

# 136 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
inline static uint32_t /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Timer__getNow(void ){
#line 136
  unsigned long __nesc_result;
#line 136

#line 136
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(3U);
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 194 "/opt/tinyos-2.1.2/tos/lib/timer/VirtualizeTimerC.nc"
static inline uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__gett0(uint8_t num)
{
  return /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num].t0;
}

# 144 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
inline static uint32_t /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Timer__gett0(void ){
#line 144
  unsigned long __nesc_result;
#line 144

#line 144
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__gett0(3U);
#line 144

#line 144
  return __nesc_result;
#line 144
}
#line 144
# 66 "/opt/tinyos-2.1.2/tos/system/BitVectorC.nc"
static inline uint16_t /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__getMask(uint16_t bitnum)
{
  return 1 << bitnum % /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__ELEMENT_SIZE;
}

#line 61
static inline uint16_t /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__getIndex(uint16_t bitnum)
{
  return bitnum / /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__ELEMENT_SIZE;
}

#line 87
static inline bool /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__BitVector__get(uint16_t bitnum)
{
  /* atomic removed: atomic calls only */
#line 89
  {
#line 89
    {
      unsigned char __nesc_temp = 
#line 89
      /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__m_bits[/*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__getIndex(bitnum)] & /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__getMask(bitnum) ? TRUE : FALSE;

#line 89
      return __nesc_temp;
    }
  }
}

# 57 "/opt/tinyos-2.1.2/tos/interfaces/BitVector.nc"
inline static bool /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Changed__get(uint16_t bitnum){
#line 57
  unsigned char __nesc_result;
#line 57

#line 57
  __nesc_result = /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__BitVector__get(bitnum);
#line 57

#line 57
  return __nesc_result;
#line 57
}
#line 57
# 97 "/opt/tinyos-2.1.2/tos/system/BitVectorC.nc"
static inline void /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__BitVector__clear(uint16_t bitnum)
{
  /* atomic removed: atomic calls only */
#line 99
  {
#line 99
    /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__m_bits[/*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__getIndex(bitnum)] &= ~/*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__getMask(bitnum);
  }
}

# 69 "/opt/tinyos-2.1.2/tos/interfaces/BitVector.nc"
inline static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Changed__clear(uint16_t bitnum){
#line 69
  /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__BitVector__clear(bitnum);
#line 69
}
#line 69
# 73 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
inline static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Timer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(3U, dt);
#line 73
}
#line 73





inline static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Timer__stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(3U);
#line 78
}
#line 78
# 132 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline void /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__default__sendDone(message_t *msg, error_t error)
{
}

# 97 "/opt/tinyos-2.1.2/tos/interfaces/Ieee154Send.nc"
inline static void /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__sendDone(message_t *msg, error_t error){
#line 97
  /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__default__sendDone(msg, error);
#line 97
}
#line 97
# 127 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline void /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubSend__sendDone(message_t *msg, error_t error)
{
  /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Send__sendDone(msg, error);
}

# 54 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/BareSend.nc"
inline static void /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Send__sendDone(message_t *msg, error_t error){
#line 54
  /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubSend__sendDone(msg, error);
#line 54
}
#line 54
# 163 "/opt/tinyos-2.1.2/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(uint8_t last, message_t * msg, error_t err)
#line 163
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[last].msg = (void *)0;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend();
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(last, msg, err);
}

#line 189
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(am_id_t id, message_t *msg, error_t err)
#line 189
{





  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current >= 5) {
      return;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg == msg) {
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current, msg, err);
    }
  else {
      ;
    }
}

# 110 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
inline static void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__sendDone(am_id_t arg_0x7fa21e188778, message_t * msg, error_t error){
#line 110
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(arg_0x7fa21e188778, msg, error);
#line 110
}
#line 110
# 98 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline void /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__sendDone(message_t *msg, error_t error)
{
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__sendDone(/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__type(msg), msg, error);
}

# 54 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/BareSend.nc"
inline static void /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__sendDone(message_t *msg, error_t error){
#line 54
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__sendDone(msg, error);
#line 54
}
#line 54
# 78 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/AutoResourceAcquireLayerC.nc"
static inline void /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__sendDone(message_t *msg, error_t result)
{
  /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__release();
  /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__sendDone(msg, result);
}

# 54 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/BareSend.nc"
inline static void /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__sendDone(message_t *msg, error_t error){
#line 54
  /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__sendDone(msg, error);
#line 54
}
#line 54
# 214 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline void /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__sendDone(message_t *msg, error_t result)
{
  if (__nesc_ntoh_leuint8(/*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__getHeader(msg)->network.nxdata) == 0x3f) {
    /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__sendDone(msg, result);
    }
  else {
#line 219
    /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Send__sendDone(msg, result);
    }
}

# 54 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/BareSend.nc"
inline static void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__sendDone(message_t *msg, error_t error){
#line 54
  /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__sendDone(msg, error);
#line 54
}
#line 54
# 80 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline void /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__sendDone(message_t *msg, error_t error)
{
  /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Send__sendDone(msg, error);
}

# 54 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/BareSend.nc"
inline static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__sendDone(message_t *msg, error_t error){
#line 54
  /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__SubSend__sendDone(msg, error);
#line 54
}
#line 54
# 253 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230RadioP.nc"
static inline uint16_t RF230RadioP__RandomCollisionConfig__getInitialBackoff(message_t *msg)
{
  return (uint16_t )(4960 * (73728UL / 8 / 32) * (1 << MICA_DIVIDE_ONE_FOR_32KHZ_LOG2) / 10000UL);
}

# 40 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/RandomCollisionConfig.nc"
inline static uint16_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getInitialBackoff(message_t *msg){
#line 40
  unsigned short __nesc_result;
#line 40

#line 40
  __nesc_result = RF230RadioP__RandomCollisionConfig__getInitialBackoff(msg);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 98 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static inline error_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__send(message_t *msg)
{
  if (/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state != /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_READY || !/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__isFree()) {
    return EBUSY;
    }
  /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__txMsg = msg;
  /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__state = /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__STATE_TX_PENDING_FIRST;
  /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__wait(/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__getBackoff(/*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getInitialBackoff(msg)));

  return SUCCESS;
}

# 48 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioSend.nc"
inline static error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__send(message_t *msg){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioSend__send(msg);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 189 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__runTask(void )
{
  bool done = FALSE;

  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__suspend();

  for (; 0; ) ;

  if (/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state == /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_PENDING && ++/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__retries <= /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__MAX_RETRIES) 
    {
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txError = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__send(/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txMsg);
      if (/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txError == SUCCESS) {
        /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_SEND;
        }
      else {
#line 203
        /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_RETRY;
        }
    }
  else {
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_READY;
      done = TRUE;
    }

  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Tasklet__resume();

  if (done) {
    /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Send__sendDone(/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txMsg, /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txError);
    }
}

# 65 "/opt/tinyos-2.1.2/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__nextPacket(void )
#line 65
{
  uint8_t i;

#line 67
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current = (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current + 1) % 5;
  for (i = 0; i < 5; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg == (void *)0 || 
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current / 8] & (1 << /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current % 8)) 
        {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current = (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current + 1) % 5;
        }
      else {
          break;
        }
    }
  if (i >= 5) {
#line 78
    /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current = 5;
    }
}

# 49 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = RF230DriverLayerP__RadioPacket__payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 95 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static inline uint8_t /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__payloadLength(message_t *msg)
{
  return /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__SubPacket__payloadLength(msg);
}

# 49 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 121 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/TimeStampingLayerP.nc"
static inline uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__payloadLength(message_t *msg)
{
  return /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__payloadLength(msg);
}

# 49 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__RadioPacket__payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 287 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline uint8_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__payloadLength(message_t *msg)
{
  return /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__payloadLength(msg) - sizeof(ieee154_simple_header_t );
}

# 49 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__RadioPacket__payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 159 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__payloadLength(message_t *msg)
{
  return /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__payloadLength(msg) - /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__PAYLOAD_OFFSET;
}

# 49 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosPacket__payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 230 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__payloadLength(message_t *msg)
{
  return /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__payloadLength(msg) - sizeof(activemessage_header_t );
}

#line 262
static inline uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__payloadLength(message_t *msg)
{
  return /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__payloadLength(msg);
}

# 78 "/opt/tinyos-2.1.2/tos/interfaces/Packet.nc"
inline static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__payloadLength(message_t * msg){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__payloadLength(msg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 162 "/opt/tinyos-2.1.2/tos/lib/net/drip/DisseminationEngineImplP.nc"
static inline void DisseminationEngineImplP__ProbeAMSend__sendDone(message_t *msg, error_t error)
#line 162
{
  DisseminationEngineImplP__m_bufBusy = FALSE;
}

# 110 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
inline static void /*DisseminationEngineP.DisseminationProbeSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__4__AMSend__sendDone(message_t * msg, error_t error){
#line 110
  DisseminationEngineImplP__ProbeAMSend__sendDone(msg, error);
#line 110
}
#line 110
# 65 "/opt/tinyos-2.1.2/tos/system/AMQueueEntryP.nc"
static inline void /*DisseminationEngineP.DisseminationProbeSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__4__Send__sendDone(message_t *m, error_t err)
#line 65
{
  /*DisseminationEngineP.DisseminationProbeSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__4__AMSend__sendDone(m, err);
}

# 166 "/opt/tinyos-2.1.2/tos/lib/net/drip/DisseminationEngineImplP.nc"
static inline void DisseminationEngineImplP__AMSend__sendDone(message_t *msg, error_t error)
#line 166
{
  DisseminationEngineImplP__m_bufBusy = FALSE;
}

# 110 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
inline static void /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__3__AMSend__sendDone(message_t * msg, error_t error){
#line 110
  DisseminationEngineImplP__AMSend__sendDone(msg, error);
#line 110
}
#line 110
# 65 "/opt/tinyos-2.1.2/tos/system/AMQueueEntryP.nc"
static inline void /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__3__Send__sendDone(message_t *m, error_t err)
#line 65
{
  /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__3__AMSend__sendDone(m, err);
}

# 73 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
inline static void DelugePageTransferP__Timer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(1U, dt);
#line 73
}
#line 73
# 125 "/opt/tinyos-2.1.2/tos/interfaces/Send.nc"
inline static void * /*ObjectTransferC.SendDataMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__2__Send__getPayload(message_t * msg, uint8_t len){
#line 125
  void *__nesc_result;
#line 125

#line 125
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__getPayload(2U, msg, len);
#line 125

#line 125
  return __nesc_result;
#line 125
}
#line 125
# 73 "/opt/tinyos-2.1.2/tos/system/AMQueueEntryP.nc"
static inline void */*ObjectTransferC.SendDataMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMSend__getPayload(message_t *m, uint8_t len)
#line 73
{
  return /*ObjectTransferC.SendDataMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__2__Send__getPayload(m, len);
}

# 135 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
inline static void * DelugePageTransferP__SendDataMsg__getPayload(message_t * msg, uint8_t len){
#line 135
  void *__nesc_result;
#line 135

#line 135
  __nesc_result = /*ObjectTransferC.SendDataMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMSend__getPayload(msg, len);
#line 135

#line 135
  return __nesc_result;
#line 135
}
#line 135
# 372 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugePageTransferP.nc"
static inline void DelugePageTransferP__SendDataMsg__sendDone(message_t *msg, error_t error)
{
  DelugeDataMsg *pDataMsg = (DelugeDataMsg *)DelugePageTransferP__SendDataMsg__getPayload(&DelugePageTransferP__pMsgBuf, sizeof(DelugeDataMsg ));

#line 375
  if (pDataMsg == (void *)0) {
      return;
    }
  DelugePageTransferP__pktsToSend[__nesc_ntoh_uint8(pDataMsg->pktNum.nxdata) / 8] = DelugePageTransferP__pktsToSend[__nesc_ntoh_uint8(pDataMsg->pktNum.nxdata) / 8] & ~(1 << __nesc_ntoh_uint8(pDataMsg->pktNum.nxdata) % 8);
  DelugePageTransferP__Timer__startOneShot(2);


  if (error == SUCCESS) {
    }
}

# 110 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
inline static void /*ObjectTransferC.SendDataMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMSend__sendDone(message_t * msg, error_t error){
#line 110
  DelugePageTransferP__SendDataMsg__sendDone(msg, error);
#line 110
}
#line 110
# 65 "/opt/tinyos-2.1.2/tos/system/AMQueueEntryP.nc"
static inline void /*ObjectTransferC.SendDataMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__2__Send__sendDone(message_t *m, error_t err)
#line 65
{
  /*ObjectTransferC.SendDataMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__2__AMSend__sendDone(m, err);
}

# 315 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugePageTransferP.nc"
static inline void DelugePageTransferP__SendReqMsg__sendDone(message_t *msg, error_t error)
{
  if (DelugePageTransferP__state != DelugePageTransferP__S_RECEIVING) {
      return;
    }

  DelugePageTransferP__remainingAttempts--;

  DelugePageTransferP__startReqTimer(FALSE);
}

# 110 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
inline static void /*ObjectTransferC.SendReqMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__sendDone(message_t * msg, error_t error){
#line 110
  DelugePageTransferP__SendReqMsg__sendDone(msg, error);
#line 110
}
#line 110
# 65 "/opt/tinyos-2.1.2/tos/system/AMQueueEntryP.nc"
static inline void /*ObjectTransferC.SendReqMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__sendDone(message_t *m, error_t err)
#line 65
{
  /*ObjectTransferC.SendReqMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__1__AMSend__sendDone(m, err);
}

# 269 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/ObjectTransferP.nc"
static inline void ObjectTransferP__SendAdvMsg__sendDone(message_t *msg, error_t error)
{
  ObjectTransferP__isBusy_pMsgBuf = FALSE;
}

# 110 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
inline static void /*ObjectTransferC.SendAdvMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(message_t * msg, error_t error){
#line 110
  ObjectTransferP__SendAdvMsg__sendDone(msg, error);
#line 110
}
#line 110
# 65 "/opt/tinyos-2.1.2/tos/system/AMQueueEntryP.nc"
static inline void /*ObjectTransferC.SendAdvMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(message_t *m, error_t err)
#line 65
{
  /*ObjectTransferC.SendAdvMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(m, err);
}

# 96 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__payloadLength(message_t *msg)
{
  return /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__payloadLength(msg);
}

# 49 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__payloadLength(message_t *msg){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__payloadLength(msg);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 68 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline uint8_t /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Packet__payloadLength(message_t *msg)
{
  return /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__payloadLength(msg);
}

# 91 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline uint8_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__headerLength(message_t *msg)
{
  return /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__headerLength(msg);
}

# 43 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioPacket.nc"
inline static uint8_t /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__headerLength(message_t *msg){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Packet__headerLength(msg);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 56 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline void */*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__getPayload(message_t *msg)
{
  return (void *)msg + /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__RadioPacket__headerLength(msg);
}

#line 151
static inline message_t */*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__default__receive(message_t *msg, void *payload, uint8_t len)
{
  return msg;
}

# 78 "/opt/tinyos-2.1.2/tos/interfaces/Receive.nc"
inline static message_t * /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__receive(message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  __nesc_result = /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__default__receive(msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 55 "/opt/tinyos-2.1.2/tos/interfaces/ActiveMessageAddress.nc"
inline static am_group_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amGroup(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = ActiveMessageAddressC__ActiveMessageAddress__amGroup();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 217 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline ieee154_panid_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localPan(void )
{
  return /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amGroup();
}

#line 168
static inline uint16_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestPan(message_t *msg)
{
  return __nesc_ntoh_leuint16(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->destpan.nxdata);
}

# 73 "/opt/tinyos-2.1.2/tos/system/ActiveMessageAddressC.nc"
static inline am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void )
#line 73
{
  return ActiveMessageAddressC__amAddress();
}

# 50 "/opt/tinyos-2.1.2/tos/interfaces/ActiveMessageAddress.nc"
inline static am_addr_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amAddress(void ){
#line 50
  unsigned short __nesc_result;
#line 50

#line 50
  __nesc_result = ActiveMessageAddressC__ActiveMessageAddress__amAddress();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 212 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static inline ieee154_saddr_t /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localAddr(void )
{
  return /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amAddress();
}






static inline bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isForMe(message_t *msg)
{
  ieee154_saddr_t addr = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(msg);

#line 225
  return (addr == /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localAddr() || addr == IEEE154_BROADCAST_ADDR)
   && /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestPan(msg) == /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__localPan();
}

# 185 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/Ieee154PacketLayer.nc"
inline static bool /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154PacketLayer__isForMe(message_t *msg){
#line 185
  unsigned char __nesc_result;
#line 185

#line 185
  __nesc_result = /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isForMe(msg);
#line 185

#line 185
  return __nesc_result;
#line 185
}
#line 185
# 142 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/Ieee154MessageLayerC.nc"
static inline message_t */*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubReceive__receive(message_t *msg)
{
  if (/*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154PacketLayer__isForMe(msg)) {
    return /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Ieee154Receive__receive(msg, 
    /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__getPayload(msg), /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__Packet__payloadLength(msg));
    }
  else {
#line 148
    return msg;
    }
}

# 42 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/BareReceive.nc"
inline static message_t */*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Receive__receive(message_t *msg){
#line 42
  nx_struct message_t *__nesc_result;
#line 42

#line 42
  __nesc_result = /*RF230RadioC.Ieee154MessageLayerC*/Ieee154MessageLayerC__0__SubReceive__receive(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 156 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline message_t */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SnoopDefault__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
{
  return msg;
}

# 78 "/opt/tinyos-2.1.2/tos/interfaces/Receive.nc"
inline static message_t * /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SnoopDefault__receive(am_id_t arg_0x7fa21e183808, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
    __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SnoopDefault__default__receive(arg_0x7fa21e183808, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 151 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline message_t */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
{
  return /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SnoopDefault__receive(id, msg, payload, len);
#line 153
  ;
}

# 78 "/opt/tinyos-2.1.2/tos/interfaces/Receive.nc"
inline static message_t * /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__receive(am_id_t arg_0x7fa21e186480, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
    __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__default__receive(arg_0x7fa21e186480, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 146 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline message_t */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ReceiveDefault__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
{
  return msg;
}

# 78 "/opt/tinyos-2.1.2/tos/interfaces/Receive.nc"
inline static message_t * /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ReceiveDefault__receive(am_id_t arg_0x7fa21e184be0, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
    __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ReceiveDefault__default__receive(arg_0x7fa21e184be0, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 310 "/usr/lib/x86_64-linux-gnu/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_ntoh_uint16(const void * source)
#line 310
{
  const uint8_t *base = source;

#line 312
  return ((uint16_t )base[0] << 8) | base[1];
}

# 293 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugePageTransferP.nc"
static inline error_t DelugePageTransferP__DelugePageTransfer__dataAvailable(uint16_t sourceAddr)
{
  if (DelugePageTransferP__state == DelugePageTransferP__S_IDLE) {

      DelugePageTransferP__changeState(DelugePageTransferP__S_RX_LOCKING);
      DelugePageTransferP__nodeAddr = sourceAddr;
      DelugePageTransferP__remainingAttempts = DELUGE_MAX_NUM_REQ_TRIES;
      DelugePageTransferP__suppressReq = FALSE;


      DelugePageTransferP__startReqTimer(TRUE);
    }

  return SUCCESS;
}

# 46 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugePageTransfer.nc"
inline static error_t ObjectTransferP__DelugePageTransfer__dataAvailable(uint16_t sourceAddr){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = DelugePageTransferP__DelugePageTransfer__dataAvailable(sourceAddr);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 130 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/ObjectTransferP.nc"
static inline bool ObjectTransferP__isObjDescValid(DelugeObjDesc *tmpObjDesc)
{
  return __nesc_ntoh_uint16(tmpObjDesc->crc.nxdata) == ObjectTransferP__Crc__crc16(tmpObjDesc, sizeof(object_id_t ) + sizeof(page_num_t ))
   && __nesc_ntoh_uint16(tmpObjDesc->crc.nxdata) != 0;
}

#line 274
static inline message_t *ObjectTransferP__ReceiveAdvMsg__receive(message_t *msg, void *payload, uint8_t len)
{
  DelugeAdvMsg *rxAdvMsg = (DelugeAdvMsg *)payload;
  DelugeObjDesc *cmpObjDesc = & rxAdvMsg->objDesc;
  bool isEqual = FALSE;

  if (__nesc_ntoh_int32(cmpObjDesc->objid.nxdata) != __nesc_ntoh_int32(ObjectTransferP__curObjDesc.objid.nxdata)) {
      return msg;
    }

  if (__nesc_ntoh_uint8(rxAdvMsg->version.nxdata) != DELUGE_VERSION || ObjectTransferP__state != ObjectTransferP__S_STARTED) {
      return msg;
    }

  if (ObjectTransferP__isObjDescValid(& rxAdvMsg->objDesc) && ObjectTransferP__state == ObjectTransferP__S_STARTED) {

      if (__nesc_ntoh_uint8(cmpObjDesc->numPgsComplete.nxdata) > __nesc_ntoh_uint8(ObjectTransferP__curObjDesc.numPgsComplete.nxdata)) {
          if (ObjectTransferP__advTimers.newAdvs == 0) {
              ObjectTransferP__DelugePageTransfer__dataAvailable(__nesc_ntoh_uint16(rxAdvMsg->sourceAddr.nxdata));
            }
        }
      else {
        if (__nesc_ntoh_uint8(cmpObjDesc->numPgsComplete.nxdata) < __nesc_ntoh_uint8(ObjectTransferP__curObjDesc.numPgsComplete.nxdata)) {
            ObjectTransferP__advTimers.newAdvs = DELUGE_NUM_NEWDATA_ADVS_REQUIRED;
          }
        else 
          {
            ObjectTransferP__advTimers.overheard = 1;
            isEqual = TRUE;
          }
        }
      if (!isEqual) {
          ObjectTransferP__resetTimer();
        }
    }

  return msg;
}

# 326 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugePageTransferP.nc"
static inline message_t *DelugePageTransferP__ReceiveReqMsg__receive(message_t *msg, void *payload, uint8_t len)
{
  DelugeReqMsg *rxReqMsg = (DelugeReqMsg *)payload;
  object_id_t objid;
  page_num_t pgNum;
  int i;

  if (DelugePageTransferP__state == DelugePageTransferP__S_DISABLED) {
      return msg;
    }

  objid = __nesc_ntoh_int32(rxReqMsg->objid.nxdata);
  pgNum = __nesc_ntoh_uint8(rxReqMsg->pgNum.nxdata);


  DelugePageTransferP__suppressMsgs(objid, pgNum);




  if ((__nesc_ntoh_uint16(
#line 344
  rxReqMsg->dest.nxdata) != TOS_NODE_ID
   || objid != DelugePageTransferP__workingObjid)
   || pgNum >= DelugePageTransferP__workingPgNum) {
      return msg;
    }


  if (
#line 350
  DelugePageTransferP__state == DelugePageTransferP__S_IDLE
   || ((DelugePageTransferP__state == DelugePageTransferP__S_SENDING || DelugePageTransferP__state == DelugePageTransferP__S_TX_LOCKING)
   && objid == DelugePageTransferP__objToSend
   && pgNum == DelugePageTransferP__pageToSend)) {

      for (i = 0; i < DELUGET2_PKT_BITVEC_SIZE; i++) {
          DelugePageTransferP__pktsToSend[i] |= __nesc_ntoh_uint8(rxReqMsg->requestedPkts[i].nxdata);
        }
    }

  if (DelugePageTransferP__state == DelugePageTransferP__S_IDLE) {

      DelugePageTransferP__changeState(DelugePageTransferP__S_TX_LOCKING);
      DelugePageTransferP__objToSend = objid;
      DelugePageTransferP__pageToSend = pgNum;
      DelugePageTransferP__nodeAddr = AM_BROADCAST_ADDR;
      DelugePageTransferP__setupDataMsg();
    }

  return msg;
}

# 183 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230RadioP.nc"
static inline am_addr_t RF230RadioP__ActiveMessageConfig__source(message_t *msg)
{
  return RF230RadioP__Ieee154PacketLayer__getSrcAddr(msg);
}

# 46 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/ActiveMessageConfig.nc"
inline static am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__source(message_t *msg){
#line 46
  unsigned short __nesc_result;
#line 46

#line 46
  __nesc_result = RF230RadioP__ActiveMessageConfig__source(msg);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 189 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__source(message_t *msg)
{
  return /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__source(msg);
}

# 88 "/opt/tinyos-2.1.2/tos/interfaces/AMPacket.nc"
inline static am_addr_t DelugePageTransferP__AMPacket__source(message_t * amsg){
#line 88
  unsigned short __nesc_result;
#line 88

#line 88
  __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__source(amsg);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 57 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__toggle(void )
#line 57
{
#line 57
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 57
    * (volatile uint8_t * )34U ^= 1 << 1;
#line 57
    __nesc_atomic_end(__nesc_atomic); }
}

# 42 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__toggle(void ){
#line 42
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__toggle();
#line 42
}
#line 42
# 99 "/opt/tinyos-2.1.2/tos/system/LedsP.nc"
static inline void LedsP__Leds__led1Toggle(void )
#line 99
{
  LedsP__Led1__toggle();
  ;
#line 101
  ;
}

# 83 "/opt/tinyos-2.1.2/tos/interfaces/Leds.nc"
inline static void DelugePageTransferP__Leds__led1Toggle(void ){
#line 83
  LedsP__Leds__led1Toggle();
#line 83
}
#line 83
# 387 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugePageTransferP.nc"
static inline message_t *DelugePageTransferP__ReceiveDataMsg__receive(message_t *msg, void *payload, uint8_t len)
{
  DelugeDataMsg *rxDataMsg = (DelugeDataMsg *)payload;

  if (DelugePageTransferP__state == DelugePageTransferP__S_DISABLED) {
      return msg;
    }


  DelugePageTransferP__suppressMsgs(__nesc_ntoh_int32(rxDataMsg->objid.nxdata), __nesc_ntoh_uint8(rxDataMsg->pgNum.nxdata));




  if (__nesc_ntoh_int32(
#line 398
  rxDataMsg->objid.nxdata) == DelugePageTransferP__workingObjid
   && __nesc_ntoh_uint8(rxDataMsg->pgNum.nxdata) == DelugePageTransferP__workingPgNum
   && DelugePageTransferP__pktsToReceive[__nesc_ntoh_uint8(rxDataMsg->pktNum.nxdata) / 8] & (1 << __nesc_ntoh_uint8(rxDataMsg->pktNum.nxdata) % 8)
   && DelugePageTransferP__size < DELUGE_QSIZE) {



      if (__nesc_ntoh_uint8(rxDataMsg->pktNum.nxdata) == 0) {
        }

      DelugePageTransferP__Leds__led1Toggle();



      memcpy(&DelugePageTransferP__rxQueue[DelugePageTransferP__head ^ DelugePageTransferP__size], rxDataMsg, sizeof(DelugeDataMsg ));
      if (++DelugePageTransferP__size == 1) {
          DelugePageTransferP__publisher_addr = DelugePageTransferP__AMPacket__source(msg);
          DelugePageTransferP__writeData();
        }
    }

  return msg;
}

# 150 "/opt/tinyos-2.1.2/tos/lib/net/TrickleTimerImplP.nc"
static inline void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__TrickleTimer__incrementCounter(uint8_t id)
#line 150
{
  /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].count++;
}

# 260 "/opt/tinyos-2.1.2/tos/lib/net/drip/DisseminationEngineImplP.nc"
static inline void DisseminationEngineImplP__TrickleTimer__default__incrementCounter(uint16_t key)
#line 260
{
}

# 85 "/opt/tinyos-2.1.2/tos/lib/net/TrickleTimer.nc"
inline static void DisseminationEngineImplP__TrickleTimer__incrementCounter(uint16_t arg_0x7fa21d5d17d0){
#line 85
  switch (arg_0x7fa21d5d17d0) {
#line 85
    case 56832UL:
#line 85
      /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__TrickleTimer__incrementCounter(/*DelugeC.DisseminatorC*/DisseminatorC__0__TIMER_ID);
#line 85
      break;
#line 85
    default:
#line 85
      DisseminationEngineImplP__TrickleTimer__default__incrementCounter(arg_0x7fa21d5d17d0);
#line 85
      break;
#line 85
    }
#line 85
}
#line 85
# 247 "/opt/tinyos-2.1.2/tos/lib/net/drip/DisseminationEngineImplP.nc"
static inline 
#line 246
void 
DisseminationEngineImplP__DisseminationCache__default__storeData(uint16_t key, void *data, 
uint8_t size, 
uint32_t seqno)
#line 249
{
}

# 48 "/opt/tinyos-2.1.2/tos/lib/net/drip/DisseminationCache.nc"
inline static void DisseminationEngineImplP__DisseminationCache__storeData(uint16_t arg_0x7fa21d5d2420, void * data, uint8_t size, uint32_t seqno){
#line 48
  switch (arg_0x7fa21d5d2420) {
#line 48
    case 56832UL:
#line 48
      /*DelugeC.DisseminatorC.DisseminatorP*/DisseminatorP__0__DisseminationCache__storeData(data, size, seqno);
#line 48
      break;
#line 48
    default:
#line 48
      DisseminationEngineImplP__DisseminationCache__default__storeData(arg_0x7fa21d5d2420, data, size, seqno);
#line 48
      break;
#line 48
    }
#line 48
}
#line 48
# 117 "/opt/tinyos-2.1.2/tos/lib/net/drip/DisseminatorP.nc"
static inline uint32_t /*DelugeC.DisseminatorC.DisseminatorP*/DisseminatorP__0__DisseminationCache__requestSeqno(void )
#line 117
{
  return /*DelugeC.DisseminatorC.DisseminatorP*/DisseminatorP__0__seqno;
}

# 252 "/opt/tinyos-2.1.2/tos/lib/net/drip/DisseminationEngineImplP.nc"
static inline 
#line 251
uint32_t 
DisseminationEngineImplP__DisseminationCache__default__requestSeqno(uint16_t key)
#line 252
{
#line 252
  return DISSEMINATION_SEQNO_UNKNOWN;
}

# 49 "/opt/tinyos-2.1.2/tos/lib/net/drip/DisseminationCache.nc"
inline static uint32_t DisseminationEngineImplP__DisseminationCache__requestSeqno(uint16_t arg_0x7fa21d5d2420){
#line 49
  unsigned long __nesc_result;
#line 49

#line 49
  switch (arg_0x7fa21d5d2420) {
#line 49
    case 56832UL:
#line 49
      __nesc_result = /*DelugeC.DisseminatorC.DisseminatorP*/DisseminatorP__0__DisseminationCache__requestSeqno();
#line 49
      break;
#line 49
    default:
#line 49
      __nesc_result = DisseminationEngineImplP__DisseminationCache__default__requestSeqno(arg_0x7fa21d5d2420);
#line 49
      break;
#line 49
    }
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 170 "/opt/tinyos-2.1.2/tos/lib/net/drip/DisseminationEngineImplP.nc"
static inline message_t *DisseminationEngineImplP__Receive__receive(message_t *msg, 
void *payload, 
uint8_t len)
#line 172
{

  dissemination_message_t *dMsg = 
  (dissemination_message_t *)payload;

  uint16_t key = __nesc_ntoh_uint16(dMsg->key.nxdata);
  uint32_t incomingSeqno = __nesc_ntoh_uint32(dMsg->seqno.nxdata);
  uint32_t currentSeqno = DisseminationEngineImplP__DisseminationCache__requestSeqno(key);

  if (!DisseminationEngineImplP__m_running) {
#line 181
      return msg;
    }
  if (currentSeqno == DISSEMINATION_SEQNO_UNKNOWN && 
  incomingSeqno != DISSEMINATION_SEQNO_UNKNOWN) {

      DisseminationEngineImplP__DisseminationCache__storeData(key, 
      dMsg->data, 
      len - sizeof(dissemination_message_t ), 
      incomingSeqno);

      DisseminationEngineImplP__TrickleTimer__reset(key);
      return msg;
    }

  if (incomingSeqno == DISSEMINATION_SEQNO_UNKNOWN && 
  currentSeqno != DISSEMINATION_SEQNO_UNKNOWN) {

      DisseminationEngineImplP__TrickleTimer__reset(key);
      return msg;
    }

  if ((int32_t )(incomingSeqno - currentSeqno) > 0) {

      DisseminationEngineImplP__DisseminationCache__storeData(key, 
      dMsg->data, 
      len - sizeof(dissemination_message_t ), 
      incomingSeqno);
      ;
      DisseminationEngineImplP__TrickleTimer__reset(key);
    }
  else {
#line 211
    if ((int32_t )(incomingSeqno - currentSeqno) == 0) {

        DisseminationEngineImplP__TrickleTimer__incrementCounter(key);
      }
    else {


        DisseminationEngineImplP__sendObject(key);
      }
    }


  return msg;
}

static inline message_t *DisseminationEngineImplP__ProbeReceive__receive(message_t *msg, 
void *payload, 
uint8_t len)
#line 228
{

  dissemination_probe_message_t *dpMsg = 
  (dissemination_probe_message_t *)payload;

  if (!DisseminationEngineImplP__m_running) {
#line 233
      return msg;
    }
  if (DisseminationEngineImplP__DisseminationCache__requestSeqno(__nesc_ntoh_uint16(dpMsg->key.nxdata)) != 
  DISSEMINATION_SEQNO_UNKNOWN) {
      DisseminationEngineImplP__sendObject(__nesc_ntoh_uint16(dpMsg->key.nxdata));
    }

  return msg;
}

# 141 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static inline message_t */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
{
  return /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ReceiveDefault__receive(id, msg, payload, len);
#line 143
  ;
}

# 78 "/opt/tinyos-2.1.2/tos/interfaces/Receive.nc"
inline static message_t * /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__receive(am_id_t arg_0x7fa21e187908, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  switch (arg_0x7fa21e187908) {
#line 78
    case 80U:
#line 78
      __nesc_result = ObjectTransferP__ReceiveAdvMsg__receive(msg, payload, len);
#line 78
      break;
#line 78
    case 81U:
#line 78
      __nesc_result = DelugePageTransferP__ReceiveReqMsg__receive(msg, payload, len);
#line 78
      break;
#line 78
    case 82U:
#line 78
      __nesc_result = DelugePageTransferP__ReceiveDataMsg__receive(msg, payload, len);
#line 78
      break;
#line 78
    case 96:
#line 78
      __nesc_result = DisseminationEngineImplP__Receive__receive(msg, payload, len);
#line 78
      break;
#line 78
    case 97:
#line 78
      __nesc_result = DisseminationEngineImplP__ProbeReceive__receive(msg, payload, len);
#line 78
      break;
#line 78
    default:
#line 78
      __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__default__receive(arg_0x7fa21e187908, msg, payload, len);
#line 78
      break;
#line 78
    }
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 50 "/opt/tinyos-2.1.2/tos/interfaces/ActiveMessageAddress.nc"
inline static am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ActiveMessageAddress__amAddress(void ){
#line 50
  unsigned short __nesc_result;
#line 50

#line 50
  __nesc_result = ActiveMessageAddressC__ActiveMessageAddress__amAddress();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 163 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static __inline am_addr_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__address(void )
{
  return /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__ActiveMessageAddress__amAddress();
}






static __inline bool /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__isForMe(message_t *msg)
{
  am_addr_t addr = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__destination(msg);

#line 176
  return addr == /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__address() || addr == AM_BROADCAST_ADDR;
}

#line 72
static inline void */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getPayload(message_t *msg)
{
  return (void *)msg + /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__headerLength(msg);
}

#line 128
static inline message_t */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubReceive__receive(message_t *msg)
{
  am_id_t id = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__type(msg);
  void *payload = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getPayload(msg);
  uint8_t len = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__payloadLength(msg);

  msg = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__isForMe(msg) ? 
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Receive__receive(id, msg, payload, len) : 
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Snoop__receive(id, msg, payload, len);

  return msg;
}

# 42 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/BareReceive.nc"
inline static message_t */*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosReceive__receive(message_t *msg){
#line 42
  nx_struct message_t *__nesc_result;
#line 42

#line 42
  __nesc_result = /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubReceive__receive(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 222 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static inline message_t */*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubReceive__receive(message_t *msg)
{
  if (__nesc_ntoh_leuint8(/*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__getHeader(msg)->network.nxdata) == 0x3f) {
    return /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosReceive__receive(msg);
    }
  else {
#line 227
    return /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__Ieee154Receive__receive(msg);
    }
}

# 42 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/BareReceive.nc"
inline static message_t */*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Receive__receive(message_t *msg){
#line 42
  nx_struct message_t *__nesc_result;
#line 42

#line 42
  __nesc_result = /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubReceive__receive(msg);
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 322 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__runTask(void )
{

  for (; ; ) 
    {
      message_t *msg;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          if (/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize == 0) {
            {
#line 332
              __nesc_atomic_end(__nesc_atomic); 
#line 332
              return;
            }
            }
#line 334
          msg = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead];
        }
#line 335
        __nesc_atomic_end(__nesc_atomic); }

      msg = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__Receive__receive(msg);

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead] = msg;

          if (++/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead >= /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE) {
            /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueHead = 0;
            }
          --/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueSize;
        }
#line 347
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 68 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/AutoResourceAcquireLayerC.nc"
static inline void /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__granted(void )
{
  error_t result = /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__SubSend__send(/*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__pending);

#line 71
  if (result != SUCCESS) 
    {
      /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__release();
      /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__BareSend__sendDone(/*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__pending, result);
    }
}

# 158 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
static inline void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__default__granted(uint8_t id)
#line 158
{
}

# 102 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__granted(uint8_t arg_0x7fa21e0ace30){
#line 102
  switch (arg_0x7fa21e0ace30) {
#line 102
    case 0U:
#line 102
      /*RF230RadioC.AutoResourceAcquireLayerC*/AutoResourceAcquireLayerC__0__Resource__granted();
#line 102
      break;
#line 102
    default:
#line 102
      /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__default__granted(arg_0x7fa21e0ace30);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 149 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
static inline void /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void )
#line 149
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 150
    {
      /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state = /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_BUSY;
      /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(/*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId);
    }
#line 153
    __nesc_atomic_end(__nesc_atomic); }
  /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__granted(/*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId);
}

# 126 "/opt/tinyos-2.1.2/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask(void )
#line 126
{
  uint8_t i;
#line 127
  uint8_t j;
#line 127
  uint8_t mask;
#line 127
  uint8_t last;
  message_t *msg;

#line 129
  for (i = 0; i < 5 / 8 + 1; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[i]) {
          for (mask = 1, j = 0; j < 8; j++) {
              if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[i] & mask) {
                  last = i * 8 + j;
                  msg = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[last].msg;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[last].msg = (void *)0;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[i] &= ~mask;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(last, msg, ECANCEL);
                }
              mask <<= 1;
            }
        }
    }
}

#line 169
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask(void )
#line 169
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current, /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg, FAIL);
}

# 39 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeVolumeManager.nc"
inline static error_t DelugeP__DelugeVolumeManager__erase(uint8_t imgNum){
#line 39
  unsigned char __nesc_result;
#line 39

#line 39
  __nesc_result = DelugeVolumeManagerP__DelugeVolumeManager__erase(/*DelugeC.DelugeVolumeManagerClientC*/DelugeVolumeManagerClientC__0__CLIENT_ID, imgNum);
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 109 "/opt/tinyos-2.1.2/tos/system/LedsP.nc"
static inline void LedsP__Leds__led2Off(void )
#line 109
{
  LedsP__Led2__set();
  ;
#line 111
  ;
}

# 56 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )34U &= ~(1 << 0);
}

# 41 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__clr();
#line 41
}
#line 41
# 104 "/opt/tinyos-2.1.2/tos/system/LedsP.nc"
static inline void LedsP__Leds__led2On(void )
#line 104
{
  LedsP__Led2__clr();
  ;
#line 106
  ;
}

# 56 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )34U &= ~(1 << 1);
}

# 41 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__clr();
#line 41
}
#line 41
# 89 "/opt/tinyos-2.1.2/tos/system/LedsP.nc"
static inline void LedsP__Leds__led1On(void )
#line 89
{
  LedsP__Led1__clr();
  ;
#line 91
  ;
}

#line 79
static inline void LedsP__Leds__led0Off(void )
#line 79
{
  LedsP__Led0__set();
  ;
#line 81
  ;
}

# 56 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )34U &= ~(1 << 2);
}

# 41 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__clr();
#line 41
}
#line 41
# 74 "/opt/tinyos-2.1.2/tos/system/LedsP.nc"
static inline void LedsP__Leds__led0On(void )
#line 74
{
  LedsP__Led0__clr();
  ;
#line 76
  ;
}

#line 136
static inline void LedsP__Leds__set(uint8_t val)
#line 136
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 137
    {
      if (val & LEDS_LED0) {
          LedsP__Leds__led0On();
        }
      else {
          LedsP__Leds__led0Off();
        }
      if (val & LEDS_LED1) {
          LedsP__Leds__led1On();
        }
      else {
          LedsP__Leds__led1Off();
        }
      if (val & LEDS_LED2) {
          LedsP__Leds__led2On();
        }
      else {
          LedsP__Leds__led2Off();
        }
    }
#line 156
    __nesc_atomic_end(__nesc_atomic); }
}

# 134 "/opt/tinyos-2.1.2/tos/interfaces/Leds.nc"
inline static void DelugeP__Leds__set(uint8_t val){
#line 134
  LedsP__Leds__set(val);
#line 134
}
#line 134
# 144 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeP.nc"
static inline void DelugeP__ObjectTransfer__receiveDone(error_t error)
{
  DelugeP__Leds__set(LEDS_LED1 | LEDS_LED2);
  DelugeP__state = DelugeP__S_IDLE;

  if (error == SUCCESS) {
      switch (__nesc_ntoh_uint8(DelugeP__lastCmd.type.nxdata)) {
          case DELUGE_CMD_ONLY_DISSEMINATE: 
            DelugeP__state = DelugeP__S_PUB;
          DelugeP__request();
          break;
          case DELUGE_CMD_DISSEMINATE_AND_REPROGRAM: 
            DelugeP__NetProg__programImageAndReboot(DelugeP__StorageMap__getPhysicalAddress(__nesc_ntoh_uint8(DelugeP__lastCmd.imgNum.nxdata), 0));
          break;
        }
    }
  else 
#line 159
    {
      DelugeP__DelugeVolumeManager__erase(__nesc_ntoh_uint8(DelugeP__lastCmd.imgNum.nxdata));
    }
}

# 43 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/ObjectTransfer.nc"
inline static void ObjectTransferP__ObjectTransfer__receiveDone(error_t error){
#line 43
  DelugeP__ObjectTransfer__receiveDone(error);
#line 43
}
#line 43
# 110 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/ObjectTransferP.nc"
static inline void ObjectTransferP__signalObjRecvDone__runTask(void )
{
  ObjectTransferP__ObjectTransfer__receiveDone(SUCCESS);
}

# 103 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt){
#line 103
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 58 "/opt/tinyos-2.1.2/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot)
{
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt = dt;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot = oneshot;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(t0, dt);
}

#line 93
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt)
{
#line 94
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(t0, dt, TRUE);
}

# 129 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt){
#line 129
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(t0, dt);
#line 129
}
#line 129
# 242 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__stop(void )
#line 242
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 243
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__set = FALSE;
#line 243
    __nesc_atomic_end(__nesc_atomic); }
}

# 73 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void ){
#line 73
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__stop();
#line 73
}
#line 73
# 71 "/opt/tinyos-2.1.2/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void )
{
#line 72
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop();
}

# 78 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop();
#line 78
}
#line 78
# 100 "/opt/tinyos-2.1.2/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void )
{




  uint32_t now = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint16_t num;

  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop();

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;
          int32_t remaining = timer->dt - elapsed;

          if (remaining < min_remaining) 
            {
              min_remaining = remaining;
              min_remaining_isset = TRUE;
            }
        }
    }

  if (min_remaining_isset) 
    {
      if (min_remaining <= 0) {
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(now);
        }
      else {
#line 135
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(now, min_remaining);
        }
    }
}

# 57 "/opt/tinyos-2.1.2/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__toggle(void )
#line 57
{
#line 57
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 57
    * (volatile uint8_t * )34U ^= 1 << 2;
#line 57
    __nesc_atomic_end(__nesc_atomic); }
}

# 42 "/opt/tinyos-2.1.2/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__toggle(void ){
#line 42
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__toggle();
#line 42
}
#line 42
# 84 "/opt/tinyos-2.1.2/tos/system/LedsP.nc"
static inline void LedsP__Leds__led0Toggle(void )
#line 84
{
  LedsP__Led0__toggle();
  ;
#line 86
  ;
}

# 67 "/opt/tinyos-2.1.2/tos/interfaces/Leds.nc"
inline static void BlinkC__Leds__led0Toggle(void ){
#line 67
  LedsP__Leds__led0Toggle();
#line 67
}
#line 67
# 66 "BlinkC.nc"
static inline void BlinkC__Timer0__fired(void )
{
  ;

  BlinkC__Leds__led0Toggle();
}

# 309 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugePageTransferP.nc"
static inline void DelugePageTransferP__Timer__fired(void )
{
  DelugePageTransferP__setupReqMsg();
  DelugePageTransferP__setupDataMsg();
}

#line 288
static inline bool DelugePageTransferP__DelugePageTransfer__isTransferring(void )
{
  return DelugePageTransferP__state != DelugePageTransferP__S_IDLE && DelugePageTransferP__state != DelugePageTransferP__S_DISABLED;
}

# 47 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugePageTransfer.nc"
inline static bool ObjectTransferP__DelugePageTransfer__isTransferring(void ){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = DelugePageTransferP__DelugePageTransfer__isTransferring();
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 75 "/opt/tinyos-2.1.2/tos/interfaces/Send.nc"
inline static error_t /*ObjectTransferC.SendAdvMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(0U, msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 162 "/opt/tinyos-2.1.2/tos/interfaces/AMPacket.nc"
inline static void /*ObjectTransferC.SendAdvMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setType(message_t * amsg, am_id_t t){
#line 162
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setType(amsg, t);
#line 162
}
#line 162
#line 103
inline static void /*ObjectTransferC.SendAdvMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setDestination(message_t * amsg, am_addr_t addr){
#line 103
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setDestination(amsg, addr);
#line 103
}
#line 103
# 53 "/opt/tinyos-2.1.2/tos/system/AMQueueEntryP.nc"
static inline error_t /*ObjectTransferC.SendAdvMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 55
{
  /*ObjectTransferC.SendAdvMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setDestination(msg, dest);
  /*ObjectTransferC.SendAdvMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setType(msg, 80U);
  return /*ObjectTransferC.SendAdvMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__send(msg, len);
}

# 80 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
inline static error_t ObjectTransferP__SendAdvMsg__send(am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*ObjectTransferC.SendAdvMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 125 "/opt/tinyos-2.1.2/tos/interfaces/Send.nc"
inline static void * /*ObjectTransferC.SendAdvMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__getPayload(message_t * msg, uint8_t len){
#line 125
  void *__nesc_result;
#line 125

#line 125
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__getPayload(0U, msg, len);
#line 125

#line 125
  return __nesc_result;
#line 125
}
#line 125
# 73 "/opt/tinyos-2.1.2/tos/system/AMQueueEntryP.nc"
static inline void */*ObjectTransferC.SendAdvMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__getPayload(message_t *m, uint8_t len)
#line 73
{
  return /*ObjectTransferC.SendAdvMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__getPayload(m, len);
}

# 135 "/opt/tinyos-2.1.2/tos/interfaces/AMSend.nc"
inline static void * ObjectTransferP__SendAdvMsg__getPayload(message_t * msg, uint8_t len){
#line 135
  void *__nesc_result;
#line 135

#line 135
  __nesc_result = /*ObjectTransferC.SendAdvMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__getPayload(msg, len);
#line 135

#line 135
  return __nesc_result;
#line 135
}
#line 135
# 136 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/ObjectTransferP.nc"
static inline void ObjectTransferP__sendAdvMsg(uint16_t addr)
{
  DelugeAdvMsg *pMsg = (DelugeAdvMsg *)ObjectTransferP__SendAdvMsg__getPayload(&ObjectTransferP__pMsgBuf, sizeof(DelugeAdvMsg ));

#line 139
  if (pMsg == (void *)0) {
      return;
    }
  if (ObjectTransferP__isBusy_pMsgBuf == FALSE) {
      __nesc_hton_uint16(pMsg->sourceAddr.nxdata, TOS_NODE_ID);
      __nesc_hton_uint8(pMsg->version.nxdata, DELUGE_VERSION);
      __nesc_hton_uint8(pMsg->type.nxdata, DELUGE_ADV_NORMAL);

      memcpy(& pMsg->objDesc, &ObjectTransferP__curObjDesc, sizeof(DelugeObjDesc ));

      if (ObjectTransferP__SendAdvMsg__send(addr, &ObjectTransferP__pMsgBuf, sizeof(DelugeAdvMsg )) == SUCCESS) {

          ObjectTransferP__isBusy_pMsgBuf = TRUE;
        }
    }
}

#line 87
static inline void ObjectTransferP__updateTimers(void )
{
}

#line 313
static inline void ObjectTransferP__Timer__fired(void )
{
  ObjectTransferP__updateTimers();

  if (ObjectTransferP__advTimers.overheard == 0) {
      ObjectTransferP__sendAdvMsg(AM_BROADCAST_ADDR);
    }

  if (ObjectTransferP__DelugePageTransfer__isTransferring()) {
    ObjectTransferP__advTimers.newAdvs = DELUGE_NUM_NEWDATA_ADVS_REQUIRED;
    }
  else {
#line 323
    if (ObjectTransferP__advTimers.newAdvs > 0) {
      ObjectTransferP__advTimers.newAdvs--;
      }
    }
#line 326
  if (ObjectTransferP__advTimers.newAdvs == 0 && 
  ObjectTransferP__advTimers.periodLog2 < DELUGE_MAX_ADV_PERIOD_LOG2) {
      ObjectTransferP__advTimers.periodLog2++;
    }

  ObjectTransferP__setupAdvTimer();
}

# 92 "/opt/tinyos-2.1.2/tos/system/BitVectorC.nc"
static inline void /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__BitVector__set(uint16_t bitnum)
{
  /* atomic removed: atomic calls only */
#line 94
  {
#line 94
    /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__m_bits[/*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__getIndex(bitnum)] |= /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__getMask(bitnum);
  }
}

# 63 "/opt/tinyos-2.1.2/tos/interfaces/BitVector.nc"
inline static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Pending__set(uint16_t bitnum){
#line 63
  /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__BitVector__set(bitnum);
#line 63
}
#line 63
# 199 "/opt/tinyos-2.1.2/tos/lib/timer/VirtualizeTimerC.nc"
static inline uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getdt(uint8_t num)
{
  return /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num].dt;
}

# 151 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
inline static uint32_t /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Timer__getdt(void ){
#line 151
  unsigned long __nesc_result;
#line 151

#line 151
  __nesc_result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getdt(3U);
#line 151

#line 151
  return __nesc_result;
#line 151
}
#line 151
# 176 "/opt/tinyos-2.1.2/tos/lib/net/TrickleTimerImplP.nc"
static inline void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Timer__fired(void )
#line 176
{
  uint8_t i;
  uint32_t dt = /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Timer__getdt();

#line 179
  ;
  for (i = 0; i < 1U; i++) {
      uint32_t remaining = /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[i].time;

#line 182
      if (remaining != 0) {
          remaining -= dt;
          if (remaining == 0) {
              if (/*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[i].count < 1) {
                  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 186
                    {
                      ;
                      /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Pending__set(i);
                    }
#line 189
                    __nesc_atomic_end(__nesc_atomic); }
                  /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__timerTask__postTask();
                }
              /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Changed__set(i);
              /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__generateTime(i);







              /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[i].count = 0;
            }
        }
    }
  /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__adjustTimer();
}

# 204 "/opt/tinyos-2.1.2/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num)
{
}

# 83 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(uint8_t arg_0x7fa21e652da0){
#line 83
  switch (arg_0x7fa21e652da0) {
#line 83
    case 0U:
#line 83
      BlinkC__Timer0__fired();
#line 83
      break;
#line 83
    case 1U:
#line 83
      DelugePageTransferP__Timer__fired();
#line 83
      break;
#line 83
    case 2U:
#line 83
      ObjectTransferP__Timer__fired();
#line 83
      break;
#line 83
    case 3U:
#line 83
      /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Timer__fired();
#line 83
      break;
#line 83
    default:
#line 83
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(arg_0x7fa21e652da0);
#line 83
      break;
#line 83
    }
#line 83
}
#line 83
# 194 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline void HplAtm1281Timer2AsyncP__Compare__set(uint8_t t)
#line 194
{
  /* atomic removed: atomic calls only */
  {
    while (* (volatile uint8_t *)0xB6 & (1 << 3)) 
      ;
    * (volatile uint8_t *)0xB3 = t;
  }
}

# 54 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__size_type t){
#line 54
  HplAtm1281Timer2AsyncP__Compare__set(t);
#line 54
}
#line 54
# 99 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline uint8_t HplAtm1281Timer2AsyncP__Timer__get(void )
#line 99
{
#line 99
  return * (volatile uint8_t *)0xB2;
}

# 61 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__get(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = HplAtm1281Timer2AsyncP__Timer__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 278 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline int HplAtm1281Timer2AsyncP__TimerAsync__compareABusy(void )
#line 278
{
  return (* (volatile uint8_t *)0xB6 & (1 << 3)) != 0;
}

# 86 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/HplAtm128TimerAsync.nc"
inline static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerAsync__compareABusy(void ){
#line 86
  int __nesc_result;
#line 86

#line 86
  __nesc_result = HplAtm1281Timer2AsyncP__TimerAsync__compareABusy();
#line 86

#line 86
  return __nesc_result;
#line 86
}
#line 86
# 112 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__setOcr2A(uint8_t n)
#line 112
{
  while (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerAsync__compareABusy()) 
    ;
  if (n == /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__get()) {
    n++;
    }


  if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__base + n + 1 < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__base) {
    n = -/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__base - 1;
    }
#line 122
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__set(n);
}

# 67 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 81 "/opt/tinyos-2.1.2/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void )
{
#line 82
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask();
}

# 78 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__fired(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired();
#line 78
}
#line 78
# 139 "/opt/tinyos-2.1.2/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void )
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow());
}

# 83 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void ){
#line 83
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired();
#line 83
}
#line 83
# 264 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__getAlarm(void )
#line 264
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 265
    {
      unsigned long __nesc_temp = 
#line 265
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__t0 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__dt;

      {
#line 265
        __nesc_atomic_end(__nesc_atomic); 
#line 265
        return __nesc_temp;
      }
    }
#line 267
    __nesc_atomic_end(__nesc_atomic); }
}

# 116 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void ){
#line 116
  unsigned long __nesc_result;
#line 116

#line 116
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__getAlarm();
#line 116

#line 116
  return __nesc_result;
#line 116
}
#line 116
# 74 "/opt/tinyos-2.1.2/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void )
{
  if (/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot == FALSE) {
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(), /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt, FALSE);
    }
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired();
}

# 181 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline void HplAtm1281Timer2AsyncP__Compare__start(void )
#line 181
{
#line 181
  * (volatile uint8_t *)0x70 |= 1 << 1;
}

# 65 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__start(void ){
#line 65
  HplAtm1281Timer2AsyncP__Compare__start();
#line 65
}
#line 65
# 137 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline void HplAtm1281Timer2AsyncP__TimerCtrl__setControlB(uint8_t x)
#line 137
{
  while (* (volatile uint8_t *)0xB6 & (1 << 0)) 
    ;
  * (volatile uint8_t *)0xB1 = ((Atm128_TCCR2B_t )x).flat;
}

# 82 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/HplAtm128TimerCtrl8.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__setControlB(uint8_t control){
#line 82
  HplAtm1281Timer2AsyncP__TimerCtrl__setControlB(control);
#line 82
}
#line 82
# 131 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline void HplAtm1281Timer2AsyncP__TimerCtrl__setControlA(uint8_t x)
#line 131
{
  while (* (volatile uint8_t *)0xB6 & (1 << 1)) 
    ;
  * (volatile uint8_t *)0xB0 = ((Atm128_TCCR2A_t )x).flat;
}

# 81 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/HplAtm128TimerCtrl8.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__setControlA(uint8_t control){
#line 81
  HplAtm1281Timer2AsyncP__TimerCtrl__setControlA(control);
#line 81
}
#line 81
# 266 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline void HplAtm1281Timer2AsyncP__TimerAsync__setTimer2Asynchronous(void )
#line 266
{
  * (volatile uint8_t *)0xB6 |= 1 << 5;
}

# 68 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/HplAtm128TimerAsync.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerAsync__setTimer2Asynchronous(void ){
#line 68
  HplAtm1281Timer2AsyncP__TimerAsync__setTimer2Asynchronous();
#line 68
}
#line 68
# 89 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Init__init(void )
#line 89
{
  /* atomic removed: atomic calls only */
  {
    Atm128_TCCR2A_t x;
    Atm128_TCCR2B_t y;

    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerAsync__setTimer2Asynchronous();
    x.flat = 0;
    x.bits.wgm21 = 1;
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__setControlA(x.flat);
    y.flat = 0;
    y.bits.cs = 3;
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__setControlB(y.flat);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__MAXT);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__start();
  }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__setInterrupt();
  return SUCCESS;
}

# 55 "/opt/tinyos-2.1.2/tos/system/RandomMlcgC.nc"
static inline error_t RandomMlcgC__Init__init(void )
#line 55
{
  /* atomic removed: atomic calls only */
#line 56
  RandomMlcgC__seed = (uint32_t )(TOS_NODE_ID + 1);

  return SUCCESS;
}

# 55 "/opt/tinyos-2.1.2/tos/system/FcfsResourceQueueC.nc"
static inline error_t /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__Init__init(void )
#line 55
{
  memset(/*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ, /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__NO_ENTRY, sizeof /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__resQ);
  return SUCCESS;
}

# 63 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/UniqueLayerP.nc"
static inline error_t /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Init__init(void )
{
  /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__sequenceNumber = TOS_NODE_ID << 4;
  return SUCCESS;
}

# 55 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/NeighborhoodP.nc"
static inline error_t NeighborhoodP__Init__init(void )
{
  uint8_t i;

  for (i = 0; i < 5; ++i) 
    NeighborhoodP__nodes[i] = AM_BROADCAST_ADDR;

  return SUCCESS;
}

# 302 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static inline error_t /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SoftwareInit__init(void )
{
  uint8_t i;

  for (i = 0; i < /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RECEIVE_QUEUE_SIZE; ++i) 
    /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueue[i] = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__receiveQueueData + i;

  return SUCCESS;
}

# 88 "/opt/tinyos-2.1.2/tos/interfaces/Resource.nc"
inline static error_t RF230DriverLayerP__SpiResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__request(0U);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 236 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230DriverLayerP.nc"
static inline error_t RF230DriverLayerP__SoftwareInit__init(void )
{

  return RF230DriverLayerP__SpiResource__request();
}

# 55 "/opt/tinyos-2.1.2/tos/system/FcfsResourceQueueC.nc"
static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__Init__init(void )
#line 55
{
  memset(/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ, /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY, sizeof /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ);
  return SUCCESS;
}

# 124 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbP.nc"
static inline error_t At45dbP__Init__init(void )
#line 124
{
  At45dbP__request = At45dbP__IDLE;
  At45dbP__flashBusy = TRUE;


  At45dbP__buffer[0].page = At45dbP__buffer[1].page = AT45_MAX_PAGES;
  At45dbP__buffer[0].busy = At45dbP__buffer[1].busy = FALSE;
  At45dbP__buffer[0].clean = At45dbP__buffer[1].clean = TRUE;
  At45dbP__buffer[0].unchecked = At45dbP__buffer[1].unchecked = 0;
  At45dbP__buffer[0].erased = At45dbP__buffer[1].erased = FALSE;

  return SUCCESS;
}

# 55 "/opt/tinyos-2.1.2/tos/system/FcfsResourceQueueC.nc"
static inline error_t /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__Init__init(void )
#line 55
{
  memset(/*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__resQ, /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__NO_ENTRY, sizeof /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__resQ);
  return SUCCESS;
}

#line 55
static inline error_t /*BlockStorageLockC.Arbiter.Queue*/FcfsResourceQueueC__3__Init__init(void )
#line 55
{
  memset(/*BlockStorageLockC.Arbiter.Queue*/FcfsResourceQueueC__3__resQ, /*BlockStorageLockC.Arbiter.Queue*/FcfsResourceQueueC__3__NO_ENTRY, sizeof /*BlockStorageLockC.Arbiter.Queue*/FcfsResourceQueueC__3__resQ);
  return SUCCESS;
}

# 77 "/opt/tinyos-2.1.2/tos/system/BitVectorC.nc"
static inline void /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__BitVector__clearAll(void )
{
  memset(/*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__m_bits, 0, sizeof /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__m_bits);
}

# 45 "/opt/tinyos-2.1.2/tos/interfaces/BitVector.nc"
inline static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Changed__clearAll(void ){
#line 45
  /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__BitVector__clearAll();
#line 45
}
#line 45
# 77 "/opt/tinyos-2.1.2/tos/system/BitVectorC.nc"
static inline void /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__BitVector__clearAll(void )
{
  memset(/*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__m_bits, 0, sizeof /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__m_bits);
}

# 45 "/opt/tinyos-2.1.2/tos/interfaces/BitVector.nc"
inline static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Pending__clearAll(void ){
#line 45
  /*DisseminationTimerP.TrickleTimerMilliC.PendingVector*/BitVectorC__0__BitVector__clearAll();
#line 45
}
#line 45
# 82 "/opt/tinyos-2.1.2/tos/lib/net/TrickleTimerImplP.nc"
static inline error_t /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Init__init(void )
#line 82
{
  int i;

#line 84
  for (i = 0; i < 1U; i++) {
      /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[i].period = 1024;
      /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[i].count = 0;
      /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[i].time = 0;
      /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[i].remainder = 0;
    }
  /* atomic removed: atomic calls only */
#line 90
  {
    /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Pending__clearAll();
    /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Changed__clearAll();
  }
  return SUCCESS;
}

# 107 "/opt/tinyos-2.1.2/tos/system/ActiveMessageAddressC.nc"
static inline void ActiveMessageAddressC__initAmAddress(am_group_t myGroup, am_addr_t myAddr)
#line 107
{
  /* atomic removed: atomic calls only */
#line 108
  {
    ActiveMessageAddressC__addr = myAddr;
    ActiveMessageAddressC__group = myGroup;
  }
}

# 54 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/extra/iris/NetProgM.nc"
inline static void NetProgM__initAmAddress(am_group_t myGroup, am_addr_t myAddr){
#line 54
  ActiveMessageAddressC__initAmAddress(myGroup, myAddr);
#line 54
}
#line 54
# 56 "/opt/tinyos-2.1.2/tos/interfaces/InternalFlash.nc"
inline static error_t NetProgM__IFlash__read(void *addr, void * buf, uint16_t size){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = InternalFlashC__InternalFlash__read(addr, buf, size);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 60 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/extra/iris/NetProgM.nc"
static inline error_t NetProgM__Init__init(void )
{
  BootArgs bootArgs;

#line 63
  NetProgM__IFlash__read((uint8_t *)TOSBOOT_ARGS_ADDR, &bootArgs, sizeof bootArgs);


  if (bootArgs.address != 0xFFFF) {
      TOS_NODE_ID = bootArgs.address;
      NetProgM__initAmAddress(TOS_AM_GROUP, bootArgs.address);
    }

  return SUCCESS;
}

# 62 "/opt/tinyos-2.1.2/tos/interfaces/Init.nc"
inline static error_t RealMainP__SoftwareInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = NetProgM__Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*BlockStorageLockC.Arbiter.Queue*/FcfsResourceQueueC__3__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*At45dbC.Arbiter.Queue*/FcfsResourceQueueC__2__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, At45dbP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, RF230DriverLayerP__SoftwareInit__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__SoftwareInit__init());
#line 62
  __nesc_result = ecombine(__nesc_result, NeighborhoodP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*RF230RadioC.UniqueLayerC.UniqueLayerP*/UniqueLayerP__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*RF230RadioC.SendResourceC.Queue*/FcfsResourceQueueC__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, RandomMlcgC__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Init__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 154 "/opt/tinyos-2.1.2/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, FALSE);
}

# 64 "/opt/tinyos-2.1.2/tos/lib/timer/Timer.nc"
inline static void BlinkC__Timer0__startPeriodic(uint32_t dt){
#line 64
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(0U, dt);
#line 64
}
#line 64
# 61 "BlinkC.nc"
static inline void BlinkC__Boot__booted(void )
{
  BlinkC__Timer0__startPeriodic(500);
}

# 74 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeP.nc"
static inline void DelugeP__Boot__booted(void )
{
  __nesc_hton_uint32(DelugeP__lastCmd.uidhash.nxdata, DELUGE_INVALID_UID);
}

# 90 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeMetadataP.nc"
static inline void DelugeMetadataP__Boot__booted(void )
{





  DelugeMetadataP__state = DelugeMetadataP__S_READ_IDENT;
  DelugeMetadataP__currentImageIdx = 0;
  DelugeMetadataP__currentVolume = _imgNum2volumeId[DelugeMetadataP__currentImageIdx];
  DelugeMetadataP__nextImage();
}

# 60 "/opt/tinyos-2.1.2/tos/interfaces/Boot.nc"
inline static void RealMainP__Boot__booted(void ){
#line 60
  DelugeMetadataP__Boot__booted();
#line 60
  DelugeP__Boot__booted();
#line 60
  BlinkC__Boot__booted();
#line 60
}
#line 60
# 219 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline mcu_power_t HplAtm1281Timer2AsyncP__McuPowerOverride__lowestState(void )
#line 219
{
  uint8_t diff;


  if (* (volatile uint8_t *)0x70 & ((1 << 1) | (1 << 0))) {




      while (* (volatile uint8_t *)0xB6 & (((1 << 4) | (1 << 3)) | (1 << 1))) 
        ;
      diff = * (volatile uint8_t *)0xB3 - * (volatile uint8_t *)0xB2;
      if (diff < EXT_STANDBY_T0_THRESHOLD || 
      * (volatile uint8_t *)0xB2 > 256 - EXT_STANDBY_T0_THRESHOLD) {
        return ATM128_POWER_EXT_STANDBY;
        }
#line 234
      return ATM128_POWER_SAVE;
    }
  else {
      return ATM128_POWER_DOWN;
    }
}

# 62 "/opt/tinyos-2.1.2/tos/interfaces/McuPowerOverride.nc"
inline static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = HplAtm1281Timer2AsyncP__McuPowerOverride__lowestState();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 107 "/opt/tinyos-2.1.2/tos/chips/atm1281/McuSleepC.nc"
static inline mcu_power_t McuSleepC__getPowerState(void )
#line 107
{










  if ((
#line 117
  * (volatile uint8_t *)0x6E & ((1 << 1) | (1 << 2)) || 
  * (volatile uint8_t *)0x6F & ((((1 << 5) | (1 << 1)) | (1 << 2)) | (1 << 3))) || 
  * (volatile uint8_t *)0x71 & ((((1 << 5) | (1 << 1)) | (1 << 2)) | (1 << 3))) 
    {
      return ATM128_POWER_IDLE;
    }
  else {
    if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)(0x2C + 0x20) & (1 << 7)) {
        return ATM128_POWER_IDLE;
      }
    else {
      if (* (volatile uint8_t *)0XC1 & ((1 << 3) | (1 << 4))) {
          return ATM128_POWER_IDLE;
        }
      else {
#line 131
        if (* (volatile uint8_t *)0XC9 & ((1 << 3) | (1 << 4))) {
            return ATM128_POWER_IDLE;
          }
        else {
          if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)0xBC & (1 << 2)) {
              return ATM128_POWER_IDLE;
            }
          else {
            if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)0x7A & (1 << 7)) {
                return ATM128_POWER_ADC_NR;
              }
            else {
                return ATM128_POWER_DOWN;
              }
            }
          }
        }
      }
    }
}

# 142 "/opt/tinyos-2.1.2/tos/chips/atm1281/atm128hardware.h"
static inline  mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)
#line 142
{
  return m1 < m2 ? m1 : m2;
}

# 147 "/opt/tinyos-2.1.2/tos/chips/atm1281/McuSleepC.nc"
static inline void McuSleepC__McuSleep__sleep(void )
#line 147
{
  uint8_t powerState;

  powerState = mcombine(McuSleepC__getPowerState(), McuSleepC__McuPowerOverride__lowestState());
  * (volatile uint8_t *)(0x33 + 0x20) = ((
  * (volatile uint8_t *)(0x33 + 0x20) & 0xf0) | (1 << 0)) | __extension__ ({
#line 152
    uint16_t __addr16 = (uint16_t )(uint16_t )&McuSleepC__atm128PowerBits[powerState];
#line 152
    uint8_t __result;

#line 152
     __asm volatile ("lpm %0, Z""\n\t" : "=r"(__result) : "z"(__addr16));__result;
  }
  );
#line 153
   __asm volatile ("sei" :  :  : "memory");

   __asm volatile ("sleep" :  :  : "memory");
   __asm volatile ("cli" :  :  : "memory");

  * (volatile uint8_t *)(0x33 + 0x20) &= ~(1 << 0);
}

# 76 "/opt/tinyos-2.1.2/tos/interfaces/McuSleep.nc"
inline static void SchedulerBasicP__McuSleep__sleep(void ){
#line 76
  McuSleepC__McuSleep__sleep();
#line 76
}
#line 76
# 78 "/opt/tinyos-2.1.2/tos/system/SchedulerBasicP.nc"
static __inline uint8_t SchedulerBasicP__popTask(void )
{
  if (SchedulerBasicP__m_head != SchedulerBasicP__NO_TASK) 
    {
      uint8_t id = SchedulerBasicP__m_head;

#line 83
      SchedulerBasicP__m_head = SchedulerBasicP__m_next[SchedulerBasicP__m_head];
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
        }
      SchedulerBasicP__m_next[id] = SchedulerBasicP__NO_TASK;
      return id;
    }
  else 
    {
      return SchedulerBasicP__NO_TASK;
    }
}

#line 149
static inline void SchedulerBasicP__Scheduler__taskLoop(void )
{
  for (; ; ) 
    {
      uint8_t nextTask;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          while ((nextTask = SchedulerBasicP__popTask()) == SchedulerBasicP__NO_TASK) 
            {
              SchedulerBasicP__McuSleep__sleep();
            }
        }
#line 161
        __nesc_atomic_end(__nesc_atomic); }
      SchedulerBasicP__TaskBasic__runTask(nextTask);
    }
}

# 72 "/opt/tinyos-2.1.2/tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__taskLoop(void ){
#line 72
  SchedulerBasicP__Scheduler__taskLoop();
#line 72
}
#line 72
# 204 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static __inline void HplAtm1281Timer2AsyncP__stabiliseTimer2(void )
#line 204
{
  * (volatile uint8_t *)0xB0 = * (volatile uint8_t *)0xB0;
  while (* (volatile uint8_t *)0xB6 & (1 << 1)) 
    ;
}

# 58 "/opt/tinyos-2.1.2/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void )
{
}

# 82 "/opt/tinyos-2.1.2/tos/lib/timer/Counter.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__overflow(void ){
#line 82
  /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow();
#line 82
}
#line 82
# 90 "/opt/tinyos-2.1.2/tos/chips/atm1281/atm128hardware.h"
static __inline  void __nesc_enable_interrupt()
#line 90
{
   __asm volatile ("sei" :  :  : "memory");}

# 191 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
static inline uint8_t HplAtm1281Timer2AsyncP__Compare__get(void )
#line 191
{
#line 191
  return * (volatile uint8_t *)0xB3;
}

# 48 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__get(void ){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = HplAtm1281Timer2AsyncP__Compare__get();
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 187 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__fired(void )
#line 187
{
  int overflowed;


  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__base += /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__get() + 1U;
  overflowed = !/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__base;
  __nesc_enable_interrupt();
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__setInterrupt();
  if (overflowed) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__overflow();
    }
}

# 58 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm1281Timer2AsyncP__Compare__fired(void ){
#line 58
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__fired();
#line 58
}
#line 58
# 268 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__overflow(void )
#line 268
{
}

# 70 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm1281Timer2AsyncP__Timer__overflow(void ){
#line 70
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__overflow();
#line 70
}
#line 70
# 113 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__enableInterrupt(bool enabled){
#line 113
  HplAtm128SpiP__SPI__enableInterrupt(enabled);
#line 113
}
#line 113
# 249 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline error_t Atm128SpiP__sendNextPart(void )
#line 249
{
  uint16_t end;
  uint16_t tmpPos;
  uint16_t myLen;
  uint8_t * tx;
  uint8_t * rx;

  /* atomic removed: atomic calls only */
#line 256
  {
    myLen = Atm128SpiP__len;
    tx = Atm128SpiP__txBuffer;
    rx = Atm128SpiP__rxBuffer;
    tmpPos = Atm128SpiP__pos;
    end = Atm128SpiP__pos + Atm128SpiP__SPI_ATOMIC_SIZE;
    end = end > Atm128SpiP__len ? Atm128SpiP__len : end;
  }

  for (; tmpPos < end - 1; tmpPos++) {
      uint8_t val;

#line 267
      if (tx != (void *)0) {
        val = Atm128SpiP__SpiByte__write(tx[tmpPos]);
        }
      else {
#line 270
        val = Atm128SpiP__SpiByte__write(0);
        }
      if (rx != (void *)0) {
          rx[tmpPos] = val;
        }
    }



  Atm128SpiP__Spi__enableInterrupt(TRUE);
  /* atomic removed: atomic calls only */
#line 280
  {
    if (tx != (void *)0) {
      Atm128SpiP__Spi__write(tx[tmpPos]);
      }
    else {
#line 284
      Atm128SpiP__Spi__write(0);
      }
    Atm128SpiP__pos = tmpPos;
  }


  return SUCCESS;
}

#line 352
static inline void Atm128SpiP__Spi__dataReady(uint8_t data)
#line 352
{
  bool again;

  /* atomic removed: atomic calls only */
#line 355
  {
    if (Atm128SpiP__rxBuffer != (void *)0) {
        Atm128SpiP__rxBuffer[Atm128SpiP__pos] = data;
      }

    Atm128SpiP__pos++;
  }
  Atm128SpiP__Spi__enableInterrupt(FALSE);
  /* atomic removed: atomic calls only */
  {
    again = Atm128SpiP__pos < Atm128SpiP__len;
  }

  if (again) {
      Atm128SpiP__sendNextPart();
    }
  else {
      uint8_t discard;
      uint16_t myLen;
      uint8_t * rx;
      uint8_t * tx;

      /* atomic removed: atomic calls only */
#line 377
      {
        myLen = Atm128SpiP__len;
        rx = Atm128SpiP__rxBuffer;
        tx = Atm128SpiP__txBuffer;
        Atm128SpiP__rxBuffer = (void *)0;
        Atm128SpiP__txBuffer = (void *)0;
        Atm128SpiP__len = 0;
        Atm128SpiP__pos = 0;
      }
      discard = Atm128SpiP__Spi__read();

      Atm128SpiP__SpiPacket__sendDone(tx, rx, myLen, SUCCESS);
    }
}

# 109 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void HplAtm128SpiP__SPI__dataReady(uint8_t data){
#line 109
  Atm128SpiP__Spi__dataReady(data);
#line 109
}
#line 109
# 59 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/Tasklet.nc"
inline static void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__schedule(void ){
#line 59
  TaskletC__Tasklet__schedule();
#line 59
}
#line 59
# 65 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioAlarmP.nc"
static inline void /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__fired(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (/*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state == /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__STATE_WAIT) {
        /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__state = /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__STATE_FIRED;
        }
    }
#line 72
    __nesc_atomic_end(__nesc_atomic); }
  /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Tasklet__schedule();
}

# 78 "/opt/tinyos-2.1.2/tos/lib/timer/Alarm.nc"
inline static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__fired(void ){
#line 78
  /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__Alarm__fired();
#line 78
}
#line 78
# 119 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__fired(void )
#line 119
{
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__stop();
  ;
  __nesc_enable_interrupt();
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__fired();
}

# 58 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm1281Timer1P__CompareA__fired(void ){
#line 58
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__fired();
#line 58
}
#line 58
# 229 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__CompareB__default__fired(void )
#line 229
{
}

# 58 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm1281Timer1P__CompareB__fired(void ){
#line 58
  HplAtm1281Timer1P__CompareB__default__fired();
#line 58
}
#line 58
# 233 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline void HplAtm1281Timer1P__CompareC__default__fired(void )
#line 233
{
}

# 58 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm1281Timer1P__CompareC__fired(void ){
#line 58
  HplAtm1281Timer1P__CompareC__default__fired();
#line 58
}
#line 58
# 702 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230DriverLayerP.nc"
static inline void RF230DriverLayerP__IRQ__captured(uint16_t time)
{
  for (; 0; ) ;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      RF230DriverLayerP__capturedTime = time;
      RF230DriverLayerP__radioIrq = TRUE;
    }
#line 710
    __nesc_atomic_end(__nesc_atomic); }

  RF230DriverLayerP__Tasklet__schedule();
}

# 61 "/opt/tinyos-2.1.2/tos/interfaces/GpioCapture.nc"
inline static void HplRF230P__IRQ__captured(uint16_t time){
#line 61
  RF230DriverLayerP__IRQ__captured(time);
#line 61
}
#line 61
# 219 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
static inline uint16_t HplAtm1281Timer1P__Capture__get(void )
#line 219
{
#line 219
  return * (volatile uint16_t *)0x86;
}

# 47 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static HplRF230P__Capture__size_type HplRF230P__Capture__get(void ){
#line 47
  unsigned short __nesc_result;
#line 47

#line 47
  __nesc_result = HplAtm1281Timer1P__Capture__get();
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 64 "/opt/tinyos-2.1.2/tos/platforms/iris/chips/rf230/HplRF230P.nc"
static inline void HplRF230P__Capture__captured(uint16_t time)
{
  time = HplRF230P__Capture__get();
  HplRF230P__IRQ__captured(time);
}

# 60 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void HplAtm1281Timer1P__Capture__captured(HplAtm1281Timer1P__Capture__size_type t){
#line 60
  HplRF230P__Capture__captured(t);
#line 60
}
#line 60
# 126 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__overflow(void )
#line 126
{
}

# 60 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__overflow(void )
#line 60
{
}

# 58 "/opt/tinyos-2.1.2/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void )
{
}

# 82 "/opt/tinyos-2.1.2/tos/lib/timer/Counter.nc"
inline static void /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__Counter__overflow(void ){
#line 82
  /*LocalTimeMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow();
#line 82
}
#line 82
# 133 "/opt/tinyos-2.1.2/tos/lib/timer/TransformCounterC.nc"
static inline void /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__overflow(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__m_upper++;
      if ((/*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__m_upper & /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__OVERFLOW_MASK) == 0) {
        /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__Counter__overflow();
        }
    }
#line 141
    __nesc_atomic_end(__nesc_atomic); }
}

# 82 "/opt/tinyos-2.1.2/tos/lib/timer/Counter.nc"
inline static void /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__overflow(void ){
#line 82
  /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__overflow();
#line 82
}
#line 82
# 65 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline void /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__overflow(void )
{
  /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__overflow();
}

# 70 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm1281Timer1P__Timer__overflow(void ){
#line 70
  /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__overflow();
#line 70
  /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__overflow();
#line 70
  /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__overflow();
#line 70
}
#line 70
# 63 "/opt/tinyos-2.1.2/tos/system/RealMainP.nc"
  int main(void )
#line 63
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {





      {
#line 71
        * (volatile uint8_t *)(0x34 + 0x20) = 0;
#line 71
         __asm volatile ("in __tmp_reg__, __SREG__""\n\t""cli""\n\t""sts %0, %1""\n\t""sts %0, __zero_reg__""\n\t""out __SREG__,__tmp_reg__""\n\t" :  : "M"((uint16_t )& * (volatile uint8_t *)0x60), "r"((uint8_t )((1 << 4) | (1 << 3))) : "r0");}
#line 71
      ;

      RealMainP__Scheduler__init();





      RealMainP__PlatformInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;





      RealMainP__SoftwareInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;
    }
#line 88
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  RealMainP__Boot__booted();


  RealMainP__Scheduler__taskLoop();




  return -1;
}

# 134 "/opt/tinyos-2.1.2/tos/system/SchedulerBasicP.nc"
static bool SchedulerBasicP__Scheduler__runNextTask(void )
{
  uint8_t nextTask;

  /* atomic removed: atomic calls only */
#line 138
  {
    nextTask = SchedulerBasicP__popTask();
    if (nextTask == SchedulerBasicP__NO_TASK) 
      {
        {
          unsigned char __nesc_temp = 
#line 142
          FALSE;

#line 142
          return __nesc_temp;
        }
      }
  }
#line 145
  SchedulerBasicP__TaskBasic__runTask(nextTask);
  return TRUE;
}

#line 175
static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id)
{
}

# 75 "/opt/tinyos-2.1.2/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(uint8_t arg_0x7fa21e9ff7d8){
#line 75
  switch (arg_0x7fa21e9ff7d8) {
#line 75
    case /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired:
#line 75
      /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask();
#line 75
      break;
#line 75
    case /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer:
#line 75
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask();
#line 75
      break;
#line 75
    case ObjectTransferP__signalObjRecvDone:
#line 75
      ObjectTransferP__signalObjRecvDone__runTask();
#line 75
      break;
#line 75
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask:
#line 75
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask();
#line 75
      break;
#line 75
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask:
#line 75
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask();
#line 75
      break;
#line 75
    case /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask:
#line 75
      /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__runTask();
#line 75
      break;
#line 75
    case /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask:
#line 75
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__stateDoneTask__runTask();
#line 75
      break;
#line 75
    case /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask:
#line 75
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__runTask();
#line 75
      break;
#line 75
    case /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask:
#line 75
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__deliverTask__runTask();
#line 75
      break;
#line 75
    case /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom:
#line 75
      /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__runTask();
#line 75
      break;
#line 75
    case RF230DriverLayerP__releaseSpi:
#line 75
      RF230DriverLayerP__releaseSpi__runTask();
#line 75
      break;
#line 75
    case Atm128SpiP__zeroTask:
#line 75
      Atm128SpiP__zeroTask__runTask();
#line 75
      break;
#line 75
    case /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__grantedTask:
#line 75
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__grantedTask__runTask();
#line 75
      break;
#line 75
    case At45dbP__taskSuccess:
#line 75
      At45dbP__taskSuccess__runTask();
#line 75
      break;
#line 75
    case At45dbP__taskFail:
#line 75
      At45dbP__taskFail__runTask();
#line 75
      break;
#line 75
    case HplAt45dbIOP__avail:
#line 75
      HplAt45dbIOP__avail__runTask();
#line 75
      break;
#line 75
    case /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__granted:
#line 75
      /*HplAt45dbIOC.NoArbiterC*/NoArbiterC__0__granted__runTask();
#line 75
      break;
#line 75
    case /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__grantedTask:
#line 75
      /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__grantedTask__runTask();
#line 75
      break;
#line 75
    case /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__grantedTask:
#line 75
      /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__grantedTask__runTask();
#line 75
      break;
#line 75
    case /*DelugeC.DisseminatorC.DisseminatorP*/DisseminatorP__0__changedTask:
#line 75
      /*DelugeC.DisseminatorC.DisseminatorP*/DisseminatorP__0__changedTask__runTask();
#line 75
      break;
#line 75
    case /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__timerTask:
#line 75
      /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__timerTask__runTask();
#line 75
      break;
#line 75
    case DelugeP__taskRequest:
#line 75
      DelugeP__taskRequest__runTask();
#line 75
      break;
#line 75
    default:
#line 75
      SchedulerBasicP__TaskBasic__default__runTask(arg_0x7fa21e9ff7d8);
#line 75
      break;
#line 75
    }
#line 75
}
#line 75
# 181 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeP.nc"
static void DelugeP__Resource__granted(void )
{
  switch (DelugeP__state) {
      case DelugeP__S_PUB: 

        DelugeP__ObjectTransfer__publish(__nesc_ntoh_uint32(DelugeP__lastCmd.uidhash.nxdata), __nesc_ntoh_uint32(DelugeP__lastCmd.size.nxdata), __nesc_ntoh_uint8(DelugeP__lastCmd.imgNum.nxdata));
      break;
      case DelugeP__S_RECV: 
        DelugeP__ObjectTransfer__receive(__nesc_ntoh_uint32(DelugeP__lastCmd.uidhash.nxdata), __nesc_ntoh_uint32(DelugeP__lastCmd.size.nxdata), __nesc_ntoh_uint8(DelugeP__lastCmd.imgNum.nxdata));
      break;
    }
}

# 222 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/ObjectTransferP.nc"
static error_t ObjectTransferP__ObjectTransfer__stop(void )
{
  ObjectTransferP__Timer__stop();
  ObjectTransferP__DelugePageTransfer__stop();
  ObjectTransferP__state = ObjectTransferP__S_STOPPED;


  __nesc_hton_int32(ObjectTransferP__curObjDesc.objid.nxdata, DELUGE_INVALID_OBJID);
  __nesc_hton_uint8(ObjectTransferP__curObjDesc.numPgs.nxdata, DELUGE_INVALID_PGNUM);
  __nesc_hton_uint8(ObjectTransferP__curObjDesc.numPgsComplete.nxdata, DELUGE_INVALID_PGNUM);
  ObjectTransferP__advTimers.periodLog2 = 0;

  return SUCCESS;
}

# 211 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugePageTransferP.nc"
static void DelugePageTransferP__changeState(uint8_t newState)
{

  if ((
#line 213
  newState == DelugePageTransferP__S_DISABLED || newState == DelugePageTransferP__S_IDLE)
   && (DelugePageTransferP__state == DelugePageTransferP__S_SENDING || DelugePageTransferP__state == DelugePageTransferP__S_RECEIVING)) {
      DelugePageTransferP__unlockPMsgBuf();
    }

  DelugePageTransferP__state = newState;
}

#line 164
static void DelugePageTransferP__setupDataMsg(void )
{
  DelugeDataMsg *pDataMsg = (DelugeDataMsg *)DelugePageTransferP__SendDataMsg__getPayload(&DelugePageTransferP__pMsgBuf, sizeof(DelugeDataMsg ));
  uint16_t nextPkt;

  if (DelugePageTransferP__state != DelugePageTransferP__S_SENDING && DelugePageTransferP__state != DelugePageTransferP__S_TX_LOCKING) {
      return;
    }

  DelugePageTransferP__DelugePageTransfer__suppressMsgs(DelugePageTransferP__objToSend);

  if (DelugePageTransferP__state == DelugePageTransferP__S_TX_LOCKING) {
      if (DelugePageTransferP__isBusy_pMsgBuf) {
          return;
        }
      DelugePageTransferP__isBusy_pMsgBuf = TRUE;
      DelugePageTransferP__changeState(DelugePageTransferP__S_SENDING);
      __nesc_hton_int32(pDataMsg->objid.nxdata, DelugePageTransferP__objToSend);
      __nesc_hton_uint8(pDataMsg->pgNum.nxdata, DelugePageTransferP__pageToSend);
      __nesc_hton_uint8(pDataMsg->pktNum.nxdata, 0);
    }

  if (DelugePageTransferP__BitVecUtils__indexOf(&nextPkt, __nesc_ntoh_uint8(pDataMsg->pktNum.nxdata), DelugePageTransferP__pktsToSend, DELUGET2_PKTS_PER_PAGE) != SUCCESS) {

      DelugePageTransferP__changeState(DelugePageTransferP__S_IDLE);
    }
  else 
#line 189
    {
      __nesc_hton_uint8(pDataMsg->pktNum.nxdata, nextPkt);
      if (DelugePageTransferP__BlockRead__read(DelugePageTransferP__imgNum, DelugePageTransferP__calcOffset(DelugePageTransferP__pageToSend, nextPkt), pDataMsg->data, DELUGET2_PKT_PAYLOAD_SIZE) != SUCCESS) {
          DelugePageTransferP__Timer__startOneShot(DELUGE_FAILED_SEND_DELAY);
        }
    }
}

# 46 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BitVecUtilsC.nc"
static error_t BitVecUtilsC__BitVecUtils__indexOf(uint16_t *pResult, uint16_t fromIndex, 
uint8_t *bitVec, uint16_t length)
#line 47
{
  uint16_t i = fromIndex;

  if (length == 0) {
    return FAIL;
    }
  do {
      if (bitVec[i / 8] & (1 << i % 8)) {
          *pResult = i;
          return SUCCESS;
        }
      i = (i + 1) % length;
    }
  while (
#line 59
  i != fromIndex);

  return FAIL;
}

# 67 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/BlockStorageManagerP.nc"
static error_t /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockRead__read(uint8_t client, storage_addr_t addr, void *buf, storage_len_t len)
{
  error_t error;

#line 70
  if (/*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__state != /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__S_READY) {
      return EBUSY;
    }
  error = /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockRead__read(/*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__VolumeId__get(client), addr, buf, len);
  if (error == SUCCESS) 
    {
      /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__state = /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__S_BUSY;
      /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__current_client = client;
      return SUCCESS;
    }
  return error;
}

# 189 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
static error_t BlockStorageP__newRequest(uint8_t newState, uint8_t id, 
storage_addr_t addr, uint8_t * buf, storage_len_t len)
#line 190
{
  storage_len_t vsize;

  if (BlockStorageP__s[id].request != BlockStorageP__R_IDLE) {
    return EBUSY;
    }
  vsize = BlockStorageP__BlockRead__getSize(id);
  if (addr > vsize || len > vsize - addr) {
    return EINVAL;
    }
  BlockStorageP__s[id].request = newState;
  BlockStorageP__s[id].addr = addr;




  BlockStorageP__s[id].buf = (void *)0;
  BlockStorageP__s[id].len = len;
  BlockStorageP__s[id].buf = buf;

  BlockStorageP__Resource__request(id);

  return SUCCESS;
}

# 30 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbStorageManagerC.nc"
static at45page_t At45dbStorageManagerC__At45dbVolume__volumeSize(volume_id_t volid)
#line 30
{
  switch (volid) 
    {
# 13 "build/iris/StorageVolumes.h"
      case VOLUME_GOLDENIMAGE: return 256;
      case VOLUME_DELUGE3: return 256;
      case VOLUME_DELUGE1: return 256;
      case VOLUME_DELUGE2: return 256;
# 35 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbStorageManagerC.nc"
      default: return 0;
    }
}

# 77 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
static error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__request(uint8_t id)
#line 77
{
  /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__requested(/*At45dbC.Arbiter.Arbiter*/ArbiterP__0__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 79
    {
      if (/*At45dbC.Arbiter.Arbiter*/ArbiterP__0__state == /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__RES_CONTROLLED) {
          /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__state = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__RES_GRANTING;
          /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__reqResId = id;
        }
      else {
#line 84
        if (/*At45dbC.Arbiter.Arbiter*/ArbiterP__0__reqResId == id) {
            {
              unsigned char __nesc_temp = 
#line 85
              SUCCESS;

              {
#line 85
                __nesc_atomic_end(__nesc_atomic); 
#line 85
                return __nesc_temp;
              }
            }
          }
        else 
#line 87
          {
            unsigned char __nesc_temp = 
#line 87
            /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Queue__enqueue(id);

            {
#line 87
              __nesc_atomic_end(__nesc_atomic); 
#line 87
              return __nesc_temp;
            }
          }
        }
    }
#line 91
    __nesc_atomic_end(__nesc_atomic); }
#line 89
  /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested();
  return SUCCESS;
}

# 170 "/opt/tinyos-2.1.2/tos/system/SchedulerBasicP.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 172
    {
#line 172
      {
        unsigned char __nesc_temp = 
#line 172
        SchedulerBasicP__pushTask(id) ? SUCCESS : EBUSY;

        {
#line 172
          __nesc_atomic_end(__nesc_atomic); 
#line 172
          return __nesc_temp;
        }
      }
    }
#line 175
    __nesc_atomic_end(__nesc_atomic); }
}

# 218 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/BlockStorageManagerP.nc"
static volume_id_t /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__VolumeId__default__get(uint8_t client)
{
  return 0xFF;
}

# 39 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/VolumeId.nc"
static volume_id_t /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__VolumeId__get(uint8_t arg_0x7fa21d921180){
#line 39
  unsigned char __nesc_result;
#line 39

#line 39
  switch (arg_0x7fa21d921180) {
#line 39
    case /*DelugeC.BlockReaderDeluge1*/BlockReaderC__0__CLIENT_ID:
#line 39
      __nesc_result = /*DelugeC.BlockReaderDeluge1.VolumeIdC*/VolumeIdC__0__VolumeId__get();
#line 39
      break;
#line 39
    case /*DelugeC.BlockReaderDeluge2*/BlockReaderC__1__CLIENT_ID:
#line 39
      __nesc_result = /*DelugeC.BlockReaderDeluge2.VolumeIdC*/VolumeIdC__1__VolumeId__get();
#line 39
      break;
#line 39
    case /*DelugeC.BlockReaderDeluge3*/BlockReaderC__2__CLIENT_ID:
#line 39
      __nesc_result = /*DelugeC.BlockReaderDeluge3.VolumeIdC*/VolumeIdC__2__VolumeId__get();
#line 39
      break;
#line 39
    case /*DelugeC.BlockWriterDeluge1*/BlockWriterC__0__CLIENT_ID:
#line 39
      __nesc_result = /*DelugeC.BlockWriterDeluge1.VolumeIdC*/VolumeIdC__3__VolumeId__get();
#line 39
      break;
#line 39
    case /*DelugeC.BlockWriterDeluge2*/BlockWriterC__1__CLIENT_ID:
#line 39
      __nesc_result = /*DelugeC.BlockWriterDeluge2.VolumeIdC*/VolumeIdC__4__VolumeId__get();
#line 39
      break;
#line 39
    case /*DelugeC.BlockWriterDeluge3*/BlockWriterC__2__CLIENT_ID:
#line 39
      __nesc_result = /*DelugeC.BlockWriterDeluge3.VolumeIdC*/VolumeIdC__5__VolumeId__get();
#line 39
      break;
#line 39
    case /*DelugeMetadataC.BlockReaderGoldenImage*/BlockReaderC__3__CLIENT_ID:
#line 39
      __nesc_result = /*DelugeMetadataC.BlockReaderGoldenImage.VolumeIdC*/VolumeIdC__6__VolumeId__get();
#line 39
      break;
#line 39
    case /*DelugeMetadataC.BlockReaderDeluge1*/BlockReaderC__4__CLIENT_ID:
#line 39
      __nesc_result = /*DelugeMetadataC.BlockReaderDeluge1.VolumeIdC*/VolumeIdC__7__VolumeId__get();
#line 39
      break;
#line 39
    case /*DelugeMetadataC.BlockReaderDeluge2*/BlockReaderC__5__CLIENT_ID:
#line 39
      __nesc_result = /*DelugeMetadataC.BlockReaderDeluge2.VolumeIdC*/VolumeIdC__8__VolumeId__get();
#line 39
      break;
#line 39
    case /*DelugeMetadataC.BlockReaderDeluge3*/BlockReaderC__6__CLIENT_ID:
#line 39
      __nesc_result = /*DelugeMetadataC.BlockReaderDeluge3.VolumeIdC*/VolumeIdC__9__VolumeId__get();
#line 39
      break;
#line 39
    case /*DelugeMetadataC.BlockWriterGoldenImage*/BlockWriterC__3__CLIENT_ID:
#line 39
      __nesc_result = /*DelugeMetadataC.BlockWriterGoldenImage.VolumeIdC*/VolumeIdC__10__VolumeId__get();
#line 39
      break;
#line 39
    case /*DelugeMetadataC.BlockWriterDeluge1*/BlockWriterC__4__CLIENT_ID:
#line 39
      __nesc_result = /*DelugeMetadataC.BlockWriterDeluge1.VolumeIdC*/VolumeIdC__11__VolumeId__get();
#line 39
      break;
#line 39
    case /*DelugeMetadataC.BlockWriterDeluge2*/BlockWriterC__5__CLIENT_ID:
#line 39
      __nesc_result = /*DelugeMetadataC.BlockWriterDeluge2.VolumeIdC*/VolumeIdC__12__VolumeId__get();
#line 39
      break;
#line 39
    case /*DelugeMetadataC.BlockWriterDeluge3*/BlockWriterC__6__CLIENT_ID:
#line 39
      __nesc_result = /*DelugeMetadataC.BlockWriterDeluge3.VolumeIdC*/VolumeIdC__13__VolumeId__get();
#line 39
      break;
#line 39
    case /*DelugeVolumeManagerC.BlockWriterDeluge1*/BlockWriterC__7__CLIENT_ID:
#line 39
      __nesc_result = /*DelugeVolumeManagerC.BlockWriterDeluge1.VolumeIdC*/VolumeIdC__14__VolumeId__get();
#line 39
      break;
#line 39
    case /*DelugeVolumeManagerC.BlockWriterDeluge2*/BlockWriterC__8__CLIENT_ID:
#line 39
      __nesc_result = /*DelugeVolumeManagerC.BlockWriterDeluge2.VolumeIdC*/VolumeIdC__15__VolumeId__get();
#line 39
      break;
#line 39
    case /*DelugeVolumeManagerC.BlockWriterDeluge3*/BlockWriterC__9__CLIENT_ID:
#line 39
      __nesc_result = /*DelugeVolumeManagerC.BlockWriterDeluge3.VolumeIdC*/VolumeIdC__16__VolumeId__get();
#line 39
      break;
#line 39
    default:
#line 39
      __nesc_result = /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__VolumeId__default__get(arg_0x7fa21d921180);
#line 39
      break;
#line 39
    }
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 144 "/opt/tinyos-2.1.2/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

#line 147
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 199 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__get(void )
#line 199
{
  uint32_t now;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {


      uint8_t now8 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__get();

      if (((Atm128_TIFR2_t )/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__getInterruptFlag()).bits.ocfa) {


        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__base + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__get() + 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__get();
        }
      else {

        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__base + now8;
        }
    }
#line 217
    __nesc_atomic_end(__nesc_atomic); }
#line 217
  return now;
}

# 113 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugePageTransferP.nc"
static void DelugePageTransferP__setupReqMsg(void )
{
  DelugeReqMsg *pReqMsg = (DelugeReqMsg *)DelugePageTransferP__SendReqMsg__getPayload(&DelugePageTransferP__pMsgBuf, sizeof(DelugeReqMsg ));

#line 116
  if (pReqMsg == (void *)0) {
      return;
    }
  if (DelugePageTransferP__state == DelugePageTransferP__S_RX_LOCKING) {
      if (DelugePageTransferP__isBusy_pMsgBuf) {
          return;
        }
      DelugePageTransferP__isBusy_pMsgBuf = TRUE;
      DelugePageTransferP__changeState(DelugePageTransferP__S_RECEIVING);
      __nesc_hton_uint16(pReqMsg->dest.nxdata, DelugePageTransferP__nodeAddr);
      __nesc_hton_uint16(pReqMsg->sourceAddr.nxdata, TOS_NODE_ID);
      __nesc_hton_int32(pReqMsg->objid.nxdata, DelugePageTransferP__workingObjid);
      __nesc_hton_uint8(pReqMsg->pgNum.nxdata, DelugePageTransferP__workingPgNum);
    }

  if (DelugePageTransferP__state != DelugePageTransferP__S_RECEIVING) {
      return;
    }


  if (DelugePageTransferP__suppressReq) {
      DelugePageTransferP__startReqTimer(FALSE);
      DelugePageTransferP__suppressReq = FALSE;
    }
  else {
    if (DelugePageTransferP__remainingAttempts == 0) {
        DelugePageTransferP__changeState(DelugePageTransferP__S_IDLE);
      }
    else 
      {
        uint32_t i;

#line 147
        for (i = 0; i < DELUGET2_PKT_BITVEC_SIZE; i++) {
            __nesc_hton_uint8(pReqMsg->requestedPkts[i].nxdata, DelugePageTransferP__pktsToReceive[i]);
          }


        if (DelugePageTransferP__SendReqMsg__send(__nesc_ntoh_uint16(pReqMsg->dest.nxdata), &DelugePageTransferP__pMsgBuf, sizeof(DelugeReqMsg )) != SUCCESS) {
            DelugePageTransferP__startReqTimer(FALSE);
          }
      }
    }
}

#line 102
static void DelugePageTransferP__startReqTimer(bool first)
{
  uint32_t delay;

#line 105
  if (first) {
      delay = DELUGE_MIN_DELAY + DelugePageTransferP__Random__rand32() % DELUGE_MAX_REQ_DELAY;
    }
  else 
#line 107
    {
      delay = DELUGE_NACK_TIMEOUT + DelugePageTransferP__Random__rand32() % DELUGE_NACK_TIMEOUT;
    }
  DelugePageTransferP__Timer__startOneShot(delay);
}

# 69 "/opt/tinyos-2.1.2/tos/system/RandomMlcgC.nc"
static uint32_t RandomMlcgC__Random__rand32(void )
#line 69
{
  uint32_t mlcg;
#line 70
  uint32_t p;
#line 70
  uint32_t q;
  uint64_t tmpseed;

#line 72
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      tmpseed = (uint64_t )33614U * (uint64_t )RandomMlcgC__seed;
      q = tmpseed;
      q = q >> 1;
      p = tmpseed >> 32;
      mlcg = p + q;
      if (mlcg & 0x80000000) {
          mlcg = mlcg & 0x7FFFFFFF;
          mlcg++;
        }
      RandomMlcgC__seed = mlcg;
    }
#line 84
    __nesc_atomic_end(__nesc_atomic); }
  return mlcg;
}

# 77 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static ieee154_simple_header_t */*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(message_t *msg)
{
  return (void *)msg + /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__SubPacket__headerLength(msg);
}

# 67 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static activemessage_header_t */*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__getHeader(message_t *msg)
{
  return (void *)msg + /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubPacket__headerLength(msg);
}

# 90 "/opt/tinyos-2.1.2/tos/system/AMQueueImplP.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(uint8_t clientId, message_t *msg, 
uint8_t len)
#line 91
{
  if (clientId >= 5) {
      return FAIL;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[clientId].msg != (void *)0) {
      return EBUSY;
    }
  ;

  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[clientId].msg = msg;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__setPayloadLength(msg, len);

  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current >= 5) {
      error_t err;
      am_id_t amId = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(msg);
      am_addr_t dest = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(msg);

      ;
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current = clientId;

      err = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(amId, dest, msg, len);
      if (err != SUCCESS) {
          ;
          /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current = 5;
          /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[clientId].msg = (void *)0;
        }

      return err;
    }
  else {
      ;
    }
  return SUCCESS;
}

# 906 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230DriverLayerP.nc"
static void RF230DriverLayerP__RadioPacket__setPayloadLength(message_t *msg, uint8_t length)
{
  for (; 0; ) ;
  for (; 0; ) ;


  __nesc_hton_leuint8(RF230DriverLayerP__getHeader(msg)->length.nxdata, length + 2);
}

# 79 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/ActiveMessageLayerP.nc"
static error_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMSend__send(am_id_t id, am_addr_t addr, message_t *msg, uint8_t len)
{
  if (len > /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__maxPayloadLength()) {
    return EINVAL;
    }
  if (/*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Config__checkFrame(msg) != SUCCESS) {
    return FAIL;
    }
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__setPayloadLength(msg, len);
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setSource(msg, /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__address());
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setGroup(msg, /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__localGroup());
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setType(msg, id);
  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__AMPacket__setDestination(msg, addr);

  /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SendNotifier__aboutToSend(id, addr, msg);

  return /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__SubSend__send(msg);
}

#line 272
static uint8_t /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__Packet__maxPayloadLength(void )
{
  return /*RF230RadioC.ActiveMessageLayerC.ActiveMessageLayerP*/ActiveMessageLayerP__0__RadioPacket__maxPayloadLength();
}

# 120 "/opt/tinyos-2.1.2/tos/system/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC__amAddress(void )
#line 120
{
  am_addr_t myAddr;

#line 122
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 122
    myAddr = ActiveMessageAddressC__addr;
#line 122
    __nesc_atomic_end(__nesc_atomic); }
  return myAddr;
}

#line 94
static am_group_t ActiveMessageAddressC__ActiveMessageAddress__amGroup(void )
#line 94
{
  am_group_t myGroup;

#line 96
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 96
    myGroup = ActiveMessageAddressC__group;
#line 96
    __nesc_atomic_end(__nesc_atomic); }
  return myGroup;
}

# 132 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/TinyosNetworkLayerC.nc"
static error_t /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__TinyosSend__send(message_t *msg)
{

  __nesc_hton_leuint8(/*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__getHeader(msg)->network.nxdata, 0x3f);

  return /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubSend__send(msg);
}

#line 127
static network_header_t */*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__getHeader(message_t *msg)
{
  return (void *)msg + /*RF230RadioC.TinyosNetworkLayerC*/TinyosNetworkLayerC__0__SubPacket__headerLength(msg);
}

# 99 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/TaskletC.nc"
static void TaskletC__Tasklet__resume(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (--TaskletC__state != 0x80) {
        {
#line 104
          __nesc_atomic_end(__nesc_atomic); 
#line 104
          return;
        }
        }
#line 106
      TaskletC__state = 1;
    }
#line 107
    __nesc_atomic_end(__nesc_atomic); }

  TaskletC__doit();
}

#line 74
static void TaskletC__doit(void )
{
  for (; ; ) 
    {
      TaskletC__Tasklet__run();

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          if (TaskletC__state == 1) 
            {
              TaskletC__state = 0;
              {
#line 85
                __nesc_atomic_end(__nesc_atomic); 
#line 85
                return;
              }
            }
          for (; 0; ) ;
          TaskletC__state = 1;
        }
#line 90
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 284 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230DriverLayerP.nc"
static bool RF230DriverLayerP__isSpiAcquired(void )
{
  if (RF230DriverLayerP__SpiResource__isOwner()) {
    return TRUE;
    }
  if (RF230DriverLayerP__SpiResource__immediateRequest() == SUCCESS) 
    {
      RF230DriverLayerP__SELN__makeOutput();
      RF230DriverLayerP__SELN__set();

      return TRUE;
    }

  RF230DriverLayerP__SpiResource__request();
  return FALSE;
}

# 129 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128SpiP.nc"
static void Atm128SpiP__startSpi(void )
#line 129
{
  Atm128SpiP__Spi__enableSpi(FALSE);
  /* atomic removed: atomic calls only */
#line 131
  {
    Atm128SpiP__Spi__initMaster();
    Atm128SpiP__Spi__enableInterrupt(FALSE);
    Atm128SpiP__Spi__setClockPolarity(FALSE);
    Atm128SpiP__Spi__setClockPhase(FALSE);
    Atm128SpiP__Spi__enableSpi(TRUE);
#line 158
    Atm128SpiP__Spi__setMasterDoubleSpeed(TRUE);
    Atm128SpiP__Spi__setClock(0);
  }

  Atm128SpiP__McuPowerState__update();
}

# 147 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static void HplAtm128SpiP__SPI__enableSpi(bool enabled)
#line 147
{
  if (enabled) {
      * (volatile uint8_t *)(0x2C + 0x20) |= 1 << 6;
      HplAtm128SpiP__Mcu__update();
    }
  else {
      * (volatile uint8_t *)(0x2C + 0x20) &= ~(1 << 6);
      HplAtm128SpiP__Mcu__update();
    }
}

#line 132
static void HplAtm128SpiP__SPI__enableInterrupt(bool enabled)
#line 132
{
  if (enabled) {
      * (volatile uint8_t *)(0x2C + 0x20) |= 1 << 7;
      HplAtm128SpiP__Mcu__update();
    }
  else {
      * (volatile uint8_t *)(0x2C + 0x20) &= ~(1 << 7);
      HplAtm128SpiP__Mcu__update();
    }
}

# 70 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__request(uint8_t id)
#line 70
{
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceRequested__requested(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 72
    {
      if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__RES_IDLE) {
          /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__RES_GRANTING;
          /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__resId = id;
          /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__grantedTask__postTask();
          {
            unsigned char __nesc_temp = 
#line 77
            SUCCESS;

            {
#line 77
              __nesc_atomic_end(__nesc_atomic); 
#line 77
              return __nesc_temp;
            }
          }
        }
#line 79
      {
        unsigned char __nesc_temp = 
#line 79
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Queue__enqueue(id);

        {
#line 79
          __nesc_atomic_end(__nesc_atomic); 
#line 79
          return __nesc_temp;
        }
      }
    }
#line 82
    __nesc_atomic_end(__nesc_atomic); }
}

# 66 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static void /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__set(uint8_t bit, message_t *msg)
{
  for (; 0; ) ;

  /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__getMeta(msg)->flags |= 1 << bit;
}

# 106 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230DriverLayerP.nc"
static rf230_metadata_t *RF230DriverLayerP__getMeta(message_t *msg)
{
  return (void *)msg + sizeof(message_t ) - RF230DriverLayerP__RadioPacket__metadataLength(msg);
}

# 80 "/opt/tinyos-2.1.2/tos/lib/timer/TransformCounterC.nc"
static /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__to_size_type /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__Counter__get(void )
{
  /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__to_size_type rv = 0;

#line 83
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__upper_count_type high = /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__m_upper;
      /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__from_size_type low = /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__get();

#line 87
      if (/*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__isOverflowPending()) 
        {






          high++;
          low = /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__CounterFrom__get();
        }
      {
        /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__to_size_type high_to = high;
        /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__to_size_type low_to = low >> /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__LOW_SHIFT_RIGHT;

#line 101
        rv = (high_to << /*LocalTimeMicroC.TransformCounterC*/TransformCounterC__0__HIGH_SHIFT_LEFT) | low_to;
      }
    }
#line 103
    __nesc_atomic_end(__nesc_atomic); }
  return rv;
}

# 65 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioPacket.nc"
static uint8_t /*RF230RadioC.TimeStampingLayerC.TimeStampingLayerP*/TimeStampingLayerP__0__SubPacket__metadataLength(message_t *msg){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__RadioPacket__metadataLength(msg);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 132 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getAckRequired(message_t *msg)
{
  return __nesc_ntoh_leuint16(/*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__getHeader(msg)->fcf.nxdata) & (1 << IEEE154_FCF_ACK_REQ) ? TRUE : FALSE;
}

# 83 "/opt/tinyos-2.1.2/tos/chips/atm128/timer/Atm128AlarmC.nc"
static void /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__Alarm__startAt(/*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size t0, /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size dt)
#line 83
{






  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size now;
#line 92
      /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size elapsed;
#line 92
      /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__timer_size expires;

      ;


      now = /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__get();
      elapsed = now + 3 - t0;
      if (elapsed >= dt) {
        expires = now + 3;
        }
      else {
#line 102
        expires = t0 + dt;
        }



      if (expires == 0) {
        expires = 1;
        }



      /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__set(expires - 1);
      /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__reset();
      /*HplRF230C.AlarmC.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__start();
    }
#line 116
    __nesc_atomic_end(__nesc_atomic); }
}

# 217 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__sendDone(error_t error)
{
  for (; 0; ) ;

  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__txError = error;
  if (error == SUCCESS) {
    /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_DONE;
    }
  else {
#line 225
    /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_PENDING;
    }
  /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__postTask();
}

# 101 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230DriverLayerP.nc"
static void *RF230DriverLayerP__getPayload(message_t *msg)
{
  return (void *)msg + RF230DriverLayerP__RadioPacket__headerLength(msg);
}

# 205 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/Ieee154PacketLayerP.nc"
static bool /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__requiresAckReply(message_t *msg)
{
  return /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getAckRequired(msg)
   && /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__isDataFrame(msg)
   && /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__Ieee154PacketLayer__getDestAddr(msg) == /*RF230RadioC.Ieee154PacketLayerC.Ieee154PacketLayerP*/Ieee154PacketLayerP__0__ActiveMessageAddress__amAddress();
}

# 441 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230DriverLayerP.nc"
static error_t RF230DriverLayerP__RadioSend__send(message_t *msg)
{
  uint16_t time;
  uint32_t time32;
  uint8_t *data;
  uint8_t length;
  uint8_t upload1;
  uint8_t upload2;

  if (((RF230DriverLayerP__cmd != RF230DriverLayerP__CMD_NONE || RF230DriverLayerP__state != RF230DriverLayerP__STATE_RX_ON) || RF230DriverLayerP__radioIrq) || !RF230DriverLayerP__isSpiAcquired()) {
    return EBUSY;
    }
  length = (RF230DriverLayerP__PacketTransmitPower__isSet(msg) ? 
  RF230DriverLayerP__PacketTransmitPower__get(msg) : 0) & RF230_TX_PWR_MASK;

  if (length != RF230DriverLayerP__txPower) 
    {
      RF230DriverLayerP__txPower = length;
      RF230DriverLayerP__writeRegister(RF230_PHY_TX_PWR, RF230_TX_AUTO_CRC_ON | RF230DriverLayerP__txPower);
    }


  if (
#line 462
  RF230DriverLayerP__Config__requiresRssiCca(msg)
   && (RF230DriverLayerP__readRegister(RF230_PHY_RSSI) & RF230_RSSI_MASK) > ((RF230DriverLayerP__rssiClear + RF230DriverLayerP__rssiBusy) >> 3)) 
    {
      RF230DriverLayerP__SpiResource__release();
      return EBUSY;
    }

  RF230DriverLayerP__writeRegister(RF230_TRX_STATE, RF230_PLL_ON);


  time32 = RF230DriverLayerP__LocalTime__get();
  data = RF230DriverLayerP__getPayload(msg);
  length = __nesc_ntoh_leuint8(RF230DriverLayerP__getHeader(msg)->length.nxdata);

  if (RF230DriverLayerP__PacketTimeSyncOffset__isSet(msg)) 
    {

      upload1 = (void *)msg - (void *)data + RF230DriverLayerP__PacketTimeSyncOffset__get(msg);


      upload2 = length - 2 - upload1;


      for (; 0; ) ;
    }
  else 
    {
      upload1 = length - 2;
      upload2 = 0;
    }
  for (; 0; ) ;


  if ((RF230DriverLayerP__readRegister(RF230_TRX_STATUS) & RF230_TRX_STATUS_MASK) != RF230_PLL_ON) 
    {
      for (; 0; ) ;

      RF230DriverLayerP__writeRegister(RF230_TRX_STATE, RF230_RX_ON);
      RF230DriverLayerP__SpiResource__release();
      return EBUSY;
    }


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      RF230DriverLayerP__SLP_TR__set();
      time = RF230DriverLayerP__RadioAlarm__getNow();
    }
#line 509
    __nesc_atomic_end(__nesc_atomic); }
  RF230DriverLayerP__SLP_TR__clr();


  for (; 0; ) ;

  RF230DriverLayerP__SELN__clr();
  RF230DriverLayerP__FastSpiByte__splitWrite(RF230_CMD_FRAME_WRITE);


  RF230DriverLayerP__FastSpiByte__splitReadWrite(length);

  do {
      RF230DriverLayerP__FastSpiByte__splitReadWrite(* data++);
    }
  while (--upload1 != 0);










  time32 += (int16_t )(time + RF230DriverLayerP__TX_SFD_DELAY) - (int16_t )time32;

  if (upload2 != 0) 
    {
      uint32_t absolute = __nesc_ntoh_uint32((* (timesync_absolute_t *)data).nxdata);

#line 540
      __nesc_hton_int32((* (timesync_relative_t *)data).nxdata, absolute - time32);


      for (; 0; ) ;
      do {
          RF230DriverLayerP__FastSpiByte__splitReadWrite(data[upload1]);
        }
      while (++upload1 != upload2);

      __nesc_hton_uint32((* (timesync_absolute_t *)data).nxdata, absolute);
    }


  RF230DriverLayerP__FastSpiByte__splitRead();
  RF230DriverLayerP__SELN__set();
#line 569
  RF230DriverLayerP__writeRegister(RF230_TRX_STATE, RF230_RX_ON);

  RF230DriverLayerP__PacketTimeStamp__set(msg, time32);
#line 586
  RF230DriverLayerP__state = RF230DriverLayerP__STATE_BUSY_TX_2_RX_ON;
  RF230DriverLayerP__cmd = RF230DriverLayerP__CMD_TRANSMIT;

  return SUCCESS;
}

# 61 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/MetadataFlagsLayerC.nc"
static bool /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__PacketFlag__get(uint8_t bit, message_t *msg)
{
  return /*RF230RadioC.MetadataFlagsLayerC*/MetadataFlagsLayerC__0__getMeta(msg)->flags & (1 << bit);
}

# 96 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Resource__release(uint8_t id)
#line 96
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 97
    {
      if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__RES_BUSY && /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__resId == id) {
          if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Queue__isEmpty() == FALSE) {
              /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__Queue__dequeue();
              /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__RES_GRANTING;
              /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__grantedTask__postTask();
            }
          else {
              /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__NO_RES;
              /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__RES_IDLE;
            }
          /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__1__ResourceConfigure__unconfigure(id);
          {
            unsigned char __nesc_temp = 
#line 109
            SUCCESS;

            {
#line 109
              __nesc_atomic_end(__nesc_atomic); 
#line 109
              return __nesc_temp;
            }
          }
        }
    }
#line 113
    __nesc_atomic_end(__nesc_atomic); }
#line 112
  return FAIL;
}

# 901 "/opt/tinyos-2.1.2/tos/chips/rf230/RF230DriverLayerP.nc"
static uint8_t RF230DriverLayerP__RadioPacket__payloadLength(message_t *msg)
{
  return __nesc_ntoh_leuint8(RF230DriverLayerP__getHeader(msg)->length.nxdata) - 2;
}

# 50 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/RadioAlarm.nc"
static void /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__RadioAlarm__wait(tradio_size timeout){
#line 50
  /*RF230RadioC.RadioAlarmC.RadioAlarmP*/RadioAlarmP__0__RadioAlarm__wait(1U, timeout);
#line 50
}
#line 50
# 252 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/MessageBufferLayerP.nc"
static void /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__RadioSend__ready(void )
{
  if (/*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state == /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_RETRY) 
    {
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__state = /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__STATE_TX_PENDING;
      /*RF230RadioC.MessageBufferLayerC.MessageBufferLayerP*/MessageBufferLayerP__0__sendTask__postTask();
    }
}

# 84 "/opt/tinyos-2.1.2/tos/lib/rfxlink/layers/RandomCollisionLayerP.nc"
static uint16_t /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__getBackoff(uint16_t maxBackoff)
{
  uint16_t a;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      a = /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__nextRandom;
      /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__nextRandom += 273;
    }
#line 92
    __nesc_atomic_end(__nesc_atomic); }
  /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__calcNextRandom__postTask();

  return a % maxBackoff + /*RF230RadioC.CollisionAvoidanceLayerC.RandomCollisionLayerP*/RandomCollisionLayerP__0__Config__getMinimumBackoff();
}

# 112 "/opt/tinyos-2.1.2/tos/lib/rfxlink/util/TaskletC.nc"
static void TaskletC__Tasklet__schedule(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (TaskletC__state != 0) 
        {
          TaskletC__state |= 0x80;
          {
#line 119
            __nesc_atomic_end(__nesc_atomic); 
#line 119
            return;
          }
        }
      TaskletC__state = 1;
    }
#line 123
    __nesc_atomic_end(__nesc_atomic); }

  TaskletC__doit();
}

# 96 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
static error_t /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Resource__release(uint8_t id)
#line 96
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 97
    {
      if (/*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state == /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_BUSY && /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId == id) {
          if (/*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__isEmpty() == FALSE) {
              /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId = /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__Queue__dequeue();
              /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state = /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_GRANTING;
              /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__grantedTask__postTask();
            }
          else {
              /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__resId = /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__NO_RES;
              /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__state = /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__RES_IDLE;
            }
          /*RF230RadioC.SendResourceC.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(id);
          {
            unsigned char __nesc_temp = 
#line 109
            SUCCESS;

            {
#line 109
              __nesc_atomic_end(__nesc_atomic); 
#line 109
              return __nesc_temp;
            }
          }
        }
    }
#line 113
    __nesc_atomic_end(__nesc_atomic); }
#line 112
  return FAIL;
}

# 71 "/opt/tinyos-2.1.2/tos/system/CrcC.nc"
static uint16_t CrcC__Crc__seededCrc16(uint16_t startCrc, void *buf, uint8_t len)
#line 71
{
  uint8_t *tmp = (uint8_t *)buf;
  uint16_t crc;

#line 74
  for (crc = startCrc; len > 0; len--) {
      crc = crcByte(crc, * tmp++);
    }
  return crc;
}

# 92 "/opt/tinyos-2.1.2/tos/chips/atm128/crc.h"
static __attribute((noinline))  uint16_t crcByte(uint16_t oldCrc, uint8_t byte)
{

  const uint16_t *table = crcTable;
  uint16_t newCrc;

   __asm ("eor %1,%B3\n"
  "\tlsl %1\n"
  "\tadc %B2, __zero_reg__\n"
  "\tadd %A2, %1\n"
  "\tadc %B2, __zero_reg__\n"
  "\tlpm\n"
  "\tmov %B0, %A3\n"
  "\tmov %A0, r0\n"
  "\tadiw r30,1\n"
  "\tlpm\n"
  "\teor %B0, r0" : 
  "=r"(newCrc), "+r"(byte), "+z"(table) : "r"(oldCrc));
  return newCrc;
}

# 102 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/ObjectTransferP.nc"
static void ObjectTransferP__resetTimer(void )
{
  if (ObjectTransferP__advTimers.periodLog2 != DELUGE_MIN_ADV_PERIOD_LOG2) {
      ObjectTransferP__advTimers.periodLog2 = DELUGE_MIN_ADV_PERIOD_LOG2;
      ObjectTransferP__setupAdvTimer();
    }
}

#line 92
static void ObjectTransferP__setupAdvTimer(void )
{
  ObjectTransferP__advTimers.timer = (uint32_t )0x1 << (ObjectTransferP__advTimers.periodLog2 - 1);
  ObjectTransferP__advTimers.timer += ObjectTransferP__Random__rand16() & (ObjectTransferP__advTimers.timer - 1);
  ObjectTransferP__advTimers.overheard = 0;

  ObjectTransferP__Timer__stop();
  ObjectTransferP__Timer__startOneShot(ObjectTransferP__advTimers.timer);
}

# 269 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugePageTransferP.nc"
static error_t DelugePageTransferP__DelugePageTransfer__setWorkingPage(object_id_t new_objid, page_num_t new_pgNum)
{
  uint32_t i;

  if (DelugePageTransferP__state == DelugePageTransferP__S_DISABLED) {
      DelugePageTransferP__changeState(DelugePageTransferP__S_IDLE);
    }

  DelugePageTransferP__workingObjid = new_objid;
  DelugePageTransferP__workingPgNum = new_pgNum;

  for (i = 0; i < DELUGET2_PKT_BITVEC_SIZE; i++) {
      DelugePageTransferP__pktsToReceive[i] = 0xFF;
    }


  return SUCCESS;
}

# 139 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/BlockStorageManagerP.nc"
static error_t /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockWrite__erase(uint8_t client)
{
  error_t error;

#line 142
  if (/*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__state != /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__S_READY) {
      return EBUSY;
    }
  error = /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockWrite__erase(/*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__VolumeId__get(client));
  if (error == SUCCESS) 
    {
      /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__state = /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__S_BUSY;
      /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__current_client = client;
      return SUCCESS;
    }
  return error;
}

# 131 "/opt/tinyos-2.1.2/tos/lib/net/drip/DisseminationEngineImplP.nc"
static void DisseminationEngineImplP__sendObject(uint16_t key)
#line 131
{
  void *object;
  uint8_t objectSize = 0;
  dissemination_message_t *dMsg;




  if (!DisseminationEngineImplP__m_running || DisseminationEngineImplP__m_bufBusy) {
#line 139
      return;
    }
  dMsg = 
  (dissemination_message_t *)DisseminationEngineImplP__AMSend__getPayload(&DisseminationEngineImplP__m_buf, sizeof(dissemination_message_t ));
  if (dMsg != (void *)0 && !DisseminationEngineImplP__m_bufBusy) {
      DisseminationEngineImplP__m_bufBusy = TRUE;

      __nesc_hton_uint16(dMsg->key.nxdata, key);
      __nesc_hton_uint32(dMsg->seqno.nxdata, DisseminationEngineImplP__DisseminationCache__requestSeqno(key));

      if (__nesc_ntoh_uint32(dMsg->seqno.nxdata) != DISSEMINATION_SEQNO_UNKNOWN) {
          object = DisseminationEngineImplP__DisseminationCache__requestData(key, &objectSize);
          if (objectSize + sizeof(dissemination_message_t ) > 
          DisseminationEngineImplP__AMSend__maxPayloadLength()) {
              objectSize = DisseminationEngineImplP__AMSend__maxPayloadLength() - sizeof(dissemination_message_t );
            }
          memcpy(dMsg->data, object, objectSize);
        }
      DisseminationEngineImplP__AMSend__send(AM_BROADCAST_ADDR, 
      &DisseminationEngineImplP__m_buf, sizeof(dissemination_message_t ) + objectSize);
    }
}

# 111 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeP.nc"
static void DelugeP__DisseminationValue__changed(void )
{
  const DelugeCmd *cmd = DelugeP__DisseminationValue__get();

  switch (__nesc_ntoh_uint8(cmd->type.nxdata)) {
      case DELUGE_CMD_STOP: 
        DelugeP__stop();
      break;
      case DELUGE_CMD_ONLY_DISSEMINATE: 
        case DELUGE_CMD_DISSEMINATE_AND_REPROGRAM: 
          if (DelugeP__state == DelugeP__S_RECV) {
              if (__nesc_ntoh_uint32(cmd->uidhash.nxdata) == __nesc_ntoh_uint32(DelugeP__lastCmd.uidhash.nxdata)) {
                  if (__nesc_ntoh_uint8(cmd->imgNum.nxdata) == __nesc_ntoh_uint8(DelugeP__lastCmd.imgNum.nxdata)) {



                      break;
                    }
                }
              DelugeP__stop();
            }
      if (__nesc_ntoh_uint32(cmd->uidhash.nxdata) != 0x164997f0L) {
          DelugeP__DelugeMetadata__read(__nesc_ntoh_uint8(cmd->imgNum.nxdata));
        }
      else 
#line 134
        {
          DelugeP__state = DelugeP__S_PUB;
          DelugeP__request();
        }
      break;
    }
  DelugeP__lastCmd = *cmd;
}

#line 86
static void DelugeP__stop(void )
{
  DelugeP__Resource__release();
  if (DelugeP__state == DelugeP__S_RECV) {

      DelugeP__DelugeVolumeManager__erase(__nesc_ntoh_uint8(DelugeP__lastCmd.imgNum.nxdata));
    }
  DelugeP__ObjectTransfer__stop();
  DelugeP__state = DelugeP__S_IDLE;
}

# 96 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
static error_t /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__Resource__release(uint8_t id)
#line 96
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 97
    {
      if (/*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__state == /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__RES_BUSY && /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__resId == id) {
          if (/*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__Queue__isEmpty() == FALSE) {
              /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__resId = /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__Queue__dequeue();
              /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__state = /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__RES_GRANTING;
              /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__grantedTask__postTask();
            }
          else {
              /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__resId = /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__NO_RES;
              /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__state = /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__RES_IDLE;
            }
          /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__ResourceConfigure__unconfigure(id);
          {
            unsigned char __nesc_temp = 
#line 109
            SUCCESS;

            {
#line 109
              __nesc_atomic_end(__nesc_atomic); 
#line 109
              return __nesc_temp;
            }
          }
        }
    }
#line 113
    __nesc_atomic_end(__nesc_atomic); }
#line 112
  return FAIL;
}

# 51 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeVolumeManagerP.nc"
static error_t DelugeVolumeManagerP__DelugeVolumeManager__erase(uint8_t client, uint8_t imgNum)
{
  if (DelugeVolumeManagerP__busy) {
    return FAIL;
    }
#line 55
  DelugeVolumeManagerP__busy = DelugeVolumeManagerP__Resource__request(imgNum) == SUCCESS;
  if (DelugeVolumeManagerP__busy) {
      DelugeVolumeManagerP__currentClient = client;
      return SUCCESS;
    }
  return FAIL;
}

# 70 "/opt/tinyos-2.1.2/tos/system/SimpleArbiterP.nc"
static error_t /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__Resource__request(uint8_t id)
#line 70
{
  /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__ResourceRequested__requested(/*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 72
    {
      if (/*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__state == /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__RES_IDLE) {
          /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__state = /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__RES_GRANTING;
          /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__resId = id;
          /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__grantedTask__postTask();
          {
            unsigned char __nesc_temp = 
#line 77
            SUCCESS;

            {
#line 77
              __nesc_atomic_end(__nesc_atomic); 
#line 77
              return __nesc_temp;
            }
          }
        }
#line 79
      {
        unsigned char __nesc_temp = 
#line 79
        /*BlockStorageLockC.Arbiter.Arbiter*/SimpleArbiterP__2__Queue__enqueue(id);

        {
#line 79
          __nesc_atomic_end(__nesc_atomic); 
#line 79
          return __nesc_temp;
        }
      }
    }
#line 82
    __nesc_atomic_end(__nesc_atomic); }
}

# 165 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeMetadataP.nc"
static error_t DelugeMetadataP__BlockRead__default__read(uint8_t imgNum, storage_addr_t addr, void *buf, storage_len_t len)
#line 165
{
#line 165
  return FAIL;
}

# 56 "/opt/tinyos-2.1.2/tos/interfaces/BlockRead.nc"
static error_t DelugeMetadataP__BlockRead__read(uint8_t arg_0x7fa21d424b00, storage_addr_t addr, void * buf, storage_len_t len){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  switch (arg_0x7fa21d424b00) {
#line 56
    case VOLUME_GOLDENIMAGE:
#line 56
      __nesc_result = /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockRead__read(/*DelugeMetadataC.BlockReaderGoldenImage*/BlockReaderC__3__CLIENT_ID, addr, buf, len);
#line 56
      break;
#line 56
    case VOLUME_DELUGE3:
#line 56
      __nesc_result = /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockRead__read(/*DelugeMetadataC.BlockReaderDeluge3*/BlockReaderC__6__CLIENT_ID, addr, buf, len);
#line 56
      break;
#line 56
    case VOLUME_DELUGE1:
#line 56
      __nesc_result = /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockRead__read(/*DelugeMetadataC.BlockReaderDeluge1*/BlockReaderC__4__CLIENT_ID, addr, buf, len);
#line 56
      break;
#line 56
    case VOLUME_DELUGE2:
#line 56
      __nesc_result = /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockRead__read(/*DelugeMetadataC.BlockReaderDeluge2*/BlockReaderC__5__CLIENT_ID, addr, buf, len);
#line 56
      break;
#line 56
    default:
#line 56
      __nesc_result = DelugeMetadataP__BlockRead__default__read(arg_0x7fa21d424b00, addr, buf, len);
#line 56
      break;
#line 56
    }
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 102 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeP.nc"
static void DelugeP__request(void )
{
  if (DelugeP__Resource__isOwner()) {
      DelugeP__taskRequest__postTask();
    }
  else 
#line 106
    {
      DelugeP__Resource__request();
    }
}

# 215 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
static void BlockStorageP__Resource__granted(uint8_t blockId)
#line 215
{
  BlockStorageP__client = blockId;

  if (BlockStorageP__s[blockId].request == BlockStorageP__R_WRITE && 
  BlockStorageP__BConfig__writeHook(blockId)) 
    {


      BlockStorageP__client = BlockStorageP__NO_CLIENT;
      return;
    }
  BlockStorageP__startRequest();
}

# 377 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbP.nc"
static void At45dbP__newRequest(uint8_t req, at45page_t page, at45pageoffset_t offset, 
void * reqdata, at45pageoffset_t n)
#line 378
{
  At45dbP__request = req;

  At45dbP__reqBuf = (void *)0;
  At45dbP__reqBytes = n;
  At45dbP__reqBuf = reqdata;
  At45dbP__reqPage = page;
  At45dbP__reqOffset = offset;

  if (page == At45dbP__buffer[0].page) {
    At45dbP__selected = 0;
    }
  else {
#line 389
    if (page == At45dbP__buffer[1].page) {
      At45dbP__selected = 1;
      }
    else {
#line 392
      At45dbP__selected = !At45dbP__selected;
      }
    }



  if ((((
#line 395
  page >= AT45_MAX_PAGES || 
  n > AT45_PAGE_SIZE) || (
  req != At45dbP__R_COPY && offset >= AT45_PAGE_SIZE)) || (
  req != At45dbP__R_COPY && offset + n > AT45_PAGE_SIZE)) || (
  req == At45dbP__R_COPY && offset >= AT45_MAX_PAGES)) {
      At45dbP__taskFail__postTask();
    }
  else {

    At45dbP__handleRWRequest();
    }
}

#line 255
static void At45dbP__handleRWRequest(void )
#line 255
{
  if (At45dbP__reqPage == At45dbP__buffer[At45dbP__selected].page) {
    switch (At45dbP__request) 
      {
        case At45dbP__R_ERASE: 
          switch (At45dbP__reqOffset) 
            {
              case AT45_ERASE: 
                if (At45dbP__flashBusy) {
                  At45dbP__HplAt45db__waitIdle();
                  }
                else {
#line 266
                  At45dbP__HplAt45db__erase(AT45_C_ERASE_PAGE, At45dbP__reqPage);
                  }
#line 267
              break;
              case AT45_PREVIOUSLY_ERASED: 

                At45dbP__buffer[At45dbP__selected].erased = TRUE;

              case AT45_DONT_ERASE: 



                At45dbP__buffer[At45dbP__selected].clean = TRUE;
              At45dbP__requestDone(SUCCESS, 0, At45dbP__IDLE);
              break;
            }
        break;

        case At45dbP__R_COPY: 
          if (! At45dbP__buffer[At45dbP__selected].clean) {
            At45dbP__flushBuffer();
            }
          else {


              At45dbP__buffer[At45dbP__selected].page = At45dbP__reqOffset;
              At45dbP__buffer[At45dbP__selected].clean = FALSE;
              At45dbP__taskSuccess__postTask();
            }
        break;

        case At45dbP__R_SYNC: case At45dbP__R_SYNCALL: 
            if (At45dbP__buffer[At45dbP__selected].clean && At45dbP__buffer[At45dbP__selected].unchecked) 
              {
                At45dbP__checkBuffer(At45dbP__selected);
                return;
              }

        case At45dbP__R_FLUSH: case At45dbP__R_FLUSHALL: 
            if (! At45dbP__buffer[At45dbP__selected].clean) {
              At45dbP__flushBuffer();
              }
            else {
#line 305
              if (At45dbP__request == At45dbP__R_FLUSH || At45dbP__request == At45dbP__R_SYNC) {
                At45dbP__taskSuccess__postTask();
                }
              else {

                  uint8_t oreq = At45dbP__request;

                  At45dbP__request = At45dbP__IDLE;
                  At45dbP__syncOrFlushAll(oreq);
                }
              }
#line 315
        break;

        case At45dbP__R_READ: 
          if (At45dbP__buffer[At45dbP__selected].busy) {
            At45dbP__HplAt45db__waitIdle();
            }
          else {
#line 321
            At45dbP__HplAt45db__readBuffer(At45dbP__selected ? AT45_C_READ_BUFFER1 : AT45_C_READ_BUFFER2, At45dbP__reqOffset, 
            At45dbP__reqBuf, At45dbP__reqBytes);
            }
#line 323
        break;

        case At45dbP__R_READCRC: 
          if (At45dbP__buffer[At45dbP__selected].busy) {
            At45dbP__HplAt45db__waitIdle();
            }
          else {
            At45dbP__HplAt45db__crc(At45dbP__selected ? AT45_C_READ_BUFFER1 : AT45_C_READ_BUFFER2, 0, At45dbP__reqOffset, At45dbP__reqBytes, 
            (uint16_t )At45dbP__reqBuf);
            }
#line 332
        break;

        case At45dbP__R_WRITE: 
          if (At45dbP__buffer[At45dbP__selected].busy) {
            At45dbP__HplAt45db__waitIdle();
            }
          else {
#line 338
            At45dbP__HplAt45db__write(At45dbP__selected ? AT45_C_WRITE_BUFFER1 : AT45_C_WRITE_BUFFER2, 0, At45dbP__reqOffset, 
            At45dbP__reqBuf, At45dbP__reqBytes);
            }
#line 340
        break;
      }
    }
  else {
#line 342
    if (! At45dbP__buffer[At45dbP__selected].clean) {
      At45dbP__flushBuffer();
      }
    else {
#line 344
      if (At45dbP__buffer[At45dbP__selected].unchecked) {
        At45dbP__checkBuffer(At45dbP__selected);
        }
      else {

          if (At45dbP__request == At45dbP__R_ERASE) 
            {
              At45dbP__buffer[At45dbP__selected].page = At45dbP__reqPage;
              At45dbP__handleRWRequest();
            }
          else {
#line 354
            if (At45dbP__flashBusy) {
              At45dbP__HplAt45db__waitIdle();
              }
            else {
#line 357
              At45dbP__HplAt45db__fill(At45dbP__selected ? AT45_C_FILL_BUFFER1 : AT45_C_FILL_BUFFER2, At45dbP__reqPage);
              }
            }
        }
      }
    }
}

# 173 "/opt/tinyos-2.1.2/tos/chips/at45db/HplAt45dbByteC.nc"
static void /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__execCommand(uint8_t op, uint8_t reqCmd, uint8_t reqDontCare, 
at45page_t reqPage, at45pageoffset_t reqOffset, 
uint8_t * reqData, at45pageoffset_t reqCount)
#line 175
{
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__status = op;


  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__flashCmd[0] = reqCmd;
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__flashCmd[1] = reqPage >> (16 - 9);
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__flashCmd[2] = (reqPage << (9 - 8)) | (reqOffset >> 8);
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__flashCmd[3] = reqOffset;
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__data = (void *)0;
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__dataCount = reqCount;
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__data = reqData;
  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__dontCare = reqDontCare;

  /*HplAt45dbC.HplAt45dbByteC*/HplAt45dbByteC__0__Resource__request();
}

# 361 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbP.nc"
static void At45dbP__requestDone(error_t result, uint16_t computedCrc, uint8_t newState)
#line 361
{
  uint8_t orequest = At45dbP__request;

  At45dbP__request = newState;
  switch (orequest) 
    {
      case At45dbP__R_READ: At45dbP__At45db__readDone(result);
#line 367
      break;
      case At45dbP__R_READCRC: At45dbP__At45db__computeCrcDone(result, computedCrc);
#line 368
      break;
      case At45dbP__R_WRITE: At45dbP__At45db__writeDone(result);
#line 369
      break;
      case At45dbP__R_SYNC: case At45dbP__R_SYNCALL: At45dbP__At45db__syncDone(result);
#line 370
      break;
      case At45dbP__R_FLUSH: case At45dbP__R_FLUSHALL: At45dbP__At45db__flushDone(result);
#line 371
      break;
      case At45dbP__R_ERASE: At45dbP__At45db__eraseDone(result);
#line 372
      break;
      case At45dbP__R_COPY: At45dbP__At45db__copyPageDone(result);
#line 373
      break;
    }
}

# 161 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
static void BlockStorageP__endRequest(error_t result, uint16_t crc)
#line 161
{
  uint8_t c = BlockStorageP__client;
  uint8_t tmpState = BlockStorageP__s[c].request;

  BlockStorageP__client = BlockStorageP__NO_CLIENT;
  BlockStorageP__s[c].request = BlockStorageP__R_IDLE;
  BlockStorageP__Resource__release(c);

  switch (tmpState) 
    {
      case BlockStorageP__R_READ: 
        BlockStorageP__BlockRead__readDone(c, BlockStorageP__s[c].addr, BlockStorageP__s[c].buf, BlockStorageP__currentOffset, result);
      break;
      case BlockStorageP__R_WRITE: 
        BlockStorageP__BlockWrite__writeDone(c, BlockStorageP__s[c].addr, BlockStorageP__s[c].buf, BlockStorageP__currentOffset, result);
      break;
      case BlockStorageP__R_ERASE: 
        BlockStorageP__BlockWrite__eraseDone(c, result);
      break;
      case BlockStorageP__R_CRC: 
        BlockStorageP__BlockRead__computeCrcDone(c, BlockStorageP__s[c].addr, BlockStorageP__currentOffset, crc, result);
      break;
      case BlockStorageP__R_SYNC: 
        BlockStorageP__BlockWrite__syncDone(c, result);
      break;
    }
}

# 111 "/opt/tinyos-2.1.2/tos/system/ArbiterP.nc"
static error_t /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Resource__release(uint8_t id)
#line 111
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 112
    {
      if (/*At45dbC.Arbiter.Arbiter*/ArbiterP__0__state == /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__RES_BUSY && /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__resId == id) {
          if (/*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Queue__isEmpty() == FALSE) {
              /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__reqResId = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__Queue__dequeue();
              /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__resId = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__NO_RES;
              /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__state = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__RES_GRANTING;
              /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__grantedTask__postTask();
              /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(id);
            }
          else {
              /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__resId = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__default_owner_id;
              /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__state = /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__RES_CONTROLLED;
              /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(id);
              /*At45dbC.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted();
            }
          {
            unsigned char __nesc_temp = 
#line 127
            SUCCESS;

            {
#line 127
              __nesc_atomic_end(__nesc_atomic); 
#line 127
              return __nesc_temp;
            }
          }
        }
    }
#line 131
    __nesc_atomic_end(__nesc_atomic); }
#line 130
  return FAIL;
}

# 118 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/BlockStorageManagerP.nc"
static void /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockRead__default__readDone(volume_id_t volume_id, storage_addr_t addr, void *buf, storage_len_t len, error_t error)
#line 118
{
}

# 67 "/opt/tinyos-2.1.2/tos/interfaces/BlockRead.nc"
static void /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockRead__readDone(uint8_t arg_0x7fa21d928840, storage_addr_t addr, void * buf, storage_len_t len, error_t error){
#line 67
  switch (arg_0x7fa21d928840) {
#line 67
    case /*DelugeC.BlockReaderDeluge1*/BlockReaderC__0__CLIENT_ID:
#line 67
      DelugePageTransferP__BlockRead__readDone(VOLUME_DELUGE1, addr, buf, len, error);
#line 67
      break;
#line 67
    case /*DelugeC.BlockReaderDeluge2*/BlockReaderC__1__CLIENT_ID:
#line 67
      DelugePageTransferP__BlockRead__readDone(VOLUME_DELUGE2, addr, buf, len, error);
#line 67
      break;
#line 67
    case /*DelugeC.BlockReaderDeluge3*/BlockReaderC__2__CLIENT_ID:
#line 67
      DelugePageTransferP__BlockRead__readDone(VOLUME_DELUGE3, addr, buf, len, error);
#line 67
      break;
#line 67
    case /*DelugeMetadataC.BlockReaderGoldenImage*/BlockReaderC__3__CLIENT_ID:
#line 67
      DelugeMetadataP__BlockRead__readDone(VOLUME_GOLDENIMAGE, addr, buf, len, error);
#line 67
      break;
#line 67
    case /*DelugeMetadataC.BlockReaderDeluge1*/BlockReaderC__4__CLIENT_ID:
#line 67
      DelugeMetadataP__BlockRead__readDone(VOLUME_DELUGE1, addr, buf, len, error);
#line 67
      break;
#line 67
    case /*DelugeMetadataC.BlockReaderDeluge2*/BlockReaderC__5__CLIENT_ID:
#line 67
      DelugeMetadataP__BlockRead__readDone(VOLUME_DELUGE2, addr, buf, len, error);
#line 67
      break;
#line 67
    case /*DelugeMetadataC.BlockReaderDeluge3*/BlockReaderC__6__CLIENT_ID:
#line 67
      DelugeMetadataP__BlockRead__readDone(VOLUME_DELUGE3, addr, buf, len, error);
#line 67
      break;
#line 67
    default:
#line 67
      /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockRead__default__readDone(arg_0x7fa21d928840, addr, buf, len, error);
#line 67
      break;
#line 67
    }
#line 67
}
#line 67
# 115 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeMetadataP.nc"
static void DelugeMetadataP__BlockRead__readDone(uint8_t imgNum, storage_addr_t addr, void *buf, storage_len_t len, error_t error)
{
  switch (DelugeMetadataP__state) {
      case DelugeMetadataP__S_BUSY: 
        DelugeMetadataP__state = DelugeMetadataP__S_READY;
      DelugeMetadataP__DelugeMetadata__readDone(DelugeMetadataP__currentClient, imgNum, buf, error);
      break;
      case DelugeMetadataP__S_READ_IDENT: 
        if (error == SUCCESS) {
            if (__nesc_ntoh_uint32(DelugeMetadataP__ident.uidhash.nxdata) != DELUGE_INVALID_UID) {
                DelugeMetadataP__currentPage = 0;
                DelugeMetadataP__state = DelugeMetadataP__S_READ_CRC;
                DelugeMetadataP__BlockRead__read(DelugeMetadataP__currentVolume, DelugeMetadataP__calcCrcAddr(), &DelugeMetadataP__currentCrc, sizeof DelugeMetadataP__currentCrc);
              }
            else 
#line 128
              {
                DelugeMetadataP__currentImageIdx++;
                DelugeMetadataP__currentVolume = _imgNum2volumeId[DelugeMetadataP__currentImageIdx];
                DelugeMetadataP__nextImage();
              }
          }
      break;
      case DelugeMetadataP__S_READ_CRC: 
        DelugeMetadataP__state = DelugeMetadataP__S_CRC;
      DelugeMetadataP__BlockRead__computeCrc(DelugeMetadataP__currentVolume, DelugeMetadataP__calcPageAddr(), DELUGE_BYTES_PER_PAGE, 0);
      break;
    }
}

# 91 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/extra/iris/NetProgM.nc"
static error_t NetProgM__NetProg__programImageAndReboot(uint32_t imgAddr)
{
  BootArgs bootArgs;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 95
    {
      NetProgM__IFlash__read((uint8_t *)TOSBOOT_ARGS_ADDR, &bootArgs, sizeof bootArgs);

      bootArgs.imageAddr = imgAddr;
      bootArgs.gestureCount = 0xff;
      bootArgs.noReprogram = FALSE;
      bootArgs.address = TOS_NODE_ID;

      NetProgM__IFlash__write((uint8_t *)TOSBOOT_ARGS_ADDR, &bootArgs, sizeof bootArgs);


      netprog_reboot();
    }
#line 107
    __nesc_atomic_end(__nesc_atomic); }


  return FAIL;
}

# 64 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/extra/avr/InternalFlashC.nc"
static error_t InternalFlashC__InternalFlash__read(void *addr, void *buf, uint16_t size)
#line 64
{

  uint8_t *addrPtr = (uint8_t *)addr;
  uint8_t *bufPtr = (uint8_t *)buf;

  for (; size; size--) 
    * bufPtr++ = __eerd_byte_m1281(addrPtr++);

  return SUCCESS;
}

# 188 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/BlockStorageManagerP.nc"
static storage_addr_t /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__StorageMap__getPhysicalAddress(uint8_t volume_id, storage_addr_t addr)
{
  storage_addr_t p_addr = 0xFFFFFFFF;



  at45page_t page = /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__At45dbVolume__remap(volume_id, addr >> AT45_PAGE_SIZE_LOG2);
  at45pageoffset_t offset = addr & ((1 << AT45_PAGE_SIZE_LOG2) - 1);

#line 196
  p_addr = page;
  p_addr = p_addr << AT45_PAGE_SIZE_LOG2;
  p_addr += offset;

  return p_addr;
}

# 21 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbStorageManagerC.nc"
static at45page_t At45dbStorageManagerC__At45dbVolume__remap(volume_id_t volid, at45page_t volumePage)
#line 21
{
  switch (volid) 
    {
# 20 "build/iris/StorageVolumes.h"
      case VOLUME_GOLDENIMAGE: return volumePage + 0;
      case VOLUME_DELUGE3: return volumePage + 256;
      case VOLUME_DELUGE1: return volumePage + 512;
      case VOLUME_DELUGE2: return volumePage + 768;
# 26 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbStorageManagerC.nc"
      default: return AT45_MAX_PAGES;
    }
}

# 69 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeMetadataP.nc"
static void DelugeMetadataP__nextImage(void )
{
  if (DelugeMetadataP__currentImageIdx < DELUGE_NUM_VOLUMES) {
      DelugeMetadataP__state = DelugeMetadataP__S_READ_IDENT;
      DelugeMetadataP__BlockRead__read(DelugeMetadataP__currentVolume, 0, &DelugeMetadataP__ident, sizeof DelugeMetadataP__ident);
    }
  else 
#line 74
    {
      DelugeMetadataP__storageReady();
      DelugeMetadataP__state = DelugeMetadataP__S_READY;
    }
}

# 83 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/BlockStorageManagerP.nc"
static error_t /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockRead__computeCrc(uint8_t client, storage_addr_t addr, storage_len_t len, uint16_t crc)
{
  error_t error;

#line 86
  if (/*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__state != /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__S_READY) {
      return EBUSY;
    }
  error = /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockRead__computeCrc(/*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__VolumeId__get(client), addr, len, crc);
  if (error == SUCCESS) 
    {
      /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__state = /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__S_BUSY;
      /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__current_client = client;
      return SUCCESS;
    }
  return error;
}

# 422 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugePageTransferP.nc"
static void DelugePageTransferP__BlockRead__readDone(uint8_t img_num, storage_addr_t addr, void *buf, storage_len_t len, error_t error)
{
  DelugeDataMsg *pDataMsg = (DelugeDataMsg *)DelugePageTransferP__SendDataMsg__getPayload(&DelugePageTransferP__pMsgBuf, sizeof(DelugeDataMsg ));

  if (buf != pDataMsg->data) {
      return;
    }

  if (DelugePageTransferP__state != DelugePageTransferP__S_SENDING) {
      return;
    }

  if (error != SUCCESS) {
      DelugePageTransferP__changeState(DelugePageTransferP__S_IDLE);
      return;
    }

  if (DelugePageTransferP__SendDataMsg__send(DelugePageTransferP__nodeAddr, &DelugePageTransferP__pMsgBuf, sizeof(DelugeDataMsg )) != SUCCESS) {
      DelugePageTransferP__Timer__startOneShot(DELUGE_FAILED_SEND_DELAY);
    }
  else 
#line 441
    {
    }
}

# 213 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/BlockStorageManagerP.nc"
static void /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockWrite__default__writeDone(volume_id_t volume_id, storage_addr_t addr, void *buf, storage_len_t len, error_t error)
#line 213
{
}

# 71 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
static void /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockWrite__writeDone(uint8_t arg_0x7fa21d927ad8, storage_addr_t addr, void * buf, storage_len_t len, error_t error){
#line 71
  switch (arg_0x7fa21d927ad8) {
#line 71
    case /*DelugeC.BlockWriterDeluge1*/BlockWriterC__0__CLIENT_ID:
#line 71
      DelugePageTransferP__BlockWrite__writeDone(VOLUME_DELUGE1, addr, buf, len, error);
#line 71
      ObjectTransferP__BlockWrite__writeDone(VOLUME_DELUGE1, addr, buf, len, error);
#line 71
      break;
#line 71
    case /*DelugeC.BlockWriterDeluge2*/BlockWriterC__1__CLIENT_ID:
#line 71
      DelugePageTransferP__BlockWrite__writeDone(VOLUME_DELUGE2, addr, buf, len, error);
#line 71
      ObjectTransferP__BlockWrite__writeDone(VOLUME_DELUGE2, addr, buf, len, error);
#line 71
      break;
#line 71
    case /*DelugeC.BlockWriterDeluge3*/BlockWriterC__2__CLIENT_ID:
#line 71
      DelugePageTransferP__BlockWrite__writeDone(VOLUME_DELUGE3, addr, buf, len, error);
#line 71
      ObjectTransferP__BlockWrite__writeDone(VOLUME_DELUGE3, addr, buf, len, error);
#line 71
      break;
#line 71
    case /*DelugeMetadataC.BlockWriterGoldenImage*/BlockWriterC__3__CLIENT_ID:
#line 71
      DelugeMetadataP__BlockWrite__writeDone(VOLUME_GOLDENIMAGE, addr, buf, len, error);
#line 71
      break;
#line 71
    case /*DelugeMetadataC.BlockWriterDeluge1*/BlockWriterC__4__CLIENT_ID:
#line 71
      DelugeMetadataP__BlockWrite__writeDone(VOLUME_DELUGE1, addr, buf, len, error);
#line 71
      break;
#line 71
    case /*DelugeMetadataC.BlockWriterDeluge2*/BlockWriterC__5__CLIENT_ID:
#line 71
      DelugeMetadataP__BlockWrite__writeDone(VOLUME_DELUGE2, addr, buf, len, error);
#line 71
      break;
#line 71
    case /*DelugeMetadataC.BlockWriterDeluge3*/BlockWriterC__6__CLIENT_ID:
#line 71
      DelugeMetadataP__BlockWrite__writeDone(VOLUME_DELUGE3, addr, buf, len, error);
#line 71
      break;
#line 71
    case /*DelugeVolumeManagerC.BlockWriterDeluge1*/BlockWriterC__7__CLIENT_ID:
#line 71
      DelugeVolumeManagerP__BlockWrite__writeDone(VOLUME_DELUGE1, addr, buf, len, error);
#line 71
      break;
#line 71
    case /*DelugeVolumeManagerC.BlockWriterDeluge2*/BlockWriterC__8__CLIENT_ID:
#line 71
      DelugeVolumeManagerP__BlockWrite__writeDone(VOLUME_DELUGE2, addr, buf, len, error);
#line 71
      break;
#line 71
    case /*DelugeVolumeManagerC.BlockWriterDeluge3*/BlockWriterC__9__CLIENT_ID:
#line 71
      DelugeVolumeManagerP__BlockWrite__writeDone(VOLUME_DELUGE3, addr, buf, len, error);
#line 71
      break;
#line 71
    default:
#line 71
      /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockWrite__default__writeDone(arg_0x7fa21d927ad8, addr, buf, len, error);
#line 71
      break;
#line 71
    }
#line 71
}
#line 71
# 450 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugePageTransferP.nc"
static void DelugePageTransferP__BlockWrite__writeDone(uint8_t img_num, storage_addr_t addr, void *buf, storage_len_t len, error_t error)
{
  uint16_t tmp;


  if (buf != DelugePageTransferP__rxQueue[DelugePageTransferP__head].data) {
      return;
    }


  if (error != SUCCESS) {
      uint32_t i;

#line 462
      for (i = 0; i < DELUGET2_PKT_BITVEC_SIZE; i++) {
          DelugePageTransferP__pktsToReceive[i] = 0xFF;
        }
      DelugePageTransferP__size = 0;
      return;
    }


  DelugePageTransferP__pktsToReceive[__nesc_ntoh_uint8(DelugePageTransferP__rxQueue[DelugePageTransferP__head].pktNum.nxdata) / 8] = DelugePageTransferP__pktsToReceive[__nesc_ntoh_uint8(DelugePageTransferP__rxQueue[DelugePageTransferP__head].pktNum.nxdata) / 8] & ~(1 << __nesc_ntoh_uint8(DelugePageTransferP__rxQueue[DelugePageTransferP__head].pktNum.nxdata) % 8);
  DelugePageTransferP__head = (DelugePageTransferP__head + 1) % DELUGE_QSIZE;
  DelugePageTransferP__size--;

  if (DelugePageTransferP__BitVecUtils__indexOf(&tmp, 0, DelugePageTransferP__pktsToReceive, DELUGET2_PKTS_PER_PAGE) != SUCCESS) {



      DelugePageTransferP__Leds__led1Off();
      DelugePageTransferP__DelugePageTransfer__receivedPage(DelugePageTransferP__workingObjid, DelugePageTransferP__workingPgNum);
      DelugePageTransferP__changeState(DelugePageTransferP__S_IDLE);
      DelugePageTransferP__size = 0;
    }
  else {
#line 482
    if (DelugePageTransferP__size) {
        DelugePageTransferP__writeData();
      }
    }
}

# 115 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/ObjectTransferP.nc"
static void ObjectTransferP__setNextPage(void )
{
  if (__nesc_ntoh_uint8(ObjectTransferP__curObjDesc.numPgsComplete.nxdata) < __nesc_ntoh_uint8(ObjectTransferP__curObjDesc.numPgs.nxdata)) {
      ObjectTransferP__DelugePageTransfer__setWorkingPage(__nesc_ntoh_int32(ObjectTransferP__curObjDesc.objid.nxdata), __nesc_ntoh_uint8(ObjectTransferP__curObjDesc.numPgsComplete.nxdata));
      ObjectTransferP__advTimers.newAdvs = DELUGE_NUM_NEWDATA_ADVS_REQUIRED;
      ObjectTransferP__advTimers.overheard = 0;
      ObjectTransferP__resetTimer();
    }
  else 
#line 122
    {
      ObjectTransferP__DelugePageTransfer__setWorkingPage(DELUGE_INVALID_OBJID, DELUGE_INVALID_PGNUM);
      ObjectTransferP__ObjectTransfer__stop();
      ObjectTransferP__state = ObjectTransferP__S_SYNC;
      ObjectTransferP__BlockWrite__sync(ObjectTransferP__cont_receive_img_num);
    }
}

# 155 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/BlockStorageManagerP.nc"
static error_t /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockWrite__sync(uint8_t client)
{
  error_t error;

#line 158
  if (/*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__state != /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__S_READY) {
      return EBUSY;
    }
  error = /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockWrite__sync(/*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__VolumeId__get(client));
  if (error == SUCCESS) 
    {
      /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__state = /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__S_BUSY;
      return SUCCESS;
    }
  return error;
}

# 240 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugePageTransferP.nc"
static void DelugePageTransferP__writeData(void )
{

  if (
#line 242
  DelugePageTransferP__BlockWrite__write(DelugePageTransferP__imgNum, DelugePageTransferP__calcOffset(__nesc_ntoh_uint8(DelugePageTransferP__rxQueue[DelugePageTransferP__head].pgNum.nxdata), __nesc_ntoh_uint8(DelugePageTransferP__rxQueue[DelugePageTransferP__head].pktNum.nxdata)), 
  DelugePageTransferP__rxQueue[DelugePageTransferP__head].data, DELUGET2_PKT_PAYLOAD_SIZE) != SUCCESS) {
      DelugePageTransferP__size = 0;
    }
}

# 123 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/BlockStorageManagerP.nc"
static error_t /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockWrite__write(uint8_t client, storage_addr_t addr, void *buf, storage_len_t len)
{
  error_t error;

#line 126
  if (/*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__state != /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__S_READY) {
      return EBUSY;
    }
  error = /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__SubBlockWrite__write(/*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__VolumeId__get(client), addr, buf, len);
  if (error == SUCCESS) 
    {
      /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__state = /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__S_BUSY;
      /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__current_client = client;
      return SUCCESS;
    }
  return error;
}

#line 214
static void /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockWrite__default__eraseDone(volume_id_t volume_id, error_t error)
#line 214
{
}

# 91 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
static void /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockWrite__eraseDone(uint8_t arg_0x7fa21d927ad8, error_t error){
#line 91
  switch (arg_0x7fa21d927ad8) {
#line 91
    case /*DelugeC.BlockWriterDeluge1*/BlockWriterC__0__CLIENT_ID:
#line 91
      DelugePageTransferP__BlockWrite__eraseDone(VOLUME_DELUGE1, error);
#line 91
      ObjectTransferP__BlockWrite__eraseDone(VOLUME_DELUGE1, error);
#line 91
      break;
#line 91
    case /*DelugeC.BlockWriterDeluge2*/BlockWriterC__1__CLIENT_ID:
#line 91
      DelugePageTransferP__BlockWrite__eraseDone(VOLUME_DELUGE2, error);
#line 91
      ObjectTransferP__BlockWrite__eraseDone(VOLUME_DELUGE2, error);
#line 91
      break;
#line 91
    case /*DelugeC.BlockWriterDeluge3*/BlockWriterC__2__CLIENT_ID:
#line 91
      DelugePageTransferP__BlockWrite__eraseDone(VOLUME_DELUGE3, error);
#line 91
      ObjectTransferP__BlockWrite__eraseDone(VOLUME_DELUGE3, error);
#line 91
      break;
#line 91
    case /*DelugeMetadataC.BlockWriterGoldenImage*/BlockWriterC__3__CLIENT_ID:
#line 91
      DelugeMetadataP__BlockWrite__eraseDone(VOLUME_GOLDENIMAGE, error);
#line 91
      break;
#line 91
    case /*DelugeMetadataC.BlockWriterDeluge1*/BlockWriterC__4__CLIENT_ID:
#line 91
      DelugeMetadataP__BlockWrite__eraseDone(VOLUME_DELUGE1, error);
#line 91
      break;
#line 91
    case /*DelugeMetadataC.BlockWriterDeluge2*/BlockWriterC__5__CLIENT_ID:
#line 91
      DelugeMetadataP__BlockWrite__eraseDone(VOLUME_DELUGE2, error);
#line 91
      break;
#line 91
    case /*DelugeMetadataC.BlockWriterDeluge3*/BlockWriterC__6__CLIENT_ID:
#line 91
      DelugeMetadataP__BlockWrite__eraseDone(VOLUME_DELUGE3, error);
#line 91
      break;
#line 91
    case /*DelugeVolumeManagerC.BlockWriterDeluge1*/BlockWriterC__7__CLIENT_ID:
#line 91
      DelugeVolumeManagerP__BlockWrite__eraseDone(VOLUME_DELUGE1, error);
#line 91
      break;
#line 91
    case /*DelugeVolumeManagerC.BlockWriterDeluge2*/BlockWriterC__8__CLIENT_ID:
#line 91
      DelugeVolumeManagerP__BlockWrite__eraseDone(VOLUME_DELUGE2, error);
#line 91
      break;
#line 91
    case /*DelugeVolumeManagerC.BlockWriterDeluge3*/BlockWriterC__9__CLIENT_ID:
#line 91
      DelugeVolumeManagerP__BlockWrite__eraseDone(VOLUME_DELUGE3, error);
#line 91
      break;
#line 91
    default:
#line 91
      /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockWrite__default__eraseDone(arg_0x7fa21d927ad8, error);
#line 91
      break;
#line 91
    }
#line 91
}
#line 91
# 68 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeVolumeManagerP.nc"
static void DelugeVolumeManagerP__BlockWrite__eraseDone(uint8_t imgNum, error_t error)
{
  DelugeVolumeManagerP__busy = FALSE;
  DelugeVolumeManagerP__Resource__release(imgNum);
  DelugeVolumeManagerP__DelugeVolumeManager__eraseDone(DelugeVolumeManagerP__currentClient, error);
}

# 169 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeMetadataP.nc"
static void DelugeMetadataP__BlockWrite__eraseDone(uint8_t imgNum, error_t error)
{
  switch (DelugeMetadataP__state) {
      case DelugeMetadataP__S_READY: 
        DelugeMetadataP__BlockWrite__eraseDone(imgNum, error);
      break;
      case DelugeMetadataP__S_CRC: 
        DelugeMetadataP__currentImageIdx++;
      DelugeMetadataP__currentVolume = _imgNum2volumeId[DelugeMetadataP__currentImageIdx];
      DelugeMetadataP__nextImage();
      break;
    }
}

# 184 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/ObjectTransferP.nc"
static void ObjectTransferP__cont_receive(void )
#line 184
{
  ObjectTransferP__state = ObjectTransferP__S_INITIALIZING_RECV;
  __nesc_hton_int32(ObjectTransferP__curObjDesc.objid.nxdata, ObjectTransferP__cont_receive_new_objid);
  __nesc_hton_uint8(ObjectTransferP__curObjDesc.numPgs.nxdata, (ObjectTransferP__cont_receive_new_size - 1) / DELUGET2_BYTES_PER_PAGE + 1);
  __nesc_hton_uint8(ObjectTransferP__curObjDesc.numPgsComplete.nxdata, 0);
  __nesc_hton_uint16(ObjectTransferP__curObjDesc.crc.nxdata, ObjectTransferP__Crc__crc16(&ObjectTransferP__curObjDesc, sizeof(object_id_t ) + sizeof(page_num_t )));

  if (ObjectTransferP__state == ObjectTransferP__S_INITIALIZING_RECV) {
      ObjectTransferP__resetTimer();
    }
  ObjectTransferP__state = ObjectTransferP__S_STARTED;

  ObjectTransferP__DelugePageTransfer__setImgNum(ObjectTransferP__cont_receive_img_num);
  ObjectTransferP__setNextPage();
}

# 119 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/BlockStorageManagerP.nc"
static void /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockRead__default__computeCrcDone(volume_id_t volume_id, storage_addr_t addr, storage_len_t len, uint16_t crc, error_t error)
#line 119
{
}

# 95 "/opt/tinyos-2.1.2/tos/interfaces/BlockRead.nc"
static void /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockRead__computeCrcDone(uint8_t arg_0x7fa21d928840, storage_addr_t addr, storage_len_t len, uint16_t crc, error_t error){
#line 95
  switch (arg_0x7fa21d928840) {
#line 95
    case /*DelugeC.BlockReaderDeluge1*/BlockReaderC__0__CLIENT_ID:
#line 95
      DelugePageTransferP__BlockRead__computeCrcDone(VOLUME_DELUGE1, addr, len, crc, error);
#line 95
      break;
#line 95
    case /*DelugeC.BlockReaderDeluge2*/BlockReaderC__1__CLIENT_ID:
#line 95
      DelugePageTransferP__BlockRead__computeCrcDone(VOLUME_DELUGE2, addr, len, crc, error);
#line 95
      break;
#line 95
    case /*DelugeC.BlockReaderDeluge3*/BlockReaderC__2__CLIENT_ID:
#line 95
      DelugePageTransferP__BlockRead__computeCrcDone(VOLUME_DELUGE3, addr, len, crc, error);
#line 95
      break;
#line 95
    case /*DelugeMetadataC.BlockReaderGoldenImage*/BlockReaderC__3__CLIENT_ID:
#line 95
      DelugeMetadataP__BlockRead__computeCrcDone(VOLUME_GOLDENIMAGE, addr, len, crc, error);
#line 95
      break;
#line 95
    case /*DelugeMetadataC.BlockReaderDeluge1*/BlockReaderC__4__CLIENT_ID:
#line 95
      DelugeMetadataP__BlockRead__computeCrcDone(VOLUME_DELUGE1, addr, len, crc, error);
#line 95
      break;
#line 95
    case /*DelugeMetadataC.BlockReaderDeluge2*/BlockReaderC__5__CLIENT_ID:
#line 95
      DelugeMetadataP__BlockRead__computeCrcDone(VOLUME_DELUGE2, addr, len, crc, error);
#line 95
      break;
#line 95
    case /*DelugeMetadataC.BlockReaderDeluge3*/BlockReaderC__6__CLIENT_ID:
#line 95
      DelugeMetadataP__BlockRead__computeCrcDone(VOLUME_DELUGE3, addr, len, crc, error);
#line 95
      break;
#line 95
    default:
#line 95
      /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockRead__default__computeCrcDone(arg_0x7fa21d928840, addr, len, crc, error);
#line 95
      break;
#line 95
    }
#line 95
}
#line 95
# 142 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugeMetadataP.nc"
static void DelugeMetadataP__BlockRead__computeCrcDone(uint8_t imgNum, storage_addr_t addr, storage_len_t len, uint16_t crc, error_t error)
{
  switch (DelugeMetadataP__state) {
      case DelugeMetadataP__S_CRC: 
        if (crc != __nesc_ntoh_uint16(DelugeMetadataP__currentCrc.nxdata)) {


            DelugeMetadataP__BlockWrite__erase(DelugeMetadataP__currentVolume);
          }
        else 
#line 150
          {
            DelugeMetadataP__currentPage++;
            if (DelugeMetadataP__currentPage < __nesc_ntoh_uint8(DelugeMetadataP__ident.numPgs.nxdata)) {
                DelugeMetadataP__state = DelugeMetadataP__S_READ_CRC;
                DelugeMetadataP__BlockRead__read(DelugeMetadataP__currentVolume, DelugeMetadataP__calcCrcAddr(), &DelugeMetadataP__currentCrc, sizeof DelugeMetadataP__currentCrc);
              }
            else 
#line 155
              {
                DelugeMetadataP__currentImageIdx++;
                DelugeMetadataP__currentVolume = _imgNum2volumeId[DelugeMetadataP__currentImageIdx];
                DelugeMetadataP__nextImage();
              }
          }
      break;
    }
}

# 215 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/BlockStorageManager/BlockStorageManagerP.nc"
static void /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockWrite__default__syncDone(volume_id_t volume_id, error_t error)
#line 215
{
}

# 112 "/opt/tinyos-2.1.2/tos/interfaces/BlockWrite.nc"
static void /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockWrite__syncDone(uint8_t arg_0x7fa21d927ad8, error_t error){
#line 112
  switch (arg_0x7fa21d927ad8) {
#line 112
    case /*DelugeC.BlockWriterDeluge1*/BlockWriterC__0__CLIENT_ID:
#line 112
      DelugePageTransferP__BlockWrite__syncDone(VOLUME_DELUGE1, error);
#line 112
      ObjectTransferP__BlockWrite__syncDone(VOLUME_DELUGE1, error);
#line 112
      break;
#line 112
    case /*DelugeC.BlockWriterDeluge2*/BlockWriterC__1__CLIENT_ID:
#line 112
      DelugePageTransferP__BlockWrite__syncDone(VOLUME_DELUGE2, error);
#line 112
      ObjectTransferP__BlockWrite__syncDone(VOLUME_DELUGE2, error);
#line 112
      break;
#line 112
    case /*DelugeC.BlockWriterDeluge3*/BlockWriterC__2__CLIENT_ID:
#line 112
      DelugePageTransferP__BlockWrite__syncDone(VOLUME_DELUGE3, error);
#line 112
      ObjectTransferP__BlockWrite__syncDone(VOLUME_DELUGE3, error);
#line 112
      break;
#line 112
    case /*DelugeMetadataC.BlockWriterGoldenImage*/BlockWriterC__3__CLIENT_ID:
#line 112
      DelugeMetadataP__BlockWrite__syncDone(VOLUME_GOLDENIMAGE, error);
#line 112
      break;
#line 112
    case /*DelugeMetadataC.BlockWriterDeluge1*/BlockWriterC__4__CLIENT_ID:
#line 112
      DelugeMetadataP__BlockWrite__syncDone(VOLUME_DELUGE1, error);
#line 112
      break;
#line 112
    case /*DelugeMetadataC.BlockWriterDeluge2*/BlockWriterC__5__CLIENT_ID:
#line 112
      DelugeMetadataP__BlockWrite__syncDone(VOLUME_DELUGE2, error);
#line 112
      break;
#line 112
    case /*DelugeMetadataC.BlockWriterDeluge3*/BlockWriterC__6__CLIENT_ID:
#line 112
      DelugeMetadataP__BlockWrite__syncDone(VOLUME_DELUGE3, error);
#line 112
      break;
#line 112
    case /*DelugeVolumeManagerC.BlockWriterDeluge1*/BlockWriterC__7__CLIENT_ID:
#line 112
      DelugeVolumeManagerP__BlockWrite__syncDone(VOLUME_DELUGE1, error);
#line 112
      break;
#line 112
    case /*DelugeVolumeManagerC.BlockWriterDeluge2*/BlockWriterC__8__CLIENT_ID:
#line 112
      DelugeVolumeManagerP__BlockWrite__syncDone(VOLUME_DELUGE2, error);
#line 112
      break;
#line 112
    case /*DelugeVolumeManagerC.BlockWriterDeluge3*/BlockWriterC__9__CLIENT_ID:
#line 112
      DelugeVolumeManagerP__BlockWrite__syncDone(VOLUME_DELUGE3, error);
#line 112
      break;
#line 112
    default:
#line 112
      /*BlockStorageManagerC.BlockStorageManagerP*/BlockStorageManagerP__0__BlockWrite__default__syncDone(arg_0x7fa21d927ad8, error);
#line 112
      break;
#line 112
    }
#line 112
}
#line 112
# 246 "/opt/tinyos-2.1.2/tos/chips/at45db/BlockStorageP.nc"
static void BlockStorageP__multipageContinue(uint16_t crc)
#line 246
{
  storage_addr_t remaining = BlockStorageP__s[BlockStorageP__client].len - BlockStorageP__currentOffset;
#line 247
  storage_addr_t addr;
  at45page_t page;
  at45pageoffset_t pageOffset;
#line 249
  at45pageoffset_t count;
  uint8_t *buf = BlockStorageP__s[BlockStorageP__client].buf;

  if (remaining == 0) 
    {
      BlockStorageP__endRequest(SUCCESS, crc);
      return;
    }

  addr = BlockStorageP__s[BlockStorageP__client].addr + BlockStorageP__currentOffset;
  page = BlockStorageP__pageRemap(addr >> AT45_PAGE_SIZE_LOG2);
  pageOffset = addr & ((1 << AT45_PAGE_SIZE_LOG2) - 1);
  count = (1 << AT45_PAGE_SIZE_LOG2) - pageOffset;
  if (remaining < count) {
    count = remaining;
    }
  switch (BlockStorageP__s[BlockStorageP__client].request) 
    {
      case BlockStorageP__R_WRITE: 
        BlockStorageP__At45db__write(page, pageOffset, buf + BlockStorageP__currentOffset, count);
      break;
      case BlockStorageP__R_READ: 
        BlockStorageP__At45db__read(page, pageOffset, buf + BlockStorageP__currentOffset, count);
      break;
      case BlockStorageP__R_CRC: 
        BlockStorageP__At45db__computeCrc(page, pageOffset, count, crc);
      break;
    }
  BlockStorageP__currentOffset += count;
}

#line 125
static at45page_t BlockStorageP__BConfig__remap(uint8_t id, at45page_t page)
#line 125
{
  if (BlockStorageP__BConfig__isConfig(id) && BlockStorageP__BConfig__flipped(id)) {
    page += BlockStorageP__BConfig__npages(id);
    }
#line 128
  return BlockStorageP__At45dbVolume__remap(id, page);
}

# 162 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbP.nc"
static void At45dbP__flushBuffer(void )
#line 162
{
  if (At45dbP__flashBusy) 
    {
      At45dbP__HplAt45db__waitIdle();
      return;
    }
  At45dbP__HplAt45db__flush(At45dbP__buffer[At45dbP__selected].erased ? 
  At45dbP__selected ? AT45_C_QFLUSH_BUFFER1 : AT45_C_QFLUSH_BUFFER2 : 
  At45dbP__selected ? AT45_C_FLUSH_BUFFER1 : AT45_C_FLUSH_BUFFER2, 
  At45dbP__buffer[At45dbP__selected].page);
}

#line 152
static void At45dbP__checkBuffer(uint8_t buf)
#line 152
{
  if (At45dbP__flashBusy) 
    {
      At45dbP__HplAt45db__waitIdle();
      return;
    }
  At45dbP__HplAt45db__compare(buf ? AT45_C_COMPARE_BUFFER1 : AT45_C_COMPARE_BUFFER2, At45dbP__buffer[buf].page);
  At45dbP__checking = buf;
}

#line 460
static void At45dbP__syncOrFlushAll(uint8_t newReq)
#line 460
{
  At45dbP__request = newReq;

  if (! At45dbP__buffer[0].clean) {
    At45dbP__selected = 0;
    }
  else {
#line 465
    if (! At45dbP__buffer[1].clean) {
      At45dbP__selected = 1;
      }
    else {
        At45dbP__taskSuccess__postTask();
        return;
      }
    }
  At45dbP__buffer[At45dbP__selected].unchecked = 0;
  At45dbP__handleRWRequest();
}

# 142 "/opt/tinyos-2.1.2/tos/platforms/iris/chips/at45db/HplAt45dbIOP.nc"
static uint8_t HplAt45dbIOP__FlashSpi__write(uint8_t spiOut)
#line 142
{
  uint8_t spiIn = 0;


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      uint8_t clrClkAndData = * (volatile uint8_t *)(0x0B + 0x20) & ~0x28;

      * (volatile uint8_t *)(0x0B + 0x20) = clrClkAndData;
#line 150
       __asm volatile ("sbrc %2,""7""\n""\tsbi 11,3\n""\tsbi 11,5\n""\tsbic 9,2\n""\tori %0,1<<""7""\n" : "=d"(spiIn) : "0"(spiIn), "r"(spiOut));
      * (volatile uint8_t *)(0x0B + 0x20) = clrClkAndData;
#line 151
       __asm volatile ("sbrc %2,""6""\n""\tsbi 11,3\n""\tsbi 11,5\n""\tsbic 9,2\n""\tori %0,1<<""6""\n" : "=d"(spiIn) : "0"(spiIn), "r"(spiOut));
      * (volatile uint8_t *)(0x0B + 0x20) = clrClkAndData;
#line 152
       __asm volatile ("sbrc %2,""5""\n""\tsbi 11,3\n""\tsbi 11,5\n""\tsbic 9,2\n""\tori %0,1<<""5""\n" : "=d"(spiIn) : "0"(spiIn), "r"(spiOut));
      * (volatile uint8_t *)(0x0B + 0x20) = clrClkAndData;
#line 153
       __asm volatile ("sbrc %2,""4""\n""\tsbi 11,3\n""\tsbi 11,5\n""\tsbic 9,2\n""\tori %0,1<<""4""\n" : "=d"(spiIn) : "0"(spiIn), "r"(spiOut));
      * (volatile uint8_t *)(0x0B + 0x20) = clrClkAndData;
#line 154
       __asm volatile ("sbrc %2,""3""\n""\tsbi 11,3\n""\tsbi 11,5\n""\tsbic 9,2\n""\tori %0,1<<""3""\n" : "=d"(spiIn) : "0"(spiIn), "r"(spiOut));
      * (volatile uint8_t *)(0x0B + 0x20) = clrClkAndData;
#line 155
       __asm volatile ("sbrc %2,""2""\n""\tsbi 11,3\n""\tsbi 11,5\n""\tsbic 9,2\n""\tori %0,1<<""2""\n" : "=d"(spiIn) : "0"(spiIn), "r"(spiOut));
      * (volatile uint8_t *)(0x0B + 0x20) = clrClkAndData;
#line 156
       __asm volatile ("sbrc %2,""1""\n""\tsbi 11,3\n""\tsbi 11,5\n""\tsbic 9,2\n""\tori %0,1<<""1""\n" : "=d"(spiIn) : "0"(spiIn), "r"(spiOut));
      * (volatile uint8_t *)(0x0B + 0x20) = clrClkAndData;
#line 157
       __asm volatile ("sbrc %2,""0""\n""\tsbi 11,3\n""\tsbi 11,5\n""\tsbic 9,2\n""\tori %0,1<<""0""\n" : "=d"(spiIn) : "0"(spiIn), "r"(spiOut));}
#line 157
    __nesc_atomic_end(__nesc_atomic); }


  return spiIn;
}

# 138 "/opt/tinyos-2.1.2/tos/chips/at45db/At45dbP.nc"
static void At45dbP__flashIdle(void )
#line 138
{
  At45dbP__flashBusy = At45dbP__buffer[0].busy = At45dbP__buffer[1].busy = FALSE;
}

# 268 "/opt/tinyos-2.1.2/tos/lib/net/TrickleTimerImplP.nc"
static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__generateTime(uint8_t id)
#line 268
{
  uint32_t newTime;
  uint16_t rval;

  if (/*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].time != 0) {
      /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].period *= 2;
      if (/*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].period > 1024) {
          /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].period = 1024;
        }
    }

  /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].time = /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].remainder;

  newTime = /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].period;
  newTime = newTime << (10 - 1);

  rval = /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Random__rand16() % (/*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].period << (10 - 1));
  newTime += rval;

  /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].remainder = ((uint32_t )/*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].period << 10) - newTime;
  /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].time += newTime;
  ;
}

# 92 "/opt/tinyos-2.1.2/tos/system/BitVectorC.nc"
static void /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__BitVector__set(uint16_t bitnum)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 94
    {
#line 94
      /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__m_bits[/*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__getIndex(bitnum)] |= /*DisseminationTimerP.TrickleTimerMilliC.ChangeVector*/BitVectorC__1__getMask(bitnum);
    }
#line 95
    __nesc_atomic_end(__nesc_atomic); }
}

# 209 "/opt/tinyos-2.1.2/tos/lib/net/TrickleTimerImplP.nc"
static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__adjustTimer(void )
#line 209
{
  uint8_t i;
  uint32_t lowest = 0;
  bool set = FALSE;





  uint32_t elapsed = /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Timer__getNow() - /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Timer__gett0();

  for (i = 0; i < 1U; i++) {
      uint32_t timeRemaining = /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[i].time;

#line 222
      ;

      if (timeRemaining == 0) {
          continue;
        }

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 228
        {
          if (!/*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Changed__get(i)) {
              if (timeRemaining > elapsed) {
                  ;
                  timeRemaining -= elapsed;
                  /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[i].time -= elapsed;
                }
              else {
                  ;
                  timeRemaining = 1;
                  /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[i].time = 1;
                }
            }
          else {
              ;
              /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Changed__clear(i);
            }
        }
#line 245
        __nesc_atomic_end(__nesc_atomic); }
      if (!set) {
          lowest = timeRemaining;
          set = TRUE;
        }
      else {
#line 250
        if (timeRemaining < lowest) {
            lowest = timeRemaining;
          }
        }
    }
  if (set) {
      uint32_t timerVal = lowest;

#line 257
      ;
      /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Timer__startOneShot(timerVal);
    }
  else {
      /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Timer__stop();
    }
}

#line 130
static void /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__TrickleTimer__reset(uint8_t id)
#line 130
{
  /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].period = 1;
  /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].count = 0;
  if (/*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].time != 0) {
      ;
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 135
        {
          /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__Changed__set(id);
        }
#line 137
        __nesc_atomic_end(__nesc_atomic); }
      /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].time = 0;
      /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__trickles[id].remainder = 0;
      /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__generateTime(id);
      /*DisseminationTimerP.TrickleTimerMilliC.TrickleTimerImplP*/TrickleTimerImplP__0__adjustTimer();
    }
  else 
#line 142
    {
      ;
    }
}

# 174 "/opt/tinyos-2.1.2/tos/system/AMQueueImplP.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend(void )
#line 174
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__nextPacket();
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current < 5) {
      error_t nextErr;
      message_t *nextMsg = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current].msg;
      am_id_t nextId = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(nextMsg);
      am_addr_t nextDest = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(nextMsg);
      uint8_t len = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__payloadLength(nextMsg);

#line 182
      nextErr = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(nextId, nextDest, nextMsg, len);
      if (nextErr != SUCCESS) {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__postTask();
        }
    }
}

#line 215
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(uint8_t id, message_t *msg, error_t err)
#line 215
{
}

# 100 "/opt/tinyos-2.1.2/tos/interfaces/Send.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(uint8_t arg_0x7fa21e361318, message_t * msg, error_t error){
#line 100
  switch (arg_0x7fa21e361318) {
#line 100
    case 0U:
#line 100
      /*ObjectTransferC.SendAdvMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(msg, error);
#line 100
      break;
#line 100
    case 1U:
#line 100
      /*ObjectTransferC.SendReqMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__1__Send__sendDone(msg, error);
#line 100
      break;
#line 100
    case 2U:
#line 100
      /*ObjectTransferC.SendDataMsg.SenderC.AMQueueEntryP*/AMQueueEntryP__2__Send__sendDone(msg, error);
#line 100
      break;
#line 100
    case 3U:
#line 100
      /*DisseminationEngineP.DisseminationSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__3__Send__sendDone(msg, error);
#line 100
      break;
#line 100
    case 4U:
#line 100
      /*DisseminationEngineP.DisseminationProbeSendC.SenderC.AMQueueEntryP*/AMQueueEntryP__4__Send__sendDone(msg, error);
#line 100
      break;
#line 100
    default:
#line 100
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(arg_0x7fa21e361318, msg, error);
#line 100
      break;
#line 100
    }
#line 100
}
#line 100
# 106 "/opt/tinyos-2.1.2/tos/lib/net/drip/DisseminatorP.nc"
static void /*DelugeC.DisseminatorC.DisseminatorP*/DisseminatorP__0__DisseminationCache__storeData(void *data, uint8_t size, 
uint32_t newSeqno)
#line 107
{
  memcpy(&/*DelugeC.DisseminatorC.DisseminatorP*/DisseminatorP__0__valueCache, data, size < sizeof(/*DelugeC.DisseminatorC.DisseminatorP*/DisseminatorP__0__t ) ? size : sizeof(/*DelugeC.DisseminatorC.DisseminatorP*/DisseminatorP__0__t ));
  /*DelugeC.DisseminatorC.DisseminatorP*/DisseminatorP__0__seqno = newSeqno;




  /*DelugeC.DisseminatorC.DisseminatorP*/DisseminatorP__0__DisseminationValue__changed();
}

# 221 "/opt/tinyos-2.1.2/tos/lib/net/Deluge/DelugePageTransferP.nc"
static void DelugePageTransferP__suppressMsgs(object_id_t objid, page_num_t pgNum)
{
  if (DelugePageTransferP__state == DelugePageTransferP__S_SENDING || DelugePageTransferP__state == DelugePageTransferP__S_TX_LOCKING) {
      if (objid < DelugePageTransferP__objToSend || (objid == DelugePageTransferP__objToSend && pgNum < DelugePageTransferP__pageToSend)) {
          uint32_t i;

#line 226
          DelugePageTransferP__changeState(DelugePageTransferP__S_IDLE);
          for (i = 0; i < DELUGET2_PKT_BITVEC_SIZE; i++) {
              DelugePageTransferP__pktsToSend[i] = 0x00;
            }
        }
    }
  else {
#line 232
    if (DelugePageTransferP__state == DelugePageTransferP__S_RECEIVING || DelugePageTransferP__state == DelugePageTransferP__S_RX_LOCKING) {
        if (objid < DelugePageTransferP__workingObjid || (objid == DelugePageTransferP__workingObjid && pgNum <= DelugePageTransferP__workingPgNum)) {

            DelugePageTransferP__suppressReq = TRUE;
          }
      }
    }
}

# 73 "/opt/tinyos-2.1.2/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now)
{
  uint16_t num;

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;

          if (elapsed >= timer->dt) 
            {
              if (timer->isoneshot) {
                timer->isrunning = FALSE;
                }
              else {
#line 90
                timer->t0 += timer->dt;
                }
              /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(num);
              break;
            }
        }
    }
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 250 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/Atm1281AlarmAsyncP.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__startAt(uint32_t nt0, uint32_t ndt)
#line 250
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__set = TRUE;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__t0 = nt0;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__dt = ndt;
    }
#line 256
    __nesc_atomic_end(__nesc_atomic); }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__setInterrupt();
}

#line 128
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__setInterrupt(void )
#line 128
{
  bool fired = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {



      uint8_t interrupt_in = 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Compare__get() - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Timer__get();
      uint8_t newOcr2A;
      uint8_t tifr2 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__TimerCtrl__getInterruptFlag();

#line 139
      ;
      if ((interrupt_in != 0 && interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__MINDT) || tifr2 & (1 << 1)) {
          if (interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__MINDT) {
              ;
            }
          else {
              ;
            }
          {
#line 147
            __nesc_atomic_end(__nesc_atomic); 
#line 147
            return;
          }
        }

      if (!/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__set) {
          newOcr2A = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__MAXT;
          ;
        }
      else 
        {
          uint32_t now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Counter__get();

#line 158
          ;

          if ((uint32_t )(now - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__t0) >= /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__dt) 
            {
              /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__set = FALSE;
              fired = TRUE;
              newOcr2A = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__MAXT;
            }
          else 
            {


              uint32_t alarm_in = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__t0 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__dt - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__base;

              if (alarm_in > /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__MAXT) {
                newOcr2A = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__MAXT;
                }
              else {
#line 174
                if ((uint8_t )alarm_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__MINDT) {
                  newOcr2A = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__MINDT;
                  }
                else {
#line 177
                  newOcr2A = alarm_in;
                  }
                }
            }
        }
#line 180
      newOcr2A--;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__setOcr2A(newOcr2A);
    }
#line 182
    __nesc_atomic_end(__nesc_atomic); }
  if (fired) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm1281AlarmAsyncP*/Atm1281AlarmAsyncP__0__Alarm__fired();
    }
}

# 242 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/HplAtm1281Timer2AsyncP.nc"
__attribute((signal))   void __vector_13(void )
#line 242
{
  HplAtm1281Timer2AsyncP__stabiliseTimer2();


  HplAtm1281Timer2AsyncP__Compare__fired();
}


__attribute((signal))   void __vector_15(void )
#line 250
{
  HplAtm1281Timer2AsyncP__stabiliseTimer2();

  HplAtm1281Timer2AsyncP__Timer__overflow();
}

# 119 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/HplAtm128SpiP.nc"
__attribute((signal))   void __vector_24(void )
#line 119
{
  HplAtm128SpiP__SPI__dataReady(HplAtm128SpiP__SPI__read());
}

# 173 "/opt/tinyos-2.1.2/tos/chips/atm128/spi/Atm128SpiP.nc"
static uint8_t Atm128SpiP__SpiByte__write(uint8_t tx)
#line 173
{










  Atm128SpiP__Spi__write(tx);

  while (!Atm128SpiP__Spi__isInterruptPending()) 
    ;

  return Atm128SpiP__Spi__read();
}

# 226 "/opt/tinyos-2.1.2/tos/chips/atm1281/timer/HplAtm1281Timer1P.nc"
__attribute((interrupt))   void __vector_17(void )
#line 226
{
  HplAtm1281Timer1P__CompareA__fired();
}

__attribute((interrupt))   void __vector_18(void )
#line 230
{
  HplAtm1281Timer1P__CompareB__fired();
}

__attribute((interrupt))   void __vector_19(void )
#line 234
{
  HplAtm1281Timer1P__CompareC__fired();
}

__attribute((interrupt))   void __vector_16(void )
#line 238
{
  HplAtm1281Timer1P__Capture__captured(HplAtm1281Timer1P__Capture__get());
}

__attribute((interrupt))   void __vector_20(void )
#line 242
{
  HplAtm1281Timer1P__Timer__overflow();
}

