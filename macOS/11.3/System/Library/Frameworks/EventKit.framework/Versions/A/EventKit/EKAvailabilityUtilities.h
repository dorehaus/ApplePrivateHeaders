/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/EventKit.framework/Versions/A/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface EKAvailabilityUtilities : NSObject
+(int)CALFreeBusyTypeFromEKAvailType:(long long)arg1 ;
+(id)getCALFreeBusyFromEKSpans:(id)arg1 inRange:(id)arg2 ;
+(long long)_orderForType:(long long)arg1 ;
+(char)showTypeAsBusy:(long long)arg1 ;
+(int)leastAvailabileFreeBusyTypeForArray:(id)arg1 ;
+(id)getCALFreeBusyFromResults:(id)arg1 forAttendees:(id)arg2 inRange:(id)arg3 ;
+(long long)summarizedAvailabilityTypeForSpans:(id)arg1 ;
+(char)spansIncludeBusyPeriod:(id)arg1 ;
@end

