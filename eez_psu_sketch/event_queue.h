/*
 * EEZ PSU Firmware
 * Copyright (C) 2016-present, Envox d.o.o.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
 
#pragma once

namespace eez {
namespace psu {
namespace event_queue {

static const int EVENT_TYPE_NONE = 0;
static const int EVENT_TYPE_INFO = 1;
static const int EVENT_TYPE_WARNING = 2;
static const int EVENT_TYPE_ERROR = 3;

struct Event {
	uint32_t dateTime;
	uint8_t type;
	char message[35];
};

void init();

int getNumEvents();
void getEvent(int i, Event *e);

void pushEvent(uint8_t type,  const char *message);

void clear();

}
}
} // namespace eez::psu::event_queue
