/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSURL, NSNumber;

@interface SADomainCommand : SABaseClientBoundCommand

@property (nonatomic,copy) NSURL * targetAppId; 
@property (nonatomic,copy) NSURL * targetPluginId; 
@property (nonatomic,copy) NSNumber * timeout; 
+(id)domainCommand;
+(id)domainCommandWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSNumber *)timeout;
-(id)groupIdentifier;
-(void)setTimeout:(NSNumber *)arg1 ;
-(id)encodedClassName;
-(char)requiresResponse;
-(NSURL *)targetAppId;
-(void)setTargetAppId:(NSURL *)arg1 ;
-(NSURL *)targetPluginId;
-(void)setTargetPluginId:(NSURL *)arg1 ;
@end

