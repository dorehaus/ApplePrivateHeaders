/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/Versions/A/AdCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AdCore/AdCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface ADUserTargetingProperties : PBCodable <NSCopying> {

	SCD_Struct_AD7* _accountStates;
	SCD_Struct_AD7* _accountTypes;
	SCD_Struct_AD7* _deviceModes;
	double _clientClockTime;
	NSString* _administrativeArea;
	int _advertisingIdentifierMonthResetCount;
	NSString* _algoId;
	NSString* _appID;
	NSString* _appVersion;
	int _appsRank;
	NSString* _carrierMCC;
	NSString* _carrierMNC;
	int _connectionType;
	NSString* _currentCarrierMCC;
	NSString* _currentCarrierMNC;
	NSString* _dPIDString;
	NSString* _deviceModel;
	NSString* _deviceRequestID;
	float _horizontalAccuracy;
	NSString* _iAdIDString;
	NSString* _iTunesStore;
	NSString* _isoCountryCode;
	float _latitude;
	NSString* _localeIdentifier;
	NSString* _locality;
	float _longitude;
	NSString* _osVersionAndBuild;
	NSString* _postalCode;
	int _runState;
	NSString* _storeFrontLanguageLocaleIdentifier;
	NSString* _subAdministrativeArea;
	NSMutableArray* _targetings;
	float _timezone;
	NSString* _toroIDString;
	NSMutableArray* _userKeyboards;
	char _isOnInternationalDataRoaming;
	char _limitAdTracking;
	SCD_Struct_AD9 _has;

}

@property (assign,nonatomic) char hasClientClockTime; 
@property (assign,nonatomic) double clientClockTime;                                     //@synthesize clientClockTime=_clientClockTime - In the implementation block
@property (nonatomic,readonly) char hasAppID; 
@property (nonatomic,retain) NSString * appID;                                           //@synthesize appID=_appID - In the implementation block
@property (nonatomic,readonly) char hasDeviceModel; 
@property (nonatomic,retain) NSString * deviceModel;                                     //@synthesize deviceModel=_deviceModel - In the implementation block
@property (assign,nonatomic) char hasTimezone; 
@property (assign,nonatomic) float timezone;                                             //@synthesize timezone=_timezone - In the implementation block
@property (assign,nonatomic) char hasRunState; 
@property (assign,nonatomic) int runState;                                               //@synthesize runState=_runState - In the implementation block
@property (nonatomic,readonly) char hasAppVersion; 
@property (nonatomic,retain) NSString * appVersion;                                      //@synthesize appVersion=_appVersion - In the implementation block
@property (nonatomic,readonly) char hasOsVersionAndBuild; 
@property (nonatomic,retain) NSString * osVersionAndBuild;                               //@synthesize osVersionAndBuild=_osVersionAndBuild - In the implementation block
@property (nonatomic,readonly) char hasITunesStore; 
@property (nonatomic,retain) NSString * iTunesStore;                                     //@synthesize iTunesStore=_iTunesStore - In the implementation block
@property (nonatomic,readonly) char hasLocaleIdentifier; 
@property (nonatomic,retain) NSString * localeIdentifier;                                //@synthesize localeIdentifier=_localeIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * userKeyboards;                             //@synthesize userKeyboards=_userKeyboards - In the implementation block
@property (assign,nonatomic) char hasAppsRank; 
@property (assign,nonatomic) int appsRank;                                               //@synthesize appsRank=_appsRank - In the implementation block
@property (nonatomic,readonly) unsigned long long deviceModesCount; 
@property (nonatomic,readonly) int* deviceModes; 
@property (nonatomic,readonly) unsigned long long accountTypesCount; 
@property (nonatomic,readonly) int* accountTypes; 
@property (assign,nonatomic) char hasLatitude; 
@property (assign,nonatomic) float latitude;                                             //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) char hasLongitude; 
@property (assign,nonatomic) float longitude;                                            //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) char hasHorizontalAccuracy; 
@property (assign,nonatomic) float horizontalAccuracy;                                   //@synthesize horizontalAccuracy=_horizontalAccuracy - In the implementation block
@property (nonatomic,readonly) char hasIsoCountryCode; 
@property (nonatomic,retain) NSString * isoCountryCode;                                  //@synthesize isoCountryCode=_isoCountryCode - In the implementation block
@property (nonatomic,retain) NSMutableArray * targetings;                                //@synthesize targetings=_targetings - In the implementation block
@property (assign,nonatomic) char hasLimitAdTracking; 
@property (assign,nonatomic) char limitAdTracking;                                       //@synthesize limitAdTracking=_limitAdTracking - In the implementation block
@property (nonatomic,readonly) char hasToroIDString; 
@property (nonatomic,retain) NSString * toroIDString;                                    //@synthesize toroIDString=_toroIDString - In the implementation block
@property (nonatomic,readonly) char hasIAdIDString; 
@property (nonatomic,retain) NSString * iAdIDString;                                     //@synthesize iAdIDString=_iAdIDString - In the implementation block
@property (nonatomic,readonly) char hasAlgoId; 
@property (nonatomic,retain) NSString * algoId;                                          //@synthesize algoId=_algoId - In the implementation block
@property (nonatomic,readonly) char hasDPIDString; 
@property (nonatomic,retain) NSString * dPIDString;                                      //@synthesize dPIDString=_dPIDString - In the implementation block
@property (nonatomic,readonly) char hasPostalCode; 
@property (nonatomic,retain) NSString * postalCode;                                      //@synthesize postalCode=_postalCode - In the implementation block
@property (nonatomic,readonly) char hasAdministrativeArea; 
@property (nonatomic,retain) NSString * administrativeArea;                              //@synthesize administrativeArea=_administrativeArea - In the implementation block
@property (nonatomic,readonly) char hasLocality; 
@property (nonatomic,retain) NSString * locality;                                        //@synthesize locality=_locality - In the implementation block
@property (nonatomic,readonly) char hasSubAdministrativeArea; 
@property (nonatomic,retain) NSString * subAdministrativeArea;                           //@synthesize subAdministrativeArea=_subAdministrativeArea - In the implementation block
@property (assign,nonatomic) char hasAdvertisingIdentifierMonthResetCount; 
@property (assign,nonatomic) int advertisingIdentifierMonthResetCount;                   //@synthesize advertisingIdentifierMonthResetCount=_advertisingIdentifierMonthResetCount - In the implementation block
@property (nonatomic,readonly) char hasDeviceRequestID; 
@property (nonatomic,retain) NSString * deviceRequestID;                                 //@synthesize deviceRequestID=_deviceRequestID - In the implementation block
@property (nonatomic,readonly) char hasCarrierMNC; 
@property (nonatomic,retain) NSString * carrierMNC;                                      //@synthesize carrierMNC=_carrierMNC - In the implementation block
@property (nonatomic,readonly) char hasCarrierMCC; 
@property (nonatomic,retain) NSString * carrierMCC;                                      //@synthesize carrierMCC=_carrierMCC - In the implementation block
@property (nonatomic,readonly) char hasCurrentCarrierMNC; 
@property (nonatomic,retain) NSString * currentCarrierMNC;                               //@synthesize currentCarrierMNC=_currentCarrierMNC - In the implementation block
@property (nonatomic,readonly) char hasCurrentCarrierMCC; 
@property (nonatomic,retain) NSString * currentCarrierMCC;                               //@synthesize currentCarrierMCC=_currentCarrierMCC - In the implementation block
@property (assign,nonatomic) char hasIsOnInternationalDataRoaming; 
@property (assign,nonatomic) char isOnInternationalDataRoaming;                          //@synthesize isOnInternationalDataRoaming=_isOnInternationalDataRoaming - In the implementation block
@property (assign,nonatomic) char hasConnectionType; 
@property (assign,nonatomic) int connectionType;                                         //@synthesize connectionType=_connectionType - In the implementation block
@property (nonatomic,readonly) char hasStoreFrontLanguageLocaleIdentifier; 
@property (nonatomic,retain) NSString * storeFrontLanguageLocaleIdentifier;              //@synthesize storeFrontLanguageLocaleIdentifier=_storeFrontLanguageLocaleIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long accountStatesCount; 
@property (nonatomic,readonly) int* accountStates; 
+(Class)userKeyboardType;
+(Class)targetingType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)localeIdentifier;
-(int)connectionType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(float)latitude;
-(float)longitude;
-(NSString *)postalCode;
-(void)setLatitude:(float)arg1 ;
-(void)setLongitude:(float)arg1 ;
-(float)horizontalAccuracy;
-(void)setHorizontalAccuracy:(float)arg1 ;
-(void)setHasLatitude:(char)arg1 ;
-(char)hasLatitude;
-(void)setHasLongitude:(char)arg1 ;
-(char)hasLongitude;
-(void)setHasHorizontalAccuracy:(char)arg1 ;
-(char)hasHorizontalAccuracy;
-(NSString *)deviceModel;
-(void)setDeviceModel:(NSString *)arg1 ;
-(void)setPostalCode:(NSString *)arg1 ;
-(NSString *)locality;
-(NSString *)subAdministrativeArea;
-(NSString *)administrativeArea;
-(float)timezone;
-(void)setLocality:(NSString *)arg1 ;
-(void)setSubAdministrativeArea:(NSString *)arg1 ;
-(void)setAdministrativeArea:(NSString *)arg1 ;
-(void)setConnectionType:(int)arg1 ;
-(char)hasAdministrativeArea;
-(char)hasLocality;
-(void)setHasConnectionType:(char)arg1 ;
-(char)hasConnectionType;
-(id)connectionTypeAsString:(int)arg1 ;
-(int)StringAsConnectionType:(id)arg1 ;
-(void)setTimezone:(float)arg1 ;
-(char)hasTimezone;
-(NSString *)isoCountryCode;
-(void)setIsoCountryCode:(NSString *)arg1 ;
-(char)hasIsoCountryCode;
-(char)hasSubAdministrativeArea;
-(NSString *)appVersion;
-(void)setAppVersion:(NSString *)arg1 ;
-(void)setLocaleIdentifier:(NSString *)arg1 ;
-(NSString *)appID;
-(void)setAppID:(NSString *)arg1 ;
-(char)hasDeviceModel;
-(void)setHasTimezone:(char)arg1 ;
-(int*)accountTypes;
-(char)hasAppVersion;
-(char)hasAppID;
-(char)hasPostalCode;
-(void)addAccountType:(int)arg1 ;
-(void)setAdvertisingIdentifierMonthResetCount:(int)arg1 ;
-(NSString *)osVersionAndBuild;
-(void)setOsVersionAndBuild:(NSString *)arg1 ;
-(void)addDeviceMode:(int)arg1 ;
-(void)addAccountState:(int)arg1 ;
-(int)runState;
-(void)setRunState:(int)arg1 ;
-(void)setHasRunState:(char)arg1 ;
-(char)hasRunState;
-(id)runStateAsString:(int)arg1 ;
-(int)StringAsRunState:(id)arg1 ;
-(void)setIAdIDString:(NSString *)arg1 ;
-(char)hasIAdIDString;
-(NSString *)iAdIDString;
-(unsigned long long)deviceModesCount;
-(void)clearDeviceModes;
-(int)deviceModeAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)accountTypesCount;
-(void)clearAccountTypes;
-(int)accountTypeAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)accountStatesCount;
-(void)clearAccountStates;
-(int)accountStateAtIndex:(unsigned long long)arg1 ;
-(void)setHasAdvertisingIdentifierMonthResetCount:(char)arg1 ;
-(char)hasAdvertisingIdentifierMonthResetCount;
-(char)hasOsVersionAndBuild;
-(char)hasLocaleIdentifier;
-(int*)deviceModes;
-(void)setDeviceModes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)deviceModesAsString:(int)arg1 ;
-(int)StringAsDeviceModes:(id)arg1 ;
-(void)setAccountTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)accountTypesAsString:(int)arg1 ;
-(int)StringAsAccountTypes:(id)arg1 ;
-(int*)accountStates;
-(void)setAccountStates:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)accountStatesAsString:(int)arg1 ;
-(int)StringAsAccountStates:(id)arg1 ;
-(int)advertisingIdentifierMonthResetCount;
-(void)addUserKeyboard:(id)arg1 ;
-(void)addTargeting:(id)arg1 ;
-(void)setITunesStore:(NSString *)arg1 ;
-(unsigned long long)userKeyboardsCount;
-(void)clearUserKeyboards;
-(id)userKeyboardAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)targetingsCount;
-(void)clearTargetings;
-(id)targetingAtIndex:(unsigned long long)arg1 ;
-(void)setToroIDString:(NSString *)arg1 ;
-(void)setAlgoId:(NSString *)arg1 ;
-(void)setDPIDString:(NSString *)arg1 ;
-(void)setDeviceRequestID:(NSString *)arg1 ;
-(void)setCarrierMNC:(NSString *)arg1 ;
-(void)setCarrierMCC:(NSString *)arg1 ;
-(void)setCurrentCarrierMNC:(NSString *)arg1 ;
-(void)setCurrentCarrierMCC:(NSString *)arg1 ;
-(void)setStoreFrontLanguageLocaleIdentifier:(NSString *)arg1 ;
-(void)setClientClockTime:(double)arg1 ;
-(void)setHasClientClockTime:(char)arg1 ;
-(char)hasClientClockTime;
-(char)hasITunesStore;
-(void)setAppsRank:(int)arg1 ;
-(void)setHasAppsRank:(char)arg1 ;
-(char)hasAppsRank;
-(void)setLimitAdTracking:(char)arg1 ;
-(void)setHasLimitAdTracking:(char)arg1 ;
-(char)hasLimitAdTracking;
-(char)hasToroIDString;
-(char)hasAlgoId;
-(char)hasDPIDString;
-(char)hasDeviceRequestID;
-(char)hasCarrierMNC;
-(char)hasCarrierMCC;
-(char)hasCurrentCarrierMNC;
-(char)hasCurrentCarrierMCC;
-(void)setIsOnInternationalDataRoaming:(char)arg1 ;
-(void)setHasIsOnInternationalDataRoaming:(char)arg1 ;
-(char)hasIsOnInternationalDataRoaming;
-(char)hasStoreFrontLanguageLocaleIdentifier;
-(double)clientClockTime;
-(NSString *)iTunesStore;
-(NSMutableArray *)userKeyboards;
-(void)setUserKeyboards:(NSMutableArray *)arg1 ;
-(int)appsRank;
-(NSMutableArray *)targetings;
-(void)setTargetings:(NSMutableArray *)arg1 ;
-(char)limitAdTracking;
-(NSString *)toroIDString;
-(NSString *)algoId;
-(NSString *)dPIDString;
-(NSString *)deviceRequestID;
-(NSString *)carrierMNC;
-(NSString *)carrierMCC;
-(NSString *)currentCarrierMNC;
-(NSString *)currentCarrierMCC;
-(char)isOnInternationalDataRoaming;
-(NSString *)storeFrontLanguageLocaleIdentifier;
@end

