/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntentForwardingActionResponse.h>

@class INIntent, NSDictionary;

@interface INResolveIntentParametersForwardingActionResponse : INIntentForwardingActionResponse {

	char _success;
	INIntent* _updatedIntent;
	NSDictionary* _parameterResolutionResults;

}

@property (getter=isSuccess,nonatomic,readonly) char success;                          //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) INIntent * updatedIntent;                               //@synthesize updatedIntent=_updatedIntent - In the implementation block
@property (nonatomic,readonly) NSDictionary * parameterResolutionResults;              //@synthesize parameterResolutionResults=_parameterResolutionResults - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)isSuccess;
-(id)initWithSuccess:(char)arg1 updatedIntent:(id)arg2 parameterResolutionResults:(id)arg3 error:(id)arg4 ;
-(INIntent *)updatedIntent;
-(NSDictionary *)parameterResolutionResults;
@end

