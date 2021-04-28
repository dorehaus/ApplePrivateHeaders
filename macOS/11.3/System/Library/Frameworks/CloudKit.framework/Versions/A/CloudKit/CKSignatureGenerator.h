/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CKSignatureGenerator : NSObject {

	char _valid;
	void* _generator;

}

@property (assign,nonatomic) void* generator;                        //@synthesize generator=_generator - In the implementation block
@property (assign,getter=isValid,nonatomic) char valid;              //@synthesize valid=_valid - In the implementation block
+(char)isValidSignature:(id)arg1 ;
+(id)signatureWithFileDescriptor:(int)arg1 error:(id*)arg2 ;
+(char)isValidV2Signature:(id)arg1 ;
+(id)signatureForStreamingAsset;
-(void)dealloc;
-(id)init;
-(char)isValid;
-(char*)_newSignatureByFinishingGenerator;
-(void)setValid:(char)arg1 ;
-(void*)generator;
-(void)updateWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)updateWithData:(id)arg1 ;
-(id)dataByFinishingSignature;
-(void)setGenerator:(void*)arg1 ;
@end

