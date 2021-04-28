/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/Versions/A/AppStoreComponents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ASCRebootstrapNotifier : NSObject {

	int _token;
	unsigned long long _rebootstrapCounterSnapshot;

}

@property (nonatomic,readonly) int token;                                                //@synthesize token=_token - In the implementation block
@property (assign,nonatomic) unsigned long long rebootstrapCounterSnapshot;              //@synthesize rebootstrapCounterSnapshot=_rebootstrapCounterSnapshot - In the implementation block
+(id)sharedNotifier;
-(void)dealloc;
-(int)token;
-(void)postLocalNotification;
-(id)_initSingleton;
-(void)postLocalNotificationIfNeeded;
-(unsigned long long)rebootstrapCounterSnapshot;
-(void)setRebootstrapCounterSnapshot:(unsigned long long)arg1 ;
@end

