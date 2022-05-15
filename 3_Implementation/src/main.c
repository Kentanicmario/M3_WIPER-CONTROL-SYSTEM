

#define GPIOD_BASE_ADDR 0x40020C00
#define GPIOD_ODR_OFFSET 0x14
#define GPIOD_ODR *(volatile long *)(GPIOD_BASE_ADDR + GPIOD_ODR_OFFSET)



#define RCC_BASE_ADDR 0x40023800
#define RCC_AHB1ENR_OFFSET 0x30
#define RCC_AHB1ENR *(volatile long *)(RCC_BASE_ADDR + RCC_AHB1ENR_OFFSET)



#define GPIOA_BASE_ADDR 0x40020000
#define GPIOA_IDR_OFFSET 0x10
#define GPIOA_IDR *(volatile long *)(GPIOA_BASE_ADDR + GPIOA_IDR_OFFSET)



#define GPIOD_MODE_OFFSET 0x00
#define GPIOD_MODE *(volatile long *)(GPIOD_BASE_ADDR + GPIOD_MODE_OFFSET)



#define GPIOA_MODE_OFFSET 0x00
#define GPIOA_MODE *(volatile long *)(GPIOA_BASE_ADDR + GPIOA_MODE_OFFSET)


int main()
{
	int l,m=0,n=0;  
	RCC_AHB1ENR |= (1<<3)|(1<<0); 
	GPIOD_MODE = 0; 
	GPIOA_MODE = 0; 
	GPIOA_IDR |= 1<<3;
	GPIOD_MODE |= (0<<25)|(1<<24);  
	GPIOD_MODE |= (0<<27)|(1<<26);  
	GPIOD_MODE |= (0<<29)|(1<<28);  
	GPIOD_MODE |= (0<<31)|(1<<30);  
	GPIOA_MODE |= (0<<1)|(0<<0);    
	GPIOD_ODR = 0X00;
	while(1)
	{
					while((GPIOA_IDR & 0x01) == 1) 
					{
						m++; 
					}
					if(m>3000)
				    {
					m=0;
					GPIOD_ODR |= 1<<14;
					for(l=0;l<10000;l++);
					}
					else if(m>0 && m<3000)
					{
					n=1;
                    }
					else
					{

					}
						if(n==1)
						{

					    

				        for(n=0;n<5;n++) 
						{
						GPIOD_ODR |= 1<<12;
						for(l=0;l<2000;l++);
						GPIOD_ODR &= ~(1<<12);
						for(l=0;l>=2000;l++);
						}
						for(n=0;n<5;n++) 
						{
						GPIOD_ODR |= 1<<13;
						for(l=0;l<2000;l++);
						GPIOD_ODR &= ~(1<<13);
					    for(l=0;l>=2000;l++);
						}
						for(n=0;n<5;n++) 
						{
						GPIOD_ODR |= 1<<15;
						for(l=0;l<2000;l++);
						GPIOD_ODR &= ~(1<<15);
						for(l=0;l>=2000;l++);
						}

						

						for(n=0;n<5;n++)  
						{
						GPIOD_ODR |= 1<<12;
						for(l=0;l<4000;l++);
						GPIOD_ODR &= ~(1<<12);
						for(l=0;l>=4000;l++);
						}
						for(n=0;n<5;n++)  
						{
						GPIOD_ODR |= 1<<13;
						for(l=0;l<4000;l++);
						GPIOD_ODR &= ~(1<<13);
						for(l=0;l>=4000;l++);
						}
						for(n=0;n<5;n++) 
						{
						GPIOD_ODR |= 1<<15;
						for(l=0;l<4000;l++);
					    GPIOD_ODR &= ~(1<<15);
						for(l=0;l>=4000;l++);
						}
					

						for(n=0;n<5;n++)  
					    {
						GPIOD_ODR |= 1<<12;
						for(l=0;l<8000;l++);
						GPIOD_ODR &= ~(1<<12);
						for(l=0;l>=8000;l++);
						}
						for(n=0;n<5;n++)  
						{
						GPIOD_ODR |= 1<<13;
						for(l=0;l<8000;l++);
						GPIOD_ODR &= ~(1<<13);
						for(l=0;l>=8000;l++);
						}
						for(n=0;n<5;n++)  
						{
						GPIOD_ODR |= 1<<15;
						for(l=0;l<8000;l++);
						GPIOD_ODR &= ~(1<<15);
						for(l=0;l>=8000;l++);
						}

						}


	}
	return 0;
}
