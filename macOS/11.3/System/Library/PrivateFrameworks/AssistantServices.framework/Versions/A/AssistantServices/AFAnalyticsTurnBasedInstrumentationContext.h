/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/Versions/A/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, SISchemaClientTurnContext;

@interface AFAnalyticsTurnBasedInstrumentationContext : NSObject <NSSecureCoding> {

	NSUUID* _turnIdentifier;
	SISchemaClientTurnContext* _turnContext;

}

@property (nonatomic,readonly) NSUUID * turnIdentifier; 
+(char)supportsSecureCoding;
+(id)newTurnBasedContextWithPreviousTurnID:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)turnIdentifier;
-(id)initWithTurnIdentifier:(id)arg1 ;
-(void)emitInstrumentation:(id)arg1 ;
-(void)emitInstrumentation:(id)arg1 machAbsoluteTime:(unsigned long long)arg2 ;
-(id)nextTurnBasedContext;
@end

