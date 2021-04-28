/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/Versions/A/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPredicateBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSString, NSArray;

@interface CEMPredicateBudget : CEMPredicateBase <CEMRegisteredTypeProtocol> {

	NSString* _payloadCalendarIdentifier;
	NSString* _payloadMonitor;
	NSArray* _payloadIdentifiers;
	NSArray* _payloadIdentifiersVersion2;
	NSArray* _payloadNotificationTimes;
	NSArray* _payloadTimeBudget;

}

@property (nonatomic,copy) NSString * payloadCalendarIdentifier;              //@synthesize payloadCalendarIdentifier=_payloadCalendarIdentifier - In the implementation block
@property (nonatomic,copy) NSString * payloadMonitor;                         //@synthesize payloadMonitor=_payloadMonitor - In the implementation block
@property (nonatomic,copy) NSArray * payloadIdentifiers;                      //@synthesize payloadIdentifiers=_payloadIdentifiers - In the implementation block
@property (nonatomic,copy) NSArray * payloadIdentifiersVersion2;              //@synthesize payloadIdentifiersVersion2=_payloadIdentifiersVersion2 - In the implementation block
@property (nonatomic,copy) NSArray * payloadNotificationTimes;                //@synthesize payloadNotificationTimes=_payloadNotificationTimes - In the implementation block
@property (nonatomic,copy) NSArray * payloadTimeBudget;                       //@synthesize payloadTimeBudget=_payloadTimeBudget - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)buildWithCalendarIdentifier:(id)arg1 withMonitor:(id)arg2 withIdentifiers:(id)arg3 withIdentifiersVersion2:(id)arg4 withNotificationTimes:(id)arg5 withTimeBudget:(id)arg6 ;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)buildWithCalendarIdentifier:(id)arg1 withMonitor:(id)arg2 withIdentifiers:(id)arg3 withNotificationTimes:(id)arg4 withTimeBudget:(id)arg5 ;
+(id)buildRequiredOnlyWithMonitor:(id)arg1 withTimeBudget:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)payloadIdentifiers;
-(void)setPayloadIdentifiers:(NSArray *)arg1 ;
-(char)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadCalendarIdentifier:(NSString *)arg1 ;
-(void)setPayloadMonitor:(NSString *)arg1 ;
-(void)setPayloadIdentifiersVersion2:(NSArray *)arg1 ;
-(void)setPayloadNotificationTimes:(NSArray *)arg1 ;
-(void)setPayloadTimeBudget:(NSArray *)arg1 ;
-(NSString *)payloadCalendarIdentifier;
-(NSString *)payloadMonitor;
-(NSArray *)payloadIdentifiersVersion2;
-(NSArray *)payloadNotificationTimes;
-(NSArray *)payloadTimeBudget;
@end

