/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntentForwardingAction.h>

@class NSArray;

@interface INResolveIntentParametersForwardingAction : INIntentForwardingAction {

	char _resolvesAllParameters;
	NSArray* _parameterNames;

}

@property (nonatomic,readonly) char resolvesAllParameters;              //@synthesize resolvesAllParameters=_resolvesAllParameters - In the implementation block
@property (nonatomic,readonly) NSArray * parameterNames;                //@synthesize parameterNames=_parameterNames - In the implementation block
+(char)supportsSecureCoding;
+(Class)responseClass;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithIntent:(id)arg1 parameterNames:(id)arg2 ;
-(id)initWithIntent:(id)arg1 parameterName:(id)arg2 ;
-(void)executeRemotelyWithVendorRemote:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)executeLocallyWithIntentDeliverer:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(/*^block*/id)_completionHandlerForMultipleParametersWithActionCompletionHandler:(/*^block*/id)arg1 ;
-(/*^block*/id)_completionHandlerForSingleParameterNamed:(id)arg1 withActionCompletionHandler:(/*^block*/id)arg2 ;
-(char)resolvesAllParameters;
-(NSArray *)parameterNames;
@end

