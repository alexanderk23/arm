/*******************************************************************************
 *
 * Copyright (C) 2012 Jorge Aparicio <jorge.aparicio.r@gmail.com>
 *
 * This file is part of libstm32pp.
 *
 * libstm32pp is free software: you can redistribute it and/or modify it under
 * the terms of the GNU Lesser General Public License as published by the Free
 * Software Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * libstm32pp is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License
 * for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with libstm32pp. If not, see <http://www.gnu.org/licenses/>.
 *
 ******************************************************************************/

#pragma once

#include "common.hpp"

namespace afio {
  enum {
    ADDRESS = alias::APB2 + 0x0000
  };

  struct Registers
  {
      __RW
      u32 EVCR;       // 0x00: Event control
      __RW
      u32 MAPR;       // 0x04: Remap and debug configuration
      __RW
      u32 EXTICR[4];  // 0x08: External interrupt configuration
      u32 _RESERVED0;
      __RW
      u32 MAPR2;      // 0x1C: Remap and debug configuration 2
  };

  namespace exticr {
    enum {
      MASK = 0b1111,
      POSITION = 4
    };
    enum States {
      PA = 0,
      PB = 1,
      PC = 2,
      PD = 3,
      PE = 4,
      PF = 5,
      PG = 6,
    };
  }  // namespace exticr
}// namespace afio
