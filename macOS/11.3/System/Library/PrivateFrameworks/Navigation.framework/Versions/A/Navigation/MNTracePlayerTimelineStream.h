/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Versions/A/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface MNTracePlayerTimelineStream : NSObject {

	NSArray* _data;
	unsigned long long _nextIndex;
	double _nextUpdatePosition;
	/*^block*/id _handler;

}

@property (nonatomic,copy) id handler;                                    //@synthesize handler=_handler - In the implementation block
@property (nonatomic,readonly) unsigned long long nextIndex;              //@synthesize nextIndex=_nextIndex - In the implementation block
@property (nonatomic,readonly) double nextUpdatePosition;                 //@synthesize nextUpdatePosition=_nextUpdatePosition - In the implementation block
-(id)initWithData:(id)arg1 ;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void)jumpToPosition:(double)arg1 ;
-(double)nextUpdatePosition;
-(void)triggerNextUpdate;
-(unsigned long long)nextIndex;
@end

