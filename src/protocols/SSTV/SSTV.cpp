#include "SSTV.h"

const SSTVMode_t Scottie1 {
  .visCode = SSTV_SCOTTIE_1,
  .width = 320,
  .height = 256,
  .scanPixelLen = 432,
  .numTones = 7,
  .tones = {
    { .type = tone_t::GENERIC,    .len = 1500, .freq = 1500 },
    { .type = tone_t::SCAN_GREEN, .len = 0,    .freq = 0    },
    { .type = tone_t::GENERIC,    .len = 1500, .freq = 1500 },
    { .type = tone_t::SCAN_BLUE,  .len = 0,    .freq = 0    },
    { .type = tone_t::GENERIC,    .len = 9000, .freq = 1200 },
    { .type = tone_t::GENERIC,    .len = 1500, .freq = 1500 },
    { .type = tone_t::SCAN_RED,   .len = 0,    .freq = 0    }
  }
};

const SSTVMode_t Scottie2 {
  .visCode = SSTV_SCOTTIE_2,
  .width = 320,
  .height = 256,
  .scanPixelLen = 275,
  .numTones = 7,
  .tones = {
    { .type = tone_t::GENERIC,    .len = 1500, .freq = 1500 },
    { .type = tone_t::SCAN_GREEN, .len = 0,    .freq = 0    },
    { .type = tone_t::GENERIC,    .len = 1500, .freq = 1500 },
    { .type = tone_t::SCAN_BLUE,  .len = 0,    .freq = 0    },
    { .type = tone_t::GENERIC,    .len = 9000, .freq = 1200 },
    { .type = tone_t::GENERIC,    .len = 1500, .freq = 1500 },
    { .type = tone_t::SCAN_RED,   .len = 0,    .freq = 0    }
  }
};

const SSTVMode_t ScottieDX {
  .visCode = SSTV_SCOTTIE_DX,
  .width = 320,
  .height = 256,
  .scanPixelLen = 1080,
  .numTones = 7,
  .tones = {
    { .type = tone_t::GENERIC,    .len = 1500, .freq = 1500 },
    { .type = tone_t::SCAN_GREEN, .len = 0,    .freq = 0    },
    { .type = tone_t::GENERIC,    .len = 1500, .freq = 1500 },
    { .type = tone_t::SCAN_BLUE,  .len = 0,    .freq = 0    },
    { .type = tone_t::GENERIC,    .len = 9000, .freq = 1200 },
    { .type = tone_t::GENERIC,    .len = 1500, .freq = 1500 },
    { .type = tone_t::SCAN_RED,   .len = 0,    .freq = 0    }
  }
};

const SSTVMode_t Martin1 {
  .visCode = SSTV_MARTIN_1,
  .width = 320,
  .height = 256,
  .scanPixelLen = 458,
  .numTones = 8,
  .tones = {
    { .type = tone_t::GENERIC,    .len = 4862, .freq = 1200 },
    { .type = tone_t::GENERIC,    .len = 572,  .freq = 1500 },
    { .type = tone_t::SCAN_GREEN, .len = 0,    .freq = 0    },
    { .type = tone_t::GENERIC,    .len = 572,  .freq = 1500 },
    { .type = tone_t::SCAN_BLUE,  .len = 0,    .freq = 0    },
    { .type = tone_t::GENERIC,    .len = 572,  .freq = 1500 },
    { .type = tone_t::SCAN_RED,   .len = 0,    .freq = 0    },
    { .type = tone_t::GENERIC,    .len = 572,  .freq = 1500 }
  }
};

const SSTVMode_t Martin2 {
  .visCode = SSTV_MARTIN_2,
  .width = 320,
  .height = 256,
  .scanPixelLen = 229,
  .numTones = 8,
  .tones = {
    { .type = tone_t::GENERIC,    .len = 4862, .freq = 1200 },
    { .type = tone_t::GENERIC,    .len = 572,  .freq = 1500 },
    { .type = tone_t::SCAN_GREEN, .len = 0,    .freq = 0    },
    { .type = tone_t::GENERIC,    .len = 572,  .freq = 1500 },
    { .type = tone_t::SCAN_BLUE,  .len = 0,    .freq = 0    },
    { .type = tone_t::GENERIC,    .len = 572,  .freq = 1500 },
    { .type = tone_t::SCAN_RED,   .len = 0,    .freq = 0    },
    { .type = tone_t::GENERIC,    .len = 572,  .freq = 1500 }
  }
};

const SSTVMode_t Wrasse {
  .visCode = SSTV_WRASSE_SC2_180,
  .width = 320,
  .height = 256,
  .scanPixelLen = 734,
  .numTones = 5,
  .tones = {
    { .type = tone_t::GENERIC,    .len = 5523, .freq = 1200 },
    { .type = tone_t::GENERIC,    .len = 500,  .freq = 1500 },
    { .type = tone_t::SCAN_RED,   .len = 0,    .freq = 0    },
    { .type = tone_t::SCAN_GREEN, .len = 0,    .freq = 0    },
    { .type = tone_t::SCAN_BLUE,  .len = 0,    .freq = 0    }
  }
};

const SSTVMode_t PasokonP3 {
  .visCode = SSTV_PASOKON_P3,
  .width = 640,
  .height = 496,
  .scanPixelLen = 208,
  .numTones = 7,
  .tones = {
    { .type = tone_t::GENERIC,    .len = 5208, .freq = 1200 },
    { .type = tone_t::GENERIC,    .len = 1042, .freq = 1500 },
    { .type = tone_t::SCAN_RED,   .len = 0,    .freq = 0    },
    { .type = tone_t::GENERIC,    .len = 1042, .freq = 1500 },
    { .type = tone_t::SCAN_GREEN, .len = 0,    .freq = 0    },
    { .type = tone_t::GENERIC,    .len = 1042, .freq = 1500 },
    { .type = tone_t::SCAN_BLUE,  .len = 0,    .freq = 0    }
  }
};

const SSTVMode_t PasokonP5 {
  .visCode = SSTV_PASOKON_P5,
  .width = 640,
  .height = 496,
  .scanPixelLen = 312,
  .numTones = 7,
  .tones = {
    { .type = tone_t::GENERIC,    .len = 7813, .freq = 1200 },
    { .type = tone_t::GENERIC,    .len = 1563, .freq = 1500 },
    { .type = tone_t::SCAN_RED,   .len = 0,    .freq = 0    },
    { .type = tone_t::GENERIC,    .len = 1563, .freq = 1500 },
    { .type = tone_t::SCAN_GREEN, .len = 0,    .freq = 0    },
    { .type = tone_t::GENERIC,    .len = 1563, .freq = 1500 },
    { .type = tone_t::SCAN_BLUE,  .len = 0,    .freq = 0    }
  }
};

const SSTVMode_t PasokonP7 {
  .visCode = SSTV_PASOKON_P7,
  .width = 640,
  .height = 496,
  .scanPixelLen = 417,
  .numTones = 7,
  .tones = {
    { .type = tone_t::GENERIC,    .len = 10417, .freq = 1200 },
    { .type = tone_t::GENERIC,    .len = 2083,  .freq = 1500 },
    { .type = tone_t::SCAN_RED,   .len = 0,     .freq = 0    },
    { .type = tone_t::GENERIC,    .len = 2083,  .freq = 1500 },
    { .type = tone_t::SCAN_GREEN, .len = 0,     .freq = 0    },
    { .type = tone_t::GENERIC,    .len = 2083,  .freq = 1500 },
    { .type = tone_t::SCAN_BLUE,  .len = 0,     .freq = 0    }
  }
};

SSTVClient::SSTVClient(PhysicalLayer* phy) {
  _phy = phy;
}

int16_t SSTVClient::begin(float base, SSTVMode_t mode, float correction) {
  // save mode
  _mode = mode;

  // apply correction factor to all timings
  _mode.scanPixelLen *= correction;
  for(uint8_t i = 0; i < _mode.numTones; i++) {
    _mode.tones[i].len *= correction;
  }

  // calculate 24-bit frequency
  _base = (base * 1000000.0) / _phy->getFreqStep();

  // set module frequency deviation to 0
  int16_t state = _phy->setFrequencyDeviation(0);

  return(state);
}

void SSTVClient::idle() {
  tone(SSTV_TONE_LEADER);
}

void SSTVClient::sendHeader() {
  // save first header flag for Scottie modes
  _firstLine = true;

  // send the first part of header (leader-break-leader)
  tone(SSTV_TONE_LEADER, SSTV_HEADER_LEADER_LENGTH);
  tone(SSTV_TONE_BREAK, SSTV_HEADER_BREAK_LENGTH);
  tone(SSTV_TONE_LEADER, SSTV_HEADER_LEADER_LENGTH);

  // VIS start bit
  tone(SSTV_TONE_BREAK, SSTV_HEADER_BIT_LENGTH);

  // VIS code
  uint8_t parityCount = 0;
  for(uint8_t mask = 0x01; mask < 0x80; mask <<= 1) {
    if(_mode.visCode & mask) {
      tone(SSTV_TONE_VIS_1, SSTV_HEADER_BIT_LENGTH);
      parityCount++;
    } else {
      tone(SSTV_TONE_VIS_0, SSTV_HEADER_BIT_LENGTH);
    }
  }

  // VIS parity
  if(parityCount % 2 == 0) {
    // even parity
    tone(SSTV_TONE_VIS_0, SSTV_HEADER_BIT_LENGTH);
  } else {
    // odd parity
    tone(SSTV_TONE_VIS_1, SSTV_HEADER_BIT_LENGTH);
  }

  // VIS stop bit
  tone(SSTV_TONE_BREAK, SSTV_HEADER_BIT_LENGTH);
}

void SSTVClient::sendLine(uint32_t* imgLine) {
  // check first line flag in Scottie modes
  if(_firstLine && ((_mode.visCode == SSTV_SCOTTIE_1) || (_mode.visCode == SSTV_SCOTTIE_2) || (_mode.visCode == SSTV_SCOTTIE_DX))) {
    _firstLine = false;

    // send start sync tone
    tone(SSTV_TONE_BREAK, 9000);
  }

  // send all tones in sequence
  for(uint8_t i = 0; i < _mode.numTones; i++) {
    if((_mode.tones[i].type == tone_t::GENERIC) && (_mode.tones[i].len > 0)) {
      // sync/porch tones
      tone(_mode.tones[i].freq, _mode.tones[i].len);
    } else {
      // scan lines
      for(uint16_t j = 0; j < _mode.width; j++) {
        uint32_t color = imgLine[j];
        switch(_mode.tones[i].type) {
          case(tone_t::SCAN_RED):
            color &= 0x00FF0000;
            color >>= 16;
            break;
          case(tone_t::SCAN_GREEN):
            color &= 0x0000FF00;
            color >>= 8;
            break;
          case(tone_t::SCAN_BLUE):
            color &= 0x000000FF;
            break;
          case(tone_t::GENERIC):
            break;
        }
        tone(SSTV_TONE_BRIGHTNESS_MIN + ((float)color * 3.1372549), _mode.scanPixelLen);
      }
    }
  }
}

uint16_t SSTVClient::getPictureHeight() {
  return(_mode.height);
}

void SSTVClient::tone(float freq, uint32_t len) {
  uint32_t start = micros();
  _phy->transmitDirect(_base + (freq / _phy->getFreqStep()));
  while(micros() - start < len);
}
