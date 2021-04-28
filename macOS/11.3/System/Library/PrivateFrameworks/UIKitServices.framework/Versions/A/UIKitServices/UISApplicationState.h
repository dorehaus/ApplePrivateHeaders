/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/Versions/A/UIKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UISApplicationStateClient, NSDate;

@interface UISApplicationState : NSObject {

	NSString* _bundleIdentifier;
	UISApplicationStateClient* _client;

}

@property (assign,setter=_setUsesBackgroundNetwork:,nonatomic) char _usesBackgroundNetwork; 
@property (assign,setter=_setNextWakeDate:,nonatomic) NSDate * _nextWakeDate; 
@property (nonatomic,copy) id badgeValue; 
-(void)dealloc;
-(id)init;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(id)badgeValue;
-(void)setBadgeValue:(id)arg1 ;
-(id)initForCurrentApplication;
-(void)_setUsesBackgroundNetwork:(char)arg1 ;
-(char)_usesBackgroundNetwork;
-(void)_setMinimumBackgroundFetchInterval:(double)arg1 ;
-(void)_setNextWakeDate:(id)arg1 ;
-(NSDate *)_nextWakeDate;
@end

