/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/Versions/A/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NUBuffer.h>
#import <libobjc.A.dylib/NUBufferProvider.h>

@class NUPixelFormat, NSString;

@interface NUBufferAdapter : NSObject <NUBuffer, NUBufferProvider> {

	SCD_Struct_NU8 _size;
	NUPixelFormat* _format;
	long long _rowBytes;
	const void* _bytes;
	char _valid;

}

@property (nonatomic,readonly) SCD_Struct_NU8 size;                 //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) NUPixelFormat * format;              //@synthesize format=_format - In the implementation block
@property (nonatomic,readonly) long long rowBytes;                  //@synthesize rowBytes=_rowBytes - In the implementation block
@property (nonatomic,readonly) const void* bytes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SCD_Struct_NU8)size;
-(NSString *)description;
-(id)init;
-(const void*)bytes;
-(void)invalidate;
-(NUPixelFormat *)format;
-(long long)rowBytes;
-(void)provideBuffer:(/*^block*/id)arg1 ;
-(const void*)bytesAtPoint:(SCD_Struct_NU8)arg1 ;
-(id)initWithBuffer:(id)arg1 ;
-(id)initWithSize:(SCD_Struct_NU8)arg1 format:(id)arg2 rowBytes:(long long)arg3 bytes:(const void*)arg4 ;
@end

