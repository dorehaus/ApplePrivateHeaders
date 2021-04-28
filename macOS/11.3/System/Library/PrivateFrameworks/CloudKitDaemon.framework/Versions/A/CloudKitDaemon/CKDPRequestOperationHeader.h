/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/Versions/A/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString, CKDPRequestOperationHeaderAssetAuthorizeGetRequestOptions, NSData, CKDPIdentifier, CKDPLocale;

@interface CKDPRequestOperationHeader : PBCodable <NSCopying> {

	unsigned long long _applicationConfigVersion;
	unsigned long long _deviceFlowControlBudget;
	unsigned long long _deviceFlowControlBudgetCap;
	unsigned long long _deviceProtocolVersion;
	unsigned long long _globalConfigVersion;
	unsigned long long _operationGroupQuantity;
	NSMutableArray* _activeThrottlingLabels;
	NSString* _applicationBundle;
	NSString* _applicationContainer;
	int _applicationContainerEnvironment;
	NSString* _applicationVersion;
	CKDPRequestOperationHeaderAssetAuthorizeGetRequestOptions* _assetAuthorizeGetRequestOptions;
	NSData* _clientChangeToken;
	NSString* _deviceAssignedName;
	NSString* _deviceFlowControlKey;
	float _deviceFlowControlRegeneration;
	NSString* _deviceHardwareID;
	NSString* _deviceHardwareVersion;
	CKDPIdentifier* _deviceIdentifier;
	NSString* _deviceLibraryName;
	NSString* _deviceLibraryVersion;
	NSString* _deviceSerialNumber;
	NSString* _deviceSoftwareVersion;
	NSString* _deviceUDID;
	int _isolationLevel;
	CKDPLocale* _locale;
	NSString* _mmcsProtocolVersion;
	NSString* _operationGroupName;
	NSMutableArray* _serviceIdentityKeyIDs;
	int _targetDatabase;
	NSString* _userIDContainerID;
	NSString* _userToken;
	char _deviceSoftwareIsAppleInternal;
	char _entitlementsValidated;
	SCD_Struct_CK15 _has;

}

@property (nonatomic,readonly) char hasUserToken; 
@property (nonatomic,retain) NSString * userToken;                                                                                     //@synthesize userToken=_userToken - In the implementation block
@property (nonatomic,readonly) char hasApplicationContainer; 
@property (nonatomic,retain) NSString * applicationContainer;                                                                          //@synthesize applicationContainer=_applicationContainer - In the implementation block
@property (nonatomic,readonly) char hasApplicationBundle; 
@property (nonatomic,retain) NSString * applicationBundle;                                                                             //@synthesize applicationBundle=_applicationBundle - In the implementation block
@property (nonatomic,readonly) char hasApplicationVersion; 
@property (nonatomic,retain) NSString * applicationVersion;                                                                            //@synthesize applicationVersion=_applicationVersion - In the implementation block
@property (assign,nonatomic) char hasApplicationConfigVersion; 
@property (assign,nonatomic) unsigned long long applicationConfigVersion;                                                              //@synthesize applicationConfigVersion=_applicationConfigVersion - In the implementation block
@property (assign,nonatomic) char hasGlobalConfigVersion; 
@property (assign,nonatomic) unsigned long long globalConfigVersion;                                                                   //@synthesize globalConfigVersion=_globalConfigVersion - In the implementation block
@property (nonatomic,readonly) char hasDeviceIdentifier; 
@property (nonatomic,retain) CKDPIdentifier * deviceIdentifier;                                                                        //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,readonly) char hasDeviceSoftwareVersion; 
@property (nonatomic,retain) NSString * deviceSoftwareVersion;                                                                         //@synthesize deviceSoftwareVersion=_deviceSoftwareVersion - In the implementation block
@property (nonatomic,readonly) char hasDeviceHardwareVersion; 
@property (nonatomic,retain) NSString * deviceHardwareVersion;                                                                         //@synthesize deviceHardwareVersion=_deviceHardwareVersion - In the implementation block
@property (nonatomic,readonly) char hasDeviceLibraryName; 
@property (nonatomic,retain) NSString * deviceLibraryName;                                                                             //@synthesize deviceLibraryName=_deviceLibraryName - In the implementation block
@property (nonatomic,readonly) char hasDeviceLibraryVersion; 
@property (nonatomic,retain) NSString * deviceLibraryVersion;                                                                          //@synthesize deviceLibraryVersion=_deviceLibraryVersion - In the implementation block
@property (nonatomic,readonly) char hasDeviceFlowControlKey; 
@property (nonatomic,retain) NSString * deviceFlowControlKey;                                                                          //@synthesize deviceFlowControlKey=_deviceFlowControlKey - In the implementation block
@property (assign,nonatomic) char hasDeviceFlowControlBudget; 
@property (assign,nonatomic) unsigned long long deviceFlowControlBudget;                                                               //@synthesize deviceFlowControlBudget=_deviceFlowControlBudget - In the implementation block
@property (assign,nonatomic) char hasDeviceFlowControlBudgetCap; 
@property (assign,nonatomic) unsigned long long deviceFlowControlBudgetCap;                                                            //@synthesize deviceFlowControlBudgetCap=_deviceFlowControlBudgetCap - In the implementation block
@property (assign,nonatomic) char hasDeviceFlowControlRegeneration; 
@property (assign,nonatomic) float deviceFlowControlRegeneration;                                                                      //@synthesize deviceFlowControlRegeneration=_deviceFlowControlRegeneration - In the implementation block
@property (assign,nonatomic) char hasDeviceProtocolVersion; 
@property (assign,nonatomic) unsigned long long deviceProtocolVersion;                                                                 //@synthesize deviceProtocolVersion=_deviceProtocolVersion - In the implementation block
@property (nonatomic,readonly) char hasLocale; 
@property (nonatomic,retain) CKDPLocale * locale;                                                                                      //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) char hasMmcsProtocolVersion; 
@property (nonatomic,retain) NSString * mmcsProtocolVersion;                                                                           //@synthesize mmcsProtocolVersion=_mmcsProtocolVersion - In the implementation block
@property (assign,nonatomic) char hasApplicationContainerEnvironment; 
@property (assign,nonatomic) int applicationContainerEnvironment;                                                                      //@synthesize applicationContainerEnvironment=_applicationContainerEnvironment - In the implementation block
@property (nonatomic,readonly) char hasClientChangeToken; 
@property (nonatomic,retain) NSData * clientChangeToken;                                                                               //@synthesize clientChangeToken=_clientChangeToken - In the implementation block
@property (nonatomic,readonly) char hasDeviceAssignedName; 
@property (nonatomic,retain) NSString * deviceAssignedName;                                                                            //@synthesize deviceAssignedName=_deviceAssignedName - In the implementation block
@property (nonatomic,readonly) char hasDeviceHardwareID; 
@property (nonatomic,retain) NSString * deviceHardwareID;                                                                              //@synthesize deviceHardwareID=_deviceHardwareID - In the implementation block
@property (assign,nonatomic) char hasTargetDatabase; 
@property (assign,nonatomic) int targetDatabase;                                                                                       //@synthesize targetDatabase=_targetDatabase - In the implementation block
@property (nonatomic,readonly) char hasUserIDContainerID; 
@property (nonatomic,retain) NSString * userIDContainerID;                                                                             //@synthesize userIDContainerID=_userIDContainerID - In the implementation block
@property (assign,nonatomic) char hasIsolationLevel; 
@property (assign,nonatomic) int isolationLevel;                                                                                       //@synthesize isolationLevel=_isolationLevel - In the implementation block
@property (nonatomic,readonly) char hasOperationGroupName; 
@property (nonatomic,retain) NSString * operationGroupName;                                                                            //@synthesize operationGroupName=_operationGroupName - In the implementation block
@property (assign,nonatomic) char hasOperationGroupQuantity; 
@property (assign,nonatomic) unsigned long long operationGroupQuantity;                                                                //@synthesize operationGroupQuantity=_operationGroupQuantity - In the implementation block
@property (nonatomic,retain) NSMutableArray * serviceIdentityKeyIDs;                                                                   //@synthesize serviceIdentityKeyIDs=_serviceIdentityKeyIDs - In the implementation block
@property (assign,nonatomic) char hasDeviceSoftwareIsAppleInternal; 
@property (assign,nonatomic) char deviceSoftwareIsAppleInternal;                                                                       //@synthesize deviceSoftwareIsAppleInternal=_deviceSoftwareIsAppleInternal - In the implementation block
@property (nonatomic,readonly) char hasAssetAuthorizeGetRequestOptions; 
@property (nonatomic,retain) CKDPRequestOperationHeaderAssetAuthorizeGetRequestOptions * assetAuthorizeGetRequestOptions;              //@synthesize assetAuthorizeGetRequestOptions=_assetAuthorizeGetRequestOptions - In the implementation block
@property (nonatomic,retain) NSMutableArray * activeThrottlingLabels;                                                                  //@synthesize activeThrottlingLabels=_activeThrottlingLabels - In the implementation block
@property (nonatomic,readonly) char hasDeviceUDID; 
@property (nonatomic,retain) NSString * deviceUDID;                                                                                    //@synthesize deviceUDID=_deviceUDID - In the implementation block
@property (nonatomic,readonly) char hasDeviceSerialNumber; 
@property (nonatomic,retain) NSString * deviceSerialNumber;                                                                            //@synthesize deviceSerialNumber=_deviceSerialNumber - In the implementation block
@property (assign,nonatomic) char hasEntitlementsValidated; 
@property (assign,nonatomic) char entitlementsValidated;                                                                               //@synthesize entitlementsValidated=_entitlementsValidated - In the implementation block
+(Class)serviceIdentityKeyIDsType;
+(Class)activeThrottlingLabelType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setLocale:(CKDPLocale *)arg1 ;
-(CKDPLocale *)locale;
-(id)dictionaryRepresentation;
-(CKDPIdentifier *)deviceIdentifier;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDeviceIdentifier:(CKDPIdentifier *)arg1 ;
-(NSString *)operationGroupName;
-(NSData *)clientChangeToken;
-(void)setClientChangeToken:(NSData *)arg1 ;
-(char)hasLocale;
-(NSString *)applicationVersion;
-(void)setApplicationVersion:(NSString *)arg1 ;
-(char)hasDeviceIdentifier;
-(NSString *)userToken;
-(void)setUserToken:(NSString *)arg1 ;
-(void)setOperationGroupName:(NSString *)arg1 ;
-(char)hasOperationGroupName;
-(NSString *)deviceSerialNumber;
-(void)setDeviceSerialNumber:(NSString *)arg1 ;
-(void)setDeviceUDID:(NSString *)arg1 ;
-(NSString *)deviceUDID;
-(NSString *)deviceSoftwareVersion;
-(void)setApplicationContainer:(NSString *)arg1 ;
-(char)hasApplicationContainer;
-(int)applicationContainerEnvironment;
-(void)setApplicationContainerEnvironment:(int)arg1 ;
-(void)setHasApplicationContainerEnvironment:(char)arg1 ;
-(char)hasApplicationContainerEnvironment;
-(id)applicationContainerEnvironmentAsString:(int)arg1 ;
-(int)StringAsApplicationContainerEnvironment:(id)arg1 ;
-(NSString *)applicationContainer;
-(void)setApplicationBundle:(NSString *)arg1 ;
-(void)setTargetDatabase:(int)arg1 ;
-(void)setDeviceHardwareVersion:(NSString *)arg1 ;
-(void)setDeviceSoftwareVersion:(NSString *)arg1 ;
-(void)addActiveThrottlingLabel:(id)arg1 ;
-(void)setDeviceHardwareID:(NSString *)arg1 ;
-(void)setDeviceAssignedName:(NSString *)arg1 ;
-(int)isolationLevel;
-(void)setIsolationLevel:(int)arg1 ;
-(unsigned long long)operationGroupQuantity;
-(void)setOperationGroupQuantity:(unsigned long long)arg1 ;
-(void)setDeviceLibraryName:(NSString *)arg1 ;
-(void)setDeviceLibraryVersion:(NSString *)arg1 ;
-(void)setDeviceFlowControlKey:(NSString *)arg1 ;
-(void)setDeviceFlowControlBudget:(unsigned long long)arg1 ;
-(void)setDeviceFlowControlBudgetCap:(unsigned long long)arg1 ;
-(void)setDeviceFlowControlRegeneration:(float)arg1 ;
-(void)setDeviceSoftwareIsAppleInternal:(char)arg1 ;
-(void)setMmcsProtocolVersion:(NSString *)arg1 ;
-(void)setEntitlementsValidated:(char)arg1 ;
-(void)setAssetAuthorizeGetRequestOptions:(CKDPRequestOperationHeaderAssetAuthorizeGetRequestOptions *)arg1 ;
-(CKDPRequestOperationHeaderAssetAuthorizeGetRequestOptions *)assetAuthorizeGetRequestOptions;
-(char)hasClientChangeToken;
-(void)addServiceIdentityKeyIDs:(id)arg1 ;
-(void)setUserIDContainerID:(NSString *)arg1 ;
-(unsigned long long)serviceIdentityKeyIDsCount;
-(void)clearServiceIdentityKeyIDs;
-(id)serviceIdentityKeyIDsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)activeThrottlingLabelsCount;
-(void)clearActiveThrottlingLabels;
-(id)activeThrottlingLabelAtIndex:(unsigned long long)arg1 ;
-(char)hasUserToken;
-(char)hasApplicationBundle;
-(char)hasApplicationVersion;
-(void)setApplicationConfigVersion:(unsigned long long)arg1 ;
-(void)setHasApplicationConfigVersion:(char)arg1 ;
-(char)hasApplicationConfigVersion;
-(void)setGlobalConfigVersion:(unsigned long long)arg1 ;
-(void)setHasGlobalConfigVersion:(char)arg1 ;
-(char)hasGlobalConfigVersion;
-(char)hasDeviceSoftwareVersion;
-(char)hasDeviceHardwareVersion;
-(char)hasDeviceLibraryName;
-(char)hasDeviceLibraryVersion;
-(char)hasDeviceFlowControlKey;
-(void)setHasDeviceFlowControlBudget:(char)arg1 ;
-(char)hasDeviceFlowControlBudget;
-(void)setHasDeviceFlowControlBudgetCap:(char)arg1 ;
-(char)hasDeviceFlowControlBudgetCap;
-(void)setHasDeviceFlowControlRegeneration:(char)arg1 ;
-(char)hasDeviceFlowControlRegeneration;
-(void)setDeviceProtocolVersion:(unsigned long long)arg1 ;
-(void)setHasDeviceProtocolVersion:(char)arg1 ;
-(char)hasDeviceProtocolVersion;
-(char)hasMmcsProtocolVersion;
-(char)hasDeviceAssignedName;
-(char)hasDeviceHardwareID;
-(int)targetDatabase;
-(void)setHasTargetDatabase:(char)arg1 ;
-(char)hasTargetDatabase;
-(id)targetDatabaseAsString:(int)arg1 ;
-(int)StringAsTargetDatabase:(id)arg1 ;
-(char)hasUserIDContainerID;
-(void)setHasIsolationLevel:(char)arg1 ;
-(char)hasIsolationLevel;
-(id)isolationLevelAsString:(int)arg1 ;
-(int)StringAsIsolationLevel:(id)arg1 ;
-(void)setHasOperationGroupQuantity:(char)arg1 ;
-(char)hasOperationGroupQuantity;
-(void)setHasDeviceSoftwareIsAppleInternal:(char)arg1 ;
-(char)hasDeviceSoftwareIsAppleInternal;
-(char)hasAssetAuthorizeGetRequestOptions;
-(char)hasDeviceUDID;
-(char)hasDeviceSerialNumber;
-(void)setHasEntitlementsValidated:(char)arg1 ;
-(char)hasEntitlementsValidated;
-(NSString *)applicationBundle;
-(unsigned long long)applicationConfigVersion;
-(unsigned long long)globalConfigVersion;
-(NSString *)deviceHardwareVersion;
-(NSString *)deviceLibraryName;
-(NSString *)deviceLibraryVersion;
-(NSString *)deviceFlowControlKey;
-(unsigned long long)deviceFlowControlBudget;
-(unsigned long long)deviceFlowControlBudgetCap;
-(float)deviceFlowControlRegeneration;
-(unsigned long long)deviceProtocolVersion;
-(NSString *)mmcsProtocolVersion;
-(NSString *)deviceAssignedName;
-(NSString *)deviceHardwareID;
-(NSString *)userIDContainerID;
-(NSMutableArray *)serviceIdentityKeyIDs;
-(void)setServiceIdentityKeyIDs:(NSMutableArray *)arg1 ;
-(char)deviceSoftwareIsAppleInternal;
-(NSMutableArray *)activeThrottlingLabels;
-(void)setActiveThrottlingLabels:(NSMutableArray *)arg1 ;
-(char)entitlementsValidated;
-(id)_applicationContainerEnvironmentCKLogValue;
-(id)_isolationLevelCKLogValue;
-(id)_targetDatabaseCKLogValue;
@end

