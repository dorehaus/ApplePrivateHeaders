/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MultitouchSupport.framework/Versions/A/MultitouchSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTBinaryFilterProtocol <NSObject>
@property (nonatomic,readonly) unsigned maxFrameSize; 
@optional
-(id)initWithInfo:(id)arg1 getProperty:(/*^block*/id)arg2;
-(id)initWithInfo:(id)arg1;

@required
-(void)filterFrame:(char**)arg1 size:(unsigned*)arg2 maxSize:(unsigned*)arg3 extraFrame:(/*^block*/id)arg4;
-(void)reset;
-(unsigned)maxFrameSize;

@end

