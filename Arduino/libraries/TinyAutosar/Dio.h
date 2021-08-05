#ifndef AUTOSAR_OS_UNO_DIO_H_
#define AUTOSAR_OS_UNO_DIO_H_

enum class Dio_ChannelType { Pin_13 };
enum class Dio_LevelType { Reset = 0, Set = 1 };

static const Dio_LevelType STD_LOW {Dio_LevelType::Reset};
static const Dio_LevelType STD_HIGH {Dio_LevelType::Set};

static const Dio_ChannelType Dio_Pin_13 {Dio_ChannelType::Pin_13};

void Dio_WriteChannel(Dio_ChannelType ChannelId, Dio_LevelType Level);

#endif /* AUTOSAR_OS_UNO_DIO_H_ */
