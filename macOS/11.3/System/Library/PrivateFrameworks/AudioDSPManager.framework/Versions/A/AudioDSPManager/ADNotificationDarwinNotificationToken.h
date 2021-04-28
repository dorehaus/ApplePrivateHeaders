/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AudioDSPManager.framework/Versions/A/AudioDSPManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ADNotificationDarwinNotificationToken : NSObject {

	NSString* _notificationName;
	/*^block*/id _callback;

}

@property (nonatomic,readonly) NSString * notificationName;              //@synthesize notificationName=_notificationName - In the implementation block
@property (nonatomic,readonly) id callback;                              //@synthesize callback=_callback - In the implementation block
-(id)callback;
-(NSString *)notificationName;
-(id)initWithName:(id)arg1 callback:(/*^block*/id)arg2 ;
@end
