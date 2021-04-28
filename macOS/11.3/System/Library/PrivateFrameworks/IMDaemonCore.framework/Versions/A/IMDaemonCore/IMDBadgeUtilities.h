/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/Versions/A/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UNUserNotificationCenter, IMDefaults;

@interface IMDBadgeUtilities : NSObject {

	unsigned long long _unreadCount;
	long long _lastFailedMessageDate;
	char _showingFailure;
	char _isUnexpectedlyLogOut;
	char _addedObserverForUnexpectedlyLoggedOut;
	UNUserNotificationCenter* _notificationCenter;
	IMDefaults* _sharedDefaultsInstance;

}

@property (nonatomic,retain) UNUserNotificationCenter * notificationCenter;              //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,retain) IMDefaults * sharedDefaultsInstance;                        //@synthesize sharedDefaultsInstance=_sharedDefaultsInstance - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(UNUserNotificationCenter *)notificationCenter;
-(void)setNotificationCenter:(UNUserNotificationCenter *)arg1 ;
-(char)isInAppleStoreDemoMode;
-(void)_updateBadge;
-(id)initWithMessageStore:(id)arg1 ;
-(void)updateBadgeForUnreadCountChangeIfNeeded:(long long)arg1 ;
-(id)initWithMessageStore:(id)arg1 defaultsStore:(id)arg2 ;
-(void)_updateBadgeAndCancelPreviousUpdate;
-(char)_shouldShowFailureString;
-(void)_postBadgeString:(id)arg1 ;
-(void)_postBadgeNumber:(id)arg1 ;
-(IMDefaults *)sharedDefaultsInstance;
-(void)setSharedDefaultsInstance:(IMDefaults *)arg1 ;
@end

