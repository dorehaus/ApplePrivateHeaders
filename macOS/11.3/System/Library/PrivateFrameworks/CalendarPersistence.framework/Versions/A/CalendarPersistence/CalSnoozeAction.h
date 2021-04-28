/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CalSnoozeAction : NSObject {

	unsigned long long _type;
	long long _interval;
	unsigned long long _scale;
	NSString* _identifier;
	NSString* _title;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * title;                   //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) char relative; 
+(id)allSnoozeActions;
-(NSString *)identifier;
-(NSString *)title;
-(char)relative;
-(id)readyDateForAlarmNotification:(id)arg1 ;
-(id)expirationDateForAlarmNotification:(id)arg1 ;
-(id)initAbsoluteWithIdentifier:(id)arg1 title:(id)arg2 ;
-(id)initWithMinutesToStart:(long long)arg1 identifier:(id)arg2 title:(id)arg3 ;
-(id)initWithType:(unsigned long long)arg1 interval:(long long)arg2 scale:(unsigned long long)arg3 identifier:(id)arg4 title:(id)arg5 ;
@end

