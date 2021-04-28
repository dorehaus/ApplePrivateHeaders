/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAIntentGroupSiriKitRemoteExecution : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * executionDeviceAssistantId; 
@property (nonatomic,copy) NSString * invocationDeviceAssistantId; 
@property (nonatomic,copy) NSString * personalDomainAuthenticationMode; 
@property (nonatomic,copy) NSString * runLocation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)siriKitRemoteExecution;
+(id)siriKitRemoteExecutionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)executionDeviceAssistantId;
-(void)setExecutionDeviceAssistantId:(NSString *)arg1 ;
-(NSString *)invocationDeviceAssistantId;
-(void)setInvocationDeviceAssistantId:(NSString *)arg1 ;
-(NSString *)personalDomainAuthenticationMode;
-(void)setPersonalDomainAuthenticationMode:(NSString *)arg1 ;
-(NSString *)runLocation;
-(void)setRunLocation:(NSString *)arg1 ;
@end

