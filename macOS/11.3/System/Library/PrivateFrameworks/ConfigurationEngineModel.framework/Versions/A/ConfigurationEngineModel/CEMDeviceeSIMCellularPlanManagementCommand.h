/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/Versions/A/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMCommandBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSString;

@interface CEMDeviceeSIMCellularPlanManagementCommand : CEMCommandBase <CEMRegisteredTypeProtocol> {

	NSString* _payloadESIMServerURL;

}

@property (nonatomic,copy) NSString * payloadESIMServerURL;              //@synthesize payloadESIMServerURL=_payloadESIMServerURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)buildWithIdentifier:(id)arg1 withESIMServerURL:(id)arg2 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withESIMServerURL:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)mustBeSupervised;
-(char)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(int)executionLevel;
-(void)setPayloadESIMServerURL:(NSString *)arg1 ;
-(NSString *)payloadESIMServerURL;
@end

