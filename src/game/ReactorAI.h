/*
 * Copyright (C) 2010 DiamondCore <http://easy-emu.de/>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef DIAMOND_REACTORAI_H
#define DIAMOND_REACTORAI_H

#include "CreatureAI.h"

class Unit;

class ReactorAI : public CreatureAI
{
    public:

        explicit ReactorAI(Creature *c) : CreatureAI(c), i_victimGuid(0) {}

        void MoveInLineOfSight(Unit *);
        void AttackStart(Unit *);
        void EnterEvadeMode();
        bool IsVisible(Unit *) const;

        void UpdateAI(const uint32);
        static int Permissible(const Creature *);

    private:
        uint64 i_victimGuid;
};
#endif
