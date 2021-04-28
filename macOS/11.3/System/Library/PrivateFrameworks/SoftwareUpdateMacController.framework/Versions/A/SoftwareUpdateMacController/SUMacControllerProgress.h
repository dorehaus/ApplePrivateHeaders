/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateMacController.framework/Versions/A/SoftwareUpdateMacController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SUMacControllerProgress : NSObject <NSSecureCoding> {

	char _isStalled;
	float _portionComplete;
	NSString* _phase;
	long long _totalWrittenBytes;
	long long _totalExpectedBytes;
	double _estimatedTimeRemaining;

}

@property (nonatomic,readonly) NSString * phase;                           //@synthesize phase=_phase - In the implementation block
@property (nonatomic,readonly) char isStalled;                             //@synthesize isStalled=_isStalled - In the implementation block
@property (nonatomic,readonly) float portionComplete;                      //@synthesize portionComplete=_portionComplete - In the implementation block
@property (nonatomic,readonly) long long totalWrittenBytes;                //@synthesize totalWrittenBytes=_totalWrittenBytes - In the implementation block
@property (nonatomic,readonly) long long totalExpectedBytes;               //@synthesize totalExpectedBytes=_totalExpectedBytes - In the implementation block
@property (nonatomic,readonly) double estimatedTimeRemaining;              //@synthesize estimatedTimeRemaining=_estimatedTimeRemaining - In the implementation block
+(id)_progressStateForControllerStateTable;
+(int)progressStateForControllerState:(id)arg1 ;
+(char)supportsSecureCoding;
+(id)nameForProgressState:(int)arg1 ;
-(id)initFromSUCoreProgress:(id)arg1 ;
-(char)isStartingUp;
-(char)isPreflighted;
-(char)isApplying;
-(char)isApplied;
-(id)initWithPhase:(id)arg1 isStalled:(char)arg2 portionComplete:(float)arg3 remaining:(double)arg4 ;
-(id)initWithPhase:(id)arg1 isStalled:(char)arg2 portionComplete:(float)arg3 totalWrittenBytes:(long long)arg4 totalExpectedBytes:(long long)arg5 remaining:(double)arg6 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)isReady;
-(double)estimatedTimeRemaining;
-(char)isStalled;
-(NSString *)phase;
-(char)isDownloaded;
-(char)isDownloading;
-(char)isLoading;
-(char)isPrepared;
-(int)stateForProgress;
-(float)portionComplete;
-(long long)totalExpectedBytes;
-(long long)totalWrittenBytes;
-(char)isPreparing;
-(char)isCancelling;
@end

