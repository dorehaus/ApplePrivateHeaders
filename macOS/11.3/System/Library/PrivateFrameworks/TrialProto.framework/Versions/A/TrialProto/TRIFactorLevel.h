/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/Versions/A/TrialProto
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrialProto/TRIPBMessage.h>

@class TRIFactor, TRILevel;

@interface TRIFactorLevel : TRIPBMessage

@property (nonatomic,retain) TRIFactor * factor; 
@property (assign,nonatomic) char hasFactor; 
@property (nonatomic,retain) TRILevel * level; 
@property (assign,nonatomic) char hasLevel; 
+(id)descriptor;
+(id)hashForFactorLevels:(id)arg1 ;
-(id)uniqueDataRepresentation;
@end
