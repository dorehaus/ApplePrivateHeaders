/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/Versions/A/DigitalTouchShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ETPointFIFO : NSObject {

	ETPointFIFO* _nextFIFO;

}

@property (nonatomic,retain) ETPointFIFO * nextFIFO;              //@synthesize nextFIFO=_nextFIFO - In the implementation block
-(void)clear;
-(void)flush;
-(ETPointFIFO *)nextFIFO;
-(id)initWithFIFO:(id)arg1 ;
-(void)setNextFIFO:(ETPointFIFO *)arg1 ;
-(void)addPoints:(1*)arg1 count:(unsigned long long)arg2 ;
-(void)emitPoints:(1*)arg1 count:(unsigned long long)arg2 ;
@end

