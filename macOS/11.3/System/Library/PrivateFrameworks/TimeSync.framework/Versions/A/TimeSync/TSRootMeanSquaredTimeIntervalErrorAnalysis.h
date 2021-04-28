/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/Versions/A/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TimeSync/TSTimeErrorAnalysis.h>

@class NSArray;

@interface TSRootMeanSquaredTimeIntervalErrorAnalysis : TSTimeErrorAnalysis {

	double* _rmstie;

}

@property (nonatomic,copy,readonly) NSArray * rmstie; 
+(id)variableName;
+(id)plotYLabel;
+(id)plotTitle;
+(id)plotSize;
-(void)dealloc;
-(void)_performAnalysisFromWindowSize:(long long)arg1 toWindowSize:(long long)arg2 stepSize:(long long)arg3 ;
-(char)exportAnalysisToDirectoryURL:(id)arg1 withFilename:(id)arg2 fromStartWindowSize:(long long)arg3 toEndWindowSize:(long long)arg4 stepSize:(long long)arg5 ;
-(id)initWithTimeErrorValues:(id)arg1 ;
-(char)exportAnalysisToDirectoryURL:(id)arg1 ;
-(char)exportTimeErrorsToDirectoryURL:(id)arg1 ;
-(NSArray *)rmstie;
-(id)rmstieFromStartWindowSize:(long long)arg1 toEndWindowSize:(long long)arg2 stepSize:(long long)arg3 ;
@end

