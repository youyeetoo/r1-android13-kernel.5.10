#ifndef __MDES_H_
#define __MDES_H_

/*宏定义*/
#define M8_1      0x01                
#define M8_6      0x20                
#define M8_5_2    0x3c                

typedef struct subkey{
    unsigned char byte[6];
}Subkey;

void des_generate_subkey(unsigned char* main_key, Subkey* subkey_buff_address);
void des_unit_process(unsigned char* raw,unsigned char* processed,Subkey* subkey,int mode);
#endif