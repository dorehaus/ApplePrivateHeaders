/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BWStillImageConditionalRouterConfiguration : NSObject {

	unsigned _numberOfOutputs;
	/*^block*/id _shouldEmitSampleBufferDecisionProvider;
	unsigned _numberOfInputs;

}

@property (nonatomic,readonly) unsigned numberOfInputs;                            //@synthesize numberOfInputs=_numberOfInputs - In the implementation block
@property (nonatomic,readonly) unsigned numberOfOutputs;                           //@synthesize numberOfOutputs=_numberOfOutputs - In the implementation block
@property (nonatomic,copy) id shouldEmitSampleBufferDecisionProvider;              //@synthesize shouldEmitSampleBufferDecisionProvider=_shouldEmitSampleBufferDecisionProvider - In the implementation block
-(void)dealloc;
-(id)initWithNumberOfOutputs:(unsigned)arg1 ;
-(unsigned)numberOfOutputs;
-(id)shouldEmitSampleBufferDecisionProvider;
-(void)setShouldEmitSampleBufferDecisionProvider:(id)arg1 ;
-(unsigned)numberOfInputs;
@end

