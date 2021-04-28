/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/Versions/A/LocationSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LocationSupport/CLIntersiloService.h>
#import <libobjc.A.dylib/CLSettingsManagerProtocol.h>

@class NSMutableSet, NSMutableDictionary, NSString;

@interface CLSettingsManagerInternal : CLIntersiloService <CLSettingsManagerProtocol> {

	NSMutableSet* _clients;
	NSMutableDictionary* _settingsDictionary;

}

@property (retain) NSMutableSet * clients;                                //@synthesize clients=_clients - In the implementation block
@property (retain) NSMutableDictionary * settingsDictionary;              //@synthesize settingsDictionary=_settingsDictionary - In the implementation block
@property (assign,nonatomic) char valid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2 ;
+(void)performSyncOnSilo:(id)arg1 invoker:(/*^block*/id)arg2 ;
+(id)getSilo;
-(void)flush;
-(NSMutableSet *)clients;
-(void)refresh;
-(void)setClients:(NSMutableSet *)arg1 ;
-(void)beginService;
-(void)endService;
-(NSMutableDictionary *)settingsDictionary;
-(void)unregisterForUpdates:(R)arg1 :(id)arg2 ;
-(id)syncgetSettingsAndRegisterForUpdates:(R)arg1 :(id)arg2 ;
-(id)syncgetSetValue:(id)arg1 forKey:(id)arg2 withoutNotifying:(R)arg3 :(id)arg4 ;
-(void)setSettingsDictionary:(NSMutableDictionary *)arg1 ;
-(void)updateClientsWithDictionary:(id)arg1 ;
@end

