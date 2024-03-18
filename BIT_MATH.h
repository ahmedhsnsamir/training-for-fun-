/**************************************************************/
/****File Name: BIT_MATH.h****/
/***********************************************************/
#ifndef BIT_MATH_H_
#define BIT_MATH_H_
#define SET_BIT(REG,BIT_NO)REG|=(1<<BIT_NO)
#define CLR_BIT(REG,BIT_NO)REG&=~(1<<BIT_NO)
#define TOG_BIT(REG,BIT_NO)REG^=(1<<BIT_NO)
#define GET_BIT(REG,BIT_NO)((REG&(1<<BIT_NO))>>BIT_NO)
#endif /*BIT_MATH_H_*/
