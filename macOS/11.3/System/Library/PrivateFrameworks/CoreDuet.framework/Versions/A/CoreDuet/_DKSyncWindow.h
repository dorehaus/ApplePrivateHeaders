/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/Versions/A/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _DKEvent, NSDate;

@interface _DKSyncWindow : NSObject <NSCopying> {

	_DKEvent* _event;
	NSDate* _startDate;
	NSDate* _endDate;

}
+(id)choppedWindowsFromSortedNormalizedWindows:(id)arg1 betweenWindowMinimumDate:(id)arg2 andWindowMaximumDate:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(long long)compare:(id)arg1 ;
@end

