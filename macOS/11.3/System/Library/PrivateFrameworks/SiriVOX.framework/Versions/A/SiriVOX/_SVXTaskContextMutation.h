/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/Versions/A/SiriVOX
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriVOX/SiriVOX-Structs.h>
#import <libobjc.A.dylib/SVXTaskContextMutating.h>

@class SVXTaskContext, NSUUID, NSString, SAUIListenAfterSpeakingBehavior, SVXActivationContext, SVXDeactivationContext, NSError;

@interface _SVXTaskContextMutation : NSObject <SVXTaskContextMutating> {

	SVXTaskContext* _baseModel;
	long long _origin;
	unsigned long long _timestamp;
	NSUUID* _sessionUUID;
	NSUUID* _requestUUID;
	NSString* _aceId;
	NSString* _refId;
	NSString* _dialogIdentifier;
	NSString* _dialogPhase;
	char _isUUFR;
	char _listensAfterSpeaking;
	SAUIListenAfterSpeakingBehavior* _listenAfterSpeakingBehavior;
	SVXActivationContext* _activationContext;
	SVXDeactivationContext* _deactivationContext;
	NSError* _error;
	struct {
		unsigned isDirty : 1;
		unsigned hasOrigin : 1;
		unsigned hasTimestamp : 1;
		unsigned hasSessionUUID : 1;
		unsigned hasRequestUUID : 1;
		unsigned hasAceId : 1;
		unsigned hasRefId : 1;
		unsigned hasDialogIdentifier : 1;
		unsigned hasDialogPhase : 1;
		unsigned hasIsUUFR : 1;
		unsigned hasListensAfterSpeaking : 1;
		unsigned hasListenAfterSpeakingBehavior : 1;
		unsigned hasActivationContext : 1;
		unsigned hasDeactivationContext : 1;
		unsigned hasError : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setError:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setRequestUUID:(id)arg1 ;
-(void)setOrigin:(long long)arg1 ;
-(void)setAceId:(id)arg1 ;
-(void)setRefId:(id)arg1 ;
-(void)setDialogIdentifier:(id)arg1 ;
-(void)setDialogPhase:(id)arg1 ;
-(void)setListenAfterSpeakingBehavior:(id)arg1 ;
-(id)initWithBaseModel:(id)arg1 ;
-(id)generate;
-(void)setSessionUUID:(id)arg1 ;
-(void)setIsUUFR:(char)arg1 ;
-(void)setListensAfterSpeaking:(char)arg1 ;
-(void)setActivationContext:(id)arg1 ;
-(void)setDeactivationContext:(id)arg1 ;
@end

