/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/XSDefinitionProvider.h>

@class EWSDuration, EWSReplyBodyType, NSString;

@interface EWSUserOofSettingsType : NSObject <XSDefinitionProvider> {

	long long _OofState;
	long long _ExternalAudience;
	EWSDuration* _Duration;
	EWSReplyBodyType* _InternalReply;
	EWSReplyBodyType* _ExternalReply;

}

@property (assign,nonatomic) long long OofState;                            //@synthesize OofState=_OofState - In the implementation block
@property (assign,nonatomic) long long ExternalAudience;                    //@synthesize ExternalAudience=_ExternalAudience - In the implementation block
@property (nonatomic,retain) EWSDuration * Duration;                        //@synthesize Duration=_Duration - In the implementation block
@property (nonatomic,retain) EWSReplyBodyType * InternalReply;              //@synthesize InternalReply=_InternalReply - In the implementation block
@property (nonatomic,retain) EWSReplyBodyType * ExternalReply;              //@synthesize ExternalReply=_ExternalReply - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)definition;
-(void)setDuration:(EWSDuration *)arg1 ;
-(EWSDuration *)Duration;
-(long long)OofState;
-(void)setOofState:(long long)arg1 ;
-(long long)ExternalAudience;
-(void)setExternalAudience:(long long)arg1 ;
-(EWSReplyBodyType *)InternalReply;
-(void)setInternalReply:(EWSReplyBodyType *)arg1 ;
-(EWSReplyBodyType *)ExternalReply;
-(void)setExternalReply:(EWSReplyBodyType *)arg1 ;
@end

