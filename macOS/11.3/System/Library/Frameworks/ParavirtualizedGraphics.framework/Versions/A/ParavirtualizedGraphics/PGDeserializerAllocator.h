/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ParavirtualizedGraphics.framework/Versions/A/ParavirtualizedGraphics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MTLDeserializerAllocator.h>

@interface PGDeserializerAllocator : NSObject <MTLDeserializerAllocator> {

	void* _buffer;
	unsigned _currentOffset;
	unsigned long long _length;

}

@property (readonly) const void* bytes;              //@synthesize buffer=_buffer - In the implementation block
-(void)dealloc;
-(const void*)bytes;
-(void)reset;
-(id)initWithSize:(unsigned long long)arg1 ;
-(char*)allocateOperationBytes:(unsigned long long)arg1 ;
@end

