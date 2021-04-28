/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/Versions/A/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFCommandExecutionInfoMutating.h>

@class AFCommandExecutionInfo, NSString, AFPeerInfo, AFEndpointInfo, AFInstanceInfo, AFSpeechInfo, AFRequestHandlingContext, NSArray, NSDictionary;

@interface _AFCommandExecutionInfoMutation : NSObject <AFCommandExecutionInfoMutating> {

	AFCommandExecutionInfo* _baseModel;
	NSString* _executionID;
	NSString* _requestID;
	AFPeerInfo* _originPeerInfo;
	AFEndpointInfo* _endpointInfo;
	AFInstanceInfo* _instanceInfo;
	AFSpeechInfo* _speechInfo;
	AFRequestHandlingContext* _requestHandlingContextSnapshot;
	NSArray* _deviceRestrictions;
	NSDictionary* _userInfo;
	struct {
		unsigned isDirty : 1;
		unsigned hasExecutionID : 1;
		unsigned hasRequestID : 1;
		unsigned hasOriginPeerInfo : 1;
		unsigned hasEndpointInfo : 1;
		unsigned hasInstanceInfo : 1;
		unsigned hasSpeechInfo : 1;
		unsigned hasRequestHandlingContextSnapshot : 1;
		unsigned hasDeviceRestrictions : 1;
		unsigned hasUserInfo : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setUserInfo:(id)arg1 ;
-(void)setRequestID:(id)arg1 ;
-(id)initWithBaseModel:(id)arg1 ;
-(id)generate;
-(void)setExecutionID:(id)arg1 ;
-(void)setOriginPeerInfo:(id)arg1 ;
-(void)setEndpointInfo:(id)arg1 ;
-(void)setInstanceInfo:(id)arg1 ;
-(void)setSpeechInfo:(id)arg1 ;
-(void)setRequestHandlingContextSnapshot:(id)arg1 ;
-(void)setDeviceRestrictions:(id)arg1 ;
@end

