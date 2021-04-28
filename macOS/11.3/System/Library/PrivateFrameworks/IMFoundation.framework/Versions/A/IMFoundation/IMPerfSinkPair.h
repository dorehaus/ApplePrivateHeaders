/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/Versions/A/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IMPerfProfilerBehavior, IMPerfProfilerSink;
@interface IMPerfSinkPair : NSObject {

	id<IMPerfProfilerBehavior> _behavior;
	id<IMPerfProfilerSink> _sink;

}

@property (nonatomic,readonly) id<IMPerfProfilerBehavior> behavior;              //@synthesize behavior=_behavior - In the implementation block
@property (nonatomic,readonly) id<IMPerfProfilerSink> sink;                      //@synthesize sink=_sink - In the implementation block
-(id<IMPerfProfilerBehavior>)behavior;
-(id)initWithBehavior:(id)arg1 sink:(id)arg2 ;
-(id<IMPerfProfilerSink>)sink;
@end
