#include "ano-control-info.h"

void Ano_Send_InertialSensor(int16_t ax, int16_t ay, int16_t az, int16_t gx, int16_t gy, int16_t gz)
{
  uint8_t *sendData = malloc(13);
  sendData[0] = Little(ax);
  sendData[1] = Big(ax);

  sendData[2] = Little(ay);
  sendData[3] = Big(ay);

  sendData[4] = Little(az);
  sendData[5] = Big(az);

  sendData[6] = Little(gx);
  sendData[7] = Big(gx);

  sendData[8] = Little(gy);
  sendData[9] = Big(gy);
  
  sendData[10] = Little(gz);
  sendData[11] = Big(gz);

  sendData[12] = 0x00;

  Ano_SendData(ID_FC_INFO_INERTIAL_SENSOR,(const uint8_t *)sendData, 13);
}

void Ano_Send_CompassAndTemperature(int16_t mx, int16_t my, int16_t mz, int16_t tmp)
{
  uint8_t *sendData = malloc(9);
  sendData[0] = Little(mx);
  sendData[1] = Big(mx);

  sendData[2] = Little(my);
  sendData[3] = Big(my);

  sendData[4] = Little(mz);
  sendData[5] = Big(mz);

  sendData[6] = Little(tmp);
  sendData[7] = Big(tmp);

  sendData[8] = 0x00;

  Ano_SendData(ID_FC_INFO_COMPASS_TEMP_SENSOR,(const uint8_t *)sendData, 9);
}

void Ano_Send_EulerAngle(int16_t rol, int16_t pit, int16_t yaw)
{
  uint8_t *sendData = malloc(7);
  sendData[0] = Little(rol);
  sendData[1] = Big(rol);

  sendData[2] = Little(pit);
  sendData[3] = Big(pit);

  sendData[4] = Little(yaw);
  sendData[5] = Big(yaw);

  sendData[6] = 0x00;

  Ano_SendData(ID_FC_INFO_ATTITUDE_EULER_ANGLE,(const uint8_t *)sendData, 7);
}

void Ano_Send_Quaternion(int16_t qv0, int16_t qv1, int16_t qv2, int16_t qv3)
{
   uint8_t *sendData = malloc(9);
  sendData[0] = Little(qv0);
  sendData[1] = Big(qv0);

  sendData[2] = Little(qv1);
  sendData[3] = Big(qv1);

  sendData[4] = Little(qv2);
  sendData[5] = Big(qv2);

  sendData[6] = Little(qv3);
  sendData[7] = Big(qv3);

  sendData[8] = 0x00;

  Ano_SendData(ID_FC_INFO_ATTITUDE_QUATERNION,(const uint8_t *)sendData, 9);
}

void Ano_Send_Altitude(int16_t alt_bar, int16_t alt_add, int16_t alt_fu)
{
  uint8_t *sendData = malloc(7);
  sendData[0] = Little(alt_bar);
  sendData[1] = Big(alt_bar);

  sendData[2] = Little(alt_add);
  sendData[3] = Big(alt_add);

  sendData[4] = Little(alt_fu);
  sendData[5] = Big(alt_fu);

  sendData[6] = 0x00;

  Ano_SendData(ID_FC_INFO_ALTITUDE,(const uint8_t *)sendData, 7);
}