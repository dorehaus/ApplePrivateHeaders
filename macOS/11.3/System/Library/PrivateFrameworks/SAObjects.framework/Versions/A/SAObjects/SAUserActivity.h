/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSArray, NSString;

@interface SAUserActivity : SADomainObject

@property (nonatomic,copy) NSArray * eligibileFunctions; 
@property (nonatomic,copy) NSString * internalGUID; 
@property (assign,nonatomic) char isEligibleForAppPunchout; 
@property (assign,nonatomic) char isEligibleForDirections; 
@property (assign,nonatomic) char isEligibleForHandoff; 
@property (assign,nonatomic) char isEligibleForPublicIndexing; 
@property (assign,nonatomic) char isEligibleForReminders; 
@property (assign,nonatomic) char isEligibleForSearch; 
+(id)userActivity;
+(id)userActivityWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(char)isEligibleForHandoff;
-(char)isEligibleForSearch;
-(char)isEligibleForPublicIndexing;
-(char)isEligibleForReminders;
-(id)encodedClassName;
-(NSArray *)eligibileFunctions;
-(void)setEligibileFunctions:(NSArray *)arg1 ;
-(NSString *)internalGUID;
-(void)setInternalGUID:(NSString *)arg1 ;
-(char)isEligibleForAppPunchout;
-(void)setIsEligibleForAppPunchout:(char)arg1 ;
-(char)isEligibleForDirections;
-(void)setIsEligibleForDirections:(char)arg1 ;
-(void)setIsEligibleForHandoff:(char)arg1 ;
-(void)setIsEligibleForPublicIndexing:(char)arg1 ;
-(void)setIsEligibleForReminders:(char)arg1 ;
-(void)setIsEligibleForSearch:(char)arg1 ;
@end
