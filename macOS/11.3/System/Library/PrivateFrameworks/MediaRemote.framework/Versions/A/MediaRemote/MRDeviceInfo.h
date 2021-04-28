/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSArray, _MRDeviceInfoMessageProtobuf, NSDictionary;

@interface MRDeviceInfo : NSObject <NSCopying> {

	char _hasDeviceClass;
	char _hasProtocolVersion;
	char _hasGroupedDeviceCount;
	char _hasSharedQueueVersion;
	char _hasGroupLogicalDeviceCount;
	char _supportsSystemPairing;
	char _hasSupportsSystemPairing;
	char _supportsACL;
	char _hasSupportsACL;
	char _supportsSharedQueue;
	char _hasSupportsSharedQueue;
	char _supportsExtendedMotion;
	char _hasSupportsExtendedMotion;
	char _tightSyncGroup;
	char _hasTightSyncGroup;
	char _pairingAllowed;
	char _hasPairingAllowed;
	char _proxyGroupPlayer;
	char _hasProxyGroupPlayer;
	char _connected;
	char _hasConnected;
	char _groupLeader;
	char _hasGroupLeader;
	char _airPlayActive;
	char _hasAirPlayActive;
	char _clusterAware;
	unsigned _clusterType;
	long long _deviceClass;
	unsigned long long _protocolVersion;
	unsigned long long _groupedDeviceCount;
	unsigned long long _sharedQueueVersion;
	unsigned long long _groupLogicalDeviceCount;
	NSString* _name;
	NSString* _identifier;
	NSString* _localizedModelName;
	NSString* _buildVersion;
	NSString* _bundleIdentifier;
	NSString* _bundleVersion;
	NSString* _systemMediaApplication;
	NSString* _systemPodcastApplication;
	NSString* _deviceUID;
	NSString* _localReceiverPairingIdentity;
	NSString* _managedConfigurationDeviceIdentifier;
	NSString* _tightSyncUID;
	NSString* _groupUID;
	NSString* _groupName;
	NSString* _senderDefaultGroupUID;
	NSData* _bluetoothAddress;
	NSArray* _groupedDevices;
	NSArray* _airPlayReceivers;
	NSString* _linkAgent;
	NSString* _clusterID;
	NSString* _clusterLeaderID;
	NSString* _modelID;

}

@property (nonatomic,readonly) _MRDeviceInfoMessageProtobuf * protobuf; 
@property (getter=isCompanion,nonatomic,readonly) char companion; 
@property (getter=isGizmo,nonatomic,readonly) char gizmo; 
@property (assign,nonatomic) long long deviceClass;                                        //@synthesize deviceClass=_deviceClass - In the implementation block
@property (assign,nonatomic) char hasDeviceClass;                                          //@synthesize hasDeviceClass=_hasDeviceClass - In the implementation block
@property (assign,nonatomic) unsigned long long protocolVersion;                           //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (assign,nonatomic) char hasProtocolVersion;                                      //@synthesize hasProtocolVersion=_hasProtocolVersion - In the implementation block
@property (assign,nonatomic) unsigned long long groupedDeviceCount;                        //@synthesize groupedDeviceCount=_groupedDeviceCount - In the implementation block
@property (assign,nonatomic) char hasGroupedDeviceCount;                                   //@synthesize hasGroupedDeviceCount=_hasGroupedDeviceCount - In the implementation block
@property (assign,nonatomic) unsigned long long sharedQueueVersion;                        //@synthesize sharedQueueVersion=_sharedQueueVersion - In the implementation block
@property (assign,nonatomic) char hasSharedQueueVersion;                                   //@synthesize hasSharedQueueVersion=_hasSharedQueueVersion - In the implementation block
@property (assign,nonatomic) unsigned long long groupLogicalDeviceCount;                   //@synthesize groupLogicalDeviceCount=_groupLogicalDeviceCount - In the implementation block
@property (assign,nonatomic) char hasGroupLogicalDeviceCount;                              //@synthesize hasGroupLogicalDeviceCount=_hasGroupLogicalDeviceCount - In the implementation block
@property (assign,nonatomic) char supportsSystemPairing;                                   //@synthesize supportsSystemPairing=_supportsSystemPairing - In the implementation block
@property (assign,nonatomic) char hasSupportsSystemPairing;                                //@synthesize hasSupportsSystemPairing=_hasSupportsSystemPairing - In the implementation block
@property (assign,nonatomic) char supportsACL;                                             //@synthesize supportsACL=_supportsACL - In the implementation block
@property (assign,nonatomic) char hasSupportsACL;                                          //@synthesize hasSupportsACL=_hasSupportsACL - In the implementation block
@property (assign,nonatomic) char supportsSharedQueue;                                     //@synthesize supportsSharedQueue=_supportsSharedQueue - In the implementation block
@property (assign,nonatomic) char hasSupportsSharedQueue;                                  //@synthesize hasSupportsSharedQueue=_hasSupportsSharedQueue - In the implementation block
@property (assign,nonatomic) char supportsExtendedMotion;                                  //@synthesize supportsExtendedMotion=_supportsExtendedMotion - In the implementation block
@property (assign,nonatomic) char hasSupportsExtendedMotion;                               //@synthesize hasSupportsExtendedMotion=_hasSupportsExtendedMotion - In the implementation block
@property (assign,getter=isTightSyncGroup,nonatomic) char tightSyncGroup;                  //@synthesize tightSyncGroup=_tightSyncGroup - In the implementation block
@property (assign,nonatomic) char hasTightSyncGroup;                                       //@synthesize hasTightSyncGroup=_hasTightSyncGroup - In the implementation block
@property (assign,getter=isPairingAllowed,nonatomic) char pairingAllowed;                  //@synthesize pairingAllowed=_pairingAllowed - In the implementation block
@property (assign,nonatomic) char hasPairingAllowed;                                       //@synthesize hasPairingAllowed=_hasPairingAllowed - In the implementation block
@property (assign,getter=isProxyGroupPlayer,nonatomic) char proxyGroupPlayer;              //@synthesize proxyGroupPlayer=_proxyGroupPlayer - In the implementation block
@property (assign,nonatomic) char hasProxyGroupPlayer;                                     //@synthesize hasProxyGroupPlayer=_hasProxyGroupPlayer - In the implementation block
@property (assign,getter=isConnected,nonatomic) char connected;                            //@synthesize connected=_connected - In the implementation block
@property (assign,nonatomic) char hasConnected;                                            //@synthesize hasConnected=_hasConnected - In the implementation block
@property (assign,getter=isGroupLeader,nonatomic) char groupLeader;                        //@synthesize groupLeader=_groupLeader - In the implementation block
@property (assign,nonatomic) char hasGroupLeader;                                          //@synthesize hasGroupLeader=_hasGroupLeader - In the implementation block
@property (assign,getter=isAirPlayActive,nonatomic) char airPlayActive;                    //@synthesize airPlayActive=_airPlayActive - In the implementation block
@property (assign,nonatomic) char hasAirPlayActive;                                        //@synthesize hasAirPlayActive=_hasAirPlayActive - In the implementation block
@property (nonatomic,copy) NSString * name;                                                //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * localizedModelName;                                  //@synthesize localizedModelName=_localizedModelName - In the implementation block
@property (nonatomic,copy) NSString * buildVersion;                                        //@synthesize buildVersion=_buildVersion - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                                    //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bundleVersion;                                       //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (nonatomic,copy) NSString * systemMediaApplication;                              //@synthesize systemMediaApplication=_systemMediaApplication - In the implementation block
@property (nonatomic,copy) NSString * systemPodcastApplication;                            //@synthesize systemPodcastApplication=_systemPodcastApplication - In the implementation block
@property (nonatomic,copy) NSString * deviceUID;                                           //@synthesize deviceUID=_deviceUID - In the implementation block
@property (nonatomic,copy) NSString * localReceiverPairingIdentity;                        //@synthesize localReceiverPairingIdentity=_localReceiverPairingIdentity - In the implementation block
@property (nonatomic,copy) NSString * managedConfigurationDeviceIdentifier;                //@synthesize managedConfigurationDeviceIdentifier=_managedConfigurationDeviceIdentifier - In the implementation block
@property (nonatomic,copy) NSString * tightSyncUID;                                        //@synthesize tightSyncUID=_tightSyncUID - In the implementation block
@property (nonatomic,copy) NSString * groupUID;                                            //@synthesize groupUID=_groupUID - In the implementation block
@property (nonatomic,copy) NSString * groupName;                                           //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,copy) NSString * senderDefaultGroupUID;                               //@synthesize senderDefaultGroupUID=_senderDefaultGroupUID - In the implementation block
@property (nonatomic,copy) NSData * bluetoothAddress;                                      //@synthesize bluetoothAddress=_bluetoothAddress - In the implementation block
@property (nonatomic,copy) NSArray * groupedDevices;                                       //@synthesize groupedDevices=_groupedDevices - In the implementation block
@property (nonatomic,copy) NSArray * airPlayReceivers;                                     //@synthesize airPlayReceivers=_airPlayReceivers - In the implementation block
@property (nonatomic,copy) NSString * linkAgent;                                           //@synthesize linkAgent=_linkAgent - In the implementation block
@property (nonatomic,copy) NSString * clusterID;                                           //@synthesize clusterID=_clusterID - In the implementation block
@property (nonatomic,copy) NSString * clusterLeaderID;                                     //@synthesize clusterLeaderID=_clusterLeaderID - In the implementation block
@property (assign,nonatomic) unsigned clusterType;                                         //@synthesize clusterType=_clusterType - In the implementation block
@property (assign,getter=isClusterAware,nonatomic) char clusterAware;                      //@synthesize clusterAware=_clusterAware - In the implementation block
@property (nonatomic,copy) NSString * modelID;                                             //@synthesize modelID=_modelID - In the implementation block
@property (nonatomic,copy,readonly) NSData * data; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,copy,readonly) NSString * minimalDescription; 
@property (nonatomic,readonly) MRDeviceInfo * skeleton; 
+(long long)deviceClass;
+(id)deviceInfosFromData:(id)arg1 ;
+(id)dataFromDeviceInfos:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(NSData *)data;
-(id)initWithData:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)bundleIdentifier;
-(NSString *)bundleVersion;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(char)isConnected;
-(void)setGroupName:(NSString *)arg1 ;
-(NSString *)groupName;
-(void)mergeFrom:(id)arg1 ;
-(char)isCompanion;
-(void)setConnected:(char)arg1 ;
-(long long)deviceClass;
-(NSString *)buildVersion;
-(void)setBuildVersion:(NSString *)arg1 ;
-(char)hasConnected;
-(NSString *)deviceUID;
-(void)setBundleVersion:(NSString *)arg1 ;
-(void)setDeviceClass:(long long)arg1 ;
-(unsigned long long)protocolVersion;
-(_MRDeviceInfoMessageProtobuf *)protobuf;
-(void)setProtocolVersion:(unsigned long long)arg1 ;
-(unsigned)clusterType;
-(void)setHasProtocolVersion:(char)arg1 ;
-(char)hasProtocolVersion;
-(NSString *)modelID;
-(NSString *)clusterID;
-(char)isGroupLeader;
-(char)hasDeviceClass;
-(void)setHasDeviceClass:(char)arg1 ;
-(void)setClusterType:(unsigned)arg1 ;
-(char)supportsSharedQueue;
-(id)initWithOutputDevice:(id)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(void)setLocalizedModelName:(NSString *)arg1 ;
-(NSString *)localizedModelName;
-(char)isProxyGroupPlayer;
-(MRDeviceInfo *)skeleton;
-(void)setModelID:(NSString *)arg1 ;
-(void)setDeviceUID:(NSString *)arg1 ;
-(char)isTightSyncGroup;
-(char)hasTightSyncGroup;
-(char)isPairingAllowed;
-(char)hasPairingAllowed;
-(char)supportsSystemPairing;
-(char)hasSupportsSystemPairing;
-(char)supportsACL;
-(char)hasSupportsACL;
-(char)hasSupportsSharedQueue;
-(unsigned long long)sharedQueueVersion;
-(char)hasSharedQueueVersion;
-(char)hasProxyGroupPlayer;
-(char)supportsExtendedMotion;
-(char)hasSupportsExtendedMotion;
-(unsigned long long)groupLogicalDeviceCount;
-(char)hasGroupLogicalDeviceCount;
-(char)hasGroupLeader;
-(char)isAirPlayActive;
-(char)hasAirPlayActive;
-(NSString *)systemMediaApplication;
-(NSString *)systemPodcastApplication;
-(NSString *)managedConfigurationDeviceIdentifier;
-(NSString *)tightSyncUID;
-(NSString *)groupUID;
-(NSString *)senderDefaultGroupUID;
-(NSData *)bluetoothAddress;
-(NSArray *)airPlayReceivers;
-(NSString *)linkAgent;
-(NSString *)clusterLeaderID;
-(char)isClusterAware;
-(NSArray *)groupedDevices;
-(NSString *)localReceiverPairingIdentity;
-(char)hasGroupedDeviceCount;
-(unsigned long long)groupedDeviceCount;
-(void)setGroupUID:(NSString *)arg1 ;
-(void)setProxyGroupPlayer:(char)arg1 ;
-(void)setAirPlayActive:(char)arg1 ;
-(void)setGroupLeader:(char)arg1 ;
-(void)setTightSyncUID:(NSString *)arg1 ;
-(void)setGroupedDeviceCount:(unsigned long long)arg1 ;
-(void)setSharedQueueVersion:(unsigned long long)arg1 ;
-(void)setGroupLogicalDeviceCount:(unsigned long long)arg1 ;
-(void)setSupportsSystemPairing:(char)arg1 ;
-(void)setSupportsACL:(char)arg1 ;
-(void)setSupportsSharedQueue:(char)arg1 ;
-(void)setSupportsExtendedMotion:(char)arg1 ;
-(void)setTightSyncGroup:(char)arg1 ;
-(void)setPairingAllowed:(char)arg1 ;
-(void)setSystemMediaApplication:(NSString *)arg1 ;
-(void)setSystemPodcastApplication:(NSString *)arg1 ;
-(void)setLocalReceiverPairingIdentity:(NSString *)arg1 ;
-(void)setManagedConfigurationDeviceIdentifier:(NSString *)arg1 ;
-(void)setSenderDefaultGroupUID:(NSString *)arg1 ;
-(void)setBluetoothAddress:(NSData *)arg1 ;
-(void)setGroupedDevices:(NSArray *)arg1 ;
-(void)setAirPlayReceivers:(NSArray *)arg1 ;
-(void)setLinkAgent:(NSString *)arg1 ;
-(void)setClusterID:(NSString *)arg1 ;
-(void)setClusterLeaderID:(NSString *)arg1 ;
-(void)setClusterAware:(char)arg1 ;
-(id)deltaDescriptionFromDeviceInfo:(id)arg1 minimal:(char)arg2 ;
-(void)setHasGroupedDeviceCount:(char)arg1 ;
-(void)setHasSharedQueueVersion:(char)arg1 ;
-(void)setHasGroupLogicalDeviceCount:(char)arg1 ;
-(void)setHasSupportsSystemPairing:(char)arg1 ;
-(void)setHasSupportsACL:(char)arg1 ;
-(void)setHasSupportsSharedQueue:(char)arg1 ;
-(void)setHasSupportsExtendedMotion:(char)arg1 ;
-(void)setHasTightSyncGroup:(char)arg1 ;
-(void)setHasPairingAllowed:(char)arg1 ;
-(void)setHasProxyGroupPlayer:(char)arg1 ;
-(void)setHasConnected:(char)arg1 ;
-(void)setHasGroupLeader:(char)arg1 ;
-(void)setHasAirPlayActive:(char)arg1 ;
-(NSString *)minimalDescription;
-(char)isGizmo;
-(id)deltaDescriptionFromDeviceInfo:(id)arg1 ;
-(id)minimalDeltaDescriptionFromDeviceInfo:(id)arg1 ;
@end

