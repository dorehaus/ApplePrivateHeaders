/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/Versions/A/WiFiPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSSet;


@protocol WiFiCandidateNetwork <NSObject,TBScorable>
@property (nonatomic,copy) NSString * SSID; 
@property (nonatomic,readonly) NSSet * accessPoints; 
@property (nonatomic,copy,readonly) NSString * password; 
@property (nonatomic,readonly) long long source; 
@property (nonatomic,readonly) NSSet * attributes; 
@property (assign,nonatomic) char matched; 
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) unsigned long long venueGroup; 
@property (nonatomic,readonly) unsigned venueType; 
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier; 
@optional
-(NSString *)uniqueIdentifier;

@required
-(unsigned long long)type;
-(NSString *)password;
-(long long)source;
-(NSSet *)attributes;
-(NSSet *)accessPoints;
-(unsigned long long)venueGroup;
-(unsigned)venueType;
-(NSString *)SSID;
-(void)setSSID:(id)arg1;
-(char)matched;
-(void)setMatched:(char)arg1;
-(char)containsAccessPointMatchingBSSIDs:(id)arg1;

@end
