/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SASmsGroupName : SADomainObject

@property (nonatomic,copy) NSString * groupName; 
@property (nonatomic,copy) NSString * groupNameId; 
+(id)groupName;
+(id)groupNameWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setGroupName:(NSString *)arg1 ;
-(NSString *)groupName;
-(id)encodedClassName;
-(NSString *)groupNameId;
-(void)setGroupNameId:(NSString *)arg1 ;
@end
