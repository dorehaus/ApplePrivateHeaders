/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/Versions/A/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PTDomainServer.h>

@protocol PTDomainServer <NSObject>
@required
-(void)registerTestRecipeWithInfo:(id)arg1;
-(void)registerRootSettingsProxyDefinition:(id)arg1 forDomainID:(id)arg2;
-(void)registerDomainWithInfo:(id)arg1;

@end

#import <libobjc.A.dylib/PTSettingsKeyPathObserver.h>
#import <libobjc.A.dylib/_PTSettingsRestoreDefaultsObserver.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/PTEditingServerDataSource.h>
#import <libobjc.A.dylib/PTEditingServerDelegate.h>

@protocol OS_dispatch_queue;
@class NSDictionary, NSObject, NSMutableSet, NSMutableDictionary, NSString;

@interface PTDomainServer : NSObject <PTDomainServer, PTSettingsKeyPathObserver, _PTSettingsRestoreDefaultsObserver, NSXPCListenerDelegate, PTEditingServerDataSource, PTEditingServerDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _unregisteredClients;
	NSMutableDictionary* _clientsByDomainID;
	NSMutableDictionary* _domainInfoByID;
	NSMutableDictionary* _testRecipeInfoByID;
	NSMutableDictionary* _settingsArchivesByDomainID;
	NSMutableSet* _loadedDomainIDs;
	NSMutableDictionary* _localSettingsByClassName;
	NSMutableSet* _dirtyDomainIDs;
	char _persistScheduled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * domainInfoByID; 
@property (nonatomic,readonly) NSDictionary * testRecipeInfoByID; 
-(id)init;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)settings:(id)arg1 changedValueForKeyPath:(id)arg2 ;
-(void)registerTestRecipeWithInfo:(id)arg1 ;
-(void)registerRootSettingsProxyDefinition:(id)arg1 forDomainID:(id)arg2 ;
-(void)registerDomainWithInfo:(id)arg1 ;
-(void)settingsWillRestoreDefaults:(id)arg1 ;
-(void)settingsDidRestoreDefaults:(id)arg1 ;
-(id)_queue_archiveForDomainID:(id)arg1 ;
-(void)_queue_persistChanges;
-(id)_queue_proxyDefinitionForDomainID:(id)arg1 ;
-(void)_queue_applyArchiveValue:(id)arg1 forKeyPath:(id)arg2 domainID:(id)arg3 ;
-(void)_queue_restoreDefaultsForDomainID:(id)arg1 ;
-(void)_queue_invokeOutletAtKeyPath:(id)arg1 domainID:(id)arg2 ;
-(void)_queue_removeClient:(id)arg1 ;
-(void)_queue_sendArchiveValue:(id)arg1 forKeyPath:(id)arg2 domainID:(id)arg3 ;
-(void)_queue_schedulePersistChanges;
-(void)_queue_sendRestoreDefaultsForDomainID:(id)arg1 ;
-(id)rootSettingsArchiveForDomainID:(id)arg1 ;
-(id)rootSettingsProxyDefinitionForDomainID:(id)arg1 ;
-(id)activeTestRecipeID;
-(NSDictionary *)domainInfoByID;
-(NSDictionary *)testRecipeInfoByID;
-(void)applyArchiveValue:(id)arg1 forRootSettingsKeyPath:(id)arg2 domainID:(id)arg3 ;
-(void)restoreDefaultValuesForDomainID:(id)arg1 ;
-(void)invokeOutletAtKeyPath:(id)arg1 domainID:(id)arg2 ;
-(void)sendEvent:(long long)arg1 forTestRecipeID:(id)arg2 ;
-(void)setActiveTestRecipeID:(id)arg1 ;
-(id)localSettingsOfClass:(Class)arg1 ;
-(void)persistChanges;
@end

