/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/Versions/A/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface IMParentalControls : NSObject {

	char _shouldPostNotifications;
	char _active;
	char _disableAV;
	char _forceChatLogging;
	NSMutableDictionary* _parentalControls;

}

@property (nonatomic,readonly) NSMutableDictionary * _parentalControls;              //@synthesize parentalControls=_parentalControls - In the implementation block
@property (nonatomic,readonly) char _disableAV;                                      //@synthesize disableAV=_disableAV - In the implementation block
@property (nonatomic,readonly) char _forceChatLogging;                               //@synthesize forceChatLogging=_forceChatLogging - In the implementation block
@property (nonatomic,readonly) char active;                                          //@synthesize active=_active - In the implementation block
@property (nonatomic,readonly) char disableAV; 
@property (nonatomic,readonly) char forceChatLogging; 
@property (assign,nonatomic) char shouldPostNotifications;                           //@synthesize shouldPostNotifications=_shouldPostNotifications - In the implementation block
+(id)objectForKey:(id)arg1 ;
+(id)standardControls;
-(void)dealloc;
-(id)init;
-(char)active;
-(char)disableService:(id)arg1 ;
-(char)disableAccount:(id)arg1 ;
-(NSMutableDictionary *)_parentalControls;
-(char)okToConnectAccount:(id)arg1 ;
-(void)setShouldPostNotifications:(char)arg1 ;
-(void)_updateParentalSettings;
-(void)_managedPrefsNotification:(id)arg1 ;
-(id)_serviceWithName:(id)arg1 ;
-(char)disableAV;
-(char)forceChatLogging;
-(id)whitelistForService:(id)arg1 ;
-(char)forceWhitelistForService:(id)arg1 ;
-(char)accountIsEnabled:(id)arg1 ;
-(id)whitelistForAccount:(id)arg1 ;
-(char)forceWhitelistForAccount:(id)arg1 ;
-(char)accountHasWhitelist:(id)arg1 ;
-(char)shouldPostNotifications;
-(char)_disableAV;
-(char)_forceChatLogging;
@end

