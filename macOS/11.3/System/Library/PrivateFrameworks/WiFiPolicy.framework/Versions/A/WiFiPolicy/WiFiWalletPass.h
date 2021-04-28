/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/Versions/A/WiFiPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiPolicy/WiFiCandidateNetwork.h>

@protocol TBScore;
@class NSString, NSSet, NSDate;

@interface WiFiWalletPass : NSObject <WiFiCandidateNetwork> {

	char matched;
	unsigned venueType;
	NSString* SSID;
	NSString* password;
	NSSet* attributes;
	NSSet* accessPoints;
	id<TBScore> qualityScore;
	id<TBScore> popularityScore;
	unsigned long long venueGroup;
	unsigned long long type;
	NSString* _uniqueIdentifier;
	NSString* _serialNumber;
	NSDate* _relevantDate;
	NSString* _localizedDescription;

}

@property (nonatomic,copy) NSString * uniqueIdentifier;                    //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,copy) NSString * serialNumber;                        //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,copy) NSDate * relevantDate;                          //@synthesize relevantDate=_relevantDate - In the implementation block
@property (nonatomic,copy) NSString * localizedDescription;                //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (nonatomic,copy) NSString * SSID; 
@property (nonatomic,copy) NSString * password; 
@property (nonatomic,readonly) NSSet * accessPoints; 
@property (nonatomic,readonly) long long source; 
@property (nonatomic,readonly) NSSet * attributes; 
@property (assign,nonatomic) char matched; 
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) unsigned long long venueGroup; 
@property (nonatomic,readonly) unsigned venueType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<TBScore> popularityScore; 
@property (nonatomic,readonly) id<TBScore> qualityScore; 
-(NSString *)description;
-(NSString *)localizedDescription;
-(unsigned long long)type;
-(NSString *)password;
-(long long)source;
-(NSString *)uniqueIdentifier;
-(NSSet *)attributes;
-(void)setPassword:(NSString *)arg1 ;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(NSString *)serialNumber;
-(void)setSerialNumber:(NSString *)arg1 ;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(NSSet *)accessPoints;
-(unsigned long long)venueGroup;
-(unsigned)venueType;
-(void)setRelevantDate:(NSDate *)arg1 ;
-(NSDate *)relevantDate;
-(NSString *)SSID;
-(id<TBScore>)qualityScore;
-(void)setSSID:(NSString *)arg1 ;
-(char)matched;
-(void)setMatched:(char)arg1 ;
-(id<TBScore>)popularityScore;
-(char)containsAccessPointMatchingBSSIDs:(id)arg1 ;
@end

