#ifndef CONFIG_H
#define CONFIG_H

#define SAMPLE_RATE 16000
#define SECONDS 10
#define CHIPSELECTPIN 5

#define I2S_MIC_SD 4
#define I2S_MIC_WS 5
#define I2S_MIC_SCK 6

// MAX98357A pins:
// LRC:  I2S WS
// BCLK: I2S SCK
// DIN:  I2S SD
// GAIN: Use resistor to set
// SD:   L-R Output select
// GND:  Ground
// Vin:  3 - 5.5 VDC

// pin reference: https://dronebotworkshop.com/esp32-i2s/

#define I2S_SPEAKER_BCLK 7
#define I2S_SPEAKER_LRC 15
#define I2S_SPEAKER_DIN 16

#define BUFFERLEN 16
#define samplesRecordedFilePath "/samples_recorded.wav"
#define samplesRecordedFilePath_base64 "/samples_recorded_base64.txt"
#define samplesGoogleFilePath "/samples_Google.wav"
#define samplesGoogleFilePath_base64 "/samples_Google_base64.txt"
#define jsonCallFilePath "/json_call.txt"
#define jsonResponseFilePath "/json_response.txt"
#define SSID ""
#define PASSWORD ""
#define APIKEYGOOGLE ""
#define APIKEYOPENAI ""
#define REFRESHTOKENGOOGLE ""
#define CLIENTSECRETGOOGLE ""
#define CLIENTIDGOOGLE ""

#endif // CONFIG_H
