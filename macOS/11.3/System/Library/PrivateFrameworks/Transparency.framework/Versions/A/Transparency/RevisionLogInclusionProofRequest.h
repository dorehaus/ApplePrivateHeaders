/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Versions/A/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Transparency/GPBMessage.h>

@class GPBUInt64Array;

@interface RevisionLogInclusionProofRequest : GPBMessage

@property (assign,nonatomic) int version; 
@property (assign,nonatomic) int application; 
@property (assign,nonatomic) int logType; 
@property (nonatomic,retain) GPBUInt64Array * revisionArray; 
@property (nonatomic,readonly) unsigned long long revisionArray_Count; 
+(id)descriptor;
@end
