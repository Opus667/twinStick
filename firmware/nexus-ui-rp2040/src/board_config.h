#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#define HOJA_DEVICE_NAME    "twinStick Nexus"
#define HOJA_DEVICE_HWREV   1

#define HOJA_INPUT_DRIVER   HOJA_INPUT_DRIVER_GPIO
#define HOJA_GPIO_PULLUP    true 

// Mapeamento corrigido conforme sua tabela 
#define GPIO_BUTTON_UP      4  // Mudado para bater com sua tabela
#define GPIO_BUTTON_DOWN    5  // Mudado para bater com sua tabela
#define GPIO_BUTTON_LEFT    6
#define GPIO_BUTTON_RIGHT   7
#define GPIO_BUTTON_A       9
#define GPIO_BUTTON_B       10
#define GPIO_BUTTON_X       11
#define GPIO_BUTTON_Y       12
#define GPIO_BUTTON_L       14
#define GPIO_BUTTON_R       15
#define GPIO_BUTTON_START   16
#define GPIO_BUTTON_SELECT  17
#define GPIO_BUTTON_BT      24
#define GPIO_BUTTON_PROFILE 25

// Comunicação I2C - Movida para os pinos 0 e 1 (TX/RX na tabela) 
#define HOJA_I2C_SDA        0 
#define HOJA_I2C_SCL        1
#define HOJA_I2C_INST       i2c0
#define HOJA_BASEBAND_ADDR  0x50

// --- Configuração de I2C (Necessário para o Bluetooth ESP32) ---
#define HOJA_I2C_BUS        i2c0        // Ou i2c1, dependendo da sua trilha
#define HOJA_I2C_SDA        0           // Pino GPIO para SDA
#define HOJA_I2C_SCL        1           // Pino GPIO para SCL
#define HOJA_I2C_SPEED      400000      // 400kHz

// --- Configuração de SPI (Necessário para o Driver MCP3002) ---
// Se você não estiver usando um chip MCP3002 externo, podemos desativar o driver.
// Mas para compilar agora, defina os pinos básicos:
#define HOJA_SPI_BUS        spi0
#define HOJA_SPI_SCK        18
#define HOJA_SPI_MOSI       19
#define HOJA_SPI_MISO       16
#define HOJA_SPI_CS         17

// --- Aliases que os drivers da HOJA procuram ---
#define i2c_instance        HOJA_I2C_BUS
#define spi_instance        HOJA_SPI_BUS
#define cs_gpio             HOJA_SPI_CS

#endif