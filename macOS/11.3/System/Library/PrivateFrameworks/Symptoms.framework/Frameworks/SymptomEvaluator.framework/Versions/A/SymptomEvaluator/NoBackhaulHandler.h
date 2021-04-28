/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/Versions/A/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/ExpertSystemHandlerCore.h>
#import <libobjc.A.dylib/ManagedEventInfoProtocol.h>

@class NSString;

@interface NoBackhaulHandler : ExpertSystemHandlerCore <ManagedEventInfoProtocol> {

	char _systemForeground;
	char _callInForeground;
	char _dndWhileDriving;
	unsigned _activationIdentifier;
	unsigned long long _stepper;

}

@property (assign,nonatomic) char systemForeground;                      //@synthesize systemForeground=_systemForeground - In the implementation block
@property (assign,nonatomic) char callInForeground;                      //@synthesize callInForeground=_callInForeground - In the implementation block
@property (assign,nonatomic) char dndWhileDriving;                       //@synthesize dndWhileDriving=_dndWhileDriving - In the implementation block
@property (assign,nonatomic) unsigned activationIdentifier;              //@synthesize activationIdentifier=_activationIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long stepper;                 //@synthesize stepper=_stepper - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)internalStateDictionary;
+(id)configureClass:(id)arg1 ;
-(id)internalStateDictionary;
-(unsigned long long)stepper;
-(void)setStepper:(unsigned long long)arg1 ;
-(int)configureInstance:(id)arg1 ;
-(int)read:(id)arg1 returnedValues:(id)arg2 ;
-(void)generateInfoForId:(unsigned long long)arg1 context:(const char*)arg2 uuid:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(BOOL)noteSymptom:(id)arg1 ;
-(void)setActivationIdentifier:(unsigned)arg1 ;
-(unsigned)activationIdentifier;
-(char)systemForeground;
-(void)setSystemForeground:(char)arg1 ;
-(char)callInForeground;
-(void)setCallInForeground:(char)arg1 ;
-(char)dndWhileDriving;
-(void)setDndWhileDriving:(char)arg1 ;
@end

