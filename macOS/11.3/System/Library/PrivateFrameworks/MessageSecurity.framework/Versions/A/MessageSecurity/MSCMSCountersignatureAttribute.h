/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MessageSecurity.framework/Versions/A/MessageSecurity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MSCMSAttributeCoder.h>

@class NSArray;

@interface MSCMSCountersignatureAttribute : NSObject <MSCMSAttributeCoder> {

	NSArray* _signerInfoSet;

}

@property (retain,readonly) NSArray * signerInfoSet;              //@synthesize signerInfoSet=_signerInfoSet - In the implementation block
-(id)encodeAttributeWithError:(id*)arg1 ;
-(id)initWithAttribute:(id)arg1 error:(id*)arg2 ;
-(id)initWithAttribute:(id)arg1 LAContext:(id)arg2 error:(id*)arg3 ;
-(char)verifyCountersignatures:(id)arg1 error:(id*)arg2 ;
-(id)initWithSignerInfo:(id)arg1 ;
-(void)addSignerInfo:(id)arg1 ;
-(char)verifyCountersignaturesAndCountersignersWithPolicies:(id)arg1 verifyTime:(id)arg2 signature:(id)arg3 error:(id*)arg4 ;
-(NSArray *)signerInfoSet;
@end

