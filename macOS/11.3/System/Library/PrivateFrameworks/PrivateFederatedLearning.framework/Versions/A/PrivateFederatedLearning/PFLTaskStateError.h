/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/Versions/A/PrivateFederatedLearning
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PFLTaskState.h>

@class NSError;

@interface PFLTaskStateError : NSObject <PFLTaskState> {

	NSError* _error;

}

@property (nonatomic,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)error;
-(id)initWithError:(id)arg1 ;
-(void)suspend;
-(unsigned long long)tag;
-(void)resume:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

