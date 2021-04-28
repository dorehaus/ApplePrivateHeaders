/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/Versions/A/DiagnosticExtensionsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DEDNotifier.h>
#import <libobjc.A.dylib/DEDSecureArchiving.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_os_log;
@class DEDNotifierConfiguration, NSString, UNUserNotificationCenter, NSObject;

@interface DEDUserNotificationNotifier : NSObject <DEDNotifier, DEDSecureArchiving, NSSecureCoding> {

	DEDNotifierConfiguration* _config;
	NSString* _bugSessionIdentifier;
	UNUserNotificationCenter* _center;
	NSObject*<OS_os_log> _log;

}

@property (__weak) DEDNotifierConfiguration * config;               //@synthesize config=_config - In the implementation block
@property (retain) NSString * bugSessionIdentifier;                 //@synthesize bugSessionIdentifier=_bugSessionIdentifier - In the implementation block
@property (retain) UNUserNotificationCenter * center;               //@synthesize center=_center - In the implementation block
@property (retain) NSObject*<OS_os_log> log;                        //@synthesize log=_log - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)archivedClasses;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)identifier;
-(DEDNotifierConfiguration *)config;
-(void)setConfig:(DEDNotifierConfiguration *)arg1 ;
-(UNUserNotificationCenter *)center;
-(void)setCenter:(UNUserNotificationCenter *)arg1 ;
-(NSObject*<OS_os_log>)log;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(id)initWithConfiguration:(id)arg1 session:(id)arg2 ;
-(void)scheduleNotification;
-(NSString *)bugSessionIdentifier;
-(void)cancelNotification;
-(id)createNotificationCenter;
-(void)setBugSessionIdentifier:(NSString *)arg1 ;
@end

