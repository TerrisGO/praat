/* TextGridNavigator_enums.h
 *
 * Copyright (C) 2020 David Weenink
 *
 * This code is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or (at
 * your option) any later version.
 *
 * This code is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this work. If not, see <http://www.gnu.org/licenses/>.
 */

enums_begin (kBetweenTiersItem_orientation, 1)
	enums_add (kBetweenTiersItem_orientation, 1, IS_LEFT, U"is left")
	enums_add (kBetweenTiersItem_orientation, 2, TOUCHES_LEFT, U"touches left")
	enums_add (kBetweenTiersItem_orientation, 3, OVERLAPS_LEFT, U"overlaps left")
	enums_add (kBetweenTiersItem_orientation, 4, IS_INSIDE, U"is inside")
	enums_add (kBetweenTiersItem_orientation, 5, OVERLAPS_RIGHT, U"overlaps right")
	enums_add (kBetweenTiersItem_orientation, 6, TOUCHES_RIGHT, U"touches right")
	enums_add (kBetweenTiersItem_orientation, 7, IS_RIGHT, U"is right")
	enums_add (kBetweenTiersItem_orientation, 8, OVERLAPS_LEFT_AND_RIGHT, U"overlaps left and right")
	enums_add (kBetweenTiersItem_orientation, 9, TOUCHES_LEFT_AND_RIGHT, U"touches left and right")
	enums_add (kBetweenTiersItem_orientation,10, IS_OUTSIDE, U"is outside")
	enums_add (kBetweenTiersItem_orientation,11, IS_SOMEWHERE, U"is somewhere")
enums_end (kBetweenTiersItem_orientation, 11, OVERLAPS_LEFT_AND_RIGHT)

/* End of fileTextGridNavigator_enums_enums.h */
