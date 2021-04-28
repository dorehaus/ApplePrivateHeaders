/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/Versions/A/CoreDuetContext
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _CDSystemTimeCallbackScheduler : NSObject {

	NSString* _eventNameRoot;

}

@property (nonatomic,copy,readonly) NSString * eventNameRoot;              //@synthesize eventNameRoot=_eventNameRoot - In the implementation block
+(id)sharedInstance;
-(void)scheduleCallbackAtDate:(id)arg1 identifier:(id)arg2 requiringDeviceWake:(char)arg3 ;
-(void)unscheduleCallbackAtDate:(id)arg1 identifier:(id)arg2 requiringDeviceWake:(char)arg3 ;
-(id)initWithEventNameRoot:(id)arg1 ;
-(NSString *)eventNameRoot;
-(void)_handleCallbackAtDate:(id)arg1 ;
@end

