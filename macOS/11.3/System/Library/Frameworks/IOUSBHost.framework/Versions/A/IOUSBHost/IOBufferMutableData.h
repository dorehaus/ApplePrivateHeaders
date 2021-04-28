/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/IOUSBHost.framework/Versions/A/IOUSBHost
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSMutableData.h>

@interface IOBufferMutableData : NSMutableData {

	void* _bytes;
	unsigned long long _length;
	/*^block*/id _deallocator;

}

@property (copy) id deallocator;              //@synthesize deallocator=_deallocator - In the implementation block
-(void)dealloc;
-(unsigned long long)length;
-(const void*)bytes;
-(void*)mutableBytes;
-(void)setLength:(unsigned long long)arg1 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 deallocator:(/*^block*/id)arg3 ;
-(void)setDeallocator:(id)arg1 ;
-(id)deallocator;
@end

