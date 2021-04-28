/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@protocol FCCoreConfiguration;
@class FCCloudContext, NSArray, FCSpotlightOperationResult, NSError;

@interface FCEditorialOperation : FCOperation {

	id<FCCoreConfiguration> _configuration;
	FCCloudContext* _context;
	NSArray* _trendingHeadlines;
	FCSpotlightOperationResult* _spotlightResult;
	NSError* _error;
	/*^block*/id _catchUpCompletionHandler;
	NSArray* _editorialSectionGroups;

}

@property (copy) NSArray * trendingHeadlines;                                  //@synthesize trendingHeadlines=_trendingHeadlines - In the implementation block
@property (copy) NSArray * editorialSectionGroups;                             //@synthesize editorialSectionGroups=_editorialSectionGroups - In the implementation block
@property (retain) FCSpotlightOperationResult * spotlightResult;               //@synthesize spotlightResult=_spotlightResult - In the implementation block
@property (retain) NSError * error;                                            //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) id<FCCoreConfiguration> configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) FCCloudContext * context;                         //@synthesize context=_context - In the implementation block
@property (copy) id catchUpCompletionHandler;                                  //@synthesize catchUpCompletionHandler=_catchUpCompletionHandler - In the implementation block
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(FCCloudContext *)context;
-(void)setContext:(FCCloudContext *)arg1 ;
-(id<FCCoreConfiguration>)configuration;
-(void)setConfiguration:(id<FCCoreConfiguration>)arg1 ;
-(void)performOperation;
-(char)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(NSArray *)editorialSectionGroups;
-(void)setTrendingHeadlines:(NSArray *)arg1 ;
-(void)setSpotlightResult:(FCSpotlightOperationResult *)arg1 ;
-(void)setEditorialSectionGroups:(NSArray *)arg1 ;
-(id)catchUpCompletionHandler;
-(void)enumerateEditorialSectionsByRecencyWithBlock:(/*^block*/id)arg1 ;
-(NSArray *)trendingHeadlines;
-(FCSpotlightOperationResult *)spotlightResult;
-(void)setCatchUpCompletionHandler:(id)arg1 ;
@end

