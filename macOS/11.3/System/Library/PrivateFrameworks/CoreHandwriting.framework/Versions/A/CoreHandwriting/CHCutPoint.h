/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/Versions/A/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CHCutPoint : NSObject {

	char _isEndOfStroke;
	long long _strokeIndex;
	long long _pointIndex;

}

@property (nonatomic,readonly) long long strokeIndex;              //@synthesize strokeIndex=_strokeIndex - In the implementation block
@property (nonatomic,readonly) long long pointIndex;               //@synthesize pointIndex=_pointIndex - In the implementation block
@property (nonatomic,readonly) char isEndOfStroke;                 //@synthesize isEndOfStroke=_isEndOfStroke - In the implementation block
+(id)sortedCHCutPointArray:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)compare:(id)arg1 ;
-(long long)pointIndex;
-(long long)strokeIndex;
-(char)isEndOfStroke;
-(char)isStartOfStroke;
-(id)initWithStrokeIndex:(long long)arg1 pointIndex:(long long)arg2 isEndOfStroke:(char)arg3 ;
@end

