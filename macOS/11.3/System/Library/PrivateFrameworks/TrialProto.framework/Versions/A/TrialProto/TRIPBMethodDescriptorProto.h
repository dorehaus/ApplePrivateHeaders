/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/Versions/A/TrialProto
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrialProto/TRIPBMessage.h>

@class NSString, TRIPBMethodOptions;

@interface TRIPBMethodDescriptorProto : TRIPBMessage

@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) char hasName; 
@property (nonatomic,copy) NSString * inputType; 
@property (assign,nonatomic) char hasInputType; 
@property (nonatomic,copy) NSString * outputType; 
@property (assign,nonatomic) char hasOutputType; 
@property (nonatomic,retain) TRIPBMethodOptions * options; 
@property (assign,nonatomic) char hasOptions; 
@property (assign,nonatomic) char clientStreaming; 
@property (assign,nonatomic) char hasClientStreaming; 
@property (assign,nonatomic) char serverStreaming; 
@property (assign,nonatomic) char hasServerStreaming; 
+(id)descriptor;
@end

