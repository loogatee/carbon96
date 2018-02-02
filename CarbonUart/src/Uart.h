
#ifndef _UART_H_
#define _UART_H_


#define SERO_TYPE_ONECHAR    0x01
#define SERO_TYPE_STR        0x02
#define SERO_TYPE_32         0x03
#define SERO_TYPE_32N        0x04
#define SERO_TYPE_8          0x05
#define SERO_TYPE_8N         0x06




// Uart2 output
void U1_Init(void);
void U1_Process(void);

void U1_PrintCH(char ch);
void U1_PrintSTR(const char *pstr);
void U1_Print32(const char *pstr, uint32_t val);
void U1_Print32N(const char *pstr, uint32_t val);
void U1_Print8(const char *pstr,  uint8_t val);
void U1_Print8N(const char *pstr,  uint8_t val);
void U1_Send(uint32_t otype, char *sptr, uint32_t *completionptr, uint32_t aval);

// Uart2 input
void U1Inp_Init(void);
void U1Inp_Process(void);
void U1Inp_SignalCmdDone(void);




#endif
