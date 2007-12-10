//
//  Movist
//
//  Copyright 2006, 2007 Yong-Hoe Kim. All rights reserved.
//      Yong-Hoe Kim  <cocoable@gmail.com>
//
//  This file is part of Movist.
//
//  Movist is free software; you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation; either version 3 of the License, or
//  (at your option) any later version.
//
//  Movist is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

#import "Movist.h"

@interface TimeTextField : NSTextField
{
    BOOL _clickable;
}

- (BOOL)isClickable;
- (void)setClickable:(BOOL)clickable;

@end

////////////////////////////////////////////////////////////////////////////////

@interface SeekSlider : NSSlider
{
}

- (float)indexDuration;
- (void)setIndexDuration:(float)duration;

- (BOOL)repeatEnabled;
- (float)repeatBeginning;
- (float)repeatEnd;
- (void)setRepeatBeginning:(float)beginning;
- (void)setRepeatEnd:(float)end;
- (void)clearRepeat;

@end

////////////////////////////////////////////////////////////////////////////////

@interface MainSeekSlider : SeekSlider {} @end
@interface FSSeekSlider : SeekSlider {} @end

@interface MainVolumeSlider : NSSlider {} @end
@interface FSVolumeSlider : NSSlider {} @end