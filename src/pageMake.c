#include "fsdata.h";
#include "bmu.h";
void mainpage_assm(char *f){
	char buf[4];
strcpy(f,"<head><title>ELECTROVAYA BATTERY SYSTEM CONTROLLOR</title>");
strcat(f,"<meta http-equiv=\"refresh\" content=\"20\">\r\n");
strcat(f,"<html><head>");
strcat(f,"\r\n");
strcat(f,"<body>");
strcat(f,"\r\n");
strcat(f,"SOC: ");
	sprintf(buf,"%4.1f",(float)bmu[0].SOC/10);
strcat(f,buf);
strcat(f," %");

	strcat(f,"   Voltage: ");
		sprintf(buf,"%4.1f",(float)bmu[0].V_bmu/1000);
		strcat(f,buf);
	strcat(f,"   Current: ");
		sprintf(buf,"%4.1f",(float)bmu[0].I_bmu/1000);
		strcat(f,buf);
	strcat(f,"   max temp: ");
		sprintf(buf,"%4.1f",(float)bmu[0].ct_max);
		strcat(f,buf);
	strcat(f,"\r\n");
	strcat(f,"<br /><br>   cell_1: ");
		sprintf(buf,"%4.3f",(float)bmu[0].cv[0]/1000);
		strcat(f,buf);
	strcat(f,"<br /><br>	 cell_2: ");
		sprintf(buf,"%4.3f",(float)bmu[0].cv[1]/1000);
		strcat(f,buf);
	strcat(f,"<br/><br>	 cell_3: ");
		sprintf(buf,"%4.3f",(float)bmu[0].cv[2]/1000);
		strcat(f,buf);
	strcat(f,"<br/><br> cell_4: ");
		sprintf(buf,"%4.3f",(float)bmu[0].cv[3]/1000);
		strcat(f,buf);
			strcat(f,"<br/><br>	 cell_5: ");
		sprintf(buf,"%4.3f",(float)bmu[0].cv[4]/1000);
		strcat(f,buf);
	strcat(f,"<br/><br>	 cell_6: ");
		sprintf(buf,"%4.3f",(float)bmu[0].cv[5]/1000);
		strcat(f,buf);
	strcat(f,"<br/><br>	 cell_7: ");
		sprintf(buf,"%4.3f",(float)bmu[0].cv[6]/1000);
		strcat(f,buf);
	strcat(f,"<br/><br>	 cell_8: ");
		sprintf(buf,"%4.3f",(float)bmu[0].cv[7]/1000);
		strcat(f,buf);
	strcat(f,"<br/><br>	 cell_9: ");
		sprintf(buf,"%4.3f",(float)bmu[0].cv[8]/1000);
		strcat(f,buf);
	strcat(f,"<br/><br>	 cell_10: ");
		sprintf(buf,"%4.3f",(float)bmu[0].cv[9]/1000);
		strcat(f,buf);
	strcat(f,"<br/><br>	 cell_11: ");
		sprintf(buf,"%4.3f",(float)bmu[0].cv[10]/1000);
		strcat(f,buf);
	strcat(f,"<br/><br>	 cell_12: ");
		sprintf(buf,"%4.3f",(float)bmu[0].cv[11]/1000);
		strcat(f,buf);		
	strcat(f,"<br/><br>	 cell_13: ");
		sprintf(buf,"%4.3f",(float)bmu[0].cv[12]/1000);
		strcat(f,buf);
	strcat(f,"<br/><br>	 cell_14: ");
		sprintf(buf,"%4.3f",(float)bmu[0].cv[13]/1000);
		strcat(f,buf);
strcat(f,"\r\n");
strcat(f,"</body></html>");
strcat(f,"\r\n");
strcat(f,"</body></html>");
strcat(f,"\r\n");
}
void float2str(char intcnt,char decimalcnt,char *p){
	float s;
	  #if 0 
				ADCVal = ADC_GetConversionValue(ADC1);
        ADCVal = ADCVal/8;
        Digit1= ADCVal/100;
        Digit2= (ADCVal-(Digit1*100))/10;
        Digit3= ADCVal-(Digit1*100)-(Digit2*10);
        *((data_STM32F407ADC_html) + 2310) = 0x30 + Digit1;
        *((data_STM32F407ADC_html) + 2311) = 0x30 + Digit2; 
				*((data_STM32F407ADC_html) + 2312) = 0x30 + Digit3; 
	#endif
sprintf(p,"%4.3f",3.12);
}
