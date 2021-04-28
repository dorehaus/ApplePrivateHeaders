/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVAsset, NSString, NSArray;

@interface AVAssetAnalysisReporter : NSObject {

	void* _assetAnalysisReporterInternal;

}

@property (__weak,readonly) AVAsset * asset; 
@property (getter=isReporting,readonly) char reporting; 
@property (readonly) NSString * analysisType; 
@property (readonly) NSArray * messages; 
+(id)assetAnalysisReporterWithAsset:(id)arg1 options:(id)arg2 ;
-(void)dealloc;
-(AVAsset *)asset;
-(NSArray *)messages;
-(id)initWithAsset:(id)arg1 options:(id)arg2 ;
-(void)_reportMessages;
-(char)isReporting;
-(void)startAnalysisReportingWithMessagesHandler:(/*^block*/id)arg1 ;
-(NSString *)analysisType;
@end
