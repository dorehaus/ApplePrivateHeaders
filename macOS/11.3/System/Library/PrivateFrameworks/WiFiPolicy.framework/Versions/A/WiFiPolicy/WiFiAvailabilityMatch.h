/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/Versions/A/WiFiPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiPolicy/WiFiRecommendation.h>

@protocol WiFiCandidateNetwork, WiFiScannedNetwork;
@class NSString, NSDate;

@interface WiFiAvailabilityMatch : NSObject <WiFiRecommendation> {

	char _unwantedNetworkName;
	long long _priority;
	id<WiFiCandidateNetwork> _network;
	NSString* _SSID;
	id<WiFiScannedNetwork> _scannedNetwork;
	NSDate* _matchedAt;

}

@property (nonatomic,retain) id<WiFiScannedNetwork> scannedNetwork;              //@synthesize scannedNetwork=_scannedNetwork - In the implementation block
@property (nonatomic,retain) NSDate * matchedAt;                                 //@synthesize matchedAt=_matchedAt - In the implementation block
@property (assign,nonatomic) char unwantedNetworkName;                           //@synthesize unwantedNetworkName=_unwantedNetworkName - In the implementation block
@property (setter=SID,nonatomic,copy,readonly) NSString * SSID;                  //@synthesize SSID=_SSID - In the implementation block
@property (nonatomic,readonly) id<WiFiCandidateNetwork> network;                 //@synthesize network=_network - In the implementation block
@property (nonatomic,readonly) long long priority;                               //@synthesize priority=_priority - In the implementation block
+(id)matchWithNetwork:(id)arg1 scannedNetwork:(id)arg2 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)priority;
-(id<WiFiCandidateNetwork>)network;
-(NSString *)SSID;
-(id)initWithNetwork:(id)arg1 scannedNetwork:(id)arg2 ;
-(char)isEqualToAvailabilityMatch:(id)arg1 ;
-(id<WiFiScannedNetwork>)scannedNetwork;
-(NSDate *)matchedAt;
-(char)unwantedNetworkName;
-(char)isEqualToScannedNetwork:(id)arg1 ;
-(void)setScannedNetwork:(id<WiFiScannedNetwork>)arg1 ;
-(void)setMatchedAt:(NSDate *)arg1 ;
-(void)setUnwantedNetworkName:(char)arg1 ;
@end

