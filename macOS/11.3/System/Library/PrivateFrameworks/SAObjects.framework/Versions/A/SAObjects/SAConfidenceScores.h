/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString, NSArray, NSNumber;

@interface SAConfidenceScores : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * assetVersion; 
@property (nonatomic,copy) NSString * classifiedUser; 
@property (assign,nonatomic) long long processedAudioDurationMilliseconds; 
@property (nonatomic,copy) NSArray * scores; 
@property (nonatomic,copy) NSNumber * scoringSchemeVersion; 
@property (nonatomic,copy) NSString * thresholdType; 
@property (nonatomic,copy) NSString * userIdentityClassification; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)confidenceScores;
+(id)confidenceScoresWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)assetVersion;
-(id)encodedClassName;
-(char)requiresResponse;
-(void)setAssetVersion:(NSString *)arg1 ;
-(NSString *)classifiedUser;
-(void)setClassifiedUser:(NSString *)arg1 ;
-(long long)processedAudioDurationMilliseconds;
-(void)setProcessedAudioDurationMilliseconds:(long long)arg1 ;
-(NSArray *)scores;
-(void)setScores:(NSArray *)arg1 ;
-(NSNumber *)scoringSchemeVersion;
-(void)setScoringSchemeVersion:(NSNumber *)arg1 ;
-(NSString *)thresholdType;
-(void)setThresholdType:(NSString *)arg1 ;
-(NSString *)userIdentityClassification;
-(void)setUserIdentityClassification:(NSString *)arg1 ;
@end

