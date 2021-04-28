/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Safari/Safari-Structs.h>
@class NSTimer;

@interface TrackingDataControllerObjCAdapter : NSObject {

	TrackingDataController* _trackingDataController;
	NSTimer* _cookieUpdateCoalescingTimer;

}
-(void)dealloc;
-(void)invalidateCookieUpdateCoalescingTimer;
-(void)acceptCookiesPolicyChangedHandler:(id)arg1 ;
-(void)_updateCookiesTimerFired:(id)arg1 ;
-(id)initWithTrackingDataController:(TrackingDataController*)arg1 ;
-(void)registerForBlockCookiesPolicyChangeNotifications;
-(void)refreshCookieUpdateCoalescingTimer;
@end

