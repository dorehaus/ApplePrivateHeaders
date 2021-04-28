/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/Versions/A/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <libobjc.A.dylib/CPDisposable.h>

@interface CPFontInfo : NSObject <CPDisposable> {

	CFDataRef fontData;
	const char* dataPtr;
	unsigned offset;
	unsigned fontDataLength;
	char valid;

}
-(void)finalize;
-(void)dealloc;
-(void)dispose;
-(float)readFloat;
-(id)initWithFontData:(CFDataRef)arg1 ;
-(char)getDescriptor:(SCD_Struct_CP29*)arg1 ;
-(int)kernUnitsPerEm;
-(CFDataRef)newKernData;
-(unsigned char)readByte;
-(unsigned)readUnsignedLong;
-(CGRect)readRect;
-(int)readLong;
@end

