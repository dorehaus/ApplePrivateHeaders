/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/Versions/A/ShazamKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ShazamKit/ShazamKit-Structs.h>
@interface SigX : NSObject {

	void* _mySigX;

}

@property (assign,nonatomic) void* mySigX;              //@synthesize mySigX=_mySigX - In the implementation block
+(basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>)getVersion;
-(void)dealloc;
-(char)resetWithError:(id*)arg1 ;
-(char)flowIntSamples:(short*)arg1 sampleCount:(int)arg2 channels:(int)arg3 error:(id*)arg4 ;
-(char)flowFloatSamples:(float*)arg1 sampleCount:(int)arg2 channels:(int)arg3 error:(id*)arg4 ;
-(char)flowBuffer:(id)arg1 error:(id*)arg2 ;
-(id)initWithSignatureType:(int)arg1 sampleRate:(unsigned)arg2 error:(id*)arg3 ;
-(char)setRollingBufferSeconds:(float)arg1 error:(id*)arg2 ;
-(char)getSignature:(vector<char, std::__1::allocator<char>>Ref)arg1 error:(id*)arg2 ;
-(BOOL)FillUnknownError:(id*)arg1 ;
-(BOOL)ConvertException:(const exception*)arg1 toError:(id*)arg2 ;
-(BOOL)ConvertSystemError:(const system_error*)arg1 toError:(id*)arg2 ;
-(id)initWithSignatureType:(int)arg1 sampleRate:(unsigned)arg2 signatureOptions:(int)arg3 error:(id*)arg4 ;
-(char)flowIntSamples:(const short*)arg1 sampleCount:(int)arg2 error:(id*)arg3 ;
-(char)flowFloatSamples:(float*)arg1 sampleCount:(int)arg2 error:(id*)arg3 ;
-(void*)mySigX;
-(void)setMySigX:(void*)arg1 ;
@end

