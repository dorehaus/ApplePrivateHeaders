/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMFLocking, OS_dispatch_queue;
@class NSObject, NSString;

@interface HMDAppleAccountSettings : HMFObject <HMFLogging> {

	id<HMFLocking> _lock;
	char _homeEnabled;
	char _keychainSyncEnabled;
	char _managed;
	char _ephemeral;
	char _migrated;
	int _circleChangedNotificationToken;
	int _viewMembershipChangedNotificationToken;
	NSObject*<OS_dispatch_queue> _clientQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isEducationMode,readonly) char educationMode; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                 //@synthesize clientQueue=_clientQueue - In the implementation block
@property (assign,nonatomic) char migrated;                                              //@synthesize migrated=_migrated - In the implementation block
@property (assign,nonatomic) int circleChangedNotificationToken;                         //@synthesize circleChangedNotificationToken=_circleChangedNotificationToken - In the implementation block
@property (assign,nonatomic) int viewMembershipChangedNotificationToken;                 //@synthesize viewMembershipChangedNotificationToken=_viewMembershipChangedNotificationToken - In the implementation block
@property (getter=isHomeEnabled,readonly) char homeEnabled;                              //@synthesize homeEnabled=_homeEnabled - In the implementation block
@property (getter=isKeychainSyncEnabled,readonly) char keychainSyncEnabled;              //@synthesize keychainSyncEnabled=_keychainSyncEnabled - In the implementation block
@property (getter=isManaged,readonly) char managed;                                      //@synthesize managed=_managed - In the implementation block
@property (getter=isEphemeral,readonly) char ephemeral;                                  //@synthesize ephemeral=_ephemeral - In the implementation block
+(id)logCategory;
+(id)sharedSettings;
+(char)supportsCloudSettings;
-(void)dealloc;
-(id)init;
-(void)synchronize;
-(char)isEphemeral;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(char)isManaged;
-(id)attributeDescriptions;
-(char)isKeychainSyncEnabled;
-(char)isHomeEnabled;
-(char)isEducationMode;
-(void)__synchronize;
-(int)circleChangedNotificationToken;
-(int)viewMembershipChangedNotificationToken;
-(void)_notifyClientsOfUpdatedHomeState:(char)arg1 userInitiated:(char)arg2 ;
-(char)migrated;
-(void)__migrateHomePreferences;
-(void)__registerForKeychainChangeNotifications;
-(void)_notifyClientsOfUpdatedKeychainSyncState:(char)arg1 ;
-(void)__updateHomeEnabled:(char)arg1 userInitiated:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setMigrated:(char)arg1 ;
-(void)enableHome:(char)arg1 userInitiated:(char)arg2 ;
-(void)updateHomeEnabled:(char)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setCircleChangedNotificationToken:(int)arg1 ;
-(void)setViewMembershipChangedNotificationToken:(int)arg1 ;
@end

