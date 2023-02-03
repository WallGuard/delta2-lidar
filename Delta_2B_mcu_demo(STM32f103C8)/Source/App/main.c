/********************************************************************************************************************/
//�ļ���:   Main.c
//����:     ������
//�汾:    
//����:     
//����:     
/********************************************************************************************************************/
#include "lidar.h"
#include "bsp_uart.h"

/********************************************************************************************************************/
//������
//����:     ��
//����ֵ:   int
/********************************************************************************************************************/
int main(void)
{ 
	uint16_t i=0;
	
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);
	
	USART1_Init(115200);
	
	Lidarscaninfo_Init();
	
  while(1)
	{
		ProcessUartRxData();
		if(lidarscaninfo.Result == LIDAR_GRAB_SUCESS)//ɨ�赽����һȦ
		{
			lidarscaninfo.Result=LIDAR_GRAB_ING;//�ָ�����ɨ��״̬
			
			/**************��ӡɨ��һȦ���ܵ�����lidarscaninfo.OneCriclePointNum*********************************************/
			printf("one circle point num:%d\n",lidarscaninfo.OneCriclePointNum);
		
			/*****lidarscaninfo.OneCriclePoint[lidarscaninfo.OneCriclePointNum]�����һȦ�ܵ����ĽǶȺ;���*********/
			
			//��ӡĳ������Ϣ��һȦ����㿪ʼ����ӡ��100����ĽǶȺ;���
			/*printf("point %d: angle=%5.2f,distance=%5.2fmm\n",100,
					lidarscaninfo.OneCriclePoint[100].Angle,
					lidarscaninfo.OneCriclePoint[100].Distance);*/
			
		}
	}
}
 /********************************************************************************************************************/

