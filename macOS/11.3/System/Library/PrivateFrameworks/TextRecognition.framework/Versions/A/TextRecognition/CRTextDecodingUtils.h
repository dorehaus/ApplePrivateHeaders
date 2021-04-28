/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/Versions/A/TextRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TextRecognition/TextRecognition-Structs.h>
@interface CRTextDecodingUtils : NSObject
+(char)validateProbability:(id)arg1 precisionThreshold:(double)arg2 withLM:(char)arg3 ;
+(void)getWordBoundariesForWhiteSpaceRanges:(id)arg1 topPoints:(id*)arg2 bottomPoints:(id*)arg3 imageSize:(CGSize)arg4 scale:(float)arg5 rect:(CGRect)arg6 rotatedRoi:(CGRect)arg7 radians:(float)arg8 model:(id)arg9 configuration:(id)arg10 ;
+(id)whitespaceRangesForTokens:(id)arg1 ;
@end

