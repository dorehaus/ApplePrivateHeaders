/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/Versions/A/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppleMediaServices/AppleMediaServices-Structs.h>
@interface AMSMescalFairPlay : NSObject {

	char _complete;
	FPSAPContextOpaque_Ref _context;
	FairPlayHWInfo_ _hardwareInfo;
	long long _mescalType;

}

@property (getter=isComplete,nonatomic,readonly) char complete;              //@synthesize complete=_complete - In the implementation block
-(void)dealloc;
-(char)isComplete;
-(id)signData:(id)arg1 error:(id*)arg2 ;
-(id)_dataWithFairPlayBytes:(const char*)arg1 length:(unsigned)arg2 ;
-(void)_teardownSession;
-(id)initWithMescalType:(long long)arg1 error:(id*)arg2 ;
-(id)exchangeData:(id)arg1 error:(id*)arg2 ;
-(id)primingSignatureForData:(id)arg1 error:(id*)arg2 ;
-(char)verifyPrimeSignature:(id)arg1 error:(id*)arg2 ;
-(char)verifySignature:(id)arg1 forData:(id)arg2 error:(id*)arg3 ;
@end

