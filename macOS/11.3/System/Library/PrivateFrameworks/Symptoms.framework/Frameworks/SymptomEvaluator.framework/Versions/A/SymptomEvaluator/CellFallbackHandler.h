/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/Versions/A/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ConfigurableObjectProtocol.h>
#import <SymptomEvaluator/SymptomAdditionalProtocol.h>
#import <libobjc.A.dylib/ManagedEventInfoProtocol.h>

@class NSString;

@interface CellFallbackHandler : NSObject <ConfigurableObjectProtocol, SymptomAdditionalProtocol, ManagedEventInfoProtocol> {

	char _rnfActivated;
	char _wifiCallUnderway;
	char _adminDisabled;
	long long _fallbackAdvice;

}

@property (readonly) char rnfActivated;                             //@synthesize rnfActivated=_rnfActivated - In the implementation block
@property (readonly) char wifiCallUnderway;                         //@synthesize wifiCallUnderway=_wifiCallUnderway - In the implementation block
@property (readonly) long long fallbackAdvice;                      //@synthesize fallbackAdvice=_fallbackAdvice - In the implementation block
@property (readonly) char adminDisabled;                            //@synthesize adminDisabled=_adminDisabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)internalStateDictionary;
+(id)configureClass:(id)arg1 ;
+(float)appPolicyDenialsScore;
-(id)internalStateDictionary;
-(int)configureInstance:(id)arg1 ;
-(int)read:(id)arg1 returnedValues:(id)arg2 ;
-(void)generateInfoForId:(unsigned long long)arg1 context:(const char*)arg2 uuid:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(BOOL)noteSymptom:(id)arg1 ;
-(void)postHasAdviceNotification:(char)arg1 ;
-(void)postUpwards:(long long)arg1 ;
-(void)postUpwards:(long long)arg1 appsWithStates:(id)arg2 always:(char)arg3 ;
-(void)postMotionDetector:(unsigned)arg1 ;
-(char)rnfActivated;
-(char)wifiCallUnderway;
-(long long)fallbackAdvice;
-(char)adminDisabled;
@end

