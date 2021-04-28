/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface ArraySlicer : NSObject {

	unsigned long long _sliceSize;
	unsigned long long _count;
	unsigned long long _offset;
	NSArray* _array;

}

@property (nonatomic,readonly) unsigned long long remaining; 
-(id)consumed;
-(unsigned long long)remaining;
-(id)initWithArray:(id)arg1 sliceSize:(unsigned long long)arg2 ;
-(id)nextSlice;
-(id)unconsumed;
@end
