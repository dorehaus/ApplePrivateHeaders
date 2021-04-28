/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/Versions/A/SiriSpeechSynthesis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <SiriSpeechSynthesis/QSSBatchRecoverStreamingRequest.h>

@class QSSStartBatchRecoverRequest;

@interface QSSMutableBatchRecoverStreamingRequest : QSSBatchRecoverStreamingRequest

@property (assign,nonatomic) long long content_type; 
@property (nonatomic,copy) QSSStartBatchRecoverRequest * contentAsQSSStartBatchRecoverRequest; 
-(QSSStartBatchRecoverRequest *)contentAsQSSStartBatchRecoverRequest;
-(void)setContentAsQSSStartBatchRecoverRequest:(QSSStartBatchRecoverRequest *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(long long)content_type;
-(void)setContent_type:(long long)arg1 ;
@end

