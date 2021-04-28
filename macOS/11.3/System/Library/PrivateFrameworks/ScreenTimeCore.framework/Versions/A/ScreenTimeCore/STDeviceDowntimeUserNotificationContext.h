/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/Versions/A/ScreenTimeCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenTimeCore/STUserNotificationContext.h>

@class NSString;

@interface STDeviceDowntimeUserNotificationContext : STUserNotificationContext {

	NSString* _localizedUserNotificationBodyKey;

}

@property (nonatomic,copy) NSString * localizedUserNotificationBodyKey;              //@synthesize localizedUserNotificationBodyKey=_localizedUserNotificationBodyKey - In the implementation block
+(char)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)destinations;
-(void)customizeNotificationContent:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)setEndDateComponents:(id)arg1 referenceDate:(id)arg2 locale:(id)arg3 ;
-(void)setLocalizedUserNotificationBodyKey:(NSString *)arg1 ;
-(NSString *)localizedUserNotificationBodyKey;
-(void)setEndDateComponents:(id)arg1 referenceDate:(id)arg2 ;
-(id)notificationBundleIdentifier;
@end

