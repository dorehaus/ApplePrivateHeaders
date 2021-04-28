/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/UARPControllerDelegateProtocol.h>

@protocol HMDAccessoryFirmwareUpdateManagerWingman;
@class NSURL, HMDHomeManager, NSMutableDictionary, HMDAccessoryFirmwareUpdateConcurrencyLogEventManager, NSMapTable, HMFUnfairLock, UARPController, NSString;

@interface HMDAccessoryFirmwareUpdateManager : NSObject <HMFLogging, UARPControllerDelegateProtocol> {

	NSURL* _documentationPath;
	HMDHomeManager* _homeManager;
	NSMutableDictionary* _activeSessions;
	HMDAccessoryFirmwareUpdateConcurrencyLogEventManager* _logEventManager;
	id<HMDAccessoryFirmwareUpdateManagerWingman> _wingman;
	NSMapTable* _registeredAccessories;
	NSMutableDictionary* _accessoryRetries;
	HMFUnfairLock* _lock;

}

@property (__weak,readonly) HMDHomeManager * homeManager;                                                           //@synthesize homeManager=_homeManager - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * activeSessions;                                                  //@synthesize activeSessions=_activeSessions - In the implementation block
@property (nonatomic,readonly) HMDAccessoryFirmwareUpdateConcurrencyLogEventManager * logEventManager;              //@synthesize logEventManager=_logEventManager - In the implementation block
@property (readonly) id<HMDAccessoryFirmwareUpdateManagerWingman> wingman;                                          //@synthesize wingman=_wingman - In the implementation block
@property (nonatomic,retain) NSMapTable * registeredAccessories;                                                    //@synthesize registeredAccessories=_registeredAccessories - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * accessoryRetries;                                                //@synthesize accessoryRetries=_accessoryRetries - In the implementation block
@property (nonatomic,readonly) long long defaultUpdateAssetSource; 
@property (nonatomic,readonly) HMFUnfairLock * lock;                                                                //@synthesize lock=_lock - In the implementation block
@property (nonatomic,readonly) UARPController * uarpController; 
@property (nonatomic,readonly) NSURL * documentationPath;                                                           //@synthesize documentationPath=_documentationPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)init;
-(HMFUnfairLock *)lock;
-(void)removeSession:(id)arg1 ;
-(void)firmwareStagingComplete:(id)arg1 assetID:(id)arg2 withStatus:(unsigned long long)arg3 ;
-(void)firmwareStagingProgress:(id)arg1 assetID:(id)arg2 bytesSent:(unsigned long long)arg3 bytesTotal:(unsigned long long)arg4 ;
-(char)sendMessageToAccessory:(id)arg1 uarpMsg:(id)arg2 error:(id*)arg3 ;
-(void)assetSolicitationComplete:(id)arg1 assetID:(id)arg2 withStatus:(unsigned long long)arg3 ;
-(void)assetAvailablityUpdateForAccessoryID:(id)arg1 assetID:(id)arg2 ;
-(void)firmwareUpdateResult:(id)arg1 vendorSpecificStatus:(unsigned)arg2 error:(id)arg3 ;
-(void)assetSolicitationProgress:(id)arg1 assetID:(id)arg2 bytesReceived:(unsigned long long)arg3 bytesTotal:(unsigned long long)arg4 ;
-(NSMutableDictionary *)activeSessions;
-(void)setActiveSessions:(NSMutableDictionary *)arg1 ;
-(HMDHomeManager *)homeManager;
-(id)initWithHomeManager:(id)arg1 ;
-(id)sessionForAccessory:(id)arg1 ;
-(void)registerAccessory:(id)arg1 ;
-(void)unregisterAccessory:(id)arg1 ;
-(id)UARPAccessoryForHMDAccessory:(id)arg1 ;
-(id)addSessionForUARPAccessory:(id)arg1 ;
-(void)changeAccessory:(id)arg1 source:(long long)arg2 path:(id)arg3 documentationPath:(id)arg4 userInitiatedStaging:(char)arg5 ;
-(id<HMDAccessoryFirmwareUpdateManagerWingman>)wingman;
-(UARPController *)uarpController;
-(HMDAccessoryFirmwareUpdateConcurrencyLogEventManager *)logEventManager;
-(char)isFirmwareUpdateRetryAllowedForAccessory:(id)arg1 forAsset:(id)arg2 ;
-(char)checkForUpdateForAccessory:(id)arg1 ;
-(void)resetFirmwareUpdateAccessoryRetryTracking:(id)arg1 forAsset:(id)arg2 ;
-(NSURL *)documentationPath;
-(id)initWithHomeManager:(id)arg1 wingman:(id)arg2 ;
-(void)handleAccessoryFirmwareVersionUpdateNotification:(id)arg1 ;
-(void)handleHomeAccessoryRemovedNotification:(id)arg1 ;
-(NSMapTable *)registeredAccessories;
-(void)_handleAccessoryFirmwareVersionUpdateNotification:(id)arg1 ;
-(char)deviceSupportsFirmwareUpdate;
-(long long)defaultUpdateAssetSource;
-(void)registerAccessory:(id)arg1 source:(long long)arg2 path:(id)arg3 ;
-(void)_handleHomeAccessoryRemovedNotification:(id)arg1 ;
-(id)sessionForUARPAccessory:(id)arg1 ;
-(id)findHMDHAPAccessoryWithUARPAccessory:(id)arg1 ;
-(char)hasAccessoryUsedAllFirmwareUpdateRetries:(id)arg1 forAsset:(id)arg2 ;
-(NSMutableDictionary *)accessoryRetries;
-(char)isAccessoryRegistered:(id)arg1 ;
-(void)setRegisteredAccessories:(NSMapTable *)arg1 ;
-(void)setAccessoryRetries:(NSMutableDictionary *)arg1 ;
@end

