#include <avr/io.h>

#include "Dio.h"


void Dio_WriteChannel(Dio_ChannelType ChannelId, Dio_LevelType Level)
{
	if (Dio_Pin_13 == ChannelId) {
		if (Dio_LevelType::Set == Level) {
			PORTB |= 1 << PB5;
		} else if (Dio_LevelType::Reset == Level) {
			PORTB &= ~(1 << PB5);
		} else {
			// TODO: Det error
		}
	}
}
