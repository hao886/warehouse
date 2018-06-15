#ifndef _DATAGET_H_
#define _DATAGET_H_


typedef struct()
{
	unsigned int radiationOneday;
	unsigned int radiationTwoday;
	         int landTemp1;
	         int landTemp2;
	         int landTemp3;
	         int landTemp4;
	         int landTemp5;
	         int envirTemp;
	unsigned int envirHumidity;
	         int polt;
	unsigned int artPressure;
	         int altitude;
	unsigned int windSpeed;
	unsigned int twoWindspeed;
	unsigned int tenWindspeed;
	unsigned int windDirection;
	unsigned int radiation1;
	unsigned int radiation2;
	unsigned int landHumidity;
	unsigned int power;
	unsigned int rainQuantity;
	unsigned int visibility;
	unsigned int tenVisibility;
	unsigned int sunlightDay;
	unsigned int co2;
	unsigned int campass;
	unsigned int PM2;
	unsigned int PM10;
	unsigned int noise;
	unsigned int sunlight;
	unsigned int NO2;
	unsigned int SO2;
	unsigned int O3;
	
}environment_status_t;



void environment_get_data(char *pBuf,int bufLen,env_data_ *pEuv)
{
	if(pBuf[1]!=0x03)
		return FALSE;
		
	else
		{
			environment_status_t.radiationOneday=pBuf[3]*256+pBuf[2];
			environment_status_t.radiationTwoday=pBuf[5]*256+pBuf[4];
			environment_status_t.landTemp1=(pBuf[7]<<8)|pBuf[6];	
			environment_status_t.landTemp2=(pBuf[9]<<8)|pBuf[8];
			environment_status_t.landTemp3=(pBuf[11]<<8)|pBuf[10];
			environment_status_t.landTemp4=(pBuf[13]<<8)|pBuf[12];
			environment_status_t.landTemp5=(pBuf[15]<<8)|pBuf[14];
			environment_status_t.envirTemp=(pBuf[17]<<8)|pBuf[16];
			environment_status_t.envirHumidity=pBuf[19]*256+pBuf[18];
			environment_status_t.polt=(pBuf[21]<<8)|pBuf[20];
			environment_status_t.artPressure=pBuf[23]*256+pBuf[22];
			environment_status_t.altitude=(pBuf[25]<<8)|pBuf[24];
			environment_status_t.windSpeed=pBuf[27]*256+pBuf[26];
			environment_status_t.twoWindspeed=pBuf[29]*256+pBuf[28];
			environment_status_t.tenWindspeed=pBuf[31]*256+pBuf[30];
			environment_status_t.windDirection=pBuf[33]*256+pBuf[32];
			environment_status_t.radiation1=pBuf[35]*256+pBuf[34];
			environment_status_t.radiation2=pBuf[37]*256+pBuf[36];
			environment_status_t.landHumidity=pBuf[39]*256+pBuf[38];
			environment_status_t.power=pBuf[41]*256+pBuf[40];
			environment_status_t.rainQuantity=pBuf[43]*256+pBuf[42];
			environment_status_t.visibility=pBuf[45]*256+pBuf[44];
			environment_status_t.tenVisibility=pBuf[47]*256+pBuf[46];
			environment_status_t.sunlightDay=pBuf[49]*256+pBuf[48];
			environment_status_t.co2=pBuf[51]*256+pBuf[50];
			environment_status_t.campass=pBuf[53]*256+pBuf[52];
			environment_status_t.PM2=pBuf[55]*256+pBuf[54];
			environment_status_t.PM10=pBuf[57]*256+pBuf[56];
			environment_status_t.noise=pBuf[59]*256+pBuf[58];
			environment_status_t.sunlight=pBuf[61]*256+pBuf[60];
			environment_status_t.NO2=pBuf[63]*256+pBuf[62];
			environment_status_t.SO2=pBuf[65]*256+pBuf[64];
			environment_status_t.O3=pBuf[67]*256+pBuf[66];
	  }
}





#endif