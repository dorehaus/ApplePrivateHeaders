/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCNetworkReachabilityType.h>

@class NSHashTable, NSString;

@interface FCNetworkReachability : NSObject <FCNetworkReachabilityType> {

	char _isNetworkReachable;
	char _isNetworkReachableViaWiFi;
	char _isLowDataModeEnabled;
	char _isNetworkUsageExpensive;
	char _isNetworkReachableViaCellular;
	char _isCloudKitAccessAllowed;
	char _accessRestrictedBecauseOfAppVersion;
	char _accessRestrictedBecauseOfOSVersion;
	char _accessRestrictedBecauseOfCountry;
	char _accessRestrictedBecauseOfDeviceAbandoned;
	long long _offlineReason;
	NSHashTable* _observers;

}

@property (nonatomic,retain) NSHashTable * observers;                                    //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic) char isNetworkReachable;                                    //@synthesize isNetworkReachable=_isNetworkReachable - In the implementation block
@property (assign,nonatomic) char isNetworkReachableViaWiFi;                             //@synthesize isNetworkReachableViaWiFi=_isNetworkReachableViaWiFi - In the implementation block
@property (assign,nonatomic) char isNetworkReachableViaCellular;                         //@synthesize isNetworkReachableViaCellular=_isNetworkReachableViaCellular - In the implementation block
@property (assign,nonatomic) char isNetworkUsageExpensive;                               //@synthesize isNetworkUsageExpensive=_isNetworkUsageExpensive - In the implementation block
@property (assign,nonatomic) char isLowDataModeEnabled;                                  //@synthesize isLowDataModeEnabled=_isLowDataModeEnabled - In the implementation block
@property (assign,nonatomic) char isCloudKitAccessAllowed;                               //@synthesize isCloudKitAccessAllowed=_isCloudKitAccessAllowed - In the implementation block
@property (assign,nonatomic) char accessRestrictedBecauseOfAppVersion;                   //@synthesize accessRestrictedBecauseOfAppVersion=_accessRestrictedBecauseOfAppVersion - In the implementation block
@property (assign,nonatomic) char accessRestrictedBecauseOfOSVersion;                    //@synthesize accessRestrictedBecauseOfOSVersion=_accessRestrictedBecauseOfOSVersion - In the implementation block
@property (assign,nonatomic) char accessRestrictedBecauseOfCountry;                      //@synthesize accessRestrictedBecauseOfCountry=_accessRestrictedBecauseOfCountry - In the implementation block
@property (assign,nonatomic) char accessRestrictedBecauseOfDeviceAbandoned;              //@synthesize accessRestrictedBecauseOfDeviceAbandoned=_accessRestrictedBecauseOfDeviceAbandoned - In the implementation block
@property (nonatomic,readonly) char isNetworkOnlyReachableViaCellular; 
@property (nonatomic,readonly) long long reachabilityStatus; 
@property (nonatomic,readonly) long long cellularRadioAccessTechnology; 
@property (nonatomic,readonly) char isNetworkUsageInexpensive; 
@property (nonatomic,readonly) char isCloudKitReachable; 
@property (assign,nonatomic) long long offlineReason;                                    //@synthesize offlineReason=_offlineReason - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedNetworkReachability;
-(void)dealloc;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSHashTable *)observers;
-(void)setObservers:(NSHashTable *)arg1 ;
-(char)isNetworkReachable;
-(void)_reachabilityChanged:(id)arg1 ;
-(void)setOfflineReason:(long long)arg1 ;
-(long long)offlineReason;
-(void)setIsNetworkReachable:(char)arg1 ;
-(void)_updateReachability;
-(long long)cellularRadioAccessTechnology;
-(long long)reachabilityStatus;
-(char)isNetworkReachableViaWiFi;
-(char)isCloudKitReachable;
-(char)isNetworkUsageInexpensive;
-(char)isLowDataModeEnabled;
-(char)isNetworkUsageExpensive;
-(char)isNetworkReachableViaCellular;
-(void)setIsNetworkReachableViaWiFi:(char)arg1 ;
-(void)setIsNetworkReachableViaCellular:(char)arg1 ;
-(void)setIsNetworkUsageExpensive:(char)arg1 ;
-(void)setIsLowDataModeEnabled:(char)arg1 ;
-(char)accessRestrictedBecauseOfAppVersion;
-(char)accessRestrictedBecauseOfCountry;
-(char)accessRestrictedBecauseOfOSVersion;
-(char)accessRestrictedBecauseOfDeviceAbandoned;
-(void)setIsCloudKitAccessAllowed:(char)arg1 ;
-(char)isCloudKitAccessAllowed;
-(void)_accessRestrictionsChanged;
-(char)isNetworkOnlyReachableViaCellular;
-(void)setAccessRestrictedBecauseOfAppVersion:(char)arg1 ;
-(void)setAccessRestrictedBecauseOfCountry:(char)arg1 ;
-(void)setAccessRestrictedBecauseOfOSVersion:(char)arg1 ;
-(void)setAccessRestrictedBecauseOfDeviceAbandoned:(char)arg1 ;
-(long long)_cellularRadioAccessTechnologyFromString:(id)arg1 ;
@end

